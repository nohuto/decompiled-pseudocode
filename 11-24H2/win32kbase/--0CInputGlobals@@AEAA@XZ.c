/*
 * XREFs of ??0CInputGlobals@@AEAA@XZ @ 0x140145DEC
 * Callers:
 *     ?Initialize@CInputGlobals@@SAJXZ @ 0x140145D80 (-Initialize@CInputGlobals@@SAJXZ.c)
 * Callees:
 *     ?InitDimAndWakeSources@CInputGlobals@@AEAAXXZ @ 0x140145E64 (-InitDimAndWakeSources@CInputGlobals@@AEAAXXZ.c)
 */

CInputGlobals *__fastcall CInputGlobals::CInputGlobals(CInputGlobals *this)
{
  *((_QWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_OWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 1LL;
  *((_OWORD *)this + 5) = 0LL;
  *((_OWORD *)this + 6) = 0LL;
  *((_OWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_WORD *)this + 70) = 0;
  *((_BYTE *)this + 142) = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 18) = 30LL;
  CInputGlobals::InitDimAndWakeSources(this);
  return this;
}
