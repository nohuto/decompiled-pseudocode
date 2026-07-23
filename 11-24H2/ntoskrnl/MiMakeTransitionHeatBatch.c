/*
 * XREFs of MiMakeTransitionHeatBatch @ 0x1403FD304
 * Callers:
 *     MmCheckCachedPageStates @ 0x140236420 (MmCheckCachedPageStates.c)
 *     MiHandleTransitionFault @ 0x140247EF0 (MiHandleTransitionFault.c)
 *     MmCopyToCachedPage @ 0x14034F0D4 (MmCopyToCachedPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockTransitionLeafPageEx @ 0x1402EC2C0 (MiLockTransitionLeafPageEx.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiTryLockLeafPage @ 0x1403460BC (MiTryLockLeafPage.c)
 *     MiSetActivePfnHeat @ 0x1403FD670 (MiSetActivePfnHeat.c)
 *     MiInitializePageHeatList @ 0x140435B60 (MiInitializePageHeatList.c)
 *     MiAddPageToHeatRanges @ 0x140435BC4 (MiAddPageToHeatRanges.c)
 *     MiGetTransitionPageHeatList @ 0x140686854 (MiGetTransitionPageHeatList.c)
 *     MiGetPrototypePteBoundaries @ 0x140693E78 (MiGetPrototypePteBoundaries.c)
 */

_DWORD *__fastcall MiMakeTransitionHeatBatch(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // rbp
  _DWORD *v7; // r14
  int v8; // r13d
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  unsigned __int64 PrototypePteBoundaries; // rax
  _DWORD *TransitionPageHeatList; // rax
  unsigned int *v21; // rcx
  unsigned int v22; // ecx
  int v23; // edx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r8
  unsigned int v26; // ecx
  unsigned __int64 *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v32[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v33; // [rsp+78h] [rbp+20h] BYREF

  v32[0] = 0LL;
  v33 = 0LL;
  MiSetActivePfnHeat(a1, 0LL);
  if ( (HvlEnlightenments & 0x200000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
    v7 = 0LL;
    if ( *(__int64 *)(a1 + 40) < 0 )
    {
      v8 = 1;
      PrototypePteBoundaries = MiGetPrototypePteBoundaries(v6, v32);
      if ( PrototypePteBoundaries )
      {
        v17 = v32[0];
        v14 = v6 & 0xFFFFFFFFFFFFF000uLL;
        v16 = PrototypePteBoundaries + 8 * v32[0];
        v18 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4088;
        if ( (v6 & 0xFFFFFFFFFFFFF000uLL) < PrototypePteBoundaries )
          v14 = PrototypePteBoundaries;
        if ( v18 >= v16 )
          v18 = v16 - 8;
LABEL_19:
        TransitionPageHeatList = (_DWORD *)MiGetTransitionPageHeatList(v17, v16, v9, v12);
        v7 = TransitionPageHeatList;
        if ( TransitionPageHeatList )
        {
          if ( TransitionPageHeatList != (_DWORD *)-1LL )
          {
            MiInitializePageHeatList(TransitionPageHeatList, 1LL, 2LL, *TransitionPageHeatList >> 3);
            v22 = *v21;
            v23 = -1;
            v24 = a3;
            v25 = (unsigned __int64)v22 >> 3;
            if ( a3 >= 0xFFFFFFFF )
              v24 = 0xFFFFFFFFLL;
            if ( v25 <= v24 )
            {
              if ( a3 < 0xFFFFFFFF )
                v23 = a3;
              v26 = v23;
            }
            else
            {
              v26 = v22 >> 3;
            }
            v27 = (unsigned __int64 *)v6;
            if ( a3 <= v25 )
              v27 = (unsigned __int64 *)v14;
            if ( (unsigned int)((__int64)(v18 - v6) >> 3) + 1 < v26 )
            {
              if ( (unsigned int)((__int64)(v18 - (_QWORD)v27) >> 3) + 1 > v26 )
              {
                v27 = (unsigned __int64 *)(v18 - 8LL * v26);
                goto LABEL_34;
              }
            }
            else
            {
              v27 = (unsigned __int64 *)v6;
              v18 = v6 - 8 + 8LL * v26;
            }
            while ( 1 )
            {
              if ( (unsigned __int64)v27 > v18 )
                return v7;
              if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v27) & 0xC01) == 0x800 )
              {
                if ( v27 == (unsigned __int64 *)v6 )
                {
                  v30 = a1;
                  v33 = a1;
                }
                else
                {
                  if ( v8 )
                  {
                    MiTryLockLeafPage(v27, 3, &v33);
                    v28 = v33;
                  }
                  else
                  {
                    v28 = MiLockTransitionLeafPageEx((ULONG_PTR)v27, (unsigned __int8 *)1, 1);
                    v33 = v28;
                  }
                  if ( !v28 )
                    goto LABEL_34;
                  v29 = *(_QWORD *)(v28 + 16) >> 3;
                  if ( (*(_QWORD *)(v28 + 16) & 0x400LL) != 0 )
                    LOBYTE(v29) = *(_QWORD *)(v28 + 16) >> 11;
                  if ( (v29 & 1) == 0 )
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    goto LABEL_34;
                  }
                  MiSetActivePfnHeat(v28, 0LL);
                  _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v30 = v33;
                }
                if ( (unsigned int)MiAddPageToHeatRanges(
                                     v7,
                                     0xAAAAAAAAAAAAAAABuLL * ((v30 + 0x220000000000LL) >> 4),
                                     3LL) )
                  return v7;
              }
LABEL_34:
              ++v27;
            }
          }
          MiSetActivePfnHeat(a1, 1LL);
        }
      }
    }
    else
    {
      v8 = 0;
      v9 = 0xFFFFF68000000000uLL;
      v10 = (__int64)(v6 << 25) >> 16;
      if ( v10 > 0x7FFFFFFEFFFFLL )
      {
        if ( (unsigned int)MiGetSystemRegionType(v10) == 5 )
        {
          v14 = v6 & 0xFFFFFFFFFFFFF000uLL;
          v18 = (v6 & 0xFFFFFFFFFFFFF000uLL) + 4088;
          goto LABEL_19;
        }
      }
      else if ( a2 )
      {
        v11 = v10 & 0x7FFFFFE00000LL;
        v12 = 0xFFFFFFFFFLL;
        if ( v11 >= (*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) << 12 )
          v13 = (v11 >> 9) & 0x7FFFFFFFF8LL;
        else
          v13 = 8
              * ((*(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32)) & 0xFFFFFFFFFLL);
        v14 = v13 - 0x98000000000LL;
        v15 = v11 + 2093056;
        v16 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
        if ( v15 <= v16 << 12 )
        {
          v17 = (v15 >> 9) & 0x7FFFFFFFF8LL;
        }
        else
        {
          v16 &= 0xFFFFFFFFFuLL;
          v17 = 8 * v16;
        }
        v18 = v17 - 0x98000000000LL;
        goto LABEL_19;
      }
    }
    return v7;
  }
  return 0LL;
}
