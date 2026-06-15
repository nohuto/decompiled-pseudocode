/*
 * XREFs of ?Release@CSystemEffectWrapper@@UEAAKXZ @ 0x1400355B0
 * Callers:
 *     ?Release@CSystemEffectWrapper@@W7EAAKXZ @ 0x140075920 (-Release@CSystemEffectWrapper@@W7EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WBA@EAAKXZ @ 0x140075930 (-Release@CSystemEffectWrapper@@WBA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WBI@EAAKXZ @ 0x140075940 (-Release@CSystemEffectWrapper@@WBI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WCA@EAAKXZ @ 0x140075950 (-Release@CSystemEffectWrapper@@WCA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WCI@EAAKXZ @ 0x140075960 (-Release@CSystemEffectWrapper@@WCI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WDA@EAAKXZ @ 0x140075970 (-Release@CSystemEffectWrapper@@WDA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WDI@EAAKXZ @ 0x140075980 (-Release@CSystemEffectWrapper@@WDI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WEA@EAAKXZ @ 0x140075990 (-Release@CSystemEffectWrapper@@WEA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WEI@EAAKXZ @ 0x1400759A0 (-Release@CSystemEffectWrapper@@WEI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WFA@EAAKXZ @ 0x1400759B0 (-Release@CSystemEffectWrapper@@WFA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WFI@EAAKXZ @ 0x1400759C0 (-Release@CSystemEffectWrapper@@WFI@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WGA@EAAKXZ @ 0x1400759D0 (-Release@CSystemEffectWrapper@@WGA@EAAKXZ.c)
 *     ?Release@CSystemEffectWrapper@@WGI@EAAKXZ @ 0x1400759E0 (-Release@CSystemEffectWrapper@@WGI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::Release(CSystemEffectWrapper *this)
{
  char *v2; // rcx

  v2 = (char *)*((_QWORD *)this + 22);
  if ( !v2 )
    v2 = (char *)this + 128;
  return (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
}
