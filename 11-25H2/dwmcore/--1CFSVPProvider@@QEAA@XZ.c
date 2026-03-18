/*
 * XREFs of ??1CFSVPProvider@@QEAA@XZ @ 0x18024B64C
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1801A885C (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??1CDDisplayRenderTarget@@MEAA@XZ @ 0x18027F880 (--1CDDisplayRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ @ 0x1802321F0 (-ReleaseWNFHandles@CFSVPProvider@@AEAAXXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@QEAA_NXZ @ 0x18024B7E4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SEBWorkerThread@@@details@wil@@QE.c)
 */

void __fastcall CFSVPProvider::~CFSVPProvider(CFSVPProvider *this)
{
  struct _TP_WORK *v2; // rcx

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SEBWorkerThread>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SEBWorkerThread>::GetImpl'::`2'::impl) )
  {
    v2 = (struct _TP_WORK *)*((_QWORD *)this + 3);
    if ( v2 )
    {
      WaitForThreadpoolWorkCallbacks(v2, 1);
      CloseThreadpoolWork(*((PTP_WORK *)this + 3));
      *((_QWORD *)this + 3) = 0LL;
    }
  }
  CFSVPProvider::ReleaseWNFHandles(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
}
