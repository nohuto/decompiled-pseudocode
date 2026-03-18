/*
 * XREFs of MiRemoveSystemImagePage @ 0x1404803C4
 * Callers:
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiMakeDriverPageStayResident @ 0x1404373EC (MiMakeDriverPageStayResident.c)
 * Callees:
 *     MiTerminateWsle @ 0x1402856F0 (MiTerminateWsle.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiRemoveSystemImagePage(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  volatile signed __int32 *v5; // rax
  __int64 result; // rax
  unsigned int v7; // ebx
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  *(_BYTE *)(a3 + 35) |= 8u;
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v4 = a2 << 25 >> 16;
  if ( PsNtosImageBase && (v4 < PsNtosImageEnd && v4 >= PsNtosImageBase || v4 < PsHalImageEnd && v4 >= PsHalImageBase) )
    v5 = (volatile signed __int32 *)&xmmword_140E2D868 + 2;
  else
    v5 = (volatile signed __int32 *)&xmmword_140E2D868 + 3;
  _InterlockedDecrement(v5);
  result = MiTerminateWsle(a1, v4, 0, 1, &v8);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v7);
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
