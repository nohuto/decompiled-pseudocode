/*
 * XREFs of MiComputeCombineHash @ 0x14020C3A0
 * Callers:
 *     MiCombinePte @ 0x1406850D0 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1409F24E8 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiReleaseArbitraryPage @ 0x14020BF38 (MiReleaseArbitraryPage.c)
 *     MiPerformCombineScan @ 0x14020BFE0 (MiPerformCombineScan.c)
 *     MiCombineCandidate @ 0x14020C0F0 (MiCombineCandidate.c)
 *     MiGetUltraMapping @ 0x14020CE50 (MiGetUltraMapping.c)
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x140313770 (MiMakeProtectionPfnCompatible.c)
 */

__int64 __fastcall MiComputeCombineHash(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r13
  ULONG_PTR *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // r12
  int ProtectionPfnCompatible; // eax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v25; // [rsp+60h] [rbp+18h]

  v3 = *(_QWORD **)a1;
  v6 = (ULONG_PTR *)((((unsigned __int64)MiGetUltraMapping(a1 + 256, 3LL, 1LL, a3 != 0 ? 4 : 0) >> 9) & 0x7FFFFFFFF8LL)
                   - 0x98000000000LL);
  v25 = *(_DWORD *)(a1 + 140);
  v7 = 48LL * a2[2];
  v8 = v7 - 0x220000000000LL;
  *(_QWORD *)(a1 + 88) = v6;
  v9 = 0xAAAAAAAAAAAAAAABuLL * (v7 >> 4);
  *(_QWORD *)(a1 + 80) = v8;
  v13 = MiSafeLockPage(v9, v10, v11, v12);
  if ( v13 != 17 )
  {
    if ( !(unsigned int)MiCombineCandidate(v3, v25, (_QWORD *)v8) || (HIWORD(*(_DWORD *)(v8 + 32)) & 0xC0) == 0xC0 )
    {
      MiUnlockPage(v8, v13);
    }
    else
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1LL, v8);
      ValidPte = MiMakeValidPte(v6, v9, ProtectionPfnCompatible | 0x20000000u);
      *(_QWORD *)(a1 + 72) = v6;
      v16 = ValidPte;
      *(_QWORD *)(a1 + 64) = v8;
      if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v6 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v6, ValidPte);
      *v6 = v16;
      MiUnlockPage(v8, v13);
      v19 = *(unsigned __int8 *)(v8 + 34);
      v18 = *(_QWORD *)(a1 + 104);
      LOBYTE(v19) = v19 & 7;
      if ( (_BYTE)v19 == 6 )
        ++*(_QWORD *)(v18 + 16);
      else
        ++*(_QWORD *)(v18 + 24);
      v20 = MiPerformCombineScan(v19, a1 + 16, v17, (__int64)a2);
      MiReleaseArbitraryPage(a1 + 16, v21, v22, v23);
      if ( v20 )
      {
        *a2 = 0LL;
        return 1LL;
      }
    }
  }
  return 0LL;
}
