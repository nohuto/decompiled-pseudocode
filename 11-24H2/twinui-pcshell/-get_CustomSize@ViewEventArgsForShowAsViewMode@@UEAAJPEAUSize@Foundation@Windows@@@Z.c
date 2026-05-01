/*
 * XREFs of ?get_CustomSize@ViewEventArgsForShowAsViewMode@@UEAAJPEAUSize@Foundation@Windows@@@Z @ 0x180425FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::get_CustomSize(
        ViewEventArgsForShowAsViewMode *this,
        struct Windows::Foundation::Size *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)a2 = *((_QWORD *)this + 10);
  return result;
}
