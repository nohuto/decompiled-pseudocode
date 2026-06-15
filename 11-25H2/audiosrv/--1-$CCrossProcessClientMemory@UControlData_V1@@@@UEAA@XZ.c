/*
 * XREFs of ??1?$CCrossProcessClientMemory@UControlData_V1@@@@UEAA@XZ @ 0x18015CB58
 * Callers:
 *     ??_G?$CCrossProcessClientMemory@UControlData_V1@@@@UEAAPEAXI@Z @ 0x18015CBE0 (--_G-$CCrossProcessClientMemory@UControlData_V1@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x18015E454 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 */

void __fastcall CCrossProcessClientMemory<ControlData_V1>::~CCrossProcessClientMemory<ControlData_V1>(
        CCrossProcessBaseMemory *this)
{
  void *v2; // rcx

  *(_QWORD *)this = &CCrossProcessClientMemory<ControlData_V1>::`vftable';
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
    AERTUnlockMemory(v2, *((unsigned int *)this + 6));
  *((_DWORD *)this + 11) = -1073741823;
  CCrossProcessBaseMemory::~CCrossProcessBaseMemory(this);
}
