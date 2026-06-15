/*
 * XREFs of PbmSetSmtcSubscriptionState @ 0x18003E180
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006290 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180006D70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800082D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AA80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18001895C (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     WPP_SF_d @ 0x18002DA54 (WPP_SF_d.c)
 */

__int64 __fastcall PbmSetSmtcSubscriptionState(void *a1, int a2, int a3)
{
  struct CProcess *v3; // rax
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r9
  CApplicationManager *v10; // rcx
  int Process; // eax
  volatile signed __int32 *v12; // rax
  volatile signed __int32 *v14; // [rsp+20h] [rbp-50h] BYREF
  int v15; // [rsp+28h] [rbp-48h]
  int v16; // [rsp+2Ch] [rbp-44h]
  __int64 v17[2]; // [rsp+30h] [rbp-40h] BYREF
  int v18; // [rsp+40h] [rbp-30h]
  int v19; // [rsp+44h] [rbp-2Ch]
  __int64 *v20; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  struct CProcess *v22; // [rsp+98h] [rbp+28h] BYREF

  v3 = 0LL;
  v22 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_07b734c94d88371036da2903467df5b5_Traceguids, a2);
    v3 = v22;
  }
  if ( a2 < 2 )
  {
    v10 = g_ApplicationManager;
    if ( g_ApplicationManager )
    {
      if ( v3 )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v3);
        v10 = g_ApplicationManager;
      }
      Process = CApplicationManager::RpcGetProcess(v10, a1, &v22);
      v7 = Process;
      if ( Process < 0 )
      {
        v9 = (unsigned int)Process;
        v8 = 274LL;
        goto LABEL_12;
      }
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
        (__int64 *)&v14,
        (__int64 *)&v22);
      v15 = a2;
      v17[0] = (__int64)off_180052630;
      v12 = v14;
      v14 = 0LL;
      v17[1] = (__int64)v12;
      v20 = v17;
      v16 = a3;
      v18 = a2;
      v19 = a3;
      v7 = QueueGenericWorkItem(v17);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v14);
      if ( v7 < 0 )
      {
        v9 = (unsigned int)v7;
        v8 = 279LL;
        goto LABEL_12;
      }
    }
    v7 = 0;
    goto LABEL_16;
  }
  v7 = -2147024809;
  v8 = 270LL;
  v9 = 2147942487LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
    (const char *)v9);
LABEL_16:
  wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v22);
  return (unsigned int)v7;
}
