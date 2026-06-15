/*
 * XREFs of ?PopulateAudioHistoryForStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@_J11H@Z @ 0x1800F8050
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSharedStreamGroupProxy::PopulateAudioHistoryForStream(
        CSharedStreamGroupProxy *this,
        struct IAudioStreamInfo *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v8 = *(_QWORD *)a2;
  v13 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v8 + 192))(a2, &v13);
  v10 = v9;
  if ( v9 >= 0 )
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int))(*(_QWORD *)v13 + 56LL))(
            v13,
            a3,
            a4,
            a5,
            a6);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x571,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v9);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v13);
  return v10;
}
