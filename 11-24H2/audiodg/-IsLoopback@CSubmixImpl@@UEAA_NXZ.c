/*
 * XREFs of ?IsLoopback@CSubmixImpl@@UEAA_NXZ @ 0x140049E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CSubmixImpl::IsLoopback(CSubmixImpl *this)
{
  return (unsigned int)(*((_DWORD *)this + 64) - 2) <= 1;
}
