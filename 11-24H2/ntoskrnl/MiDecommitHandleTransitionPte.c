/*
 * XREFs of MiDecommitHandleTransitionPte @ 0x140286C5C
 * Callers:
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiDeleteVa @ 0x1402DB780 (MiDeleteVa.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     MiReturnPagedPoolLockCharge @ 0x140286EA0 (MiReturnPagedPoolLockCharge.c)
 *     MiLockTransitionLeafPageEx @ 0x14036A520 (MiLockTransitionLeafPageEx.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14036C05C (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiTransferSoftwarePte @ 0x14039F300 (MiTransferSoftwarePte.c)
 *     MiReleasePageFileSpace @ 0x1403E4F90 (MiReleasePageFileSpace.c)
 *     MiIsPfnSystemCharged @ 0x140437E10 (MiIsPfnSystemCharged.c)
 *     MiDecommitLargePte @ 0x1404C7F24 (MiDecommitLargePte.c)
 */

__int64 __fastcall MiDecommitHandleTransitionPte(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  __int64 **v4; // r14
  ULONG_PTR v5; // rdi
  int v6; // ecx
  __int64 v7; // r12
  __int64 v8; // rbx
  char v9; // r10
  BOOL v10; // ebp
  __int64 v11; // r15
  __int64 **v12; // r13
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  int v16; // [rsp+68h] [rbp+10h]
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  if ( ((a2 & 0x3E0) != 0x300LL || !*(_DWORD *)(a1 + 96)) && (*(_QWORD *)(a1 + 192) == 1LL || *(_DWORD *)(a1 + 96)) )
  {
    v4 = (__int64 **)(a1 + 88);
    result = MiLockTransitionLeafPageEx(*(_QWORD *)(a1 + 88));
    v5 = result;
    if ( result )
    {
      v6 = *(_DWORD *)(a1 + 156);
      if ( (v6 & 8) != 0 )
      {
        MiReturnPagedPoolLockCharge(a1, **v4);
        _InterlockedAnd64((volatile signed __int64 *)(v5 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 8);
        v8 = 0LL;
        v17 = 0LL;
        v9 = 0;
        v16 = 0;
        v10 = 1;
        if ( (v6 & 0x20) != 0 )
        {
          v11 = a1 + 24;
          ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
        }
        else if ( *(_DWORD *)(a1 + 40) )
        {
          v11 = a1 + 24;
          ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
          if ( (unsigned int)MiIsPfnSystemCharged(result) )
          {
            *(_BYTE *)(v5 + 35) &= ~0x20u;
            v16 = 1;
          }
        }
        else
        {
          if ( !(unsigned __int16)*(_DWORD *)(result + 32) )
          {
            v17 = *(_QWORD *)(result + 16);
            v7 = *((_QWORD *)qword_140E2FF88 + ((*(_QWORD *)(result + 40) >> 43) & 0x3FFLL));
            if ( (v17 & 2) != 0 )
              v10 = MI_IS_PTE_IN_WS_SWAP_SET(v7, &v17) != 0;
          }
          v4 = (__int64 **)(a1 + 88);
          v9 = 2;
          v11 = a1 + 24;
          _InterlockedDecrement64((volatile signed __int64 *)KeGetCurrentThread()->ApcState.Process[1].Padding);
          v8 = v17;
        }
        if ( (unsigned int)MiDeleteTransitionPte(*v4, v5, 0x11u, v9) == 3 || (v12 = v4, v16) )
        {
          v12 = (__int64 **)(a1 + 88);
          ++*(_QWORD *)(*(_QWORD *)v11 + 8LL);
        }
        v13 = *(_QWORD *)(a1 + 176);
        if ( (*(_DWORD *)(a1 + 156) & 0x20) != 0 )
        {
          v14 = *(_DWORD *)(a1 + 40);
          if ( v14 && v14 != 3 )
            ++**(_QWORD **)v11;
        }
        else
        {
          if ( v8 )
          {
            MiReleasePageFileSpace(v7, v8, v10);
            v4 = v12;
          }
          if ( !v10 )
          {
            v15 = *(_QWORD *)(v7 + 8LL * ((unsigned __int16)v8 >> 12) + 18528);
            if ( qword_140E2DB80 && (v8 & 0x10) == 0 )
              v8 &= ~qword_140E2DB80;
            v13 = MiTransferSoftwarePte(*(_QWORD *)(a1 + 168), v15, HIDWORD(v8), 2LL);
          }
          **v4 = v13;
        }
        if ( !v13 )
          ++*(_DWORD *)(a1 + 112);
      }
      return 1LL;
    }
  }
  else
  {
    MiDecommitLargePte();
    return *(unsigned int *)(a1 + 192);
  }
  return result;
}
