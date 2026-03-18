/*
 * XREFs of ?OnChanged@CEffectBrush@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008D510
 * Callers:
 *     <none>
 * Callees:
 *     ?TryCreateEffectInstance@CEffectBrush@@AEAAJXZ @ 0x18008D544 (-TryCreateEffectInstance@CEffectBrush@@AEAAJXZ.c)
 */

_BOOL8 __fastcall CEffectBrush::OnChanged(CEffectBrush *a1)
{
  __int64 v2; // rcx
  _BOOL8 result; // rax

  CEffectBrush::TryCreateEffectInstance(a1);
  v2 = *((_QWORD *)a1 + 14);
  result = 0LL;
  if ( v2 )
    return *(_QWORD *)(v2 + 80) != 0LL;
  return result;
}
