/*
 * XREFs of ??_GSC_DISK@@UEAAPEAXI@Z @ 0x1406922D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SC_DISK@@UEAA@XZ @ 0x1406921D0 (--1SC_DISK@@UEAA@XZ.c)
 *     PspUserApcKernelRoutine @ 0x1408E08C0 (PspUserApcKernelRoutine.c)
 */

SC_DISK *__fastcall SC_DISK::`scalar deleting destructor'(SC_DISK *this, char a2)
{
  SC_DISK::~SC_DISK(this);
  if ( (a2 & 1) != 0 )
    PspUserApcKernelRoutine(this);
  return this;
}
