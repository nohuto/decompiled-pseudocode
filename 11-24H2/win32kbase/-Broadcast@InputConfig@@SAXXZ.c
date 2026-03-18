/*
 * XREFs of ?Broadcast@InputConfig@@SAXXZ @ 0x1401F3A34
 * Callers:
 *     _lambda_ebe346d30a668a9733c532f644f5367b_::_lambda_invoker_cdecl_ @ 0x14014F390 (_lambda_ebe346d30a668a9733c532f644f5367b_--_lambda_invoker_cdecl_.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F4E58 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     SendMessageTo @ 0x140048F20 (SendMessageTo.c)
 *     ?W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x140069000 (-W32AcquirePushLockSharedEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x14020B7F4 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall InputConfig::Broadcast(__int64 a1)
{
  __int64 v1; // rdi
  char CanSendMessageToDestinationInternal; // al
  __int64 v3; // rcx
  __int64 v4; // rcx
  _QWORD **v5; // r12
  __int64 v6; // rcx
  _QWORD **v7; // rcx
  _QWORD *i; // r14
  _QWORD **v9; // rbx
  unsigned int v10; // ebp
  unsigned int v11; // esi
  unsigned __int64 v12; // rsi
  __int64 v13; // rax
  char *v14; // rdi
  int v15; // r13d
  __int64 v16; // rcx
  _QWORD **v17; // rbp
  __int64 v18; // rbx
  _QWORD *j; // r9
  _OWORD *v20; // r8
  char *v21; // rdx
  __int128 v22; // xmm1
  _OWORD *v23; // r8
  _DWORD v24[70]; // [rsp+20h] [rbp-118h] BYREF
  __int64 UserSessionState; // [rsp+148h] [rbp+10h]

  v1 = *(_QWORD *)(W32GetUserSessionState(a1) + 16408);
  W32AcquirePushLockSharedEx((struct W32_PUSH_LOCK *)(v1 + 8), 0);
  CanSendMessageToDestinationInternal = InputExtensibilityCallout::_CanSendMessageToDestinationInternal(v1, 6LL);
  v3 = v1 + 8;
  LOBYTE(v1) = CanSendMessageToDestinationInternal;
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v1 )
  {
    v5 = *(_QWORD ***)(W32GetUserSessionState(v4) + 18688);
    UserSessionState = W32GetUserSessionState(v6);
    ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(UserSessionState + 18696));
    v7 = (_QWORD **)*v5;
    for ( i = (_QWORD *)**v5; ; i = (_QWORD *)*i )
    {
      v9 = 0LL;
      if ( v7 != v5 )
        v9 = v7 + 2;
      if ( !v9 )
      {
LABEL_19:
        ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18696));
        memset(&v24[1], 0, 0xD8uLL);
        v24[0] = 1;
        SendMessageTo(6LL, v24, 220LL);
        return;
      }
      v10 = *((_DWORD *)v9 + 363);
      if ( v10 > 1 )
      {
        v12 = 200LL * (v10 - 1);
        if ( v12 > 0xFFFFFFFF || (v11 = v12 + 220, v11 < 0xDC) )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1115);
          goto LABEL_18;
        }
      }
      else
      {
        v11 = 220;
      }
      v13 = Win32AllocPoolZInitImpl(256LL, v11, 0x496E436Fu);
      v14 = (char *)v13;
      if ( !v13 )
        goto LABEL_19;
      *(_DWORD *)v13 = 0;
      v15 = 0;
      *(_QWORD *)(v13 + 4) = *v9;
      v16 = *((unsigned int *)v9 + 2);
      *(_DWORD *)(v13 + 16) = v10;
      v17 = v9 + 182;
      *(_DWORD *)(v13 + 12) = v16;
      v18 = W32GetUserSessionState(v16);
      ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)(v18 + 18696));
      for ( j = *v17; ; j = (_QWORD *)*j )
      {
        v20 = 0LL;
        if ( j != v17 )
          v20 = j + 2;
        if ( !v20 )
          break;
        v21 = &v14[200 * v15 + 20];
        *(_OWORD *)v21 = *v20;
        *((_OWORD *)v21 + 1) = v20[1];
        *((_OWORD *)v21 + 2) = v20[2];
        *((_OWORD *)v21 + 3) = v20[3];
        *((_OWORD *)v21 + 4) = v20[4];
        *((_OWORD *)v21 + 5) = v20[5];
        *((_OWORD *)v21 + 6) = v20[6];
        v21 += 128;
        v22 = v20[7];
        v23 = v20 + 8;
        ++v15;
        *((_OWORD *)v21 - 1) = v22;
        *(_OWORD *)v21 = *v23;
        *((_OWORD *)v21 + 1) = v23[1];
        *((_OWORD *)v21 + 2) = v23[2];
        *((_OWORD *)v21 + 3) = v23[3];
        *((_QWORD *)v21 + 8) = *((_QWORD *)v23 + 8);
      }
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v18 + 18696));
      SendMessageTo(6LL, v14, v11);
      GreDeleteFastMutex(v14);
LABEL_18:
      v7 = (_QWORD **)i;
    }
  }
}
