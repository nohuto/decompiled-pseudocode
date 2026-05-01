/*
 * XREFs of ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800CF1E0
 * Callers:
 *     ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800CF190 (-SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationScope@@W4ActivityFeedOperationState@@@Z @ 0x1802B1C00 (-OnActivityFeedOperationStateChanged@TaskFlowImmersiveShellBroker@@UEAAJW4ActivityFeedOperationS.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$PoliciesTaskFlowFeatureState@AEAE_N@TaskFlowDataEngineTelemetry@@SAXAEAE$$QEA_N@Z @ 0x1800CF544 (--$PoliciesTaskFlowFeatureState@AEAE_N@TaskFlowDataEngineTelemetry@@SAXAEAE$$QEA_N@Z.c)
 *     _lambda_328cf9fe8e40f62dbe0573cdd1213578_::operator() @ 0x1800CF5D0 (_lambda_328cf9fe8e40f62dbe0573cdd1213578_--operator().c)
 *     ?reset@?$unique_call@P6AXXZ$1?CDPShutdown@@YAXXZ$00@wil@@QEAAXXZ @ 0x1800CF6F8 (-reset@-$unique_call@P6AXXZ$1-CDPShutdown@@YAXXZ$00@wil@@QEAAXXZ.c)
 *     ?StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x18022221C (-StartActivityIndexer@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?TaskflowImmersiveShellBroker_StartupBegins@TaskFlowDataEngineTelemetry@@SAXXZ @ 0x1802AB18C (-TaskflowImmersiveShellBroker_StartupBegins@TaskFlowDataEngineTelemetry@@SAXXZ.c)
 *     ??$TaskflowDataEngine_CDPInitializeResult@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z @ 0x1802AB1B8 (--$TaskflowDataEngine_CDPInitializeResult@AEAJ@TaskFlowDataEngineTelemetry@@SAXAEAJ@Z.c)
 *     GetTimestamp @ 0x1802CE354 (GetTimestamp.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator() @ 0x1803FCD30 (_lambda_c6edb9ea9ae2a095d75d0a6fb7353035_--operator().c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall TaskFlowImmersiveShellBroker::ReinitializeObjects(TaskFlowImmersiveShellBroker *this)
{
  TaskFlowImmersiveShellBroker *v2; // rcx
  char v3; // r14
  int started; // eax
  char *v5; // rsi
  int v6; // ebx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  char v15; // [rsp+20h] [rbp-E0h] BYREF
  char v16; // [rsp+21h] [rbp-DFh] BYREF
  _WORD v17[2]; // [rsp+24h] [rbp-DCh] BYREF
  __int16 v18[2]; // [rsp+28h] [rbp-D8h] BYREF
  char v19; // [rsp+2Ch] [rbp-D4h] BYREF
  int v20; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v23[5]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v24[6]; // [rsp+68h] [rbp-98h] BYREF
  char v25; // [rsp+98h] [rbp-68h]
  _QWORD v26[14]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v27[112]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v28[32]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  v17[0] = 13;
  v21 = 0;
  TaskFlowDataEngineTelemetry::TaskflowImmersiveShellBroker_StartupBegins();
  v26[0] = GetTimestamp();
  memset_0(v27, 0, 0x68uLL);
  v20 = 0;
  v23[0] = &v20;
  v23[1] = v17;
  v23[2] = &v21;
  v23[3] = v26;
  v23[4] = v28;
  v24[0] = &v20;
  v24[1] = v26;
  v24[2] = v27;
  v24[3] = v28;
  v24[4] = v17;
  v24[5] = &v21;
  v3 = 1;
  v25 = 1;
  if ( !*((_QWORD *)this + 33) && *((_DWORD *)this + 48) != 2 )
  {
    started = TaskFlowImmersiveShellBroker::StartActivityIndexer(v2);
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x91,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)started);
    lambda_328cf9fe8e40f62dbe0573cdd1213578_::operator()(v23, 0LL);
  }
  v5 = (char *)this + 280;
  if ( !*((_BYTE *)this + 280) )
  {
    v6 = CDPInitialize();
    LODWORD(v22) = v6;
    lambda_328cf9fe8e40f62dbe0573cdd1213578_::operator()(v23, 1LL);
    TaskFlowDataEngineTelemetry::TaskflowDataEngine_CDPInitializeResult<long &>(&v22);
    if ( v6 >= 0 )
    {
      if ( v5 == &v19 )
      {
        CDPShutdown();
      }
      else
      {
        wil::unique_call<void (*)(void),&void CDPShutdown(void),1>::reset((char *)this + 280);
        *v5 = 1;
      }
      if ( !*((_QWORD *)this + 36) && *((_DWORD *)this + 48) != 2 )
      {
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 36);
        v7 = CDPGetUserActivitySettings((char *)this + 288);
        v8 = retaddr;
        if ( v7 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, char *))(**((_QWORD **)this + 36) + 40LL))(
                 *((_QWORD *)this + 36),
                 ((unsigned __int64)this + 136) & -(__int64)(this != 0LL),
                 (char *)this + 296);
          v8 = retaddr;
          if ( v7 >= 0 )
          {
LABEL_18:
            lambda_328cf9fe8e40f62dbe0573cdd1213578_::operator()(v23, 2LL);
            goto LABEL_19;
          }
          v9 = 164LL;
        }
        else
        {
          v9 = 162LL;
        }
        wil::details::in1diag3::_Log_Hr(
          v8,
          (void *)v9,
          (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v7);
        goto LABEL_18;
      }
    }
  }
LABEL_19:
  v16 = 0;
  lambda_328cf9fe8e40f62dbe0573cdd1213578_::operator()(v23, 3LL);
  v18[0] = 1;
  v10 = *((_QWORD *)this + 36);
  if ( !v10 )
    goto LABEL_23;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)v10 + 32LL))(v10, 3LL, v18);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xB1,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v11);
  lambda_328cf9fe8e40f62dbe0573cdd1213578_::operator()(v23, 4LL);
  if ( v18[0] )
LABEL_23:
    v3 = 0;
  v15 = v3;
  TaskFlowDataEngineTelemetry::PoliciesTaskFlowFeatureState<unsigned char &,bool>(&v16, &v15);
  if ( *((_DWORD *)this + 48) != 2 )
  {
    v12 = *((_QWORD *)this + 25);
    v22 = v12;
    if ( v12 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v12 + 80LL))(v12, 0LL);
      if ( v13 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xCD,
          (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v13);
      lambda_328cf9fe8e40f62dbe0573cdd1213578_::operator()(v23, 6LL);
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v25 = 0;
  lambda_c6edb9ea9ae2a095d75d0a6fb7353035_::operator()(v24);
  return 0LL;
}
