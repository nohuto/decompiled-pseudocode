/*
 * XREFs of ?OnDisconnected@EdgyControllerClientProxy@@MEAAJXZ @ 0x180156C20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180079504 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AA40C (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnDisconnected(EdgyControllerClientProxy *this)
{
  __int64 *v2; // rbx
  const unsigned __int16 *v3; // rdx
  bool v4; // cf
  bool v5; // zf
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (__int64 *)((char *)this + 128);
  v3 = (const unsigned __int16 *)((char *)this + 88);
  v4 = *((_QWORD *)this + 14) < 7uLL;
  v5 = *((_QWORD *)this + 14) == 7LL;
  v6 = *(_QWORD *)(*((_QWORD *)this + 16) + 56LL);
  if ( !v4 && !v5 )
    v3 = *(const unsigned __int16 **)v3;
  v7 = Edges::Remove((Edges *)(v6 + 72), v3, this);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xE5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgyconnection.cpp",
      (const char *)(unsigned int)v7,
      v9);
  Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v2);
  return 0LL;
}
