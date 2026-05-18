/*
 * XREFs of ?get_unexpected_or_default@@YAP6AXXZQEBU__vcrt_ptd@@@Z @ 0x18000FFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Microsoft VisualC v7/14 64bit runtime
void (*__fastcall get_unexpected_or_default(const struct __vcrt_ptd *const a1))(void)
{
  void (*result)(void); // rax

  result = (void (*)(void))"unknown exception";
  if ( *((_QWORD *)a1 + 1) )
    return (void (*)(void))*((_QWORD *)a1 + 1);
  return result;
}
