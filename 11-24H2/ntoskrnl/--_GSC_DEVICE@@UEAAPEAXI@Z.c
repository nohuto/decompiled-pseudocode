/*
 * XREFs of ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x14069FAC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DEVICE@@UEAA@XZ @ 0x14069F9F4 (--1SC_DEVICE@@UEAA@XZ.c)
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 */

SC_DEVICE *__fastcall SC_DEVICE::`scalar deleting destructor'(SC_DEVICE *this, char a2)
{
  SC_DEVICE::~SC_DEVICE(this);
  if ( (a2 & 1) != 0 )
    PspUserApcKernelRoutine(this);
  return this;
}
