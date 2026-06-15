/*
 * XREFs of PbmPlayToStreamStateChanged @ 0x18003B450
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A130 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180018A8C (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall PbmPlayToStreamStateChanged(void *a1, int a2)
{
  unsigned int v3; // ebx
  int Process; // eax
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  volatile signed __int32 *v8; // rax
  volatile signed __int32 *v9; // [rsp+20h] [rbp-50h] BYREF
  int v10; // [rsp+28h] [rbp-48h]
  __int64 v11[2]; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+40h] [rbp-30h]
  __int64 *v13; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  struct CProcess *v15; // [rsp+90h] [rbp+20h] BYREF

  if ( a2 > 1 )
  {
    v3 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1ED,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
      (const char *)0x80070057LL);
    return v3;
  }
  if ( g_ApplicationManager )
  {
    v15 = 0LL;
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v15);
    v3 = Process;
    if ( Process < 0 )
    {
      v6 = (unsigned int)Process;
      v7 = 498LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
        (const char *)v6);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v15);
      return v3;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
      (__int64 *)&v9,
      (__int64 *)&v15);
    v10 = a2;
    v11[0] = (__int64)off_180051178;
    v8 = v9;
    v9 = 0LL;
    v11[1] = (__int64)v8;
    v13 = v11;
    v12 = a2;
    v3 = QueueGenericWorkItem(v11);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v9);
    if ( (v3 & 0x80000000) != 0 )
    {
      v6 = v3;
      v7 = 503LL;
      goto LABEL_9;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v15);
  }
  return 0LL;
}
