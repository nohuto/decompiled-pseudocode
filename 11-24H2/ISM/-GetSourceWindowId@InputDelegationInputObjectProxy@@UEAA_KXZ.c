/*
 * XREFs of ?GetSourceWindowId@InputDelegationInputObjectProxy@@UEAA_KXZ @ 0x180080420
 * Callers:
 *     ?GetWindowId@MPCFocusTarget@@WFA@EAA_KXZ @ 0x1800FF870 (-GetWindowId@MPCFocusTarget@@WFA@EAA_KXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall InputDelegationInputObjectProxy::GetSourceWindowId(InputDelegationInputObjectProxy *this)
{
  return *((_QWORD *)this + 6);
}
