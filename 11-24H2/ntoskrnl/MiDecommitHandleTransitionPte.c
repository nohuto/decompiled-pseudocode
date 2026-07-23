/*
 * XREFs of MiDecommitHandleTransitionPte @ 0x14029685C
 * Callers:
 *     MiDeleteVa @ 0x14023D060 (MiDeleteVa.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 * Callees:
 *     MiDeleteTransitionPte @ 0x140204FF0 (MiDeleteTransitionPte.c)
 *     MiTransferSoftwarePte @ 0x140215AA0 (MiTransferSoftwarePte.c)
 *     MiReturnPagedPoolLockCharge @ 0x140296AA0 (MiReturnPagedPoolLockCharge.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402EDDFC (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiReleasePageFileSpace @ 0x1403D2B30 (MiReleasePageFileSpace.c)
 *     MiIsPfnSystemCharged @ 0x14042A890 (MiIsPfnSystemCharged.c)
 *     MiDecommitLargePte @ 0x1404C1658 (MiDecommitLargePte.c)
 */

__int64 __fastcall MiDecommitHandleTransitionPte(__int64 a1, __int16 a2)
{
  __int64 result; // rax
  __int64 **v4; // r14
  __int64 v5; // r8
  ULONG_PTR v6; // rdi
  int v7; // ecx
  __int64 v8; // r12
  __int64 v9; // rbx
  char v10; // r10
  BOOL v11; // ebp
  __int64 v12; // r15
  __int64 **v13; // r13
  unsigned __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rdx
  int v17; // [rsp+68h] [rbp+10h]
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  if ( ((a2 & 0x3E0) != 0x300LL || !*(_DWORD *)(a1 + 96)) && (*(_QWORD *)(a1 + 192) == 1LL || *(_DWORD *)(a1 + 96)) )
  {
    v4 = (__int64 **)(a1 + 88);
    result = MiLockTransitionLeafPageEx(*(_QWORD *)(a1 + 88));
    v6 = result;
    if ( result )
    {
      v7 = *(_DWORD *)(a1 + 156);
      if ( (v7 & 8) != 0 )
      {
        MiReturnPagedPoolLockCharge(a1, **v4);
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
            v8 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(result + 40) >> 43) & 0x3FFLL));
            if ( (v18 & 2) != 0 )
              v11 = MI_IS_PTE_IN_WS_SWAP_SET(v8, &v18) != 0;
          }
          v4 = (__int64 **)(a1 + 88);
          v10 = 2;
          v12 = a1 + 24;
          _InterlockedDecrement64((volatile signed __int64 *)KeGetCurrentThread()->ApcState.Process[1].Padding);
          v9 = v18;
        }
        LOBYTE(v5) = 17;
        if ( (unsigned int)MiDeleteTransitionPte(*v4, v6, v5, v10) == 3 || (v13 = v4, v17) )
        {
          v13 = (__int64 **)(a1 + 88);
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
            v4 = v13;
          }
          if ( !v11 )
          {
            v16 = *(_QWORD *)(v8 + 8LL * ((unsigned __int16)v9 >> 12) + 18528);
            if ( qword_140E2DCC0 && (v9 & 0x10) == 0 )
              v9 &= ~qword_140E2DCC0;
            v14 = MiTransferSoftwarePte(*(_QWORD *)(a1 + 168), v16, HIDWORD(v9), 2);
          }
          **v4 = v14;
        }
        if ( !v14 )
          ++*(_DWORD *)(a1 + 112);
      }
      return 1LL;
    }
  }
  else
  {
    MiDecommitLargePte(a1);
    return *(unsigned int *)(a1 + 192);
  }
  return result;
}
