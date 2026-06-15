/*
 * XREFs of ?MarkReleased@ReacquireResourceWorkItem@@UEAAHPEA_K@Z @ 0x1800E96E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ReacquireResourceWorkItem::MarkReleased(unsigned __int64 **this, unsigned __int64 **a2)
{
  __int64 result; // rax

  if ( a2 != (unsigned __int64 **)this[2] && (!*a2 || *a2 != this[3]) )
    return 0LL;
  this[2] = 0LL;
  result = 1LL;
  this[3] = 0LL;
  *((_DWORD *)this + 122) = 1;
  return result;
}
