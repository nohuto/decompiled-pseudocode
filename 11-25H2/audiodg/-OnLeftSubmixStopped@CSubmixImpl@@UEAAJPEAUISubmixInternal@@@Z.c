/*
 * XREFs of ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140037D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z @ 0x140037F0C (-FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z.c)
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x140038114 (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 */

__int64 __fastcall CSubmixImpl::OnLeftSubmixStopped(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct CChildSubmixInstance *ChildSubmix; // rax
  CSubmixImpl *v6; // rcx
  int updated; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  ChildSubmix = CSubmixImpl::FindChildSubmix(this, a2);
  if ( ChildSubmix )
  {
    *((_BYTE *)ChildSubmix + 8) = 0;
    updated = CSubmixImpl::UpdateActiveStreamCount(v6, -1);
    if ( updated >= 0 )
    {
      if ( v2 )
        LeaveCriticalSection(v2);
      return 0LL;
    }
    v9 = 1005LL;
  }
  else
  {
    updated = -2005139430;
    v9 = 1002LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)updated);
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)updated;
}
