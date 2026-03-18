/*
 * XREFs of rimDeviceResetApc @ 0x1C01B4D40
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0037ECC (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C00766E0 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0076738 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C008BA00 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C00BA71C (RIMDeliverDeviceResetRequest.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?CompleteDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01B4CA8 (-CompleteDeviceResetRequest@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 */

void __fastcall rimDeviceResetApc(PVOID ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  int v5; // edx
  int v6; // r8d
  __int64 v7; // rsi
  int v8; // eax
  _BYTE v9[16]; // [rsp+50h] [rbp-F8h] BYREF
  _BYTE v10[208]; // [rsp+60h] [rbp-E8h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v10);
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v9, 1);
  InputTraceLogging::RIM::CompleteDeviceResetRequest((const struct RIMDEV *)ApcContext);
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v6,
      (_DWORD)gRimLog,
      4,
      1,
      12,
      (__int64)&WPP_62af42fa4e0f3c4768c5349c123bf845_Traceguids,
      (char)ApcContext);
  }
  if ( IoStatusBlock->Status >= 0 )
  {
    v7 = *((_QWORD *)ApcContext + 42);
    RIMLockExclusive(v7 + 104);
    v8 = *((_DWORD *)ApcContext + 46);
    if ( (v8 & 0x200000) == 0 )
    {
      *((_DWORD *)ApcContext + 46) = v8 | 0x200000;
      ZwSetEvent(*(HANDLE *)(v7 + 344), 0LL);
    }
    RIMDeliverDeviceResetRequest((char *)ApcContext);
    *(_QWORD *)(v7 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)v9);
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v10);
}
