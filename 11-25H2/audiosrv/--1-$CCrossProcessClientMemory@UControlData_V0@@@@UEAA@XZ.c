/*
 * XREFs of ??1?$CCrossProcessClientMemory@UControlData_V0@@@@UEAA@XZ @ 0x18015CB18
 * Callers:
 *     ??_G?$CCrossProcessClientMemory@UControlData_V0@@@@UEAAPEAXI@Z @ 0x18015CBA0 (--_G-$CCrossProcessClientMemory@UControlData_V0@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x18015E454 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
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
