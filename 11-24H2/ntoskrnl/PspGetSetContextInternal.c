/*
 * XREFs of PspGetSetContextInternal @ 0x1409882C0
 * Callers:
 *     PspGetSetContextSpecialApc @ 0x1406B4720 (PspGetSetContextSpecialApc.c)
 * Callees:
 *     RtlVirtualUnwind2 @ 0x140233750 (RtlVirtualUnwind2.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140234380 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     RtlpValidateContextXStateDisabledFeatures @ 0x1403D43B8 (RtlpValidateContextXStateDisabledFeatures.c)
 *     KeVerifyContextIpForUserCet @ 0x1403D4570 (KeVerifyContextIpForUserCet.c)
 *     RtlGetExtendedContextLength @ 0x1403D4E90 (RtlGetExtendedContextLength.c)
 *     KeVerifyContextXStateCetU @ 0x1403D59C0 (KeVerifyContextXStateCetU.c)
 *     KeVerifyContextRecord @ 0x1403D5B40 (KeVerifyContextRecord.c)
 *     RtlpIsFrameInBoundsEx @ 0x1404059C0 (RtlpIsFrameInBoundsEx.c)
 *     RtlpCaptureContext @ 0x1404FA140 (RtlpCaptureContext.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VslGetSetSecureContext @ 0x14070D58C (VslGetSetSecureContext.c)
 *     PspSetContextState @ 0x14077C808 (PspSetContextState.c)
 *     RtlCopyContext @ 0x140921110 (RtlCopyContext.c)
 *     PspGetContext @ 0x140988970 (PspGetContext.c)
 *     PspSetContext @ 0x140988D80 (PspSetContext.c)
 */

__int64 __fastcall PspGetSetContextInternal(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v6; // r13
  struct _KTHREAD *CurrentThread; // r15
  bool v8; // zf
  ULONG v9; // r12d
  _QWORD *i; // rdi
  _KTRAP_FRAME *TrapFrame; // rdi
  unsigned __int64 v12; // rbx
  int v13; // eax
  int v14; // r12d
  int SetSecureContext; // eax
  __int64 result; // rax
  __int64 v17; // rdx
  char v18; // r9
  _QWORD *j; // rcx
  __int64 v20; // rdx
  _CONTEXT *v21; // rbx
  __int64 v22; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v23; // [rsp+80h] [rbp-88h]
  ULONG ContextLength; // [rsp+88h] [rbp-80h] BYREF
  __int64 v25; // [rsp+90h] [rbp-78h] BYREF
  unsigned __int64 v26; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v27; // [rsp+A0h] [rbp-68h] BYREF
  _KTRAP_FRAME *v28; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v30; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-40h]
  __int128 v32; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-28h]
  void *v34[8]; // [rsp+E8h] [rbp-20h] BYREF
  char v35[144]; // [rsp+128h] [rbp+20h] BYREF
  char v36; // [rsp+1B8h] [rbp+B0h] BYREF
  unsigned __int64 v37; // [rsp+1C0h] [rbp+B8h] BYREF
  char v38; // [rsp+1C8h] [rbp+C0h] BYREF
  char v39; // [rsp+1D0h] [rbp+C8h] BYREF
  char v40; // [rsp+1D8h] [rbp+D0h] BYREF
  char v41; // [rsp+200h] [rbp+F8h] BYREF
  char v42; // [rsp+208h] [rbp+100h] BYREF
  char v43; // [rsp+210h] [rbp+108h] BYREF
  char v44; // [rsp+218h] [rbp+110h] BYREF
  unsigned __int64 v45; // [rsp+220h] [rbp+118h]
  char v46; // [rsp+328h] [rbp+220h] BYREF
  char v47; // [rsp+338h] [rbp+230h] BYREF
  char v48; // [rsp+348h] [rbp+240h] BYREF
  char v49; // [rsp+358h] [rbp+250h] BYREF
  char v50; // [rsp+368h] [rbp+260h] BYREF
  char v51; // [rsp+378h] [rbp+270h] BYREF
  char v52; // [rsp+388h] [rbp+280h] BYREF
  char v53; // [rsp+398h] [rbp+290h] BYREF
  char v54; // [rsp+3A8h] [rbp+2A0h] BYREF
  char v55; // [rsp+3B8h] [rbp+2B0h] BYREF

  v3 = a3;
  v4 = (_QWORD *)(a1 + 128);
  v28 = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  LOBYTE(v22) = 0;
  CurrentThread = KeGetCurrentThread();
  v8 = (*(_BYTE *)(a1 + 89) & 0x10) == 0;
  v23 = a3;
  v25 = a2;
  ContextLength = 0;
  if ( !v8 )
  {
    SetSecureContext = KeVerifyContextRecord((__int64)CurrentThread, *(_QWORD *)(a1 + 120), 0LL, 0LL);
    if ( SetSecureContext < 0 )
      goto LABEL_19;
  }
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 120) + 48LL);
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x200) != 0 )
    {
      if ( RtlGetExtendedContextLength(v9, &ContextLength) < 0 )
        goto LABEL_37;
      SetSecureContext = VslGetSetSecureContext(v25, *(struct _MDL **)(a1 + 120), ContextLength);
      goto LABEL_19;
    }
    for ( i = CurrentThread->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    TrapFrame = (_KTRAP_FRAME *)(i - 50);
  }
  else
  {
    TrapFrame = CurrentThread->TrapFrame;
    if ( !TrapFrame || TrapFrame->SegCs != 16 )
    {
LABEL_36:
      v3 = v23;
LABEL_37:
      SetSecureContext = -1073741823;
      goto LABEL_19;
    }
  }
  if ( (*(_BYTE *)(a1 + 89) & 2) != 0 )
  {
    if ( (unsigned __int8)RtlpGetStackLimits((__int64)&v27, (__int64)&v26) )
    {
      memset_0(v34, 0, sizeof(v34));
      v30 = xmmword_141200030;
      v31 = qword_141200040;
      RtlpCaptureContext();
      v4[19] = &v36;
      v4[21] = &v38;
      v4[22] = &v39;
      v4[23] = &v40;
      v4[28] = &v41;
      v4[29] = &v42;
      v4[30] = &v43;
      v4[31] = &v44;
      v4[6] = &v46;
      v4[7] = &v47;
      v4[8] = &v48;
      v4[9] = &v49;
      v4[10] = &v50;
      v4[11] = &v51;
      v4[12] = &v52;
      v4[13] = &v53;
      v4[14] = &v54;
      v4[15] = &v55;
      v4[20] = &v37;
      while ( 1 )
      {
        v12 = v45;
        if ( v45 < 0xFFFF800000000000uLL || !RtlpIsFrameInBoundsEx(&v27, v37, &v26, v34) )
        {
          if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent || PspBreakOnContextUnwindFailure )
            goto LABEL_66;
          goto LABEL_36;
        }
        v13 = (unsigned int)RtlpLookupFunctionEntryForStackWalks(v12, (__int64)&v30);
        if ( !*((_QWORD *)&v30 + 1) )
          goto LABEL_36;
        if ( (int)RtlVirtualUnwind2(
                    0,
                    SDWORD2(v30),
                    v12,
                    v13,
                    (__int64)v35,
                    (__int64)&v22,
                    (__int64)&v29,
                    (__int64)&v28,
                    (__int64)v4,
                    (__int64)&v27,
                    (__int64)&v26,
                    0LL,
                    0) < 0 )
          break;
        if ( v28 == TrapFrame )
          goto LABEL_14;
      }
      if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent || PspBreakOnContextUnwindFailure )
      {
LABEL_66:
        __int2c();
        goto LABEL_36;
      }
    }
    goto LABEL_36;
  }
  for ( j = CurrentThread->InitialStack; (j[1] & 1) != 0; j = (_QWORD *)j[5] )
    ;
  v4[19] = j - 58;
  v4[22] = j - 56;
  v4[23] = j - 57;
  v4[28] = j - 55;
  v4[29] = j - 54;
  v4[30] = j - 53;
  v4[31] = j - 52;
  v4[6] = j - 84;
  v4[7] = j - 82;
  v4[8] = j - 80;
  v4[9] = j - 78;
  v4[10] = j - 76;
  v4[11] = j - 74;
  v4[12] = j - 72;
  v4[13] = j - 70;
  v4[14] = j - 68;
  v4[15] = j - 66;
  v4[21] = &TrapFrame->Rbp;
LABEL_14:
  v14 = v9 & 0x100008;
  if ( !v25 )
  {
    if ( v14 == 1048584 && *(_BYTE *)(a1 + 88) == 1 )
      _fxsave((void *)(*(_QWORD *)(a1 + 120) + 256LL));
    if ( CurrentThread[1].WaitBlock[3].Thread && *(_BYTE *)(a1 + 88) == 1 )
    {
      v21 = *(_CONTEXT **)(a1 + 120);
      PspGetContext(TrapFrame, v4, v21);
      if ( (CurrentThread->Header.Reserved1 & 8) != 0 )
        RtlCopyContext(v21, v21->ContextFlags, (PCONTEXT)CurrentThread[1].WaitBlock[3].Thread);
    }
    else
    {
      PspGetContext(TrapFrame, v4, *(_QWORD *)(a1 + 120));
    }
    goto LABEL_18;
  }
  if ( v14 == 1048584 )
  {
    if ( *(_BYTE *)(a1 + 88) == 1 )
    {
      v6 = *(_QWORD *)(a1 + 120) + 256LL;
LABEL_26:
      v17 = *(_QWORD *)(a1 + 120);
      v25 = 0LL;
      SetSecureContext = KeVerifyContextXStateCetU((__int64)CurrentThread, v17, (unsigned __int64 *)&v25);
      if ( SetSecureContext < 0 )
      {
        v3 = v23;
        goto LABEL_19;
      }
      if ( (*(_BYTE *)(a1 + 89) & 4) != 0 )
      {
        v20 = *(_QWORD *)(a1 + 120);
        v32 = 0LL;
        LODWORD(v32) = 3;
        v33 = 0LL;
        SetSecureContext = KeVerifyContextIpForUserCet((__int64)CurrentThread, v20, (unsigned int *)&v32, (__int64)&v25);
        if ( SetSecureContext < 0 )
        {
          v3 = v23;
          goto LABEL_19;
        }
      }
    }
  }
  else if ( *(_BYTE *)(a1 + 88) == 1 )
  {
    goto LABEL_26;
  }
  v18 = *(_BYTE *)(a1 + 88);
  if ( v18 != 1
    || (SetSecureContext = RtlpValidateContextXStateDisabledFeatures(
                             *(_QWORD *)(a1 + 120),
                             CurrentThread->ExtendedFeatureDisableMask),
        SetSecureContext >= 0) )
  {
    if ( CurrentThread[1].WaitBlock[3].Thread
      && v18 == 1
      && ((*(_BYTE *)(a1 + 89) & 2) != 0 || (CurrentThread->Header.Reserved1 & 8) != 0) )
    {
      PspSetContextState((__int64)CurrentThread, *(_CONTEXT **)(a1 + 120));
    }
    else
    {
      PspSetContext(TrapFrame, v4, *(_QWORD *)(a1 + 120));
    }
LABEL_18:
    v3 = v23;
    SetSecureContext = 0;
    goto LABEL_19;
  }
  v3 = v23;
LABEL_19:
  *(_DWORD *)(a1 + 92) = SetSecureContext;
  result = v6;
  if ( (*(_BYTE *)(a1 + 89) & 1) != 0 )
    *v3 = a1 + 96;
  else
    *v3 = 0LL;
  return result;
}
