/*
 * XREFs of ?QueryInterface@CSystemEffectWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400359A0
 * Callers:
 *     ?QueryInterface@CSystemEffectWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140075720 (-QueryInterface@CSystemEffectWrapper@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140075730 (-QueryInterface@CSystemEffectWrapper@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140075740 (-QueryInterface@CSystemEffectWrapper@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140075750 (-QueryInterface@CSystemEffectWrapper@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140075760 (-QueryInterface@CSystemEffectWrapper@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140075770 (-QueryInterface@CSystemEffectWrapper@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140075780 (-QueryInterface@CSystemEffectWrapper@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140075790 (-QueryInterface@CSystemEffectWrapper@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400757A0 (-QueryInterface@CSystemEffectWrapper@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400757B0 (-QueryInterface@CSystemEffectWrapper@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400757C0 (-QueryInterface@CSystemEffectWrapper@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400757D0 (-QueryInterface@CSystemEffectWrapper@@WGA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSystemEffectWrapper@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400757E0 (-QueryInterface@CSystemEffectWrapper@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemEffectWrapper::QueryInterface(CSystemEffectWrapper *this, const struct _GUID *a2, void **a3)
{
  char *v4; // rcx

  v4 = (char *)*((_QWORD *)this + 22);
  if ( !v4 )
    v4 = (char *)this + 128;
  return (**(__int64 (__fastcall ***)(char *, const struct _GUID *, void **))v4)(v4, a2, a3);
}
