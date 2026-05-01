/*
 * XREFs of ?BoostPriority@PriorityBoostHelper@@UEAAJXZ @ 0x1800AB0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ @ 0x1800AB160 (-BoostPriorityHelper@PriorityBoostHelper@@AEAAJXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall PriorityBoostHelper::BoostPriority(PriorityBoostHelper *this)
{
  const char *v2; // r9
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( GetCurrentThreadId() != *((_DWORD *)this + 22) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x60,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
      v2);
  ++*((_DWORD *)this + 23);
  v3 = PriorityBoostHelper::BoostPriorityHelper((PriorityBoostHelper *)((char *)this - 16));
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x62,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\priorityboosthelper.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
