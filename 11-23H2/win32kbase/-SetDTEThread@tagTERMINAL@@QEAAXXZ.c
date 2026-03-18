/*
 * XREFs of ?SetDTEThread@tagTERMINAL@@QEAAXXZ @ 0x1C00C4110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall tagTERMINAL::SetDTEThread(tagTERMINAL *this)
{
  *((_QWORD *)this + 8) = **((_QWORD **)this + 2);
}
