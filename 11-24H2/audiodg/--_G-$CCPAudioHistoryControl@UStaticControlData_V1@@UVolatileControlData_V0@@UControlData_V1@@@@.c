/*
 * XREFs of ??_G?$CCPAudioHistoryControl@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAPEAXI@Z @ 0x14007FC80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall CCPAudioHistoryControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  *(_QWORD *)a1 = &CCPAudioHistoryControl<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable';
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
