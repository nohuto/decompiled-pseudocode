/*
 * XREFs of ?vInit@RESTORESAVEDCATTRS@@QEAAXPEAVXDCOBJ@@@Z @ 0x14026DD50
 * Callers:
 *     ?bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z @ 0x140268328 (-bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z.c)
 *     ?GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x1403268F4 (-GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiEndPage @ 0x140327D80 (NtGdiEndPage.c)
 * Callees:
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x140153D60 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall RESTORESAVEDCATTRS::vInit(RESTORESAVEDCATTRS *this, struct XDCOBJ *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 44LL) & 2) != 0 )
    {
      XDCOBJ::RestoreAttributesHelper(a2);
      *(_DWORD *)(*(_QWORD *)a2 + 44LL) &= ~2u;
    }
  }
}
