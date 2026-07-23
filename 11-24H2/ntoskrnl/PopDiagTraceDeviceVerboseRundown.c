/*
 * XREFs of PopDiagTraceDeviceVerboseRundown @ 0x140A3A804
 * Callers:
 *     PopDiagTraceFxRundown @ 0x1402B69F4 (PopDiagTraceFxRundown.c)
 * Callees:
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     PopPepGetDevicePlatformStateDependents @ 0x14048C53C (PopPepGetDevicePlatformStateDependents.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceDeviceVerboseRundown(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rcx
  UNICODE_STRING *p_DestinationString; // r8
  int Length; // edx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int *v11; // rax
  __int16 v13; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v14; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v16; // [rsp+3Ch] [rbp-C4h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  signed __int32 v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-80h] BYREF
  __int16 *v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  __int64 v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+ACh] [rbp-54h]
  __int16 *v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  __int64 v32; // [rsp+C0h] [rbp-40h]
  int v33; // [rsp+C8h] [rbp-38h]
  int v34; // [rsp+CCh] [rbp-34h]
  __int16 *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  __int64 v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  int *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  __int64 *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  __int64 *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  signed __int32 *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  __int16 *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  wchar_t *Buffer; // [rsp+140h] [rbp+40h]
  int v51; // [rsp+148h] [rbp+48h]
  int v52; // [rsp+14Ch] [rbp+4Ch]
  int *v53; // [rsp+150h] [rbp+50h]
  __int64 v54; // [rsp+158h] [rbp+58h]
  __int64 v55; // [rsp+160h] [rbp+60h]
  __int64 v56; // [rsp+168h] [rbp+68h]

  v2 = *(_QWORD *)(a1 + 48);
  v20 = v2;
  v5 = *(_QWORD *)(a1 + 56);
  v17 = 0;
  v13 = *(_WORD *)(v2 + 128) >> 1;
  v14 = *(_WORD *)(v2 + 40) >> 1;
  v15 = *(_WORD *)(v2 + 56) >> 1;
  DestinationString = 0LL;
  PopPepGetDevicePlatformStateDependents(v5, &v17);
  v22 = *(_QWORD *)(v20 + 16);
  v21 = *(_QWORD *)(v20 + 32);
  v18 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 864), 0, 0);
  if ( *(_QWORD *)(a1 + 1240) )
  {
    p_DestinationString = (UNICODE_STRING *)(a1 + 1232);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, &word_140AEDAC0);
    p_DestinationString = &DestinationString;
  }
  Length = p_DestinationString->Length;
  *(_QWORD *)&UserData.Size = 8LL;
  v16 = (unsigned __int16)Length >> 1;
  v19 = *(_DWORD *)(a1 + 652);
  UserData.Ptr = (ULONGLONG)&v20;
  v25 = &v13;
  v26 = 2LL;
  v8 = *(unsigned __int16 *)(v2 + 128);
  v27 = *(_QWORD *)(v2 + 136);
  v30 = &v14;
  v28 = v8;
  v29 = 0;
  v31 = 2LL;
  v9 = *(unsigned __int16 *)(v2 + 40);
  v32 = *(_QWORD *)(v2 + 48);
  v35 = &v15;
  v33 = v9;
  v34 = 0;
  v36 = 2LL;
  v10 = *(unsigned __int16 *)(v2 + 56);
  v37 = *(_QWORD *)(v2 + 64);
  v40 = &v17;
  v42 = &v21;
  v44 = &v22;
  v46 = &v18;
  v48 = &v16;
  Buffer = p_DestinationString->Buffer;
  v11 = &v19;
  v53 = &v19;
  v38 = v10;
  v39 = 0;
  v41 = 4LL;
  v43 = 8LL;
  v45 = 8LL;
  v47 = 4LL;
  v49 = 2LL;
  v51 = Length;
  v52 = 0;
  v54 = 4LL;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v11) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEVICE_VERBOSE_RUNDOWN);
    if ( (_BYTE)v11 )
    {
      if ( !a2 )
        LOBYTE(v11) = EtwWrite(
                        PopDiagHandle,
                        &POP_ETW_EVENT_DEVICE_VERBOSE_RUNDOWN,
                        &PopDiagActivityId,
                        0xEu,
                        &UserData);
    }
  }
  if ( PopDiagSleepStudyHandleRegistered )
  {
    LOBYTE(v11) = EtwEventEnabled(PopDiagHandle, &SLEEPSTUDY_EVT_SCENARIO_DEVICE_RUNDOWN);
    if ( (_BYTE)v11 )
    {
      if ( a2 )
      {
        v55 = a2;
        v56 = 8LL;
        LOBYTE(v11) = EtwWrite(
                        PopDiagSleepStudyHandle,
                        &SLEEPSTUDY_EVT_SCENARIO_DEVICE_RUNDOWN,
                        &PopDiagActivityId,
                        0xFu,
                        &UserData);
      }
    }
  }
  return (char)v11;
}
