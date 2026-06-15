/*
 * XREFs of ?AddRef@CSystemEffectWrapper@@UEAAKXZ @ 0x140035860
 * Callers:
 *     ?AddRef@CSystemEffectWrapper@@W7EAAKXZ @ 0x140074E40 (-AddRef@CSystemEffectWrapper@@W7EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WBA@EAAKXZ @ 0x140074E50 (-AddRef@CSystemEffectWrapper@@WBA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WBI@EAAKXZ @ 0x140074E60 (-AddRef@CSystemEffectWrapper@@WBI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WCA@EAAKXZ @ 0x140074E70 (-AddRef@CSystemEffectWrapper@@WCA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WCI@EAAKXZ @ 0x140074E80 (-AddRef@CSystemEffectWrapper@@WCI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WDA@EAAKXZ @ 0x140074E90 (-AddRef@CSystemEffectWrapper@@WDA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WDI@EAAKXZ @ 0x140074EA0 (-AddRef@CSystemEffectWrapper@@WDI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WEA@EAAKXZ @ 0x140074EB0 (-AddRef@CSystemEffectWrapper@@WEA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WEI@EAAKXZ @ 0x140074EC0 (-AddRef@CSystemEffectWrapper@@WEI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WFA@EAAKXZ @ 0x140074ED0 (-AddRef@CSystemEffectWrapper@@WFA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WFI@EAAKXZ @ 0x140074EE0 (-AddRef@CSystemEffectWrapper@@WFI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WGA@EAAKXZ @ 0x140074EF0 (-AddRef@CSystemEffectWrapper@@WGA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WGI@EAAKXZ @ 0x140074F00 (-AddRef@CSystemEffectWrapper@@WGI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::AddRef(CSystemEffectWrapper *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 22);
  if ( !v2 )
    v2 = (char *)this + 128;
  return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 8LL))(v2);
}
