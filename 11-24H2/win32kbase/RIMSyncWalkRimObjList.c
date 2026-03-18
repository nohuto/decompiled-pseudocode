/*
 * XREFs of RIMSyncWalkRimObjList @ 0x14011D9CC
 * Callers:
 *     RIMDirectPnpRemoveUserModeRimDevices @ 0x14011D660 (RIMDirectPnpRemoveUserModeRimDevices.c)
 *     RIMDirectStopUserModeRimDeviceClassNotifications @ 0x14011D7AC (RIMDirectStopUserModeRimDeviceClassNotifications.c)
 *     RIMSetSystemInputMode @ 0x14011D91C (RIMSetSystemInputMode.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x1401B3FE0 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     RIMSetTestModeStatus @ 0x1401D3740 (RIMSetTestModeStatus.c)
 *     RIMDirectStartUserModeRimDeviceClassNotifications @ 0x1401D6E40 (RIMDirectStartUserModeRimDeviceClassNotifications.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall RIMSyncWalkRimObjList(__int64 a1, __int64 a2, void (__fastcall *a3)(void *, __int64))
{
  int v4; // r12d
  __int64 v5; // rcx
  char *v6; // rsi
  unsigned int v7; // ebx
  __int64 UserSessionState; // rax
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *i; // r14
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  void **v18; // rdi
  __int64 v19; // rbp
  void *v20; // rbx
  __int64 v21; // r14
  char *v23; // [rsp+78h] [rbp+20h]

  v4 = a1;
  if ( *(_BYTE *)(W32GetUserSessionState(a1) + 168) )
  {
    v6 = 0LL;
    v23 = 0LL;
    v7 = 0;
    UserSessionState = W32GetUserSessionState(v5);
    RIMLockExclusive(UserSessionState + 56);
    v10 = *(__int64 **)(W32GetUserSessionState(v9) + 120);
    if ( v10 != (__int64 *)(W32GetUserSessionState(v11) + 120) )
    {
      do
      {
        if ( !*((_BYTE *)v10 + 64) && !*((_BYTE *)v10 + 65) )
          ++v7;
        v10 = (__int64 *)*v10;
      }
      while ( v10 != (__int64 *)(W32GetUserSessionState(v12) + 120) );
      if ( v7 )
      {
        v6 = (char *)Win32AllocPoolZInitImpl(256LL, 8LL * v7, 0x706D7452u);
        v23 = v6;
        v7 = 0;
        for ( i = *(_QWORD **)(W32GetUserSessionState(v13) + 120);
              i != (_QWORD *)(W32GetUserSessionState(v12) + 120);
              i = (_QWORD *)*i )
        {
          v15 = i - 2;
          if ( !*((_BYTE *)i + 64)
            && !*((_BYTE *)v15 + 81)
            && ObReferenceObjectByPointer(i - 2, 3u, ExRawInputManagerObjectType, 0) >= 0 )
          {
            v16 = v7++;
            *(_QWORD *)&v6[8 * v16] = v15;
          }
        }
      }
    }
    v17 = W32GetUserSessionState(v12);
    RIMUnlockExclusive(v17 + 56);
    if ( v7 )
    {
      v18 = (void **)v6;
      v19 = v7;
      do
      {
        v20 = *v18;
        v21 = (__int64)*v18 + 760;
        if ( v4 == 1 )
        {
          RIMLockExclusive((__int64)v20 + 104);
          RIMLockExclusive(v21);
        }
        a3(v20, a2);
        if ( v4 == 1 )
        {
          RIMUnlockExclusive(v21);
          RIMUnlockExclusive((__int64)v20 + 104);
        }
        ObfDereferenceObject(v20);
        ++v18;
        --v19;
      }
      while ( v19 );
      v6 = v23;
    }
    if ( v6 )
      GreDeleteFastMutex(v6);
  }
}
