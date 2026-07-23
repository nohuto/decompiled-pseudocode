/*
 * XREFs of ??1SC_DEVICE@@UEAA@XZ @ 0x14069F9F4
 * Callers:
 *     ??1SC_DISK@@UEAA@XZ @ 0x14069E604 (--1SC_DISK@@UEAA@XZ.c)
 *     ??_GSC_DEVICE@@UEAAPEAXI@Z @ 0x14069FAC0 (--_GSC_DEVICE@@UEAAPEAXI@Z.c)
 * Callees:
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 */

void __fastcall SC_DEVICE::~SC_DEVICE(SC_DEVICE *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  *(_QWORD *)this = &SC_DEVICE::`vftable';
  v2 = *((_QWORD *)this + 24);
  if ( v2 )
    PspUserApcKernelRoutine(v2);
  v3 = *((_QWORD *)this + 23);
  if ( v3 )
    PspUserApcKernelRoutine(v3);
  v4 = *((_QWORD *)this + 22);
  if ( v4 )
    PspUserApcKernelRoutine(v4);
  v5 = *((_QWORD *)this + 20);
  if ( v5 )
    PspUserApcKernelRoutine(v5);
  v6 = *((_QWORD *)this + 19);
  if ( v6 )
    PspUserApcKernelRoutine(v6);
  v7 = *((_QWORD *)this + 21);
  if ( v7 )
    PspUserApcKernelRoutine(v7);
  v8 = *((_QWORD *)this + 10);
  if ( v8 )
    PspUserApcKernelRoutine(v8);
  v9 = *((_QWORD *)this + 8);
  if ( v9 )
    PspUserApcKernelRoutine(v9);
  v10 = *((_QWORD *)this + 6);
  if ( v10 )
    PspUserApcKernelRoutine(v10);
  v11 = *((_QWORD *)this + 4);
  if ( v11 )
    PspUserApcKernelRoutine(v11);
}
