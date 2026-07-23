/*
 * XREFs of MiComputeCombineHash @ 0x140335700
 * Callers:
 *     MiCombinePte @ 0x140686200 (MiCombinePte.c)
 *     MiCombineAllPhysicalMemory @ 0x1409E6848 (MiCombineAllPhysicalMemory.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     MiGetUltraMapping @ 0x1403361B0 (MiGetUltraMapping.c)
 *     MiCombineCandidate @ 0x140344930 (MiCombineCandidate.c)
 *     MiPerformCombineScan @ 0x1403D6ED0 (MiPerformCombineScan.c)
 *     MiReleaseArbitraryPage @ 0x1403F0FF4 (MiReleaseArbitraryPage.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 */

__int64 __fastcall MiComputeCombineHash(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 v3; // r13
  ULONG_PTR *v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  char v10; // r12
  int ProtectionPfnCompatible; // eax
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v13; // rbx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // ebx
  unsigned int v19; // [rsp+60h] [rbp+18h]

  v3 = *a1;
  v6 = (ULONG_PTR *)((((unsigned __int64)MiGetUltraMapping(a1 + 32, 3LL, 1LL, a3 != 0 ? 4 : 0) >> 9) & 0x7FFFFFFFF8LL)
                   - 0x98000000000LL);
  v19 = *((_DWORD *)a1 + 35);
  v7 = 48LL * a2[2];
  v8 = v7 - 0x220000000000LL;
  a1[11] = (__int64)v6;
  v9 = 0xAAAAAAAAAAAAAAABuLL * (v7 >> 4);
  a1[10] = v8;
  v10 = MiSafeLockPage(v9);
  if ( v10 != 17 )
  {
    if ( !(unsigned int)MiCombineCandidate(v3, v19, v8) || (HIWORD(*(_DWORD *)(v8 + 32)) & 0xC0) == 0xC0 )
    {
      MiUnlockPage(v8, v10);
    }
    else
    {
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(1LL, v8);
      ValidPte = MiMakeValidPte((unsigned __int64)v6, v9, ProtectionPfnCompatible | 0x20000000u);
      a1[9] = (__int64)v6;
      v13 = ValidPte;
      a1[8] = v8;
      if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v6 >= 0xFFFFF6C000000000uLL )
        MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v6, ValidPte, 128LL);
      *v6 = v13;
      MiUnlockPage(v8, v10);
      v16 = *(unsigned __int8 *)(v8 + 34);
      v15 = a1[13];
      LOBYTE(v16) = v16 & 7;
      if ( (_BYTE)v16 == 6 )
        ++*(_QWORD *)(v15 + 16);
      else
        ++*(_QWORD *)(v15 + 24);
      v17 = MiPerformCombineScan(v16, a1 + 2, v14, a2);
      MiReleaseArbitraryPage(a1 + 2);
      if ( v17 )
      {
        *a2 = 0LL;
        return 1LL;
      }
    }
  }
  return 0LL;
}
