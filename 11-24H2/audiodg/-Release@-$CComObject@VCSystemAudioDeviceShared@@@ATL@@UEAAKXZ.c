/*
 * XREFs of ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x14003ADA0
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x140071780 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x140071790 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ @ 0x1400717A0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WBI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WJI@EAAKXZ @ 0x1400717B0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WJI@EAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@WKA@EAAKXZ @ 0x1400717D0 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@WKA@EAAKXZ.c)
 * Callees:
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z @ 0x140053B50 (-SafeDecrementReferenceMultiThread@ATL@@YAKPECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CComObject<CSystemAudioDeviceShared>::Release(volatile int *a1)
{
  unsigned int v2; // edi

  v2 = ATL::SafeDecrementReferenceMultiThread(a1 + 56);
  if ( !v2 )
  {
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    if ( a1 )
      (*(void (__fastcall **)(volatile int *, __int64))(*(_QWORD *)a1 + 144LL))(a1, 1LL);
    (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  }
  return v2;
}
