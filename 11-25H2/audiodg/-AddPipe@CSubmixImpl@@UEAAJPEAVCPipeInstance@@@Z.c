/*
 * XREFs of ?AddPipe@CSubmixImpl@@UEAAJPEAVCPipeInstance@@@Z @ 0x14003C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::AddPipe(CSubmixImpl *this, struct CPipeInstance *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 (__fastcall ***v5)(_QWORD, GUID *, __int64 **); // rcx
  int v6; // eax
  unsigned int v7; // esi
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 *v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v5 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 **))*((_QWORD *)this + 38);
  if ( !v5 )
  {
LABEL_8:
    if ( v4 )
      LeaveCriticalSection(v4);
    return 0LL;
  }
  v13 = 0LL;
  v6 = (**v5)(v5, &GUID_57386a31_7482_4b2f_89c9_c3dcf849c66d, &v13);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C6,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v6);
    if ( v13 )
      (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
    if ( v4 )
      LeaveCriticalSection(v4);
    return v7;
  }
  else
  {
    v8 = *v13;
    if ( (unsigned int)(*((_DWORD *)this + 64) - 2) <= 1 )
      v9 = (*(__int64 (__fastcall **)(__int64 *, struct CPipeInstance *))(v8 + 32))(v13, a2);
    else
      v9 = (*(__int64 (__fastcall **)(__int64 *, struct CPipeInstance *))(v8 + 24))(v13, a2);
    v10 = v9;
    if ( v9 >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
      goto LABEL_8;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CB,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v9);
    if ( v13 )
      (*(void (__fastcall **)(__int64 *))(*v13 + 16))(v13);
    if ( v4 )
      LeaveCriticalSection(v4);
    return v10;
  }
}
