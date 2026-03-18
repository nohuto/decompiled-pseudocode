/*
 * XREFs of ?PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0012868
 * Callers:
 *     EditionPushProcessLaunchForegroundPolicy @ 0x1C0012850 (EditionPushProcessLaunchForegroundPolicy.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ddDs @ 0x1C0012BA4 (WPP_RECORDER_AND_TRACE_SF_ddDs.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0030A10 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     LockProcessByClientId @ 0x1C0035CE0 (LockProcessByClientId.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C00972E4 (--1-$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrument.c)
 *     _anonymous_namespace_::RecordParentPidLegacyPolicy @ 0x1C00EE2B4 (_anonymous_namespace_--RecordParentPidLegacyPolicy.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C01389B0 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall ForegroundLaunch::PushForegroundPolicy(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // r8
  unsigned int v5; // eax
  __int64 *v6; // rcx
  unsigned int v7; // r13d
  char v8; // di
  __int64 v9; // rdx
  int v10; // edx
  __int64 v11; // r8
  LONGLONG TimeQuadPart; // rax
  __int64 v13; // rcx
  PDEVICE_OBJECT v14; // rcx
  __int16 v16; // [rsp+30h] [rbp-39h]
  char v17; // [rsp+40h] [rbp-29h]
  PEPROCESS Process; // [rsp+60h] [rbp-9h] BYREF
  int v19; // [rsp+68h] [rbp-1h]
  __int128 v20; // [rsp+70h] [rbp+7h]
  LONGLONG v21; // [rsp+80h] [rbp+17h]
  int v22; // [rsp+DCh] [rbp+73h]
  char v23; // [rsp+E8h] [rbp+7Fh] BYREF

  v22 = HIDWORD(a2);
  v2 = a2;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v23, (struct _EX_PUSH_LOCK *)&unk_1C035F388);
  if ( v2 == 4 )
  {
    anonymous_namespace_::RecordParentPidLegacyPolicy(a1);
    return NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v23);
  }
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 546LL);
  v5 = 5;
  v6 = (__int64 *)&unk_1C035E228;
  v7 = 15;
  v8 = 1;
  while ( 1 )
  {
    v9 = *v6;
    if ( *v6 )
      break;
    v7 = v5;
LABEL_9:
    ++v5;
    v6 += 3;
    if ( v5 >= 0xF )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v9) = 0;
      }
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_ddDs(WPP_GLOBAL_Control->AttachedDevice, v9, v4, (unsigned int)"Added");
      if ( v7 < 0xF )
      {
        v19 = LockProcessByClientId(a1, &Process, v4, 0LL);
        if ( (unsigned __int8)HmgLockResultBase<META>::operator bool(&Process, 0LL) && v22 == 1 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            LOBYTE(v10) = 1;
          }
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v10,
              v11,
              (_DWORD)gFullLog,
              4,
              2,
              26,
              (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
              a1);
          PsSetProcessPriorityByClass(Process, 1LL, v11);
          v10 = 1;
        }
        *(_QWORD *)&v20 = a1;
        *((_QWORD *)&v20 + 1) = __PAIR64__(v10, v2);
        TimeQuadPart = PsGetProcessCreateTimeQuadPart(Process);
        v21 = TimeQuadPart;
        v13 = 3LL * v7;
        *(_OWORD *)&qword_1C035E1B0[v13] = v20;
        qword_1C035E1B0[v13 + 2] = TimeQuadPart;
        if ( Process )
          ObfDereferenceObject(Process);
        return NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v23);
      }
      if ( v22 == 1 )
      {
        v14 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v8 = 0;
        }
        LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = a1;
          LODWORD(v9) = 27;
          v16 = 27;
LABEL_45:
          LOBYTE(v9) = v8;
          WPP_RECORDER_AND_TRACE_SF_D(
            v14->AttachedDevice,
            v9,
            v4,
            (_DWORD)gFullLog,
            3,
            2,
            v16,
            (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
            v17);
          return NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v23);
        }
      }
      return NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v23);
    }
  }
  if ( v9 != a1 )
    goto LABEL_9;
  v14 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
  {
    v8 = 0;
  }
  LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = a1;
    v16 = 24;
    goto LABEL_45;
  }
  return NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(&v23);
}
