/*
 * XREFs of ??$NewWindowRegionRect@MMMM@EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@SAX$$QEAM000@Z @ 0x1800E571C
 * Callers:
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x1800E5D14 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800E5C38 (-Provider@ControlCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

int __fastcall ControlCenterUITelemetry::ControlCenterTelemetry::EM_PositionViewActivity::NewWindowRegionRect<float,float,float,float>(
        int *a1,
        int *a2,
        int *a3,
        int *a4)
{
  const struct _tlgProvider_t *v8; // rax
  int v9; // xmm0_4
  int v10; // xmm1_4
  int v11; // xmm0_4
  int v12; // xmm1_4
  int v14; // [rsp+38h] [rbp-49h] BYREF
  int v15; // [rsp+3Ch] [rbp-45h] BYREF
  int v16; // [rsp+40h] [rbp-41h] BYREF
  _DWORD v17[3]; // [rsp+44h] [rbp-3Dh] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-19h] BYREF
  void *v20; // [rsp+78h] [rbp-9h]
  int v21; // [rsp+80h] [rbp-1h]
  int v22; // [rsp+84h] [rbp+3h]
  _DWORD *v23; // [rsp+88h] [rbp+7h]
  __int64 v24; // [rsp+90h] [rbp+Fh]
  int *v25; // [rsp+98h] [rbp+17h]
  __int64 v26; // [rsp+A0h] [rbp+1Fh]
  int *v27; // [rsp+A8h] [rbp+27h]
  __int64 v28; // [rsp+B0h] [rbp+2Fh]
  int *v29; // [rsp+B8h] [rbp+37h]
  __int64 v30; // [rsp+C0h] [rbp+3Fh]

  v8 = ControlCenterLogging::Provider();
  if ( *(_DWORD *)v8 > 5u )
  {
    v9 = *a4;
    v10 = *a3;
    v29 = &v14;
    v14 = v9;
    v11 = *a2;
    v27 = &v15;
    v25 = &v16;
    v23 = v17;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = *((_QWORD *)v8 + 1);
    v15 = v10;
    v12 = *a1;
    v16 = v11;
    v17[0] = v12;
    v30 = 4LL;
    v28 = 4LL;
    v26 = 4LL;
    v24 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)UserData.Ptr;
    v20 = &unk_1807E7D99;
    UserData.Reserved = 2;
    v21 = 44;
    v22 = 1;
    v17[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    LODWORD(v8) = EventWriteTransfer(*((_QWORD *)v8 + 4), &EventDescriptor, 0LL, 0LL, 6u, &UserData);
  }
  return (int)v8;
}
