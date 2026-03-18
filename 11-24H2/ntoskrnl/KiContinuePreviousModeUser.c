/*
 * XREFs of KiContinuePreviousModeUser @ 0x1403E6E30
 * Callers:
 *     KiContinueEx @ 0x1403E6A90 (KiContinueEx.c)
 * Callees:
 *     RtlLocateExtendedFeature @ 0x140281BD0 (RtlLocateExtendedFeature.c)
 *     RtlInitializeExtendedContext @ 0x1403E7270 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x1403E72F0 (RtlGetExtendedContextLength.c)
 *     RtlpValidateContextFlags @ 0x1403E76B0 (RtlpValidateContextFlags.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1403E7F14 (KiVerifyContextXStateCetUEnabled.c)
 *     KiVerifyContextIpForUserCet @ 0x1403E8138 (KiVerifyContextIpForUserCet.c)
 *     KeContextToKframes @ 0x1404FBAC0 (KeContextToKframes.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1405C6D6C (KiLogUserCetSetContextIpValidationFailure.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PsWow64GetProcessMachine @ 0x1408FB0E0 (PsWow64GetProcessMachine.c)
 *     RtlpReadExtendedContext @ 0x1408FF0C0 (RtlpReadExtendedContext.c)
 *     RtlGuardIsValidStackPointer @ 0x1409E3B90 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140A468E8 (RtlGuardIsValidWow64StackPointer.c)
 */

__int64 __fastcall KiContinuePreviousModeUser(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v18; // edi
  __int64 result; // rax
  unsigned int v20; // r15d
  unsigned __int64 v21; // rax
  void *v22; // rsp
  int v23; // edx
  int v24; // ecx
  _QWORD *ExtendedFeature; // r8
  _KPROCESS *Process; // rsi
  _KPROCESS *v27; // rsi
  _KPROCESS *v28; // r13
  int v29; // esi
  __int64 v30; // r10
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  unsigned int Flink_high; // r12d
  unsigned int v34; // r12d
  __int64 v35; // r9
  unsigned __int64 ExtendedFeatureDisableMask; // rdx
  __int16 v37; // ax
  __int64 v38; // [rsp+20h] [rbp-10h]
  _DWORD v39[2]; // [rsp+30h] [rbp+0h] BYREF
  unsigned __int64 v40; // [rsp+38h] [rbp+8h] BYREF
  _BYTE v41[24]; // [rsp+40h] [rbp+10h] BYREF
  unsigned int v42; // [rsp+58h] [rbp+28h]
  void *Teb; // [rsp+60h] [rbp+30h]
  __int64 v44; // [rsp+68h] [rbp+38h]
  __int64 v45; // [rsp+70h] [rbp+40h]
  unsigned __int64 v46; // [rsp+C8h] [rbp+98h]

  v45 = a3;
  v44 = a2;
  v40 = 0LL;
  v39[0] = 0;
  CurrentThread = KeGetCurrentThread();
  v18 = *(_DWORD *)(a1 + 48);
  v42 = v18;
  if ( a4 > 0xFF )
  {
    *(_OWORD *)v41 = *(_OWORD *)a4;
    *(_QWORD *)&v41[16] = *(_QWORD *)(a4 + 16);
    if ( (*(_DWORD *)&v41[4] & 0xFFFFFFFC) != 0 || *(_DWORD *)v41 >= 4u || *(_OWORD *)&v41[8] != 0LL )
      return 3221225485LL;
  }
  else
  {
    memset(v41, 0, sizeof(v41));
  }
  result = RtlpValidateContextFlags(v18, 0LL);
  if ( (int)result < 0 || (v18 & 0x100000) != 0 )
  {
    v20 = -1073741811;
    if ( (_DWORD)result != -1073741811 )
      goto LABEL_10;
  }
  else
  {
    v20 = -1073741811;
  }
  v18 = v18 & 0xF800001F | 0x100000;
  result = 0LL;
LABEL_10:
  if ( (int)result >= 0 )
  {
    result = RtlGetExtendedContextLength(v18, v39);
    if ( (int)result >= 0 )
    {
      v21 = v39[0] + 15LL;
      if ( v21 <= v39[0] )
        v21 = 0xFFFFFFFFFFFFFF0LL;
      v22 = alloca(v21 & 0xFFFFFFFFFFFFFFF0uLL);
      memset_0(v39, 0, v39[0]);
      result = RtlInitializeExtendedContext(v39, v18, &v40);
      if ( (int)result >= 0 )
      {
        LOBYTE(v23) = 1;
        result = RtlpReadExtendedContext(v24, v23, v40, v18, a1, 0LL);
        if ( (int)result >= 0 )
        {
          v40 = 0LL;
          if ( ((unsigned int)Teb & 0x100040) != 0x100040 )
            goto LABEL_18;
          ExtendedFeature = (_QWORD *)RtlLocateExtendedFeature((__int64)&STACK[0x500], 11);
          if ( !ExtendedFeature )
            goto LABEL_18;
          v30 = SLODWORD(STACK[0x510]);
          v31 = __readmsr(0x6A7u);
          v40 = v31;
          v32 = *(_QWORD *)((_BYTE *)&v39[308] + v30) & 0x800LL;
          if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
          {
            if ( v32 )
            {
              result = KiVerifyContextXStateCetUEnabled(ExtendedFeature, v31);
              if ( (int)result < 0 )
                return result;
            }
            else
            {
              *(_QWORD *)((char *)&v39[308] + v30) |= 0x800uLL;
              *ExtendedFeature = 1LL;
              ExtendedFeature[1] = v31;
            }
          }
          else if ( v32 && (*ExtendedFeature || ExtendedFeature[1]) )
          {
            return 3221227018LL;
          }
LABEL_18:
          Process = CurrentThread->Process;
          if ( (*(_DWORD *)&Process->0 & 0x20) != 0 && ((unsigned int)Teb & 0x100001) == 0x100001 )
          {
            Teb = CurrentThread->Teb;
            if ( !(unsigned int)RtlGuardIsValidStackPointer(v46, Teb, ExtendedFeature) )
            {
              if ( !Process[1].ReadyTime )
                return v20;
              v37 = WORD2(Process[3].PerProcessorCycleTimes);
              if ( v37 != 332 && v37 != 452 )
                return v20;
              if ( v46 >= 0xFFFFFFFF || !(unsigned int)RtlGuardIsValidWow64StackPointer((unsigned int)v46, Teb) )
                return v20;
            }
          }
          v27 = CurrentThread->Process;
          if ( ((unsigned int)Teb & 0x100001) != 0x100001 )
          {
LABEL_43:
            ExtendedFeatureDisableMask = CurrentThread->ExtendedFeatureDisableMask;
            if ( !ExtendedFeatureDisableMask
              || ((unsigned int)Teb & 0x100040) != 0x100040
              || (ExtendedFeatureDisableMask & *(_QWORD *)((_BYTE *)&v39[308] + SLODWORD(STACK[0x510]))) == 0 )
            {
              LOBYTE(v38) = 1;
              KeContextToKframes(v45, v44, (unsigned int)v39, v18, v38);
              return 0LL;
            }
            return v20;
          }
          if ( (unsigned __int16)PsWow64GetProcessMachine(CurrentThread->Process) != 332
            && (!v27[3].Padding[5] || (_WORD)v44 != 35) )
          {
            LOWORD(v44) = 51;
          }
          v28 = CurrentThread->ApcState.Process;
          if ( (CurrentThread->MiscFlags & 0x100000) == 0 )
            goto LABEL_26;
          Flink_high = HIDWORD(v28[4].ThreadListHead.Flink);
          if ( (Flink_high & 0x20000) == 0 )
            goto LABEL_26;
          v34 = Flink_high >> 31;
          v29 = KiVerifyContextIpForUserCet(
                  (_DWORD)CurrentThread,
                  (unsigned int)v39,
                  (unsigned int)v41,
                  (unsigned __int8)v34,
                  (__int64)&v40);
          if ( v29 == -1073740278 )
          {
            v35 = (unsigned __int8)v34 ^ 1u;
            if ( (HIDWORD(v28[4].ThreadListHead.Flink) & 0x40000) != 0 )
            {
              KiLogUserCetSetContextIpValidationFailure(1LL, *(unsigned int *)v41, a16, v35);
LABEL_26:
              v29 = 0;
              goto LABEL_27;
            }
            KiLogUserCetSetContextIpValidationFailure(2LL, *(unsigned int *)v41, a16, v35);
          }
LABEL_27:
          if ( v29 < 0 )
            return (unsigned int)v29;
          goto LABEL_43;
        }
      }
    }
  }
  return result;
}
