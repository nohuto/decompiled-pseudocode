/*
 * XREFs of ??1?$CCrossProcessClientMemory@UControlData_V0@@@@UEAA@XZ @ 0x1801658C8
 * Callers:
 *     ??_G?$CCrossProcessClientMemory@UControlData_V0@@@@UEAAPEAXI@Z @ 0x180165950 (--_G-$CCrossProcessClientMemory@UControlData_V0@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x180167B14 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 */

void __fastcall CCrossProcessClientMemory<ControlData_V0>::~CCrossProcessClientMemory<ControlData_V0>(
        CCrossProcessBaseMemory *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CCrossProcessClientMemory<ControlData_V0>::`vftable';
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
    AERTUnlockMemory(v2, *((unsigned int *)this + 6));
  *((_DWORD *)this + 11) = -1073741823;
  CCrossProcessBaseMemory::~CCrossProcessBaseMemory(this);
}
