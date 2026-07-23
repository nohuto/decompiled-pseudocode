/*
 * XREFs of PoExecuteIdleCheck @ 0x1402ABB40
 * Callers:
 *     KiUpdateTime @ 0x1402AA2B0 (KiUpdateTime.c)
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     HalRequestIpi @ 0x140371AA0 (HalRequestIpi.c)
 *     PpmGetIdleConstrainedMask @ 0x1404AD2F4 (PpmGetIdleConstrainedMask.c)
 *     PpmEventAffinityMask @ 0x1405D6230 (PpmEventAffinityMask.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PoExecuteIdleCheck(unsigned __int64 a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdi
  unsigned __int16 i; // bx
  unsigned __int64 v5; // rdx
  unsigned int v6; // r14d
  struct _KPRCB *Prcb; // rax
  unsigned __int16 j; // cx
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v10[33]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v12[33]; // [rsp+150h] [rbp+48h] BYREF

  memset_0(v12, 0, 0x100uLL);
  memset_0(v10, 0, 0x100uLL);
  v11 = 2097153LL;
  result = (__int64)memset_0(v12, 0, 0x100uLL);
  if ( PpmIdleDurationExpirationTimeout )
  {
    if ( PpmIdleLastIdleDurationExpirationTime + PpmIdleDurationExpirationTimeout < a1 )
    {
      result = PpmGetIdleConstrainedMask(&v11);
      if ( (_BYTE)result )
      {
        PpmIdleLastIdleDurationExpirationTime = a1;
        v9 = 2097153LL;
        memset_0(v10, 0, 0x100uLL);
        v3 = v12[0];
        for ( i = 0; ; v3 = v12[i] )
        {
          while ( v3 )
          {
            _BitScanForward64(&v5, v3);
            v3 &= ~(1LL << v5);
            v6 = *((_DWORD *)qword_140F22998 + 64 * i + (unsigned __int8)v5);
            Prcb = (struct _KPRCB *)KeGetPrcb(v6);
            if ( Prcb != KeGetCurrentPrcb() && Prcb->PowerState.IdleTimeExpiration <= a1 )
              KeAddProcessorAffinityEx((unsigned __int16 *)&v9, v6);
          }
          result = ++i;
          if ( i >= (unsigned int)(unsigned __int16)v11 )
            break;
        }
        for ( j = 0; j < (unsigned __int16)v9; ++j )
        {
          result = j;
          if ( v10[j] )
          {
            PpmEventAffinityMask(&PPM_ETW_IDLE_DURATION_EXPIRATION);
            return HalRequestIpi(0LL, &v9);
          }
        }
      }
    }
  }
  return result;
}
