/*
 * XREFs of KiContinuePreviousModeUser @ 0x140261330
 * Callers:
 *     KiContinueEx @ 0x140260E20 (KiContinueEx.c)
 * Callees:
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     RtlpGetEntireXStateAreaLength @ 0x140261E20 (RtlpGetEntireXStateAreaLength.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1402622DC (KiVerifyContextXStateCetUEnabled.c)
 *     KiVerifyContextIpForUserCet @ 0x1402624F8 (KiVerifyContextIpForUserCet.c)
 *     KeContextToKframes @ 0x1404F93B0 (KeContextToKframes.c)
 *     KiLogUserCetSetContextIpValidationFailure @ 0x1405C29CC (KiLogUserCetSetContextIpValidationFailure.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpReadExtendedContext @ 0x140859000 (RtlpReadExtendedContext.c)
 *     PsWow64GetProcessMachine @ 0x140907610 (PsWow64GetProcessMachine.c)
 *     RtlGuardIsValidStackPointer @ 0x1409EAF70 (RtlGuardIsValidStackPointer.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140A42694 (RtlGuardIsValidWow64StackPointer.c)
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
  __int64 v16; // rdi
  __int64 v17; // r11
  ULONG v18; // ebx
  __int64 result; // rax
  bool v20; // cl
  NTSTATUS v21; // r13d
  char v22; // r9
  bool v23; // cl
  __int64 v24; // r10
  char v25; // di
  bool v26; // cl
  int v27; // eax
  int v28; // esi
  int v29; // ecx
  int v30; // r11d
  unsigned int v31; // esi
  __int64 v32; // rax
  void *v33; // rsp
  int v34; // edx
  BOOL v35; // ecx
  char v36; // r10
  ULONG64 v37; // r9
  __int64 v38; // r10
  char *v39; // r11
  __int64 v40; // rcx
  unsigned int v41; // edx
  char *v42; // r8
  struct _KTHREAD *v43; // r13
  _KPROCESS *Process; // rdi
  void *Teb; // r12
  _KPROCESS *v46; // rdi
  _KPROCESS *v47; // rsi
  int v48; // edi
  int v49; // r14d
  __int64 v50; // rcx
  __int64 v51; // r10
  _CONTEXT_EX *v52; // rax
  unsigned __int64 v53; // rdx
  unsigned int Flink_high; // r15d
  unsigned int v55; // r15d
  __int64 v56; // r9
  unsigned __int64 ExtendedFeatureDisableMask; // rdx
  __int16 v58; // ax
  __int64 v59; // [rsp+20h] [rbp-10h]
  PCONTEXT_EX ContextEx; // [rsp+30h] [rbp+0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp+8h]
  _BYTE v62[24]; // [rsp+40h] [rbp+10h] BYREF
  ULONG v63; // [rsp+58h] [rbp+28h]
  __int64 v64; // [rsp+60h] [rbp+30h]
  __int64 v65; // [rsp+68h] [rbp+38h]
  __int64 v66; // [rsp+70h] [rbp+40h]
  unsigned __int64 v67; // [rsp+C8h] [rbp+98h]

  v66 = a3;
  v65 = a2;
  v16 = a1;
  v64 = a1;
  ContextEx = 0LL;
  v17 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v18 = *(_DWORD *)(a1 + 48);
  v63 = v18;
  if ( a4 > 0xFF )
  {
    *(_OWORD *)v62 = *(_OWORD *)a4;
    *(_QWORD *)&v62[16] = *(_QWORD *)(a4 + 16);
    if ( (*(_DWORD *)&v62[4] & 0xFFFFFFFC) != 0 || *(_DWORD *)v62 >= 4u || *(_OWORD *)&v62[8] != 0LL )
      return 3221225485LL;
  }
  else
  {
    memset(v62, 0, sizeof(v62));
  }
  if ( (v18 & 0x27FFFF80) != 0x10000
    && (v18 & 0x7FFFF20) != 0x100000
    && ((v18 & 0x200000) == 0 || (v18 & 0x7DFFFF0) != 0)
    && (v18 & 0x7FFFFC0) != 0x400000 )
  {
    goto LABEL_113;
  }
  v20 = 0;
  if ( (v18 & 0x400020) != 0x400020 )
    v20 = (v18 & 0x10040) != 65600 && (v18 & 0x100040) != 1048640;
  if ( v20 || MEMORY[0xFFFFF780000003D8] )
  {
    if ( (v18 & 0x100080) != 0x100080 || (_BYTE)KiKernelCetEnabled )
    {
      result = 0LL;
      if ( (v18 & 0x100000) != 0 )
      {
LABEL_15:
        v21 = -1073741637;
        goto LABEL_16;
      }
LABEL_113:
      v18 = v18 & 0xF800001F | 0x100000;
      result = 0LL;
      goto LABEL_15;
    }
    v21 = -1073741637;
    result = 3221225659LL;
  }
  else
  {
    v21 = -1073741637;
    result = 3221225659LL;
  }
LABEL_16:
  if ( (int)result < 0 )
    return result;
  if ( (v18 & 0x27FFFF80) != 0x10000
    && (v18 & 0x7FFFF20) != 0x100000
    && ((v18 & 0x200000) == 0 || (v18 & 0x7DFFFF0) != 0)
    && (v18 & 0x7FFFFC0) != 0x400000 )
  {
    v31 = -1073741811;
    result = 3221225485LL;
    goto LABEL_47;
  }
  v22 = 1;
  v23 = 0;
  if ( (v18 & 0x400020) != 0x400020 )
    v23 = (v18 & 0x10040) != 65600 && (v18 & 0x100040) != 1048640;
  if ( !v23 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      goto LABEL_166;
    v22 = 3;
  }
  if ( (v18 & 0x100080) != 0x100080 )
    goto LABEL_26;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v22 |= 4u;
LABEL_26:
    v24 = 0LL;
    if ( (v22 & 2) != 0 )
      v24 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    if ( (v18 & 0x27FFFF80) != 0x10000
      && (v18 & 0x7FFFF20) != 0x100000
      && ((v18 & 0x200000) == 0 || (v18 & 0x7DFFFF0) != 0)
      && (v18 & 0x7FFFFC0) != 0x400000 )
    {
      v31 = -1073741811;
      result = 3221225485LL;
      goto LABEL_46;
    }
    v25 = 1;
    v26 = 0;
    if ( (v18 & 0x400020) != 0x400020 )
      v26 = (v18 & 0x10040) != 65600 && (v18 & 0x100040) != 1048640;
    if ( !v26 )
    {
      if ( !MEMORY[0xFFFFF780000003D8] )
      {
        result = 3221225659LL;
        goto LABEL_45;
      }
      v25 = 3;
    }
    if ( (v18 & 0x100080) != 0x100080 )
      goto LABEL_37;
    if ( (_BYTE)KiKernelCetEnabled )
    {
      v25 |= 4u;
LABEL_37:
      v27 = 0;
      v28 = 0;
      if ( (v18 & 0x10000) != 0 )
      {
        v27 = 716;
        v28 = 4;
      }
      else
      {
        if ( (v18 & 0x100000) != 0 )
        {
          v27 = 1232;
        }
        else
        {
          if ( (v18 & 0x200000) != 0 )
          {
            v27 = 416;
            v28 = 8;
            goto LABEL_41;
          }
          if ( (v18 & 0x400000) == 0 )
            goto LABEL_41;
          v27 = 912;
        }
        v28 = 16;
      }
LABEL_41:
      v29 = v27 + 32;
      if ( (v25 & 2) != 0 )
      {
        v49 = -v28 & (v29 + v28 - 1);
        if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        {
          v50 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
          if ( (v18 & 0x10000) != 0 )
          {
            v24 &= v50 & 0x40000000000009FFLL;
          }
          else if ( (v18 & 0x100000) != 0 )
          {
            v24 &= v50 & 0x4000000000060DFFLL;
          }
          else if ( (v18 & 0x400000) != 0 )
          {
            v24 = (unsigned __int8)v50 & (unsigned __int8)v24 & 4;
          }
          else
          {
            v24 = 0LL;
          }
        }
        v29 = RtlpGetEntireXStateAreaLength(v24) + v49 - v28 - 448;
      }
      v30 = v29 + 32;
      if ( (v25 & 4) == 0 )
        v30 = v29;
      v17 = (unsigned int)(v28 - 1 + v30);
      result = 0LL;
      goto LABEL_45;
    }
    result = 3221225659LL;
LABEL_45:
    v31 = -1073741811;
LABEL_46:
    v16 = v64;
    goto LABEL_47;
  }
LABEL_166:
  v31 = -1073741811;
  result = 3221225659LL;
LABEL_47:
  if ( (int)result < 0 )
    return result;
  v32 = v17 + 15;
  if ( v17 + 15 <= (unsigned __int64)(unsigned int)v17 )
    v32 = 0xFFFFFFFFFFFFFF0LL;
  v33 = alloca(v32 & 0xFFFFFFFFFFFFFFF0uLL);
  memset_0(&ContextEx, 0, (unsigned int)v17);
  if ( (v18 & 0x27FFFF80) == 0x10000
    || (v18 & 0x7FFFF20) == 0x100000
    || (v18 & 0x200000) != 0 && (v18 & 0x7DFFFF0) == 0
    || (v18 & 0x7FFFFC0) == 0x400000 )
  {
    v36 = 1;
    v35 = 0;
    if ( (v18 & 0x400020) != 0x400020 )
      v35 = (v18 & 0x10040) != 65600 && (v18 & 0x100040) != 1048640;
    if ( !v35 )
    {
      if ( !MEMORY[0xFFFFF780000003D8] )
        goto LABEL_62;
      v36 = 3;
    }
    if ( (v18 & 0x100080) == 0x100080 )
    {
      if ( !(_BYTE)KiKernelCetEnabled )
        goto LABEL_62;
      v36 |= 4u;
    }
    v37 = 0LL;
    if ( (v36 & 2) != 0 )
      v37 = MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708];
    v21 = RtlInitializeExtendedContext2((PCONTEXT)&ContextEx, v18, &ContextEx, v37);
  }
  else
  {
    v21 = -1073741811;
  }
LABEL_62:
  if ( v21 < 0 )
    return (unsigned int)v21;
  LOBYTE(v34) = 1;
  result = RtlpReadExtendedContext(v35, v34, (_DWORD)ContextEx, v18, v16, 0LL);
  if ( (int)result >= 0 )
  {
    ContextEx = 0LL;
    if ( (v64 & 0x100040) != 0x100040 )
    {
      v43 = CurrentThread;
      goto LABEL_86;
    }
    if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800) != 0
      && (MEMORY[0xFFFFF780000003EC] & 0xFFFFFFF8) == 0 )
    {
      v38 = SLODWORD(STACK[0x510]);
      if ( SLODWORD(STACK[0x500]) <= (int)v38
        && LODWORD(STACK[0x504]) + LODWORD(STACK[0x500]) >= (int)v38 + LODWORD(STACK[0x514]) )
      {
        v39 = (char *)&STACK[0x500] + v38;
        if ( (unsigned __int64 *)((char *)&STACK[0x500] + v38) )
        {
          if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
          {
            v42 = &v39[MEMORY[0xFFFFF78000000448] - 512];
            goto LABEL_85;
          }
          v40 = *((_QWORD *)v39 + 1);
          if ( (v40 & 0x800) != 0 )
          {
            v41 = 576;
            if ( (v40 & 4) != 0 )
              v41 = MEMORY[0xFFFFF7800000060C] + 576;
            if ( (v40 & 8) != 0 )
            {
              if ( (MEMORY[0xFFFFF780000005F8] & 8) != 0 )
                v41 = (v41 + 63) & 0xFFFFFFC0;
              v41 += MEMORY[0xFFFFF78000000610];
            }
            if ( (v40 & 0x10) != 0 )
            {
              if ( (MEMORY[0xFFFFF780000005F8] & 0x10) != 0 )
                v41 = (v41 + 63) & 0xFFFFFFC0;
              v41 += MEMORY[0xFFFFF78000000614];
            }
            if ( (v40 & 0x20) != 0 )
            {
              if ( (MEMORY[0xFFFFF780000005F8] & 0x20) != 0 )
                v41 = (v41 + 63) & 0xFFFFFFC0;
              v41 += MEMORY[0xFFFFF78000000618];
            }
            if ( (v40 & 0x40) != 0 )
            {
              if ( (MEMORY[0xFFFFF780000005F8] & 0x40) != 0 )
                v41 = (v41 + 63) & 0xFFFFFFC0;
              v41 += MEMORY[0xFFFFF7800000061C];
            }
            if ( (v40 & 0x80u) != 0LL )
            {
              if ( MEMORY[0xFFFFF780000005F8] < 0 )
                v41 = (v41 + 63) & 0xFFFFFFC0;
              v41 += MEMORY[0xFFFFF78000000620];
            }
            if ( (v40 & 0x100) != 0 )
            {
              if ( (MEMORY[0xFFFFF780000005F8] & 0x100) != 0 )
                v41 = (v41 + 63) & 0xFFFFFFC0;
              v41 += MEMORY[0xFFFFF78000000624];
            }
            if ( (v40 & 0x200) != 0 )
            {
              if ( (MEMORY[0xFFFFF780000005F8] & 0x200) != 0 )
                v41 = (v41 + 63) & 0xFFFFFFC0;
              v41 += MEMORY[0xFFFFF78000000628];
            }
            if ( (v40 & 0x400) != 0 )
            {
              if ( (MEMORY[0xFFFFF780000005F8] & 0x400) != 0 )
                v41 = (v41 + 63) & 0xFFFFFFC0;
              v41 += MEMORY[0xFFFFF7800000062C];
            }
            if ( (MEMORY[0xFFFFF780000005F8] & 0x800) != 0 )
              v41 = (v41 + 63) & 0xFFFFFFC0;
            v42 = &v39[v41 - 512];
LABEL_85:
            v43 = CurrentThread;
            if ( v42 )
            {
              v51 = SLODWORD(STACK[0x510]);
              v52 = (_CONTEXT_EX *)__readmsr(0x6A7u);
              ContextEx = v52;
              v53 = *(unsigned __int64 *)((char *)&ContextEx + v51 + 1232) & 0x800;
              if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
              {
                if ( v53 )
                {
                  result = KiVerifyContextXStateCetUEnabled(v42, v52);
                  if ( (int)result < 0 )
                    return result;
                }
                else
                {
                  *(PCONTEXT_EX *)((char *)&ContextEx + v51 + 1232) = (PCONTEXT_EX)(*(unsigned __int64 *)((char *)&ContextEx + v51 + 1232) | 0x800);
                  *(_QWORD *)v42 = 1LL;
                  *((_QWORD *)v42 + 1) = v52;
                }
              }
              else if ( v53 && (*(_QWORD *)v42 || *((_QWORD *)v42 + 1)) )
              {
                return 3221227018LL;
              }
            }
LABEL_86:
            Process = v43->Process;
            if ( (v64 & 0x100001) == 1048577 && (*(_BYTE *)&Process->0 & 0x20) != 0 )
            {
              Teb = v43->Teb;
              if ( !(unsigned int)RtlGuardIsValidStackPointer(v67, Teb) )
              {
                if ( !Process[1].ReadyTime )
                  return v31;
                v58 = WORD2(Process[3].PerProcessorCycleTimes);
                if ( v58 != 332 && v58 != 452
                  || v67 >= 0xFFFFFFFF
                  || !(unsigned int)RtlGuardIsValidWow64StackPointer((unsigned int)v67, Teb) )
                {
                  return (unsigned int)-1073741811;
                }
              }
            }
            v46 = v43->Process;
            if ( (v64 & 0x100001) != 0x100001 )
              goto LABEL_161;
            if ( (unsigned __int16)PsWow64GetProcessMachine(v43->Process) != 332
              && (!v46[3].Padding[5] || (_WORD)v65 != 35) )
            {
              LOWORD(v65) = 51;
            }
            v47 = v43->ApcState.Process;
            if ( (v43->MiscFlags & 0x100000) == 0 )
              goto LABEL_93;
            Flink_high = HIDWORD(v47[4].ThreadListHead.Flink);
            if ( (Flink_high & 0x20000) == 0 )
              goto LABEL_93;
            v55 = Flink_high >> 31;
            v48 = KiVerifyContextIpForUserCet(
                    (_DWORD)v43,
                    (unsigned int)&ContextEx,
                    (unsigned int)v62,
                    (unsigned __int8)v55,
                    (__int64)&ContextEx);
            if ( v48 == -1073740278 )
            {
              v56 = (unsigned __int8)v55 ^ 1u;
              if ( (HIDWORD(v47[4].ThreadListHead.Flink) & 0x40000) != 0 )
              {
                KiLogUserCetSetContextIpValidationFailure(1LL, *(unsigned int *)v62, a16, v56);
LABEL_93:
                v48 = 0;
                goto LABEL_94;
              }
              KiLogUserCetSetContextIpValidationFailure(2LL, *(unsigned int *)v62, a16, v56);
            }
LABEL_94:
            if ( v48 < 0 )
              return (unsigned int)v48;
LABEL_161:
            ExtendedFeatureDisableMask = v43->ExtendedFeatureDisableMask;
            if ( ExtendedFeatureDisableMask
              && (v64 & 0x100040) == 0x100040
              && (ExtendedFeatureDisableMask & *(unsigned __int64 *)((char *)&ContextEx + SLODWORD(STACK[0x510]) + 1232)) != 0 )
            {
              return 3221225485LL;
            }
            LOBYTE(v59) = 1;
            KeContextToKframes(v66, v65, (unsigned int)&ContextEx, v18, v59);
            return 0LL;
          }
        }
      }
    }
    v42 = 0LL;
    goto LABEL_85;
  }
  return result;
}
