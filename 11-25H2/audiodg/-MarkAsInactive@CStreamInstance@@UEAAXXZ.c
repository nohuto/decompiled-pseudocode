/*
 * XREFs of ?MarkAsInactive@CStreamInstance@@UEAAXXZ @ 0x14004A1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CStreamInstance::MarkAsInactive(CStreamInstance *this)
{
  *((_BYTE *)this + 96) = 0;
}
