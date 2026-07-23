/*
 * XREFs of PopDispatchPowerSettingCallbacks @ 0x1409A41B0
 * Callers:
 *     <none>
 * Callees:
 *     PopIncrementPowerSettingPendingUpdates @ 0x1402B9D70 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x1402B9F60 (PopDecrementPowerSettingPendingUpdates.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     PopUnregisterPowerSettingCallback @ 0x1404A770C (PopUnregisterPowerSettingCallback.c)
 *     PopCallPowerSettingCallback @ 0x1409A42EC (PopCallPowerSettingCallback.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 PopDispatchPowerSettingCallbacks()
{
  __int64 v0; // rdi
  _DWORD *v1; // rbx
  __int64 v2; // r14
  __int64 *v3; // rsi
  __int64 *v4; // rdi
  __int64 *v5; // rbp
  __int64 v6; // rdi
  _QWORD *v8; // rax
  char v9; // al
  _QWORD *v10; // rdx
  __int64 v11; // r8
  char v12; // cl

  PopIncrementPowerSettingPendingUpdates(0);
  PopDecrementPowerSettingPendingUpdates(1);
  v0 = dword_140F0B38C;
  ExAcquireFastMutex(&PopSettingLock);
  v1 = PopPowerSettings;
  if ( PopPowerSettings != &PopPowerSettings )
  {
    v2 = v0;
    while ( 1 )
    {
      v3 = (__int64 *)(v1 + 4);
      v4 = (__int64 *)*((_QWORD *)v1 + 2);
      while ( v4 != v3 )
      {
        if ( *((_BYTE *)v4 + 104) )
        {
          v4 = (__int64 *)*v4;
        }
        else
        {
          *((_BYTE *)v4 + 104) = 1;
          if ( v4[9] != *(_QWORD *)&v1[2 * v2 + 16] )
            PopCallPowerSettingCallback(v4);
          v5 = (__int64 *)*v4;
          *((_BYTE *)v4 + 104) = 0;
          if ( *((_BYTE *)v4 + 33) || *((_BYTE *)v4 + 32) )
            PopUnregisterPowerSettingCallback(v4);
          v4 = v5;
        }
      }
      if ( (__int64 *)*v3 != v3 || v1[14] || v1[15] )
      {
        v6 = *(_QWORD *)v1;
      }
      else
      {
        v9 = 1;
        v10 = v1 + 16;
        v11 = 3LL;
        do
        {
          v12 = 0;
          if ( *v10++ == 0LL )
            v12 = v9;
          v9 = v12;
          --v11;
        }
        while ( v11 );
        v6 = *(_QWORD *)v1;
        if ( v12 )
        {
          if ( *(_DWORD **)(v6 + 8) != v1 || (v8 = (_QWORD *)*((_QWORD *)v1 + 1), (_DWORD *)*v8 != v1) )
            __fastfail(3u);
          *v8 = v6;
          *(_QWORD *)(v6 + 8) = v8;
          ExFreePoolWithTag(v1, 0x74655350u);
        }
      }
      if ( (PVOID *)v6 == &PopPowerSettings )
        break;
      v1 = (_DWORD *)v6;
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  return PopDecrementPowerSettingPendingUpdates(0);
}
