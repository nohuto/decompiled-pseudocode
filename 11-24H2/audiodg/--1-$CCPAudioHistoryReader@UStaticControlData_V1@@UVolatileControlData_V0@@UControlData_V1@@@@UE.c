/*
 * XREFs of ??1?$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAA@XZ @ 0x14007FC18
 * Callers:
 *     ??_G?$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAPEAXI@Z @ 0x14007FCC0 (--_G-$CCPAudioHistoryReader@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@U.c)
 * Callees:
 *     <none>
 */

void __fastcall CCPAudioHistoryReader<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::~CCPAudioHistoryReader<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>(
        __int64 a1)
{
  *(_QWORD *)a1 = &CCPAudioHistoryReader<StaticControlData_V1,VolatileControlData_V0,ControlData_V1>::`vftable';
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  *(_DWORD *)(a1 + 12) = -1073741823;
}
