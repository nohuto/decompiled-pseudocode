/*
 * XREFs of ?GetViewId@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x180078200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::GetViewId(DWMFocusedInputTarget *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 13);
  return 0LL;
}
