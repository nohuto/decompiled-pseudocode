/*
 * XREFs of ?GetOwningProcessSequenceNumber@CWindowNode@@UEBA_KXZ @ 0x18029E250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CWindowNode::GetOwningProcessSequenceNumber(CWindowNode *this)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax

  v1 = *((_QWORD *)this + 102);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 16);
  return result;
}
