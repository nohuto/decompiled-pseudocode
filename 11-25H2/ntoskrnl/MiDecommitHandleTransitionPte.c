/*
 * XREFs of MiDecommitHandleTransitionPte @ 0x140383AF4
 * Callers:
 *     MiDeleteVa @ 0x1402B1A90 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 * Callees:
 *     MiTransferSoftwarePte @ 0x1402280C0 (MiTransferSoftwarePte.c)
 *     MiDeleteTransitionPte @ 0x140340900 (MiDeleteTransitionPte.c)
 *     MiReturnPagedPoolLockCharge @ 0x140383A0C (MiReturnPagedPoolLockCharge.c)
 *     MiReleasePageFileSpace @ 0x1403E1160 (MiReleasePageFileSpace.c)
 *     MiLockTransitionLeafPageEx @ 0x14040D774 (MiLockTransitionLeafPageEx.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14040EC84 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiIsPfnSystemCharged @ 0x14043DC80 (MiIsPfnSystemCharged.c)
 *     MiDecommitLargePte @ 0x1404C9F9C (MiDecommitLargePte.c)
 */

__int64 __fastcall MiDecommitHandleTransitionPte(__int64 a1, __int16 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  unsigned __int64 **v5; // r14
  ULONG_PTR v6; // rdi
  int v7; // ecx
  __int64 v8; // r12
  __int64 v9; // rbx
  char v10; // r10
  BOOL v11; // ebp
  __int64 v12; // r15
  unsigned __int64 **v13; // r13
  unsigned __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  int v17; // [rsp+68h] [rbp+10h]
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  v2 = a2 & 0x3E0;
  if ( (v2 != 768 || !*(_DWORD *)(a1 + 96)) && (*(_QWORD *)(a1 + 192) == 1LL || *(_DWORD *)(a1 + 96)) )
  {
    v5 = (unsigned __int64 **)(a1 + 88);
    result = MiLockTransitionLeafPageEx(*(_QWORD *)(a1 + 88));
    v6 = result;
    if ( result )
    {
      v7 = *(_DWORD *)(a1 + 156);
      if ( (v7 & 8) != 0 )
      {
        MiReturnPagedPoolLockCharge(a1, **v5);
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        v8 = *(_QWORD *)(a1 + 8);
        v9 = 0LL;
        v18 = 0LL;
        v10 = 0;
        v17 = 0;
        v11 = 1;
        if ( (v7 & 0x20) != 0 )
        {
          v12 = a1 + 24;
          ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
        }
        else if ( *(_DWORD *)(a1 + 40) )
        {
          v12 = a1 + 24;
          ++*(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL);
          if ( (unsigned int)MiIsPfnSystemCharged(result) )
          {
            *(_BYTE *)(v6 + 35) &= ~0x20u;
            v17 = 1;
          }
        }
        else
        {
          if ( !(unsigned __int16)*(_DWORD *)(result + 32) )
          {
            v18 = *(_QWORD *)(result + 16);
            v8 = *((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(result + 40) >> 43) & 0x3FFLL));
            if ( (v18 & 2) != 0 )
              v11 = MI_IS_PTE_IN_WS_SWAP_SET(v8, &v18) != 0;
          }
          v5 = (unsigned __int64 **)(a1 + 88);
          v10 = 2;
          v12 = a1 + 24;
          _InterlockedDecrement64((volatile signed __int64 *)KeGetCurrentThread()->ApcState.Process[1].Padding);
          v9 = v18;
        }
        if ( (unsigned int)MiDeleteTransitionPte((__int64 *)*v5, v6, 0x11u, v10) == 3 || (v13 = v5, v17) )
        {
          v13 = (unsigned __int64 **)(a1 + 88);
          ++*(_QWORD *)(*(_QWORD *)v12 + 8LL);
        }
        v14 = *(_QWORD *)(a1 + 176);
        if ( (*(_DWORD *)(a1 + 156) & 0x20) != 0 )
        {
          v15 = *(_DWORD *)(a1 + 40);
          if ( v15 && v15 != 3 )
            ++**(_QWORD **)v12;
        }
        else
        {
          if ( v9 )
          {
            MiReleasePageFileSpace(v8, v9, v11);
            v5 = v13;
          }
          if ( !v11 )
          {
            v16 = *(_QWORD *)(v8 + 8LL * ((unsigned __int16)v9 >> 12) + 18528);
            if ( qword_140E2D940 && (v9 & 0x10) == 0 )
              v9 &= ~qword_140E2D940;
            v14 = MiTransferSoftwarePte(*(_QWORD *)(a1 + 168), v16, (_KPROCESS *)HIDWORD(v9), 2);
          }
          **v5 = v14;
        }
        if ( !v14 )
          ++*(_DWORD *)(a1 + 112);
      }
      return 1LL;
    }
  }
  else
  {
    MiDecommitLargePte(a1, v2);
    return *(unsigned int *)(a1 + 192);
  }
  return result;
}
