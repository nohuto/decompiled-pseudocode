/*
 * XREFs of ?GetStreamCount@CBaseStreamGroupProxy@@UEAA_KXZ @ 0x1800F22D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetStreamCount(CBaseStreamGroupProxy *this)
{
  return (__int64)(*((_QWORD *)this + 25) - *((_QWORD *)this + 24)) >> 3;
}
