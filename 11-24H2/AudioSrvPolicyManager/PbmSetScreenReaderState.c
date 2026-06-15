/*
 * XREFs of PbmSetScreenReaderState @ 0x18003B870
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??1?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000A130 (--1-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180018A8C (--0-$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall PbmSetScreenReaderState(void *a1, int a2, int a3)
{
  int Process; // eax
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v11; // [rsp+20h] [rbp-50h] BYREF
  int v12; // [rsp+28h] [rbp-48h]
  int v13; // [rsp+2Ch] [rbp-44h]
  __int64 v14[2]; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+40h] [rbp-30h]
  int v16; // [rsp+44h] [rbp-2Ch]
  __int64 *v17; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  struct CProcess *v19; // [rsp+98h] [rbp+28h] BYREF

  if ( g_ApplicationManager )
  {
    v19 = 0LL;
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v19);
    v6 = Process;
    if ( Process < 0 )
    {
      v7 = (unsigned int)Process;
      v8 = 568LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
        (const char *)v7);
      wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v19);
      return (unsigned int)v6;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::com_ptr_t<CProcess,wil::err_returncode_policy>(
      (__int64 *)&v11,
      (__int64 *)&v19);
    v12 = a2;
    v14[0] = (__int64)off_180051118;
    v9 = v11;
    v11 = 0LL;
    v14[1] = (__int64)v9;
    v17 = v14;
    v13 = a3;
    v15 = a2;
    v16 = a3;
    v6 = QueueGenericWorkItem(v14);
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>(&v11);
    if ( v6 < 0 )
    {
      v7 = (unsigned int)v6;
      v8 = 573LL;
      goto LABEL_6;
    }
    wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((volatile signed __int32 **)&v19);
  }
  return 0LL;
}
