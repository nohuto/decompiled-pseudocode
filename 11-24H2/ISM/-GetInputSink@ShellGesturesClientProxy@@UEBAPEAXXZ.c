/*
 * XREFs of ?GetInputSink@ShellGesturesClientProxy@@UEBAPEAXXZ @ 0x18007D800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall ShellGesturesClientProxy::GetInputSink(ShellGesturesClientProxy *this)
{
  __int64 v1; // rdx
  void *result; // rax

  v1 = *((_QWORD *)this + 1);
  result = 0LL;
  if ( v1 )
    return *(void **)v1;
  return result;
}
