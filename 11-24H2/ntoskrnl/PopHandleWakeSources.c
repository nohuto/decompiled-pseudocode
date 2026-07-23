/*
 * XREFs of PopHandleWakeSources @ 0x140B5DE94
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PopAcquireWakeSourceSpinLock @ 0x1404B7484 (PopAcquireWakeSourceSpinLock.c)
 *     PopReleaseWakeSourceSpinLock @ 0x1404C35A4 (PopReleaseWakeSourceSpinLock.c)
 *     ExCopyWakeTimerInfo @ 0x140655950 (ExCopyWakeTimerInfo.c)
 *     PopNewWakeSource @ 0x1406F7184 (PopNewWakeSource.c)
 *     PopUnlinkWakeSources @ 0x140A9B718 (PopUnlinkWakeSources.c)
 *     PopValidateRTCWake @ 0x140B6EBD4 (PopValidateRTCWake.c)
 */

LONG PopHandleWakeSources()
{
  __int64 v0; // rsi
  bool v1; // bl
  __int64 v2; // rdx
  int v3; // r14d
  ULONG_PTR *v4; // rbp
  int v5; // ecx
  __int64 v6; // rdi
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r9d
  __int64 *v11; // rcx
  char v12; // r8
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rdx
  char v16; // r8
  __int64 *i; // rcx
  __int64 v18; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  char v21; // [rsp+70h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v0 = PopCurrentWakeInfo;
  v1 = 0;
  PopWakeSourceWorkState = 3;
  if ( !PopCurrentWakeInfo )
    goto LABEL_58;
  PopCurrentWakeInfo = 0LL;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  LOBYTE(v2) = 0;
  v21 = 0;
  if ( (PopSimulate & 0x200000) != 0 || (PopFixedWakeSourceMask & 1) != 0 )
  {
    v3 = 1;
    goto LABEL_9;
  }
  if ( (PopSimulate & 0x400000) != 0 || (PopFixedWakeSourceMask & 2) != 0 )
  {
    v3 = 2;
    goto LABEL_9;
  }
  if ( (unsigned __int8)PopValidateRTCWake(&v21, v2) && (PopSimulate & 0x100000) == 0 )
  {
    LOBYTE(v2) = v21;
    v3 = 4;
LABEL_9:
    if ( dword_140F0B9F0 < 0 || (unsigned __int64)dword_140F0B9F0 >= 3 )
      v4 = 0LL;
    else
      v4 = (ULONG_PTR *)qword_140F0BA08[3 * dword_140F0B9F0];
    if ( v3 == 4 )
    {
      if ( (unsigned __int64)v4 > 0xFFFFFFFFFFFFFFFCuLL )
        v5 = 4;
      else
        v5 = ((_BYTE)v2 != 0) + 2;
    }
    else
    {
      v5 = 1;
    }
    v6 = PopNewWakeSource(v5);
    PopUnlinkWakeSources(v0);
    if ( v6 )
    {
      if ( (unsigned int)(*(_DWORD *)(v6 + 16) - 2) <= 1 )
      {
        ExCopyWakeTimerInfo(v4, (_QWORD *)(v6 + 24));
      }
      else if ( v4 == (ULONG_PTR *)-1LL )
      {
        *(_DWORD *)(v6 + 24) = 0;
      }
      else if ( v4 == (ULONG_PTR *)-2LL )
      {
        *(_DWORD *)(v6 + 24) = 1;
      }
      else
      {
        if ( v4 == (ULONG_PTR *)-3LL )
          v3 = 2;
        *(_DWORD *)(v6 + 24) = v3;
      }
      v7 = *(__int64 **)(v0 + 32);
      if ( *v7 != v0 + 24 )
LABEL_31:
        __fastfail(3u);
      *(_QWORD *)v6 = v0 + 24;
      *(_QWORD *)(v6 + 8) = v7;
      *v7 = v6;
      *(_QWORD *)(v0 + 32) = v6;
      *(_DWORD *)(v0 + 40) = 1;
    }
  }
  PopAcquireWakeSourceSpinLock(&LockHandle);
  v8 = PopWakeInfoList;
  if ( *(__int64 **)(PopWakeInfoList + 8) != &PopWakeInfoList )
    goto LABEL_31;
  ++PopWakeInfoCount;
  *(_QWORD *)v0 = PopWakeInfoList;
  *(_QWORD *)(v0 + 8) = &PopWakeInfoList;
  *(_QWORD *)(v8 + 8) = v0;
  v9 = v0 + 24;
  PopWakeInfoList = v0;
  v10 = *(_DWORD *)(v0 + 40);
  if ( v10 )
  {
    v11 = *(__int64 **)v9;
    v12 = 0;
    while ( v11 != (__int64 *)v9 )
    {
      v13 = *((_DWORD *)v11 + 4);
      if ( v13 == 1 )
        goto LABEL_44;
      if ( !v13 )
      {
        v14 = *(__int64 *)((char *)v11 + 76) - *(_QWORD *)&GUID_NETWORK_ADAPTER_CLASS.Data1;
        if ( !v14 )
          v14 = *(__int64 *)((char *)v11 + 84) - *(_QWORD *)GUID_NETWORK_ADAPTER_CLASS.Data4;
        if ( v14 )
        {
          v15 = *(__int64 *)((char *)v11 + 76) - *(_QWORD *)&GUID_DEVICE_BATTERY.Data1;
          if ( !v15 )
            v15 = *(__int64 *)((char *)v11 + 84) - *(_QWORD *)GUID_DEVICE_BATTERY.Data4;
          if ( v15 )
            goto LABEL_44;
        }
      }
      v11 = (__int64 *)*v11;
    }
  }
  else
  {
LABEL_44:
    v12 = 1;
  }
  *(_BYTE *)(v0 + 80) = v12;
  v16 = 0;
  if ( v10 )
  {
    for ( i = *(__int64 **)v9; i != (__int64 *)v9; i = (__int64 *)*i )
    {
      if ( !*((_DWORD *)i + 4) )
      {
        v18 = *(__int64 *)((char *)i + 76) - *(_QWORD *)&GUID_DEVICE_BATTERY.Data1;
        if ( !v18 )
          v18 = *(__int64 *)((char *)i + 84) - *(_QWORD *)GUID_DEVICE_BATTERY.Data4;
        if ( !v18 )
        {
          v16 = 1;
          break;
        }
      }
    }
  }
  *(_BYTE *)(v0 + 81) = v16;
  if ( v10 == 1 && *(_DWORD *)(*(_QWORD *)v9 + 16LL) == 4 )
    v1 = *(_DWORD *)(*(_QWORD *)v9 + 24LL) == 1;
  *(_BYTE *)(v0 + 82) = v1;
LABEL_58:
  PopWakeSourceWorkState = 4;
  PopReleaseWakeSourceSpinLock(&LockHandle);
  return KeSetEvent(&PopWakeSourceAvailable, 0, 0);
}
