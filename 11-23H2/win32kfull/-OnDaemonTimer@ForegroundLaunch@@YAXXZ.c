/*
 * XREFs of ?OnDaemonTimer@ForegroundLaunch@@YAXXZ @ 0x1C00738C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x1C000C65C (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C0032504 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     LockProcessByClientId @ 0x1C0035CE0 (LockProcessByClientId.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C01389B0 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall ForegroundLaunch::OnDaemonTimer(ForegroundLaunch *this)
{
  __int64 v1; // rbx
  int v2; // edx
  __int64 v3; // r8
  __int64 v4; // rsi
  unsigned int *v5; // rdi
  __int64 v6; // r9
  char v7; // dl
  __int64 v8; // rdx
  int v9; // r9d
  char v10; // dl
  __int64 v11; // [rsp+40h] [rbp-78h]
  __int64 v12; // [rsp+48h] [rbp-70h]
  __int64 v13; // [rsp+50h] [rbp-68h]
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  int v15; // [rsp+68h] [rbp-50h]
  __int64 v16; // [rsp+80h] [rbp-38h]

  v1 = MEMORY[0xFFFFF78000000014] - 50000000LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(&unk_1C035F388, 0LL);
  v4 = 10LL;
  v5 = (unsigned int *)&unk_1C035E228;
  do
  {
    v6 = v5[2];
    if ( (_DWORD)v6 == 4 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 689LL);
      v6 = v5[2];
    }
    if ( *(_QWORD *)v5 && v1 > *((_QWORD *)v5 + 2) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v7 = 0;
      }
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v13) = v5[3];
        LODWORD(v12) = v6;
        LODWORD(v11) = *v5;
        WPP_RECORDER_AND_TRACE_SF_Ddd(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v7,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          v6,
          4u,
          2u,
          0x1Du,
          (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
          v11,
          v12,
          v13);
      }
      if ( v5[3] == 1 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v2) = 0;
        }
        if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v2,
            v3,
            (_DWORD)gFullLog,
            4,
            2,
            30,
            (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
            *v5);
        }
        v15 = LockProcessByClientId(*(void **)v5, (PEPROCESS *)&Object);
        if ( (unsigned __int8)HmgLockResultBase<META>::operator bool(&Object, v8) )
        {
          PsSetProcessPriorityByClass(Object, 0LL, v3);
        }
        else
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || (v10 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v10 = 0;
          }
          if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v12) = v9;
            LODWORD(v11) = *v5;
            WPP_RECORDER_AND_TRACE_SF_DD(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v10,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (__int64)gFullLog,
              4u,
              2u,
              0x1Fu,
              (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
              v11,
              v12);
          }
        }
        if ( Object )
          ObfDereferenceObject(Object);
      }
      *(_OWORD *)v5 = 0LL;
      v16 = 0LL;
      *((_QWORD *)v5 + 2) = 0LL;
    }
    v5 += 6;
    --v4;
  }
  while ( v4 );
  ExReleasePushLockExclusiveEx(&unk_1C035F388, 0LL);
  KeLeaveCriticalRegion();
}
