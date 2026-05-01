/*
 * XREFs of ?ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1804B95B0
 * Callers:
 *     ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z @ 0x1804B9780 (-s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_2136437049@@@details@wil@@QEAA_NXZ @ 0x1804B9744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_2136437049@@@details@wil@@QEAA_NX.c)
 */

void __fastcall CImpWorkerWndProc::ReleaseWndRef(HANDLE *this)
{
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_2136437049>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_2136437049>::GetImpl'::`2'::impl)
    && *((_BYTE *)this + 16)
    && (*((_DWORD *)this + 5))-- == 1 )
  {
    SetEvent(this[3]);
  }
}
