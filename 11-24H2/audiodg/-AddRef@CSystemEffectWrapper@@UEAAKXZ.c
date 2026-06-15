/*
 * XREFs of ?AddRef@CSystemEffectWrapper@@UEAAKXZ @ 0x140035560
 * Callers:
 *     ?AddRef@CSystemEffectWrapper@@W7EAAKXZ @ 0x140072940 (-AddRef@CSystemEffectWrapper@@W7EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WBA@EAAKXZ @ 0x140072950 (-AddRef@CSystemEffectWrapper@@WBA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WBI@EAAKXZ @ 0x140072960 (-AddRef@CSystemEffectWrapper@@WBI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WCA@EAAKXZ @ 0x140072970 (-AddRef@CSystemEffectWrapper@@WCA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WCI@EAAKXZ @ 0x140072980 (-AddRef@CSystemEffectWrapper@@WCI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WDA@EAAKXZ @ 0x140072990 (-AddRef@CSystemEffectWrapper@@WDA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WDI@EAAKXZ @ 0x1400729A0 (-AddRef@CSystemEffectWrapper@@WDI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WEA@EAAKXZ @ 0x1400729B0 (-AddRef@CSystemEffectWrapper@@WEA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WEI@EAAKXZ @ 0x1400729C0 (-AddRef@CSystemEffectWrapper@@WEI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WFA@EAAKXZ @ 0x1400729D0 (-AddRef@CSystemEffectWrapper@@WFA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WFI@EAAKXZ @ 0x1400729E0 (-AddRef@CSystemEffectWrapper@@WFI@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WGA@EAAKXZ @ 0x1400729F0 (-AddRef@CSystemEffectWrapper@@WGA@EAAKXZ.c)
 *     ?AddRef@CSystemEffectWrapper@@WGI@EAAKXZ @ 0x140072A00 (-AddRef@CSystemEffectWrapper@@WGI@EAAKXZ.c)
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
