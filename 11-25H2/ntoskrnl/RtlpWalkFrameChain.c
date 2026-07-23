/*
 * XREFs of RtlpWalkFrameChain @ 0x140257BE0
 * Callers:
 *     RtlWalkFrameChain @ 0x140348060 (RtlWalkFrameChain.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     KeQueryCurrentStackInformationEx @ 0x1402571F0 (KeQueryCurrentStackInformationEx.c)
 *     RtlInitializeExtendedContext2 @ 0x140258C20 (RtlInitializeExtendedContext2.c)
 *     RtlpGetStackLimits @ 0x140258FB0 (RtlpGetStackLimits.c)
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140259000 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlpxVirtualUnwind @ 0x140259250 (RtlpxVirtualUnwind.c)
 *     RtlpWalkWowStack @ 0x1403FA680 (RtlpWalkWowStack.c)
 *     RtlpCaptureContext2 @ 0x1404FA260 (RtlpCaptureContext2.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x14069F0C0 (KeGetCurrentStackPointer.c)
 *     _alloca_probe @ 0x1406A89B0 (_alloca_probe.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     PsWow64GetProcessMachine @ 0x140907610 (PsWow64GetProcessMachine.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1409EBEDC (RtlWow64GetCpuAreaInfo.c)
 */

__int64 __fastcall RtlpWalkFrameChain(__int64 a1, unsigned int a2, char a3, unsigned int a4)
{
  unsigned int v5; // r9d
  struct _KTHREAD *CurrentThread; // rcx
  const signed __int16 *Teb; // r13
  __int64 v8; // rdx
  int v9; // r12d
  int v10; // eax
  int v11; // r9d
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rsp
  void *v15; // rsp
  __int64 SameThreadTransientFlags; // rcx
  bool v17; // di
  struct _KTHREAD *v18; // rbx
  _QWORD *n; // rcx
  char *v20; // rsi
  __int64 v22; // rsi
  PCONTEXT_EX v23; // rdi
  _QWORD *v24; // r13
  char *v25; // rbx
  __int64 v26; // rax
  bool v27; // al
  int v28; // edx
  __int64 v29; // r8
  unsigned __int64 CurrentStackPointer; // rax
  __int64 Offset; // r9
  char *v32; // r10
  __int64 v33; // rdx
  unsigned int v34; // r8d
  unsigned int j; // ecx
  int v36; // ecx
  struct _KTHREAD *v37; // rsi
  unsigned int v38; // edi
  char v39; // r8
  unsigned __int64 v40; // rax
  char *StackLimit; // rcx
  __m128i *InitialStack; // rdx
  int v43; // r9d
  __int64 v44; // r9
  char *v45; // r8
  __int64 v46; // rdx
  unsigned int v47; // r9d
  unsigned int m; // ecx
  __int64 v49; // rax
  char *v50; // r8
  char *v51; // rcx
  int v52; // edx
  __int64 v53; // r9
  char *v54; // r10
  __int64 v55; // rdx
  unsigned int v56; // r8d
  unsigned int k; // ecx
  __int64 v58; // rdx
  int v59; // ebx
  char *v60; // rcx
  char *v61; // rax
  unsigned __int64 v62; // r10
  __int64 v63; // rax
  unsigned int v64; // r9d
  unsigned int i; // r8d
  __int64 v66; // rcx
  unsigned int v67; // eax
  struct _KTHREAD *v68; // rax
  bool v69; // [rsp+60h] [rbp+0h] BYREF
  char v70; // [rsp+61h] [rbp+1h] BYREF
  bool v71; // [rsp+62h] [rbp+2h]
  unsigned int v72; // [rsp+64h] [rbp+4h] BYREF
  int v73; // [rsp+68h] [rbp+8h]
  unsigned int v74; // [rsp+6Ch] [rbp+Ch] BYREF
  char *v75; // [rsp+70h] [rbp+10h] BYREF
  int v76; // [rsp+78h] [rbp+18h]
  int v77; // [rsp+7Ch] [rbp+1Ch]
  int v78; // [rsp+80h] [rbp+20h]
  char *v79; // [rsp+88h] [rbp+28h] BYREF
  unsigned int v80; // [rsp+90h] [rbp+30h]
  unsigned int v81; // [rsp+94h] [rbp+34h]
  unsigned int v82; // [rsp+98h] [rbp+38h]
  PCONTEXT_EX ContextEx; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v84; // [rsp+A8h] [rbp+48h]
  _QWORD *ii; // [rsp+B0h] [rbp+50h]
  unsigned __int64 v86; // [rsp+B8h] [rbp+58h]
  unsigned int v87; // [rsp+C0h] [rbp+60h]
  unsigned int v88; // [rsp+C4h] [rbp+64h]
  unsigned int v89; // [rsp+C8h] [rbp+68h]
  __int64 v90; // [rsp+D0h] [rbp+70h]
  char *v91; // [rsp+D8h] [rbp+78h]
  char *v92; // [rsp+E0h] [rbp+80h]
  int v93; // [rsp+E8h] [rbp+88h]
  __int64 v94; // [rsp+F0h] [rbp+90h]
  char *v95; // [rsp+F8h] [rbp+98h] BYREF
  unsigned __int64 v96; // [rsp+100h] [rbp+A0h] BYREF
  const signed __int16 *v97; // [rsp+108h] [rbp+A8h]
  __m128i v98; // [rsp+110h] [rbp+B0h]
  __m128i v99; // [rsp+120h] [rbp+C0h]
  __m128i v100; // [rsp+130h] [rbp+D0h]
  __m128i v101; // [rsp+140h] [rbp+E0h]
  __int64 v102; // [rsp+150h] [rbp+F0h] BYREF
  unsigned __int64 v103; // [rsp+158h] [rbp+F8h] BYREF
  __int64 v104; // [rsp+160h] [rbp+100h]
  _QWORD v105[3]; // [rsp+168h] [rbp+108h] BYREF
  __int128 v106; // [rsp+180h] [rbp+120h] BYREF
  __int128 v107; // [rsp+190h] [rbp+130h]
  __int128 v108; // [rsp+1A0h] [rbp+140h]

  v81 = a4;
  v82 = a2;
  v94 = a1;
  ContextEx = 0LL;
  v5 = 0;
  v102 = 0LL;
  v103 = 0LL;
  v80 = 0;
  v79 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v75 = 0LL;
  ii = 0LL;
  v84 = 0LL;
  v71 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = (const signed __int16 *)CurrentThread->Teb;
  v97 = Teb;
  v86 = 0LL;
  v73 = 0;
  v8 = 0LL;
  v90 = 0LL;
  v9 = a3 & 1;
  v93 = v9;
  if ( (a3 & 1) != 0 )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[4].ThreadListHead.Flink) & 0x4000) != 0 )
      v8 = qword_140FC6500;
    v90 = v8;
  }
  if ( ((v8 != 0 ? 1048651 : 1048587) & 0x100040) == 0x100040 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      goto LABEL_10;
    v10 = 2;
  }
  else
  {
    v10 = 0;
  }
  v11 = 1264;
  if ( v10 )
  {
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      v62 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL) & (v8 != 0 ? 0x800 : 0);
      v63 = 4LL;
      v64 = 576;
      for ( i = 2; i < 0x40; i += 2 )
      {
        if ( (v63 & v62) != 0 )
        {
          if ( (v63 & MEMORY[0xFFFFF780000005F8]) != 0 )
            v64 = (v64 + 63) & 0xFFFFFFC0;
          v64 += *(_DWORD *)(4LL * i - 0x87FFFFFF9FCLL);
        }
        v66 = __ROL8__(v63, 1);
        if ( (v66 & v62) != 0 )
        {
          if ( (v66 & MEMORY[0xFFFFF780000005F8]) != 0 )
            v64 = (v64 + 63) & 0xFFFFFFC0;
          v64 += *(_DWORD *)(4LL * (i + 1) - 0x87FFFFFF9FCLL);
        }
        v63 = __ROL8__(v63, 2);
      }
    }
    else
    {
      v64 = MEMORY[0xFFFFF780000003E8];
    }
    v11 = v64 + 800;
  }
  v5 = v11 + 15;
LABEL_10:
  v12 = v5 + 15LL;
  if ( v12 <= v5 )
    v12 = 0xFFFFFFFFFFFFFF0LL;
  v13 = v12 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = alloca(v13);
  v15 = alloca(v13);
  RtlInitializeExtendedContext2((PCONTEXT)&v69, v8 != 0 ? 1048651 : 1048587, &ContextEx, v8 != 0 ? 0x800 : 0);
  RtlpCaptureContext2(&v69);
  v70 = 0;
  if ( !(unsigned __int8)RtlpGetStackLimits(&v75, &v79) )
    return 0LL;
  v72 = 0;
  v17 = (a3 & 2) != 0;
  if ( !v9 )
  {
    v67 = 0;
    SameThreadTransientFlags = 0x80000000LL;
    if ( (dword_140FC41E4 & 1) == 0 )
      v67 = 0x80000000;
    v80 = v67;
  }
  v91 = 0LL;
  v92 = 0LL;
  if ( !v9 )
  {
    v22 = v84;
LABEL_25:
    v106 = xmmword_141200030;
    *(_QWORD *)&v107 = qword_141200040;
    v69 = v17;
    v23 = ContextEx;
    while ( 1 )
    {
      v24 = ii;
      v25 = v95;
      v96 = 0LL;
      v95 = 0LL;
      v74 = 0;
      if ( ((unsigned __int8)v25 & 7) != 0 )
        goto LABEL_203;
      if ( v25 < v75 || v25 >= v79 )
      {
        if ( (unsigned __int64)v75 < 0xFFFF800000000000uLL )
          goto LABEL_203;
        CurrentStackPointer = KeGetCurrentStackPointer(SameThreadTransientFlags, 0xFFFF800000000000uLL);
        KeQueryCurrentStackInformationEx(CurrentStackPointer, &v74, &v95, &v96);
        if ( v74 <= 9 )
        {
          v36 = 929;
          if ( _bittest(&v36, v74) )
            goto LABEL_203;
        }
        v37 = KeGetCurrentThread();
        v38 = v74;
        if ( v74 != 1 )
        {
          if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
          {
            v60 = (char *)KeGetPcr()->Prcb.DpcStack + 80;
            if ( &v60[-KeDpcStackSize] <= v25 && v25 < v60 )
            {
              v79 = v60;
              v75 = &v60[-KeDpcStackSize];
              v23 = ContextEx;
              v22 = v84;
              goto LABEL_29;
            }
          }
          v38 = v74;
        }
        if ( v38 != 10 && ObGetCurrentIrql() >= 2u )
        {
          v51 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80;
          if ( v25 < v51 && &v51[-(unsigned int)KeExceptionStackSize] <= v25 )
          {
            v79 = v51;
            v75 = &v51[-(unsigned int)KeExceptionStackSize];
            v23 = ContextEx;
            v22 = v84;
            goto LABEL_29;
          }
          v38 = v74;
        }
        v39 = 0;
        v40 = v98.m128i_i64[0];
        if ( v98.m128i_i64[0] )
        {
          InitialStack = (__m128i *)v99.m128i_i64[1];
          StackLimit = (char *)v98.m128i_i64[1];
        }
        else
        {
          v98.m128i_i64[0] = (__int64)v37->StackBase;
          StackLimit = (char *)v37->StackLimit;
          v98.m128i_i64[1] = (__int64)StackLimit;
          v99.m128i_i64[0] = (__int64)v37->KernelStack;
          InitialStack = (__m128i *)v37->InitialStack;
          v99.m128i_i64[1] = (__int64)InitialStack;
          v100 = *(__m128i *)&v37->KernelShadowStackBase;
          v101 = *(__m128i *)&v37->KernelShadowStack;
          v39 = 1;
          v40 = v98.m128i_i64[0];
          v38 = v74;
        }
        if ( v38 > 0xA || (v43 = 1090, !_bittest(&v43, v38)) || !v39 )
        {
          if ( !InitialStack[1].m128i_i64[0] )
            goto LABEL_203;
          v98 = InitialStack[1];
          v99 = InitialStack[2];
          v100 = InitialStack[3];
          v101 = InitialStack[4];
          StackLimit = (char *)_mm_srli_si128(v98, 8).m128i_u64[0];
          v40 = v98.m128i_i64[0];
        }
        v95 = StackLimit;
        v96 = v40;
        if ( v25 < StackLimit || (unsigned __int64)v25 >= v40 )
          goto LABEL_203;
        v75 = StackLimit;
        v79 = (char *)v40;
        v23 = ContextEx;
        v22 = v84;
      }
LABEL_29:
      v26 = RtlpLookupFunctionEntryForStackWalks(v103, &v106);
      if ( !v26 && !*((_QWORD *)&v106 + 1) )
        goto LABEL_203;
      v105[2] = 0LL;
      v105[0] = &v75;
      v105[1] = &v79;
      if ( (int)RtlpxVirtualUnwind(
                  v80,
                  DWORD2(v106),
                  v103,
                  v26,
                  (__int64)&v69,
                  (__int64)&v70,
                  (__int64)&v103,
                  (__int64)&v102,
                  0LL,
                  (__int64)v105) < 0 )
        goto LABEL_203;
      v27 = v69;
      if ( v70 )
        v27 = 0;
      v69 = v27;
      v28 = v73;
      v29 = v90;
      if ( v73 == 1 && v72 && v90 && v103 == v90 )
      {
        v87 = 0;
        v76 = 0;
        if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800) == 0
          || (MEMORY[0xFFFFF780000003EC] & 0xFFFFFFF8) != 0 )
        {
          goto LABEL_141;
        }
        Offset = v23->XState.Offset;
        if ( v23->All.Offset > (int)Offset )
          goto LABEL_140;
        if ( (signed int)(v23->All.Length + v23->All.Offset) < (signed int)(Offset + v23->XState.Length) )
          goto LABEL_140;
        v32 = (char *)v23 + Offset;
        if ( !(PCONTEXT_EX)((char *)v23 + Offset) )
          goto LABEL_140;
        if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        {
          v33 = *((_QWORD *)v32 + 1);
          if ( (v33 & 0x800) != 0 )
          {
            v34 = 576;
            v76 = 576;
            for ( j = 2; ; ++j )
            {
              v87 = j;
              if ( j >= 0xB )
                break;
              if ( ((1LL << j) & v33) != 0 )
              {
                if ( ((1LL << j) & MEMORY[0xFFFFF780000005F8]) != 0 )
                {
                  v34 = (v34 + 63) & 0xFFFFFFC0;
                  v76 = v34;
                }
                v34 += *(_DWORD *)(4LL * j - 0x87FFFFFF9FCLL);
                v76 = v34;
              }
            }
            if ( (MEMORY[0xFFFFF780000005F8] & 0x800) != 0 )
            {
              v34 = (v34 + 63) & 0xFFFFFFC0;
              v76 = v34;
            }
            v49 = (__int64)&v32[v34 - 504];
            v28 = v73;
            goto LABEL_94;
          }
LABEL_140:
          v28 = v73;
LABEL_141:
          v49 = 8LL;
        }
        else
        {
          v49 = (__int64)&v32[MEMORY[0xFFFFF78000000448] - 504];
          v28 = v73;
        }
LABEL_94:
        v103 = *(_QWORD *)(*(_QWORD *)v49 - 8LL);
        v29 = v90;
      }
      SameThreadTransientFlags = v103;
      if ( !v103 )
      {
        if ( v9 )
        {
          if ( (unsigned __int16)PsWow64GetProcessMachine(KeGetCurrentThread()->ApcState.Process) == 332
            && *(_BYTE *)(v86 + 43) == 2 )
          {
            v106 = 0LL;
            v107 = 0LL;
            v108 = 0LL;
            v59 = (int)v97;
            if ( (int)RtlWow64GetCpuAreaInfo(*((_QWORD *)v97 + 657), v58, &v106) >= 0 )
            {
              if ( (v106 & 3) != 0 )
LABEL_134:
                ExRaiseDatatypeMisalignment();
              RtlpWalkWowStack(
                v94,
                0,
                v59,
                (unsigned int)&v72,
                v82,
                v81,
                *(_DWORD *)(v106 + 180),
                *(_DWORD *)(v106 + 196) - 4);
            }
          }
        }
        goto LABEL_203;
      }
      if ( v28 )
      {
        v52 = v28 - 1;
        if ( v52 )
        {
          if ( v52 != 1 )
            goto LABEL_203;
          if ( v103 <= 0x7FFFFFFEFFFFLL )
          {
            if ( v103 != *(_QWORD *)(v86 + 360) )
              goto LABEL_203;
            v104 = *(_QWORD *)(v86 + 384);
            if ( (v104 & 3) != 0 )
              goto LABEL_134;
            v73 = 1;
            SameThreadTransientFlags = *(_QWORD *)(v104 + 72);
            v95 = (char *)SameThreadTransientFlags;
            v75 = v91;
            v79 = v92;
            v22 = v84;
            if ( v84 )
              v86 = *(_QWORD *)(v84 + 208);
            v23 = ContextEx;
          }
        }
        else
        {
          if ( v103 > 0x7FFFFFFEFFFFLL )
            goto LABEL_203;
          if ( v22 && v103 == *(_QWORD *)(v86 + 360) )
          {
            v73 = 2;
            v103 = *(_QWORD *)(v22 + 312);
            v95 = (char *)(v22 + 320);
            v96 = *(_QWORD *)(v22 + 248);
            v94 = *(_QWORD *)(v22 + 256);
            v98.m128i_i64[0] = *(_QWORD *)(v22 + 264);
            v97 = *(const signed __int16 **)(v22 + 272);
            v100.m128i_i64[1] = *(_QWORD *)(v22 + 280);
            v101 = *(__m128i *)(v22 + 288);
            v102 = *(_QWORD *)(v22 + 304);
            if ( v29 )
            {
              v88 = 0;
              v77 = 0;
              if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800) == 0 )
                goto LABEL_165;
              if ( (MEMORY[0xFFFFF780000003EC] & 0xFFFFFFF8) != 0 )
                goto LABEL_165;
              v53 = v23->XState.Offset;
              if ( v23->All.Offset > (int)v53 )
                goto LABEL_165;
              if ( (signed int)(v23->All.Length + v23->All.Offset) < (signed int)(v53 + v23->XState.Length) )
                goto LABEL_165;
              v54 = (char *)v23 + v53;
              if ( !(PCONTEXT_EX)((char *)v23 + v53) )
                goto LABEL_165;
              if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
              {
                v61 = &v54[MEMORY[0xFFFFF78000000448] - 512];
                goto LABEL_149;
              }
              v55 = *((_QWORD *)v54 + 1);
              if ( (v55 & 0x800) == 0 )
              {
LABEL_165:
                v61 = 0LL;
                goto LABEL_149;
              }
              v56 = 576;
              v77 = 576;
              for ( k = 2; ; ++k )
              {
                v88 = k;
                if ( k >= 0xB )
                  break;
                if ( ((1LL << k) & v55) != 0 )
                {
                  if ( ((1LL << k) & MEMORY[0xFFFFF780000005F8]) != 0 )
                  {
                    v56 = (v56 + 63) & 0xFFFFFFC0;
                    v77 = v56;
                  }
                  v56 += *(_DWORD *)(4LL * k - 0x87FFFFFF9FCLL);
                  v77 = v56;
                }
              }
              if ( (MEMORY[0xFFFFF780000005F8] & 0x800) != 0 )
              {
                v56 = (v56 + 63) & 0xFFFFFFC0;
                v77 = v56;
              }
              v61 = &v54[v56 - 512];
LABEL_149:
              *(_QWORD *)v61 = 0LL;
            }
            v22 = v24[4];
            v84 = v22;
            SameThreadTransientFlags = v24[5];
            if ( !SameThreadTransientFlags )
              goto LABEL_203;
            ii = (_QWORD *)v24[5];
            v75 = v95;
            v79 = *(char **)SameThreadTransientFlags;
            goto LABEL_44;
          }
        }
        goto LABEL_44;
      }
      if ( v9 )
      {
        if ( v103 < 0xFFFF800000000000uLL )
        {
          if ( v103 > 0x7FFFFFFEFFFFLL )
            goto LABEL_203;
          if ( v103 != *(_QWORD *)(v86 + 360) )
            goto LABEL_203;
          v73 = 1;
          if ( v22 )
          {
            v86 = *(_QWORD *)(v22 + 208);
            if ( v86 < 0xFFFF800000000000uLL )
              goto LABEL_203;
          }
          if ( v29 )
          {
            v80 |= 0x100040u;
            v89 = 0;
            v78 = 0;
            if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & 0x800) == 0 )
              goto LABEL_145;
            if ( (MEMORY[0xFFFFF780000003EC] & 0xFFFFFFF8) != 0 )
              goto LABEL_145;
            v44 = v23->XState.Offset;
            if ( v23->All.Offset > (int)v44 )
              goto LABEL_145;
            if ( (signed int)(v23->All.Length + v23->All.Offset) < (signed int)(v44 + v23->XState.Length) )
              goto LABEL_145;
            v45 = (char *)v23 + v44;
            if ( !(PCONTEXT_EX)((char *)v23 + v44) )
              goto LABEL_145;
            if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
            {
              v50 = &v45[MEMORY[0xFFFFF78000000448] - 512];
              goto LABEL_98;
            }
            v46 = *((_QWORD *)v45 + 1);
            if ( (v46 & 0x800) == 0 )
            {
LABEL_145:
              v50 = 0LL;
              goto LABEL_98;
            }
            v47 = 576;
            v78 = 576;
            for ( m = 2; ; ++m )
            {
              v89 = m;
              if ( m >= 0xB )
                break;
              if ( ((1LL << m) & v46) != 0 )
              {
                if ( ((1LL << m) & MEMORY[0xFFFFF780000005F8]) != 0 )
                {
                  v47 = (v47 + 63) & 0xFFFFFFC0;
                  v78 = v47;
                }
                v47 += *(_DWORD *)(4LL * m - 0x87FFFFFF9FCLL);
                v78 = v47;
              }
            }
            if ( (MEMORY[0xFFFFF780000005F8] & 0x800) != 0 )
            {
              v47 = (v47 + 63) & 0xFFFFFFC0;
              v78 = v47;
            }
            v50 = &v45[v47 - 512];
LABEL_98:
            *(_QWORD *)v50 = 1LL;
            SameThreadTransientFlags = 1703LL;
            *((_QWORD *)v50 + 1) = __readmsr(0x6A7u);
          }
          v75 = v91;
          v79 = v92;
          goto LABEL_44;
        }
        if ( !v72 )
        {
LABEL_44:
          if ( v72 >= v81 )
          {
            SameThreadTransientFlags = v103;
            *(_QWORD *)(v94 + 8LL * (v72 - v81)) = v103;
          }
          if ( ++v72 >= v82 )
            goto LABEL_203;
        }
      }
      else
      {
        if ( v103 < 0xFFFF800000000000uLL )
          goto LABEL_203;
        if ( !v69 )
          goto LABEL_44;
      }
    }
  }
  v18 = KeGetCurrentThread();
  for ( n = v18->InitialStack; (n[1] & 1) != 0; n = (_QWORD *)n[5] )
    ;
  v20 = (char *)(n - 50);
  v86 = (unsigned __int64)(n - 50);
  if ( !Teb || _bittest16(Teb + 3063, 8u) )
    return 0LL;
  if ( (unsigned __int16)PsWow64GetProcessMachine(v18->ApcState.Process) != 332
    || v20[43] == 2
    || *((_WORD *)v20 + 184) != 35
    || (++v72,
        !(unsigned __int8)RtlpWalkWowStack(
                            v94,
                            (int)v20 + 360,
                            (_DWORD)Teb,
                            (unsigned int)&v72,
                            v82,
                            v81,
                            *((_DWORD *)v20 + 86),
                            *((_DWORD *)v20 + 96))) )
  {
    v91 = (char *)*((_QWORD *)v20 + 48);
    v92 = (char *)*((_QWORD *)Teb + 1);
    if ( v92 <= v91 )
      return 0LL;
    for ( ii = v18->InitialStack; (ii[1] & 1) != 0; ii = (_QWORD *)ii[5] )
      ;
    v22 = ii[4];
    v84 = v22;
    SameThreadTransientFlags = (unsigned __int8)v18->SameThreadTransientFlags;
    v71 = (SameThreadTransientFlags & 4) != 0;
    LOBYTE(SameThreadTransientFlags) = SameThreadTransientFlags | 4;
    v18->SameThreadTransientFlags = SameThreadTransientFlags;
    goto LABEL_25;
  }
LABEL_203:
  if ( v9 )
  {
    if ( !v71 )
    {
      v68 = KeGetCurrentThread();
      v68->SameThreadTransientFlags &= ~4u;
    }
  }
  return v72;
}
