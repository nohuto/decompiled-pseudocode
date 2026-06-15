/*
 * XREFs of ?IsActive@CStreamInstance@@UEAA_NXZ @ 0x1400497F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CStreamInstance::IsActive(CStreamInstance *this)
{
  return *((_BYTE *)this + 96);
}
