/*
 * XREFs of ?GetFileActivityListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIFileActivityListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1803FE9B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::GetFileActivityListener(
        TaskFlowImmersiveShellBroker *this,
        struct Windows::Internal::Shell::TaskFlow::DataEngine::IFileActivityListener **a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, struct Windows::Internal::Shell::TaskFlow::DataEngine::IFileActivityListener **); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  if ( *((_DWORD *)this + 44) != 1 )
  {
    v2 = -2147467260;
    v3 = 354LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct Windows::Internal::Shell::TaskFlow::DataEngine::IFileActivityListener **))*((_QWORD *)this + 26);
  if ( v5 )
  {
    v2 = (**v5)(v5, &GUID_6405dff2_9eee_41c0_885e_034873207439, a2);
    if ( v2 < 0 )
    {
      v3 = 358LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
