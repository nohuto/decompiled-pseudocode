/*
 * XREFs of ?MarkAsActive@CStreamInstance@@UEAAXXZ @ 0x14004AFB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CStreamInstance::MarkAsActive(CStreamInstance *this)
{
  *((_BYTE *)this + 96) = 1;
}
