/*
 * XREFs of KyRaiseException @ 0x1403E65D0
 * Callers:
 *     KiRaiseException @ 0x1403E6450 (KiRaiseException.c)
 * Callees:
 *     RtlpValidateContextXStateDisabledFeatures @ 0x1403E6818 (RtlpValidateContextXStateDisabledFeatures.c)
 *     RtlpSanitizeContextFlags @ 0x1403E6DD0 (RtlpSanitizeContextFlags.c)
 *     RtlInitializeExtendedContext @ 0x1403E7270 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403E72F0 (RtlGetExtendedContextLength.c)
 *     KeVerifyContextXStateCetU @ 0x1403E7E20 (KeVerifyContextXStateCetU.c)
 *     KeVerifyContextRecord @ 0x1403E7FA0 (KeVerifyContextRecord.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeContextToKframes @ 0x1404FBAC0 (KeContextToKframes.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     RtlpReadExtendedContext @ 0x1408FF0C0 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall KyRaiseException(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char PreviousMode; // r15
  __int64 v7; // rax
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  void *v13; // rsp
  int v14; // edx
  int v15; // ecx
  __int64 v16; // rsi
  struct _KTHREAD *CurrentThread; // r14
  int v18; // r12d
  unsigned __int8 CurrentIrql; // di
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r14d
  int v23; // eax
  __int64 v24; // [rsp+20h] [rbp-10h]
  __int64 v25; // [rsp+20h] [rbp-10h]
  unsigned int v26; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v27; // [rsp+34h] [rbp+4h] BYREF
  __int64 v28; // [rsp+38h] [rbp+8h] BYREF
  __int64 v29; // [rsp+40h] [rbp+10h]
  __int64 v30; // [rsp+48h] [rbp+18h]
  __int128 v31; // [rsp+50h] [rbp+20h] BYREF
  __int64 v32; // [rsp+60h] [rbp+30h]

  v29 = a4;
  v30 = a3;
  v4 = a2;
  v28 = 0LL;
  v27 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    goto LABEL_11;
  v7 = a2 + 48;
  if ( (unsigned __int64)(a2 + 48) >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  v26 = *(_DWORD *)v7;
  LOBYTE(a2) = PreviousMode;
  result = RtlpSanitizeContextFlags(&v26, a2);
  if ( (int)result >= 0 )
  {
    v9 = v26;
    result = RtlGetExtendedContextLength(v26, &v27);
    if ( (int)result >= 0 )
    {
      v10 = v27 + 15LL;
      if ( v10 <= v27 )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
      v12 = alloca(v11);
      v13 = alloca(v11);
      result = RtlInitializeExtendedContext(&v26, v9, &v28);
      if ( (int)result >= 0 )
      {
        v25 = v4;
        v16 = v28;
        LOBYTE(v14) = 1;
        result = RtlpReadExtendedContext(v15, v14, v28, v9, v25, 0LL);
        if ( (int)result >= 0 )
        {
          v4 = v16 - 1232;
LABEL_11:
          CurrentThread = KeGetCurrentThread();
          v18 = 1;
          CurrentIrql = KeGetCurrentIrql();
          if ( !CurrentIrql )
          {
            v20 = KeGetCurrentIrql();
            __writecr8(1uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(a2) = 1;
              KiRaiseIrqlProcessIrqlFlags(v20, a2);
            }
          }
          if ( PreviousMode )
          {
            if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
            {
              v28 = 0LL;
              if ( (int)KeVerifyContextXStateCetU(CurrentThread, v4, &v28) < 0
                || (v31 = 0LL, v32 = 0LL, (int)KeVerifyContextRecord(CurrentThread, v4, &v31, &v28) < 0) )
              {
                *(_DWORD *)(a1 + 4) |= 1u;
                v18 = 0;
              }
            }
          }
          v22 = RtlpValidateContextXStateDisabledFeatures(v4, CurrentThread->ExtendedFeatureDisableMask);
          if ( v22 >= 0 )
          {
            v23 = v29;
            *(_BYTE *)(v29 + 43) = 1;
            v22 = 0;
            if ( v18 )
            {
              LOBYTE(v24) = PreviousMode;
              KeContextToKframes(v23, v30, v4, *(_DWORD *)(v4 + 48), v24);
            }
          }
          if ( !CurrentIrql )
          {
            if ( KiIrqlFlags )
            {
              LOBYTE(v21) = 0;
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v21);
            }
            __writecr8(0LL);
          }
          return (unsigned int)v22;
        }
      }
    }
  }
  return result;
}
