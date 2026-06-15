/*
 * XREFs of ?IsActive@CSubmixImpl@@UEAA_NXZ @ 0x140046200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSubmixImpl::IsActive(CSubmixImpl *this)
{
  return *((_DWORD *)this + 42) != 0;
}
