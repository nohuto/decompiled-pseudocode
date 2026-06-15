/*
 * XREFs of ?GetStreamingResourceManager@CSubmixImpl@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14003A950
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::GetStreamingResourceManager(
        CSubmixImpl *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 38);
  if ( !v3 )
    return 2147500034LL;
  v8 = 0LL;
  v4 = (**v3)(v3, &GUID_57386a31_7482_4b2f_89c9_c3dcf849c66d, &v8);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DA,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v4);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64, struct IAudioStreamingResourceRegistration **))(*(_QWORD *)v8 + 112LL))(
           v8,
           a2);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v5;
}
