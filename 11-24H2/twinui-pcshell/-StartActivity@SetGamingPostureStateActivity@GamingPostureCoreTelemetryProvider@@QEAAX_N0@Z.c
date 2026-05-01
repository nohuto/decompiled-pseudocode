/*
 * XREFs of ?StartActivity@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@QEAAX_N0@Z @ 0x18033413C
 * Callers:
 *     ??$Start@AEA_N_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@AEA_N$$QEA_N@Z @ 0x18032A27C (--$Start@AEA_N_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@SA-AV01@AEA_N.c)
 *     ??$Start@_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@SA?AV01@$$QEA_N@Z @ 0x18032A2CC (--$Start@_N@SetGamingPostureStateActivity@GamingPostureCoreTelemetryProvider@@SA-AV01@$$QEA_N@Z.c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180031110 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z @ 0x1800B6C98 (-_tlgGuidIsZero@@YA_NAEBU_GUID@@@Z.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?LockExclusive@?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180331650 (-LockExclusive@-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgRefle.c)
 *     ?Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180331DFC (-Provider@GamingPostureCoreTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity::StartActivity(
        GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *this,
        char a2,
        char a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rcx
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v13; // r8
  const GUID *v14; // rcx
  char v15; // [rsp+30h] [rbp-49h] BYREF
  char v16; // [rsp+31h] [rbp-48h] BYREF
  RTL_SRWLOCK *v17; // [rsp+38h] [rbp-41h] BYREF
  __int64 v18; // [rsp+40h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+50h] [rbp-29h] BYREF
  __int64 *v20; // [rsp+70h] [rbp-9h]
  int v21; // [rsp+78h] [rbp-1h]
  int v22; // [rsp+7Ch] [rbp+3h]
  RTL_SRWLOCK **v23; // [rsp+80h] [rbp+7h]
  int v24; // [rsp+88h] [rbp+Fh]
  int v25; // [rsp+8Ch] [rbp+13h]
  char *v26; // [rsp+90h] [rbp+17h]
  int v27; // [rsp+98h] [rbp+1Fh]
  int v28; // [rsp+9Ch] [rbp+23h]
  char *v29; // [rsp+A0h] [rbp+27h]
  int v30; // [rsp+A8h] [rbp+2Fh]
  int v31; // [rsp+ACh] [rbp+33h]

  wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)this,
    &v17);
  v6 = *((_QWORD *)this + 34);
  v8 = GamingPostureCoreTelemetryProvider::Provider(v7);
  if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 0x400000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v6 + 8));
  else
    *(_OWORD *)(v6 + 8) = 0LL;
  *(_DWORD *)v6 = 1;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v17);
  v10 = GamingPostureCoreTelemetryProvider::Provider(v9);
  v11 = (__int64)v10;
  if ( *(_DWORD *)v10 > 5u && tlgKeywordOn((__int64)v10, 0x400000000000LL) )
  {
    v15 = a3;
    v16 = a2;
    CurrentThreadId = GetCurrentThreadId();
    v13 = *((_QWORD *)this + 34);
    LODWORD(v17) = CurrentThreadId;
    v18 = 50331648LL;
    if ( !*(_BYTE *)(v13 + 4) || _tlgGuidIsZero((const struct _GUID *)(v13 + 24)) )
      v14 = 0LL;
    v31 = 0;
    v28 = 0;
    v25 = 0;
    v22 = 0;
    v29 = &v15;
    v30 = 1;
    v26 = &v16;
    v23 = &v17;
    v20 = &v18;
    v27 = 1;
    v24 = 4;
    v21 = 8;
    tlgWriteTransfer_EventWriteTransfer(v11, byte_1807E6486, (const GUID *)(v13 + 8), v14, 6u, &v19);
  }
  if ( !*((_DWORD *)this + 78) )
    wil::details::ThreadFailureCallbackHolder::StartWatching((GamingPostureCoreTelemetryProvider::SetGamingPostureStateActivity *)((char *)this + 288));
}
