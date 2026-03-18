/*
 * XREFs of ?DispBrokerChangeDisplaySettings@@YAJU_LUID@@IPEAU_devicemodeW@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_NAEAW4_DXGK_DIAG_CDS_STAGE@@@Z @ 0x1400C9744
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E5504 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 * Callees:
 *     DrvSampleDisplayState @ 0x1400C8DA0 (DrvSampleDisplayState.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1400C9A64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1400C9AEC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     _lambda_7dc7c0424fbefd701d9ba3d1e39eb072_::operator() @ 0x1401A8954 (_lambda_7dc7c0424fbefd701d9ba3d1e39eb072_--operator().c)
 *     DrvSetActualPathModalityToDisplayJournal @ 0x1401CB3F0 (DrvSetActualPathModalityToDisplayJournal.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall DispBrokerChangeDisplaySettings(
        struct _LUID a1,
        int a2,
        struct _devicemodeW *a3,
        int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5,
        bool a6,
        enum _DXGK_DIAG_CDS_STAGE *a7)
{
  enum _DXGK_DIAG_CDS_STAGE *v7; // rsi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 DxgkWin32kInterface; // rax
  unsigned int v16; // ebx
  int v17; // ecx
  int v18; // eax
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  struct _LUID v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v24[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v25[5]; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v26[8]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v27[24]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v28[80]; // [rsp+110h] [rbp+10h] BYREF
  int v29; // [rsp+298h] [rbp+198h] BYREF
  struct _devicemodeW *v30; // [rsp+2A0h] [rbp+1A0h] BYREF

  v30 = a3;
  v29 = a2;
  v7 = a7;
  v9 = a5;
  v21 = a1;
  v20 = a4;
  *(_DWORD *)a7 = 0;
  v10 = ((__int64 (__fastcall *)(_QWORD))W32GetUserSessionState)(a1);
  DisplayScenarioJournalBegin((a4 & 0x10000002) != 0 ? 79 : 143, 32LL, *(unsigned __int16 *)(v10 + 69008));
  v25[0] = &a6;
  v25[1] = &v20;
  v25[2] = &v21;
  v25[3] = &v29;
  v25[4] = &v30;
  memset(v28, 0, sizeof(v28));
  v28[10] = 6;
  v28[11] = 1;
  if ( (int)DrvSampleDisplayState((__int64)&v28[12]) >= 0 )
  {
    if ( v9 )
      *(_OWORD *)&v28[15] = *(_OWORD *)v9;
    v28[0] = 20971800;
    LOWORD(v28[1]) = 0x8000;
    lambda_7dc7c0424fbefd701d9ba3d1e39eb072_::operator()(v25, v28);
  }
  memset(v27, 0, 0x58uLL);
  v23 = 88LL;
  v12 = *(_QWORD *)(W32GetUserSessionState(v11) + 57056);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v24);
  v13 = *(_QWORD *)(v12 + 16);
  v22 = v13;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v14);
  LODWORD(v13) = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _DWORD *, __int64 *, _QWORD, unsigned __int64))(DxgkWin32kInterface + 760))(
                   1179648LL,
                   v28,
                   0LL,
                   v27,
                   &v23,
                   0LL,
                   (unsigned __int64)&v22 & -(__int64)(v13 != 0));
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v24);
  if ( (int)v13 >= 0 )
  {
    v16 = v27[20];
    v17 = v27[21];
  }
  else
  {
    v16 = -1;
    v17 = 11;
  }
  v18 = v20;
  v26[0] = 0;
  *(_DWORD *)v7 = v17;
  v26[4] = v17;
  v26[1] = 20;
  v26[2] = v18;
  v26[3] = v16;
  DisplayScenarioJournalSetSpecializedData(v26);
  if ( (unsigned __int8)DisplayScenarioJournalMissingActualPathModality() )
    DrvSetActualPathModalityToDisplayJournal();
  DisplayScenarioJournalFinalize(v9, v16);
  return v16;
}
