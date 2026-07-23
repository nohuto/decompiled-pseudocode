/*
 * XREFs of RtlpWalkFrameChain @ 0x140233800
 * Callers:
 *     RtlWalkFrameChain @ 0x140233100 (RtlWalkFrameChain.c)
 * Callees:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140234380 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpxVirtualUnwind @ 0x1402345C0 (RtlpxVirtualUnwind.c)
 *     RtlInitializeExtendedContext2 @ 0x140235240 (RtlInitializeExtendedContext2.c)
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     RtlGetExtendedContextLength2 @ 0x1402354D0 (RtlGetExtendedContextLength2.c)
 *     RtlLocateExtendedFeature @ 0x140237160 (RtlLocateExtendedFeature.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     KeQueryCurrentStackInformationEx @ 0x14028A1E0 (KeQueryCurrentStackInformationEx.c)
 *     RtlpWalkWowStack @ 0x1403FD020 (RtlpWalkWowStack.c)
 *     RtlpCaptureContext2 @ 0x1404FA2A0 (RtlpCaptureContext2.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x1406AB330 (KeGetCurrentStackPointer.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PsWow64GetProcessMachine @ 0x14091D9C0 (PsWow64GetProcessMachine.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1409E0A10 (RtlWow64GetCpuAreaInfo.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, ULONG a2, char a3, unsigned int a4)
{
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v7; // r13
  int v8; // r12d
  int v9; // edi
  ULONG64 v10; // rsi
  ULONG v11; // r14d
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  __int64 SameThreadTransientFlags; // rcx
  bool v17; // bl
  struct _KTHREAD *v18; // rsi
  _QWORD *i; // rax
  _QWORD *v20; // r14
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  char **v24; // r14
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  int v27; // r8d
  char v28; // al
  __int64 CurrentStackPointer; // rax
  int v30; // ecx
  struct _KTHREAD *v31; // r14
  unsigned int v32; // esi
  char v33; // r8
  unsigned __int64 v34; // rax
  unsigned __int64 StackLimit; // rcx
  __m128i *InitialStack; // rdx
  int v37; // r9d
  _QWORD *ExtendedFeature; // rax
  __int64 v39; // rdx
  int v40; // ebx
  char *v41; // rcx
  char *v42; // rcx
  unsigned int v43; // eax
  struct _KTHREAD *v44; // rax
  _BYTE v45[4]; // [rsp+60h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+64h] [rbp+4h] BYREF
  char v47; // [rsp+68h] [rbp+8h] BYREF
  bool v48; // [rsp+69h] [rbp+9h]
  int v49; // [rsp+6Ch] [rbp+Ch]
  unsigned int v50; // [rsp+70h] [rbp+10h] BYREF
  unsigned __int64 v51; // [rsp+78h] [rbp+18h]
  unsigned __int64 v52; // [rsp+80h] [rbp+20h] BYREF
  char *v53; // [rsp+88h] [rbp+28h]
  char **v54; // [rsp+90h] [rbp+30h]
  char *v55; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v56; // [rsp+A0h] [rbp+40h]
  unsigned int v57; // [rsp+A4h] [rbp+44h]
  ULONG v58; // [rsp+A8h] [rbp+48h]
  char *v59; // [rsp+B0h] [rbp+50h]
  char **v60; // [rsp+B8h] [rbp+58h]
  PCONTEXT_EX ContextEx; // [rsp+C0h] [rbp+60h] BYREF
  unsigned __int64 v62; // [rsp+C8h] [rbp+68h]
  unsigned __int64 v63; // [rsp+D0h] [rbp+70h]
  int v64; // [rsp+D8h] [rbp+78h]
  void *Teb; // [rsp+E0h] [rbp+80h]
  __int64 v66; // [rsp+E8h] [rbp+88h]
  unsigned __int64 v67; // [rsp+F0h] [rbp+90h] BYREF
  _QWORD *v68; // [rsp+F8h] [rbp+98h] BYREF
  __m128i v69; // [rsp+100h] [rbp+A0h]
  __m128i v70; // [rsp+110h] [rbp+B0h]
  __m128i v71; // [rsp+120h] [rbp+C0h]
  __m128i v72; // [rsp+130h] [rbp+D0h]
  __int64 v73; // [rsp+140h] [rbp+E0h] BYREF
  __int64 v74; // [rsp+148h] [rbp+E8h] BYREF
  unsigned __int64 *v75; // [rsp+150h] [rbp+F0h] BYREF
  char **v76; // [rsp+158h] [rbp+F8h]
  __int64 v77; // [rsp+160h] [rbp+100h]
  __int128 v78; // [rsp+168h] [rbp+108h] BYREF
  __int128 v79; // [rsp+178h] [rbp+118h]
  __int128 v80; // [rsp+188h] [rbp+128h]

  v57 = a4;
  v58 = a2;
  v66 = a1;
  v5 = 0LL;
  ContextEx = 0LL;
  ContextLength = 0;
  v73 = 0LL;
  v74 = 0LL;
  v56 = 0;
  v55 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v52 = 0LL;
  v54 = 0LL;
  v59 = 0LL;
  v48 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  v7 = 0LL;
  v51 = 0LL;
  v8 = 0;
  v49 = 0;
  v60 = 0LL;
  v9 = a3 & 1;
  v64 = v9;
  if ( (a3 & 1) != 0 )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink) & 0x4000) != 0 )
      v5 = qword_140FC7540;
    v60 = (char **)v5;
    v7 = v51;
    v8 = v49;
  }
  v10 = v5 != 0 ? 0x800 : 0;
  v11 = v5 != 0 ? 1048651 : 1048587;
  RtlGetExtendedContextLength2(v11, &ContextLength, v10);
  v12 = ContextLength + 15LL;
  if ( v12 <= ContextLength )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = alloca(v13);
  v15 = alloca(v13);
  RtlInitializeExtendedContext2((PCONTEXT)v45, v11, &ContextEx, v10);
  RtlpCaptureContext2(v45);
  v47 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v52, &v55) )
    return 0LL;
  ContextLength = 0;
  v17 = (a3 & 2) != 0;
  if ( !v9 )
  {
    v43 = 0;
    SameThreadTransientFlags = 0x80000000LL;
    if ( (dword_140FC51F4 & 1) == 0 )
      v43 = 0x80000000;
    v56 = v43;
  }
  v62 = 0LL;
  v63 = 0LL;
  if ( !v9 )
  {
    v24 = v54;
    v53 = v59;
LABEL_21:
    v78 = xmmword_141200030;
    *(_QWORD *)&v79 = qword_141200040;
    v45[0] = v17;
    while ( 1 )
    {
      v25 = (unsigned __int64)v68;
      v68 = 0LL;
      v67 = 0LL;
      v50 = 0;
      if ( (v25 & 7) != 0 )
        goto LABEL_127;
      if ( v25 < v52 || v25 >= (unsigned __int64)v55 )
        break;
LABEL_25:
      v26 = RtlpLookupFunctionEntryForStackWalks(v76, &v78);
      if ( !v26 && !*((_QWORD *)&v78 + 1) )
        goto LABEL_127;
      v27 = (int)v76;
      v77 = 0LL;
      v75 = &v52;
      v76 = &v55;
      if ( (int)RtlpxVirtualUnwind(
                  v56,
                  DWORD2(v78),
                  v27,
                  v26,
                  (__int64)v45,
                  (__int64)&v47,
                  (__int64)&v74,
                  (__int64)&v73,
                  0LL,
                  (__int64)&v75) < 0 )
        goto LABEL_127;
      v28 = v45[0];
      if ( v47 )
        v28 = 0;
      v45[0] = v28;
      if ( v8 == 1 && ContextLength && v60 && v76 == v60 )
        v76 = *(char ***)(*((_QWORD *)RtlLocateExtendedFeature(ContextEx, 0xBu, 0LL) + 1) - 8LL);
      SameThreadTransientFlags = (__int64)v76;
      if ( !v76 )
      {
        if ( v9 )
        {
          if ( (unsigned __int16)PsWow64GetProcessMachine(KeGetCurrentThread()->ApcState.Process) == 332
            && *(_BYTE *)(v51 + 43) == 2 )
          {
            v78 = 0LL;
            v79 = 0LL;
            v80 = 0LL;
            v40 = (int)Teb;
            if ( (int)RtlWow64GetCpuAreaInfo(*((_QWORD *)Teb + 657), v39, &v78) >= 0 )
            {
              if ( (v78 & 3) != 0 )
LABEL_91:
                ExRaiseDatatypeMisalignment();
              RtlpWalkWowStack(
                v66,
                0,
                v40,
                (unsigned int)&ContextLength,
                v58,
                v57,
                *(_DWORD *)(v78 + 180),
                *(_DWORD *)(v78 + 196) - 4);
            }
          }
        }
        goto LABEL_127;
      }
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          if ( (unsigned __int64)v76 > 0x7FFFFFFEFFFFLL )
            goto LABEL_127;
          if ( v53 && v76 == *(char ***)(v7 + 360) )
          {
            v8 = 2;
            v49 = 2;
            v76 = (char **)*((_QWORD *)v53 + 39);
            v68 = v53 + 320;
            v69.m128i_i64[0] = *((_QWORD *)v53 + 31);
            v67 = *((_QWORD *)v53 + 32);
            v70.m128i_i64[0] = *((_QWORD *)v53 + 33);
            v69.m128i_i64[1] = *((_QWORD *)v53 + 34);
            v72.m128i_i64[1] = *((_QWORD *)v53 + 35);
            v73 = *((_QWORD *)v53 + 36);
            v74 = *((_QWORD *)v53 + 37);
            v75 = (unsigned __int64 *)*((_QWORD *)v53 + 38);
            if ( v60 )
              *(_QWORD *)RtlLocateExtendedFeature(ContextEx, 0xBu, 0LL) = 0LL;
            v53 = v24[4];
            v59 = v53;
            v24 = (char **)v24[5];
            if ( !v24 )
              goto LABEL_127;
            v54 = v24;
            v52 = (unsigned __int64)v68;
            v55 = *v24;
          }
        }
        else
        {
          if ( v8 != 2 )
            goto LABEL_127;
          if ( (unsigned __int64)v76 <= 0x7FFFFFFEFFFFLL )
          {
            if ( v76 != *(char ***)(v7 + 360) )
              goto LABEL_127;
            v53 = *(char **)(v7 + 384);
            if ( ((unsigned __int8)v53 & 3) != 0 )
              goto LABEL_91;
            v8 = 1;
            v49 = 1;
            SameThreadTransientFlags = *((_QWORD *)v53 + 9);
            v68 = (_QWORD *)SameThreadTransientFlags;
            v52 = v62;
            v55 = (char *)v63;
            v53 = v59;
            if ( v59 )
            {
              v7 = *((_QWORD *)v59 + 26);
              v51 = v7;
              v24 = v54;
            }
            else
            {
              v24 = v54;
              v7 = v51;
            }
          }
        }
        goto LABEL_40;
      }
      if ( v9 )
      {
        if ( (unsigned __int64)v76 < 0xFFFF800000000000uLL )
        {
          if ( (unsigned __int64)v76 > 0x7FFFFFFEFFFFLL )
            goto LABEL_127;
          if ( v76 != *(char ***)(v7 + 360) )
            goto LABEL_127;
          v8 = 1;
          v49 = 1;
          if ( v53 )
          {
            v7 = *((_QWORD *)v53 + 26);
            v51 = v7;
            if ( v7 < 0xFFFF800000000000uLL )
              goto LABEL_127;
          }
          if ( v60 )
          {
            LODWORD(v54) = (unsigned int)v54 | 0x100040;
            ExtendedFeature = RtlLocateExtendedFeature(ContextEx, 0xBu, 0LL);
            *ExtendedFeature = 1LL;
            SameThreadTransientFlags = 1703LL;
            ExtendedFeature[1] = __readmsr(0x6A7u);
          }
          v52 = v62;
          v55 = (char *)v63;
          goto LABEL_40;
        }
        if ( !ContextLength )
        {
LABEL_40:
          if ( ContextLength >= v57 )
          {
            SameThreadTransientFlags = (__int64)v76;
            *(_QWORD *)(v66 + 8LL * (ContextLength - v57)) = v76;
          }
          if ( ++ContextLength >= v58 )
            goto LABEL_127;
        }
      }
      else
      {
        if ( (unsigned __int64)v76 < 0xFFFF800000000000uLL )
          goto LABEL_127;
        if ( !v45[0] )
          goto LABEL_40;
      }
    }
    if ( v52 < 0xFFFF800000000000uLL )
      goto LABEL_127;
    CurrentStackPointer = KeGetCurrentStackPointer(SameThreadTransientFlags, 0xFFFF800000000000uLL);
    KeQueryCurrentStackInformationEx(CurrentStackPointer, &v50, &v67, &v68);
    if ( v50 <= 9 )
    {
      v30 = 929;
      if ( _bittest(&v30, v50) )
        goto LABEL_127;
    }
    v31 = KeGetCurrentThread();
    v32 = v50;
    if ( v50 != 1 )
    {
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      {
        v42 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
        if ( (unsigned __int64)&v42[-KeDpcStackSize] <= v25 && v25 < (unsigned __int64)v42 )
        {
          v55 = v42;
          v52 = (unsigned __int64)&v42[-KeDpcStackSize];
          goto LABEL_109;
        }
      }
      v32 = v50;
    }
    if ( v32 != 10 && (unsigned __int8)KeGetEffectiveIrql() >= 2u )
    {
      v41 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
      if ( v25 < (unsigned __int64)v41 && (unsigned __int64)&v41[-(unsigned int)KeExceptionStackSize] <= v25 )
      {
        v55 = v41;
        v52 = (unsigned __int64)&v41[-(unsigned int)KeExceptionStackSize];
LABEL_109:
        v24 = v54;
        v53 = v59;
        v7 = v51;
        v8 = v49;
        goto LABEL_25;
      }
      v32 = v50;
    }
    v33 = 0;
    v34 = v69.m128i_i64[0];
    if ( v69.m128i_i64[0] )
    {
      InitialStack = (__m128i *)v70.m128i_i64[1];
      StackLimit = v69.m128i_u64[1];
    }
    else
    {
      v69.m128i_i64[0] = (__int64)v31->StackBase;
      StackLimit = (unsigned __int64)v31->StackLimit;
      v69.m128i_i64[1] = StackLimit;
      v70.m128i_i64[0] = (__int64)v31->KernelStack;
      InitialStack = (__m128i *)v31->InitialStack;
      v70.m128i_i64[1] = (__int64)InitialStack;
      v71 = *(__m128i *)&v31->KernelShadowStackBase;
      v72 = *(__m128i *)&v31->KernelShadowStack;
      v33 = 1;
      v34 = v69.m128i_i64[0];
      v32 = v50;
    }
    if ( v32 > 0xA || (v37 = 1090, !_bittest(&v37, v32)) || !v33 )
    {
      if ( !InitialStack[1].m128i_i64[0] )
        goto LABEL_127;
      v69 = InitialStack[1];
      v70 = InitialStack[2];
      v71 = InitialStack[3];
      v72 = InitialStack[4];
      StackLimit = _mm_srli_si128(v69, 8).m128i_u64[0];
      v34 = v69.m128i_i64[0];
    }
    v67 = StackLimit;
    v68 = (_QWORD *)v34;
    if ( v25 < StackLimit || v25 >= v34 )
      goto LABEL_127;
    v52 = StackLimit;
    v55 = (char *)v34;
    goto LABEL_109;
  }
  v18 = KeGetCurrentThread();
  for ( i = v18->InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
    ;
  v7 = (unsigned __int64)(i - 50);
  v51 = (unsigned __int64)(i - 50);
  v20 = Teb;
  if ( !Teb || _bittest16((const signed __int16 *)Teb + 3063, 8u) )
    return 0LL;
  if ( (unsigned __int16)PsWow64GetProcessMachine(v18->ApcState.Process) != 332
    || *(_BYTE *)(v7 + 43) == 2
    || *(_WORD *)(v7 + 368) != 35
    || (++ContextLength,
        !(unsigned __int8)RtlpWalkWowStack(
                            v66,
                            (int)v7 + 360,
                            (_DWORD)v20,
                            (unsigned int)&ContextLength,
                            v58,
                            v57,
                            *(_DWORD *)(v7 + 344),
                            *(_DWORD *)(v7 + 384))) )
  {
    v22 = *(_QWORD *)(v7 + 384);
    v62 = v22;
    v23 = v20[1];
    v63 = v23;
    if ( v23 <= v22 )
      return 0LL;
    if ( v23 != v22 && v23 > 0x7FFFFFFF0000LL )
      v7 = v51;
    v24 = (char **)v18->InitialStack;
    v54 = v24;
    while ( ((_BYTE)v24[1] & 1) != 0 )
    {
      v24 = (char **)v24[5];
      v54 = v24;
    }
    v53 = v24[4];
    v59 = v53;
    SameThreadTransientFlags = (unsigned __int8)v18->SameThreadTransientFlags;
    v48 = (SameThreadTransientFlags & 4) != 0;
    LOBYTE(SameThreadTransientFlags) = SameThreadTransientFlags | 4;
    v18->SameThreadTransientFlags = SameThreadTransientFlags;
    v8 = v49;
    goto LABEL_21;
  }
LABEL_127:
  if ( v9 )
  {
    if ( !v48 )
    {
      v44 = KeGetCurrentThread();
      v44->SameThreadTransientFlags &= ~4u;
    }
  }
  return ContextLength;
}
