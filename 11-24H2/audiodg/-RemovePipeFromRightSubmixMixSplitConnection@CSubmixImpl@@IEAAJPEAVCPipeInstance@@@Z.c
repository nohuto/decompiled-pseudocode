/*
 * XREFs of ?RemovePipeFromRightSubmixMixSplitConnection@CSubmixImpl@@IEAAJPEAVCPipeInstance@@@Z @ 0x14002DFC4
 * Callers:
 *     ?RemovePipeFromMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002DE60 (-RemovePipeFromMixSplitConnection@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CSubmixImpl::RemovePipeFromRightSubmixMixSplitConnection(
        CSubmixImpl *this,
        struct CPipeInstance *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 38);
  if ( !v3 )
    return 0LL;
  v9 = 0LL;
  v4 = (**v3)(v3, &GUID_57386a31_7482_4b2f_89c9_c3dcf849c66d, &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x372,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v4);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct CPipeInstance *))(*(_QWORD *)v9 + 160LL))(v9, a2);
    v5 = v6;
    if ( v6 >= 0 )
    {
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x374,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v6);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v5;
}
