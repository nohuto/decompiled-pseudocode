/*
 * XREFs of KeTryToFreezeThreadStack @ 0x1404A5F7C
 * Callers:
 *     MiSwapStackPage @ 0x140421D74 (MiSwapStackPage.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiIsKernelStackSwappable @ 0x140406220 (KiIsKernelStackSwappable.c)
 */

char __fastcall KeTryToFreezeThreadStack(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  unsigned __int8 v5; // r15
  __int64 v6; // rsi
  volatile __int64 *v7; // rdi
  char v8; // al
  __int64 v9; // r14
  __int64 v10; // r14
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rax
  unsigned __int8 v16; // dl
  unsigned __int64 v17; // rcx
  char result; // al
  __int128 v19; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+40h] BYREF
  __int64 v21; // [rsp+90h] [rbp+50h] BYREF

  v21 = 0LL;
  v19 = 0LL;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 0;
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v4);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(_QWORD *)(a1 + 64) );
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = *(_BYTE *)(a1 + 388);
        v6 = 0LL;
        v7 = 0LL;
        if ( v5 == 1 )
          break;
        switch ( *(_BYTE *)(a1 + 388) )
        {
          case 2:
LABEL_18:
            v9 = *(unsigned int *)(a1 + 536);
            if ( (int)v9 >= 0 )
            {
              v6 = KiProcessorBlock[v9];
              KiAcquirePrcbLocksForIsolationUnit(v6, 0LL, (unsigned __int64 *)&v21);
              if ( a1 == *(_QWORD *)(v6 + 8) )
                goto LABEL_48;
              if ( *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == (_DWORD)v9 )
                __fastfail(0x4Au);
              goto LABEL_47;
            }
            break;
          case 3:
            v10 = *(unsigned int *)(a1 + 536);
            if ( (int)v10 >= 0 )
            {
              v6 = KiProcessorBlock[v10];
              KiAcquirePrcbLocksForIsolationUnit(v6, 0LL, (unsigned __int64 *)&v21);
              if ( a1 == *(_QWORD *)(v6 + 16) )
                goto LABEL_48;
              if ( *(_BYTE *)(a1 + 388) == 3 && *(_DWORD *)(a1 + 536) == (_DWORD)v10 )
                __fastfail(0x1Eu);
              goto LABEL_47;
            }
            break;
          case 5:
            v8 = *(_BYTE *)(a1 + 112) & 7;
            if ( v8 == 1 || (unsigned __int8)(v8 - 3) <= 3u )
              goto LABEL_48;
            v5 = 2;
            goto LABEL_18;
          default:
            goto LABEL_48;
        }
      }
      v11 = *(unsigned int *)(a1 + 536);
      if ( (int)v11 < 0 )
        break;
      v6 = KiProcessorBlock[v11];
      KiAcquirePrcbLocksForIsolationUnit(v6, 0LL, (unsigned __int64 *)&v21);
      if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v11 )
        goto LABEL_48;
LABEL_47:
      KiReleasePrcbLocksForIsolationUnit(&v21);
    }
    v12 = (unsigned int)v11;
    LODWORD(v12) = v11 & 0x7FFFFFFF;
    v13 = KiProcessorBlock[v12];
    v7 = *(volatile __int64 **)(v13 + 36424);
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      *((_QWORD *)&v19 + 1) = *(_QWORD *)(v13 + 36424);
      *(_QWORD *)&v19 = 0LL;
      v14 = (_QWORD *)_InterlockedExchange64(v7, (__int64)&v19);
      if ( v14 )
        KxWaitForLockOwnerShip((__int64)&v19, v14);
    }
    else
    {
      v20 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
      {
        do
          KeYieldProcessorEx(&v20);
        while ( *v7 );
      }
    }
    if ( *(_BYTE *)(a1 + 388) == 1 && *(_DWORD *)(a1 + 536) == (_DWORD)v11 )
      break;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw(&v19);
      v15 = v19;
      if ( (_QWORD)v19 )
      {
LABEL_38:
        *(_QWORD *)&v19 = 0LL;
        v16 = BYTE8(v19);
        if ( ((v16 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v15 + 8), *((__int64 *)&v19 + 1))) & 4) != 0 )
          KeWakeAddressAll(v15 + 8, (__int64)KiProcessorBlock);
      }
      else if ( (__int128 *)_InterlockedCompareExchange64(
                              *((volatile signed __int64 **)&v19 + 1),
                              0LL,
                              (signed __int64)&v19) != &v19 )
      {
        v15 = KxWaitForLockChainValid((__int64 *)&v19);
        goto LABEL_38;
      }
    }
    else
    {
      _InterlockedAnd64(v7, 0LL);
    }
  }
LABEL_48:
  v17 = v5;
  if ( !v5
    || (v17 = (unsigned int)v5 - 1, v5 == 1)
    || (v17 = (unsigned int)v5 - 2, v5 == 2)
    || (v17 = (unsigned int)v5 - 3, v5 == 3)
    || (v17 = (unsigned int)v5 - 4, v5 == 4) )
  {
LABEL_56:
    KiReleaseThreadStateLock(v17, v6, &v21, v7, (volatile signed __int64 **)&v19);
    *(_QWORD *)(a1 + 64) = 0LL;
    return 0;
  }
  if ( v5 == 5 )
  {
    if ( KiIsKernelStackSwappable(a1) )
    {
      LOBYTE(v17) = *(_BYTE *)(a1 + 113);
      if ( !(_BYTE)v17 )
        goto LABEL_60;
    }
    goto LABEL_56;
  }
  v17 = (unsigned int)v5 - 7;
  if ( v5 == 7 || v5 == 9 )
    goto LABEL_56;
LABEL_60:
  result = 1;
  *a2 = v21;
  return result;
}
