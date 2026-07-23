/*
 * XREFs of MiRemoveSystemImagePage @ 0x1403FF714
 * Callers:
 *     MiMakeDriverPageStayResident @ 0x1403F48C4 (MiMakeDriverPageStayResident.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 * Callees:
 *     MiTerminateWsle @ 0x140231080 (MiTerminateWsle.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiRemoveSystemImagePage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  volatile signed __int32 *v6; // rax
  __int64 result; // rax
  int v8; // ebx
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0;
  *(_BYTE *)(a3 + 35) |= 8u;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = *(_QWORD *)&KeNumberProcessorsGroup0[9];
  v5 = a2 << 25 >> 16;
  if ( v4 && (v5 < PsNtosImageEnd && v5 >= v4 || v5 < PsHalImageEnd && v5 >= (unsigned __int64)PsHalImageBase) )
    v6 = (volatile signed __int32 *)&xmmword_140E2D628 + 2;
  else
    v6 = (volatile signed __int32 *)&xmmword_140E2D628 + 3;
  _InterlockedDecrement(v6);
  result = MiTerminateWsle(a1, v5, 0, 1, &v9);
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait();
      }
      else
      {
        _mm_pause();
      }
      result = *(_QWORD *)(a3 + 24);
    }
    while ( result < 0 );
  }
  return result;
}
