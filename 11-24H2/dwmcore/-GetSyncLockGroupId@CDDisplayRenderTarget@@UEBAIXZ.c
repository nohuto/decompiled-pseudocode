/*
 * XREFs of ?GetSyncLockGroupId@CDDisplayRenderTarget@@UEBAIXZ @ 0x1802000B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetSyncLockGroupId(CDDisplayRenderTarget *this)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *((_QWORD *)this + 4169);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 8);
  return result;
}
