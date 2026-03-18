/*
 * XREFs of ?DispBrokerSetDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@_N@Z @ 0x1401A8CE4
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1401636C0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     DrvDxgkSendDisplayBrokerMessage @ 0x1400C99F4 (DrvDxgkSendDisplayBrokerMessage.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1400C9A64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1400C9AEC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac__&DrvSampleDisplayState_ @ 0x1401A8870 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac__-D.c)
 *     DrvSetActualPathModalityToDisplayJournal @ 0x1401CB3F0 (DrvSetActualPathModalityToDisplayJournal.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall DispBrokerSetDisplayConfig(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *const a5,
        bool a6)
{
  unsigned int v6; // ebx
  __int64 v8; // rcx
  char *v9; // rdi
  __int64 UserSessionState; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // [rsp+28h] [rbp-D8h]
  unsigned int v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v18; // [rsp+50h] [rbp-B0h] BYREF
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v22[8]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v23[5]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v24[24]; // [rsp+A0h] [rbp-60h] BYREF

  v16 = a1;
  v19 = a2;
  v17 = a3;
  v18 = a4;
  v6 = 216 * a1 + 96;
  if ( v6 >= 0x7FFF )
    return 2147483653LL;
  v9 = (char *)Win32AllocPoolWithQuotaZInitImpl(a1, v6, 0x44535042u);
  if ( !v9 )
    return 3221225495LL;
  UserSessionState = W32GetUserSessionState(v8);
  DisplayScenarioJournalBegin(v17, v18, *(unsigned __int16 *)(UserSessionState + 69008));
  DisplayScenarioJournalSetSDCPathsAndModes(216 * v16, v16, v19);
  v23[0] = &v16;
  v23[1] = &v17;
  v23[2] = &v18;
  v23[3] = (unsigned int *)&a6;
  v23[4] = (unsigned int *)&v19;
  InitDisplayBrokerMessage_DispBroker::AlpcRequest_7___lambda_cc443f55816a528e59093b1569cde5ac___DrvSampleDisplayState_(
    v9,
    a5,
    v23,
    v6 - 96);
  memset(v24, 0, 0x58uLL);
  v21 = 88LL;
  v12 = *(_QWORD *)(W32GetUserSessionState(v11) + 57056);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v22);
  v20 = *(_QWORD *)(v12 + 16);
  v14 = DrvDxgkSendDisplayBrokerMessage(
          1179648LL,
          (__int64)v9,
          v13,
          (__int64)v24,
          (__int64)&v21,
          v15,
          (unsigned __int64)&v20 & -(__int64)(v20 != 0));
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v22);
  GreDeleteFastMutex(v9);
  if ( v14 >= 0 )
  {
    if ( v24[21] )
      DisplayScenarioJournalCCDRetrieval(v24[21]);
    v14 = v24[20];
  }
  if ( (unsigned __int8)DisplayScenarioJournalMissingActualPathModality() )
    DrvSetActualPathModalityToDisplayJournal();
  DisplayScenarioJournalFinalize(a5, (unsigned int)v14);
  return (unsigned int)v14;
}
