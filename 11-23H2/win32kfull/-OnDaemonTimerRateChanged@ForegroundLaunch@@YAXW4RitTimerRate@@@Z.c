/*
 * XREFs of ?OnDaemonTimerRateChanged@ForegroundLaunch@@YAXW4RitTimerRate@@@Z @ 0x1C0097060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_Ddd @ 0x1C000C65C (WPP_RECORDER_AND_TRACE_SF_Ddd.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0030A10 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C0032504 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     LockProcessByClientId @ 0x1C0035CE0 (LockProcessByClientId.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C00972E4 (--1-$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrument.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C01389B0 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ForegroundLaunch::OnDaemonTimerRateChanged(int a1)
{
  int v2; // edx
  __int64 v3; // r8
  unsigned int *v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // r9
  char v7; // dl
  __int64 v8; // rdx
  int v9; // r9d
  char v10; // dl
  __int64 v12; // [rsp+40h] [rbp-78h]
  __int64 v13; // [rsp+48h] [rbp-70h]
  __int64 v14; // [rsp+50h] [rbp-68h]
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  int v16; // [rsp+68h] [rbp-50h]
  __int64 v17; // [rsp+80h] [rbp-38h]
  char v18; // [rsp+C8h] [rbp+10h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v18, (struct _EX_PUSH_LOCK *)&unk_1C035F388);
  byte_1C0359164 = a1 != 2;
  if ( a1 == 2 )
  {
    v4 = (unsigned int *)&unk_1C035E228;
    v5 = 10LL;
    do
    {
      v6 = v4[2];
      if ( (_DWORD)v6 == 4 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 749LL);
        v6 = v4[2];
      }
      if ( *(_QWORD *)v4 )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (v7 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v7 = 0;
        }
        if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v14) = v4[3];
          LODWORD(v13) = v6;
          LODWORD(v12) = *v4;
          WPP_RECORDER_AND_TRACE_SF_Ddd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v7,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v6,
            4u,
            2u,
            0x20u,
            (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
            v12,
            v13,
            v14);
        }
        if ( v4[3] == 1 )
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
              33,
              (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
              *v4);
          }
          v16 = LockProcessByClientId(*(void **)v4, (PEPROCESS *)&Object);
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
              LODWORD(v13) = v9;
              LODWORD(v12) = *v4;
              WPP_RECORDER_AND_TRACE_SF_DD(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v10,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                (__int64)gFullLog,
                4u,
                2u,
                0x22u,
                (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
                v12,
                v13);
            }
          }
          if ( Object )
            ObfDereferenceObject(Object);
        }
        *(_OWORD *)v4 = 0LL;
        v17 = 0LL;
        *((_QWORD *)v4 + 2) = 0LL;
      }
      v4 += 6;
      --v5;
    }
    while ( v5 );
  }
  return NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v18);
}
