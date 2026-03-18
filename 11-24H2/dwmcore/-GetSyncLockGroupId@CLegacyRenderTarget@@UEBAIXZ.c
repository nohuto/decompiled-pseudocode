/*
 * XREFs of ?GetSyncLockGroupId@CLegacyRenderTarget@@UEBAIXZ @ 0x1801F2040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::GetSyncLockGroupId(CLegacyRenderTarget *this)
{
  __int64 result; // rax

  result = *((_QWORD *)this + 4168);
  if ( result )
    return *(unsigned int *)(result + 8);
  return result;
}
