/*
 * XREFs of ??_G?$CCrossProcessClientMemory@UControlData_V0@@@@UEAAPEAXI@Z @ 0x180165950
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$CCrossProcessClientMemory@UControlData_V0@@@@UEAA@XZ @ 0x1801658C8 (--1-$CCrossProcessClientMemory@UControlData_V0@@@@UEAA@XZ.c)
 */

CCrossProcessBaseMemory *__fastcall CCrossProcessClientMemory<ControlData_V0>::`scalar deleting destructor'(
        CCrossProcessBaseMemory *a1,
        char a2)
{
  CCrossProcessClientMemory<ControlData_V0>::~CCrossProcessClientMemory<ControlData_V0>(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
