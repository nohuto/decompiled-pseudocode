/*
 * XREFs of ??0CInputGlobals@@AEAA@XZ @ 0x1C0082B54
 * Callers:
 *     ?Initialize@CInputGlobals@@SAJXZ @ 0x1C0082AD0 (-Initialize@CInputGlobals@@SAJXZ.c)
 * Callees:
 *     ?UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ @ 0x1C0095D40 (-UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

CInputGlobals *__fastcall CInputGlobals::CInputGlobals(CInputGlobals *this)
{
  int v1; // edi

  v1 = 0;
  *((_QWORD *)this + 2) = 0LL;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_WORD *)this + 42) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 48) = 0;
  *((_BYTE *)this + 98) = 0;
  *(_QWORD *)((char *)this + 100) = 30LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  if ( qword_1C0296DA8 && (int)qword_1C0296DA8() >= 0 )
    CInputGlobals::UpdateWakeOnInputDeviceTypesFromRegistry(this);
  if ( qword_1C0296DB8 && (int)qword_1C0296DB8() >= 0 )
  {
    if ( qword_1C0296DC0 )
      v1 = qword_1C0296DC0();
    *((_DWORD *)this + 26) = v1;
  }
  return this;
}
