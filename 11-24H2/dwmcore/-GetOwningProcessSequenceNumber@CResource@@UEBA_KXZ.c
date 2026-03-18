/*
 * XREFs of ?GetOwningProcessSequenceNumber@CResource@@UEBA_KXZ @ 0x18025CB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CResource::GetOwningProcessSequenceNumber(CResource *this)
{
  unsigned __int64 result; // rax

  result = *((_QWORD *)this + 7);
  if ( result )
    return *(_QWORD *)(*(_QWORD *)(result + 64) + 16LL);
  return result;
}
