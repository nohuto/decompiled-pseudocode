/*
 * XREFs of ?GetClientReleaseEvent@CAudioPump@@UEAAJPEAPEAUICrossProcessEvent@@0@Z @ 0x140066850
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$copy_to@UICrossProcessEvent@@@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUICrossProcessEvent@@@Z @ 0x140042C08 (--$copy_to@UICrossProcessEvent@@@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@w.c)
 */

__int64 __fastcall CAudioPump::GetClientReleaseEvent(
        CAudioPump *this,
        struct ICrossProcessEvent **a2,
        struct ICrossProcessEvent **a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::copy_to<ICrossProcessEvent>(
         (__int64 *)this + 51,
         a2);
  if ( v5 < 0 )
  {
    v6 = 1858LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::copy_to<ICrossProcessEvent>(
         (__int64 *)this + 53,
         a3);
  if ( v5 < 0 )
  {
    v6 = 1859LL;
    goto LABEL_3;
  }
  return 0LL;
}
