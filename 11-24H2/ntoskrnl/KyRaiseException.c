/*
 * XREFs of KyRaiseException @ 0x1403D4170
 * Callers:
 *     KiRaiseException @ 0x1403D3FF0 (KiRaiseException.c)
 * Callees:
 *     RtlpValidateContextXStateDisabledFeatures @ 0x1403D43B8 (RtlpValidateContextXStateDisabledFeatures.c)
 *     RtlpSanitizeContextFlags @ 0x1403D4970 (RtlpSanitizeContextFlags.c)
 *     RtlInitializeExtendedContext @ 0x1403D4E10 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403D4E90 (RtlGetExtendedContextLength.c)
 *     KeVerifyContextXStateCetU @ 0x1403D59C0 (KeVerifyContextXStateCetU.c)
 *     KeVerifyContextRecord @ 0x1403D5B40 (KeVerifyContextRecord.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeContextToKframes @ 0x1404F9380 (KeContextToKframes.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     RtlpReadExtendedContext @ 0x1409219A0 (RtlpReadExtendedContext.c)
 */

NTSTATUS __fastcall KyRaiseException(__int64 a1, CONTEXT_CHUNK *a2, __int64 a3, __int64 a4)
{
  CONTEXT_CHUNK *p_XState; // rsi
  char PreviousMode; // r15
  __int64 v7; // rax
  NTSTATUS result; // eax
  ULONG v9; // ebx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  void *v13; // rsp
  int v14; // edx
  int v15; // ecx
  PCONTEXT_EX v16; // rsi
  struct _KTHREAD *CurrentThread; // r14
  int v18; // r12d
  unsigned __int8 CurrentIrql; // di
  __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // r14d
  int v23; // eax
  __int64 v24; // [rsp+20h] [rbp-10h]
  __int64 v25; // [rsp+20h] [rbp-10h]
  ULONG ContextFlags; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF
  __int64 v29; // [rsp+40h] [rbp+10h]
  __int64 v30; // [rsp+48h] [rbp+18h]
  __int128 v31; // [rsp+50h] [rbp+20h] BYREF
  __int64 v32; // [rsp+60h] [rbp+30h]

  v29 = a4;
  v30 = a3;
  p_XState = a2;
  ContextEx = 0LL;
  ContextLength = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    goto LABEL_11;
  v7 = (__int64)&a2[6];
  if ( (unsigned __int64)&a2[6] >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  ContextFlags = *(_DWORD *)v7;
  LOBYTE(a2) = PreviousMode;
  result = RtlpSanitizeContextFlags(&ContextFlags, a2);
  if ( result >= 0 )
  {
    v9 = ContextFlags;
    result = RtlGetExtendedContextLength(ContextFlags, &ContextLength);
    if ( result >= 0 )
    {
      v10 = ContextLength + 15LL;
      if ( v10 <= ContextLength )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
      v12 = alloca(v11);
      v13 = alloca(v11);
      result = RtlInitializeExtendedContext((PCONTEXT)&ContextFlags, v9, &ContextEx);
      if ( result >= 0 )
      {
        v25 = (__int64)p_XState;
        v16 = ContextEx;
        LOBYTE(v14) = 1;
        result = RtlpReadExtendedContext(v15, v14, (_DWORD)ContextEx, v9, v25, 0LL);
        if ( result >= 0 )
        {
          p_XState = &v16[-39].XState;
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
              ContextEx = 0LL;
              if ( (int)KeVerifyContextXStateCetU(CurrentThread, p_XState, &ContextEx) < 0
                || (v31 = 0LL, v32 = 0LL, (int)KeVerifyContextRecord(CurrentThread, p_XState, &v31, &ContextEx) < 0) )
              {
                *(_DWORD *)(a1 + 4) |= 1u;
                v18 = 0;
              }
            }
          }
          v22 = RtlpValidateContextXStateDisabledFeatures(p_XState, CurrentThread->ExtendedFeatureDisableMask);
          if ( v22 >= 0 )
          {
            v23 = v29;
            *(_BYTE *)(v29 + 43) = 1;
            v22 = 0;
            if ( v18 )
            {
              LOBYTE(v24) = PreviousMode;
              KeContextToKframes(v23, v30, (_DWORD)p_XState, p_XState[6].Offset, v24);
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
          return v22;
        }
      }
    }
  }
  return result;
}
