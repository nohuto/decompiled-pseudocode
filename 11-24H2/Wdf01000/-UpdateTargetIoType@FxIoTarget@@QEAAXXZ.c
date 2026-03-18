/*
 * XREFs of ?UpdateTargetIoType@FxIoTarget@@QEAAXXZ @ 0x14006260C
 * Callers:
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x14006203C (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 * Callees:
 *     ?GetTargetIoType@FxIoTarget@@IEAAEXZ @ 0x14002B560 (-GetTargetIoType@FxIoTarget@@IEAAEXZ.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 */

void __fastcall FxIoTarget::UpdateTargetIoType(FxIoTarget *this)
{
  __int64 v2; // rcx
  unsigned __int8 TargetIoType; // di
  const void *_a1; // rcx

  TargetIoType = FxIoTarget::GetTargetIoType(this);
  if ( TargetIoType != *(_BYTE *)(v2 + 337) && *(int *)(v2 + 332) > 1 )
  {
    _a1 = (const void *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(this->m_Globals, 2u, 0xEu, 0x3Au, WPP_FxIoTarget_cpp_Traceguids, _a1);
  }
  this->m_TargetIoType = TargetIoType;
}
