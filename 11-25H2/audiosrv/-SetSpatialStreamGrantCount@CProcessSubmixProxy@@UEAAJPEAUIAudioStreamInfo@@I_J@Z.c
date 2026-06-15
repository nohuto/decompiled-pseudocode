/*
 * XREFs of ?SetSpatialStreamGrantCount@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@I_J@Z @ 0x1800F37D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixProxy::SetSpatialStreamGrantCount(
        CProcessSubmixProxy *this,
        struct IAudioStreamInfo *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v6 = *(_QWORD *)a2;
  v11 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v6 + 192))(a2, &v11);
  v8 = v7;
  if ( v7 >= 0 )
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v11 + 48LL))(v11, a3, a4);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE4A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v11);
  return v8;
}
