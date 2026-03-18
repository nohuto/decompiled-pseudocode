/*
 * XREFs of ParseOpcode @ 0x14000E5F0
 * Callers:
 *     ParsePackage @ 0x140001230 (ParsePackage.c)
 *     ParseScope @ 0x14000D030 (ParseScope.c)
 *     ParseArg @ 0x14000DB50 (ParseArg.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     IsCompatableDSDTRevision @ 0x140008AC0 (IsCompatableDSDTRevision.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     PushFrame @ 0x140009A30 (PushFrame.c)
 *     GetNameSpaceObjectNoLock @ 0x14000AA30 (GetNameSpaceObjectNoLock.c)
 *     RtlStringCchPrintfA @ 0x14000AE88 (RtlStringCchPrintfA.c)
 *     RtlStringCbPrintfA @ 0x14000AEFC (RtlStringCbPrintfA.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     ReadField @ 0x140011880 (ReadField.c)
 *     PushCall @ 0x140013020 (PushCall.c)
 *     ParseNameTail @ 0x1400254A0 (ParseNameTail.c)
 *     RtlStringCchCopyA @ 0x1400256A0 (RtlStringCchCopyA.c)
 *     WPP_RECORDER_SF_Ds @ 0x1400413A0 (WPP_RECORDER_SF_Ds.c)
 *     PrintObject @ 0x140055B98 (PrintObject.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ParseOpcode(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  PVOID *v6; // rax
  PVOID v7; // rcx
  char *v8; // rdx
  unsigned __int8 *v9; // r14
  __int64 v10; // rax
  __int64 v11; // r15
  signed __int64 v12; // r8
  unsigned int Field; // edi
  const char **v14; // rax
  int v15; // ebx
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  int v19; // r8d
  __int64 v20; // rcx
  int v21; // edx
  int v22; // ecx
  __int64 v23; // rcx
  int v24; // ecx
  unsigned __int8 *v25; // rbx
  const void *v26; // rsi
  int v28; // eax
  __int64 v29; // rbx
  _QWORD *v30; // rsi
  __int64 v31; // rdi
  KIRQL v32; // al
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 **v38; // rdx
  int v39; // eax
  __int64 v40; // rsi
  __int64 v41; // rax
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // r12
  __int64 v46; // r14
  __int64 v47; // r15
  unsigned int v48; // ecx
  int v49; // ebx
  unsigned int v50; // ecx
  _QWORD *i; // rcx
  __int64 v52; // rax
  __int64 v53; // r9
  int v54; // ebx
  __int64 v55; // rdx
  unsigned int v56; // ebx
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 m; // r8
  __int64 v61; // r14
  __int64 **v62; // r8
  int v63; // eax
  __int64 v64; // r9
  void *v65; // rcx
  const char **v66; // rax
  int v67; // ebx
  int v68; // edx
  int v69; // r8d
  int v70; // r9d
  int v71; // edx
  __int64 v72; // rcx
  int v73; // r8d
  int v74; // ecx
  __int64 v75; // rcx
  int v76; // ecx
  __int64 v77; // rbx
  void *v78; // rax
  __int64 v79; // r9
  __int64 v80; // rdx
  char *v81; // r10
  size_t v82; // rbx
  __int64 v83; // r15
  char *p_Src; // rcx
  char v85; // al
  char *v86; // rax
  int v87; // edi
  _BYTE *v88; // r10
  __int64 v89; // rcx
  char v90; // al
  unsigned __int64 v91; // r11
  __int64 v92; // r10
  char v93; // al
  char *v94; // rax
  unsigned int NameSpaceObjectNoLock; // esi
  _BYTE *Pool2; // rdi
  KIRQL v97; // bl
  __int64 v98; // rsi
  __int64 v99; // rbx
  __int16 v100; // ax
  __int64 v101; // r14
  int v102; // r11d
  bool v103; // zf
  unsigned __int64 v104; // rdx
  char *v105; // rcx
  unsigned __int64 v106; // r9
  char *v107; // r10
  char v108; // al
  char *v109; // rax
  __int64 v110; // rcx
  char v111; // al
  unsigned __int64 v112; // r11
  __int64 v113; // r10
  char v114; // al
  char *v115; // rax
  int v116; // r11d
  unsigned __int64 v117; // rdx
  char *v118; // rcx
  unsigned __int64 v119; // r9
  char *v120; // r10
  char v121; // al
  char *v122; // rax
  __int64 v123; // rax
  __int64 v124; // r14
  unsigned __int8 *v125; // rax
  unsigned __int8 *v126; // rax
  __int64 v127; // rbx
  char *v128; // rcx
  _BYTE *v129; // rax
  unsigned int j; // r8d
  _BYTE *v131; // rdx
  __int64 v132; // r9
  _QWORD *v133; // rcx
  unsigned int v134; // eax
  __int64 **v135; // r9
  __int64 *k; // rax
  __int64 **v137; // rcx
  __int64 *v138; // r10
  _QWORD *v139; // r11
  __int64 v140; // rcx
  __int64 **v141; // rax
  __int64 **v142; // r11
  _QWORD *v143; // r9
  __int64 v144; // rcx
  _QWORD *v145; // rax
  __int64 v146; // rdi
  __int64 v147; // rcx
  _QWORD *v148; // rax
  __int64 v149; // rcx
  __int64 *v150; // rcx
  __int64 **v151; // rax
  __int64 v152; // r9
  _QWORD *v153; // rcx
  __int64 **v154; // r10
  unsigned int v155; // eax
  __int64 *n; // rax
  __int64 **v157; // rcx
  __int64 *v158; // r11
  _QWORD *v159; // rbx
  __int64 v160; // rcx
  __int64 **v161; // rax
  __int64 **v162; // rbx
  _QWORD *v163; // r10
  __int64 v164; // rcx
  _QWORD *v165; // rax
  __int64 v166; // r15
  __int64 v167; // rcx
  _QWORD *v168; // rax
  __int64 v169; // rcx
  __int64 *v170; // rcx
  __int64 **v171; // rax
  int UserData; // [rsp+20h] [rbp-E0h]
  int UserDataa; // [rsp+20h] [rbp-E0h]
  _QWORD *v174; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v175; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v176; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v177; // [rsp+60h] [rbp-A0h]
  int v178; // [rsp+68h] [rbp-98h]
  int v179; // [rsp+6Ch] [rbp-94h]
  __int64 *v180; // [rsp+70h] [rbp-90h]
  __int64 v181; // [rsp+78h] [rbp-88h]
  __int64 v182; // [rsp+80h] [rbp-80h] BYREF
  __int16 v183; // [rsp+88h] [rbp-78h]
  __int64 v184; // [rsp+90h] [rbp-70h] BYREF
  __int16 v185; // [rsp+98h] [rbp-68h]
  __int64 v186; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v187; // [rsp+A8h] [rbp-58h]
  char Src; // [rsp+B0h] [rbp-50h] BYREF
  char v189; // [rsp+B1h] [rbp-4Fh] BYREF
  char pszDest[256]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE P[128]; // [rsp+2B0h] [rbp+1B0h] BYREF

  v3 = 0LL;
  v182 = a3;
  v175 = a2;
  v6 = (PVOID *)&unk_140088FF0;
  v7 = (PVOID)a1[15];
  v8 = 0LL;
  do
  {
    if ( v7 == *v6 )
      break;
    v8 = (char *)(unsigned int)((_DWORD)v8 + 1);
    v6 += 2;
  }
  while ( (__int64)v6 < (__int64)&qword_140089090 );
  if ( (_DWORD)v8 != 10 && (dword_140088FE8[4 * (int)v8] & 1) != 0 && (_DWORD)v8 != -1 )
  {
    ConPrintf("\nHit Breakpoint %d.\n", (_DWORD)v8);
    AMLIDebugger();
    v3 = 0LL;
  }
  v9 = (unsigned __int8 *)a1[15];
  v10 = *v9;
  if ( (_BYTE)v10 == 91 )
  {
    v12 = (signed __int64)(v9 + 1);
    v11 = 0LL;
    a1[15] = v9 + 1;
    for ( i = &ExOpcodeTable; ; i += 2 )
    {
      v8 = (char *)i[1];
      if ( !v8 )
        break;
      if ( *(unsigned __int8 *)v12 == *(_DWORD *)i )
      {
        v11 = i[1];
        break;
      }
    }
  }
  else
  {
    v11 = (__int64)*(&OpcodeTable + v10);
    v12 = a1[15];
  }
  if ( !v11 )
  {
    Field = -1072431103;
    dword_1400890B8 = -1072431103;
    v14 = (const char **)&unk_140088010;
    v15 = 0;
    while ( v14[1] )
    {
      if ( *(_DWORD *)v14 == -1072431103 )
      {
        RtlStringCchPrintfA(&::pszDest, 0x100uLL, "AMLI_ERROR(%08x): %s", -1072431103, v14[1]);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Ds(
            WPP_GLOBAL_Control->DeviceExtension,
            v16,
            v17,
            v18,
            UserData,
            1,
            *((_QWORD *)&unk_140088010 + 2 * v15 + 1));
        break;
      }
      ++v15;
      v14 += 2;
    }
    LODWORD(v174) = -1072431103;
    v184 = 0x41002F004ELL;
    v185 = 0;
    v19 = 3;
    v20 = a1[10];
    v21 = 3;
    v182 = 0x41002F004ELL;
    v183 = 0;
    if ( v20 )
    {
      v22 = *(_DWORD *)(v20 + 40);
      v21 = 5;
      LOWORD(v182) = (char)v22;
      WORD1(v182) = SBYTE1(v22);
      WORD2(v182) = SBYTE2(v22);
      HIWORD(v182) = SHIBYTE(v22);
      v183 = 0;
    }
    v23 = a1[9];
    if ( v23 )
    {
      v24 = *(_DWORD *)(v23 + 40);
      v19 = 5;
      LOWORD(v184) = (char)v24;
      WORD1(v184) = SBYTE1(v24);
      WORD2(v184) = SBYTE2(v24);
      HIWORD(v184) = SHIBYTE(v24);
      v185 = 0;
    }
    v176.Ptr = (unsigned __int64)&v182;
    v176.Size = 2 * v21;
    v176.Reserved = 0;
    v177 = &v184;
    v178 = 2 * v19;
    v179 = 0;
    v180 = (__int64 *)&v174;
    v181 = 4LL;
    EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &v176);
    v25 = (unsigned __int8 *)a1[15];
    v26 = (const void *)*v25;
    if ( !(_BYTE)KdDebuggerEnabled )
    {
      RtlStringCbPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 134, v26, v25, 0LL, 0LL);
LABEL_23:
      DbgPrintEx(0x19u, 0, "%s\n", pszDest);
      return Field;
    }
    DbgPrintEx(0x19u, 0, off_140087988, *v25, v25, 0LL, 0LL);
    if ( (gDebugger & 0x40000) == 0 )
      return Field;
    RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 134, v26, v25, 0LL, 0LL);
    goto LABEL_101;
  }
  v28 = *(_DWORD *)(v11 + 28);
  if ( (v28 & 8) != 0 )
  {
    v50 = *(unsigned __int8 *)v12;
    a1[15] = v12 + 1;
    *(_WORD *)(a3 + 2) = 1;
    Field = 0;
    *(_QWORD *)(a3 + 16) = 0LL;
    if ( v50 == 10 )
    {
      *(_BYTE *)(a3 + 16) = *(_BYTE *)a1[15]++;
      goto LABEL_60;
    }
    if ( v50 == 12 )
    {
      *(_DWORD *)(a3 + 16) = *(_DWORD *)a1[15];
      a1[15] += 4LL;
    }
    else
    {
      if ( v50 <= 0xC )
      {
        if ( !(_BYTE)v50 )
        {
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("Zero");
          return Field;
        }
        if ( v50 == 1 )
        {
          *(_QWORD *)(a3 + 16) = 1LL;
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("One");
          return Field;
        }
        if ( v50 == 11 )
        {
          *(_WORD *)(a3 + 16) = *(_WORD *)a1[15];
          a1[15] += 2LL;
          goto LABEL_60;
        }
LABEL_252:
        --a1[15];
        Field = -1072431103;
        LogError(3222536193LL);
        AcpiDiagTraceAmlError(a1, 3222536193LL);
        PrintDebugMessage(128, *(unsigned __int8 *)a1[15], a1[15], 0, 0LL);
        return Field;
      }
      if ( v50 == 255 )
      {
        v127 = -1LL;
        if ( !IsCompatableDSDTRevision() )
          v127 = 0xFFFFFFFFLL;
        *(_QWORD *)(a3 + 16) = v127;
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("Ones");
        return Field;
      }
      if ( v50 != 14 )
        goto LABEL_252;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)a1[15];
      a1[15] += 8LL;
    }
LABEL_60:
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("0x%I64x", *(_QWORD *)(a3 + 16));
    return Field;
  }
  if ( (v28 & 0x10) != 0 )
  {
    Field = 0;
    if ( *(_BYTE *)v12 == 13 )
    {
      v77 = -1LL;
      a1[15] = v12 + 1;
      *(_WORD *)(a3 + 2) = 2;
      do
        ++v77;
      while ( *(_BYTE *)(a1[15] + v77) );
      *(_DWORD *)(a3 + 24) = v77 + 1;
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("\"%s\"", (const char *)a1[15]);
      v78 = (void *)HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(a3 + 24));
      *(_QWORD *)(a3 + 32) = v78;
      if ( v78 )
      {
        memmove(v78, (const void *)a1[15], *(unsigned int *)(a3 + 24));
      }
      else
      {
        Field = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(139, 0, 0, 0, 0LL);
      }
      a1[15] += *(unsigned int *)(a3 + 24);
    }
    else
    {
      Field = -1072431103;
      LogError(3222536193LL);
      AcpiDiagTraceAmlError(a1, 3222536193LL);
      PrintDebugMessage(140, *(unsigned __int8 *)a1[15], a1[15], 0, 0LL);
    }
    return Field;
  }
  if ( (v28 & 2) != 0 )
  {
    v52 = a1[12];
    Field = 0;
    v53 = (unsigned int)*(unsigned __int8 *)v12 - 104;
    v54 = v53;
    if ( (unsigned int)v53 >= *(_DWORD *)(v52 + 60) )
    {
      Field = -1072431099;
      LogError(3222536197LL);
      AcpiDiagTraceAmlError(a1, 3222536197LL);
      PrintDebugMessage(122, v54, 0, 0, 0LL);
    }
    else
    {
      v55 = *(_QWORD *)(v52 + 64) + 40 * v53;
      if ( a3 != v55 )
      {
        *(_OWORD *)a3 = *(_OWORD *)v55;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)(v55 + 16);
        *(_QWORD *)(a3 + 32) = *(_QWORD *)(v55 + 32);
        if ( (*(_BYTE *)v55 & 1) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v55 + 8) + 8LL));
        }
        else if ( *(_QWORD *)(v55 + 32) )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v55 + 8));
          *(_WORD *)a3 |= 1u;
          *(_QWORD *)(a3 + 8) = v55;
        }
      }
      ++a1[15];
      if ( (gDebugger & 0xD0) != 0 )
      {
        ConPrintf("Arg%d=", v53);
        PrintObject(a3);
      }
    }
    return Field;
  }
  if ( (v28 & 4) != 0 )
  {
    v79 = (unsigned int)*(unsigned __int8 *)v12 - 96;
    v80 = a1[12] + 8 * (v79 + 4 * v79 + 9);
    if ( a3 != v80 )
    {
      *(_OWORD *)a3 = *(_OWORD *)v80;
      *(_OWORD *)(a3 + 16) = *(_OWORD *)(v80 + 16);
      *(_QWORD *)(a3 + 32) = *(_QWORD *)(v80 + 32);
      if ( (*(_BYTE *)v80 & 1) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v80 + 8) + 8LL));
      }
      else if ( *(_QWORD *)(v80 + 32) )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v80 + 8));
        *(_WORD *)a3 |= 1u;
        *(_QWORD *)(a3 + 8) = v80;
      }
    }
    if ( (gDebugger & 0xD0) != 0 )
    {
      ConPrintf("Local%d=", v79);
      PrintObject(a3);
    }
    ++a1[15];
    return 0;
  }
  if ( (v28 & 0x20) != 0 )
  {
    v81 = (char *)a1[15];
    v82 = -1LL;
    v83 = a1[10];
    v174 = 0LL;
    if ( *v81 == 92 )
    {
      v8 = (char *)256;
      v12 = "\\" - &Src;
      p_Src = &Src;
      do
      {
        if ( v8 == (char *)-2147483390LL )
          break;
        v85 = p_Src[v12];
        if ( !v85 )
          break;
        *p_Src++ = v85;
        --v8;
      }
      while ( v8 );
      v86 = p_Src - 1;
      v87 = 0;
      if ( v8 )
        v86 = p_Src;
      v88 = v81 + 1;
      a1[15] = v88;
      v89 = -1LL;
      *v86 = 0;
      do
        ++v89;
      while ( *(&Src + v89) );
      v90 = *v88;
      if ( *v88 )
      {
        if ( v90 != 47 )
        {
          if ( v90 == 46 )
          {
            ++v88;
            LODWORD(v12) = 2;
            a1[15] = v88;
          }
          else
          {
            LODWORD(v12) = 1;
          }
LABEL_142:
          while ( (unsigned __int64)(unsigned int)v89 + 4 < 0x100 )
          {
            v8 = &Src + (unsigned int)v89;
            v3 = (unsigned int)(256 - v89);
            if ( (_DWORD)v89 != 256 )
            {
              if ( v3 > 0x7FFFFFFF )
              {
                *v8 = 0;
              }
              else
              {
                v91 = 4 - v3;
                v92 = v88 - v8;
                do
                {
                  if ( !(v3 + v91) )
                    break;
                  v93 = v8[v92];
                  if ( !v93 )
                    break;
                  *v8++ = v93;
                  --v3;
                }
                while ( v3 );
                v94 = v8 - 1;
                if ( v3 )
                  v94 = v8;
                *v94 = 0;
              }
            }
            LODWORD(v89) = v89 + 4;
            v88 = (_BYTE *)(a1[15] + 4LL);
            a1[15] = v88;
            v12 = (unsigned int)(v12 - 1);
            if ( (_DWORD)v12 && (v102 = v89 + 1, (unsigned int)(v89 + 1) < 0x100) )
            {
              v103 = (_DWORD)v89 == 256;
              v104 = (unsigned int)(256 - v89);
              v105 = &Src + (unsigned int)v89;
              if ( !v103 )
              {
                if ( v104 > 0x7FFFFFFF )
                {
                  *v105 = 0;
                }
                else
                {
                  v106 = 2147483646 - v104;
                  v107 = (char *)("." - v105);
                  do
                  {
                    if ( !(v104 + v106) )
                      break;
                    v108 = v107[(_QWORD)v105];
                    if ( !v108 )
                      break;
                    *v105++ = v108;
                    --v104;
                  }
                  while ( v104 );
                  v109 = v105 - 1;
                  if ( v104 )
                    v109 = v105;
                  *v109 = 0;
                }
              }
              v88 = (_BYTE *)a1[15];
              LODWORD(v89) = v102;
            }
            else if ( !(_DWORD)v12 )
            {
              goto LABEL_154;
            }
          }
LABEL_324:
          v87 = -1073741562;
          LogError(3221225734LL);
          AcpiDiagTraceAmlError(a1, 3221225734LL);
          PrintDebugMessage(130, (unsigned int)&Src, 0, 0, 0LL);
          goto LABEL_154;
        }
        v125 = v88 + 1;
        a1[15] = v88 + 1;
        v88 += 2;
        v12 = *v125;
        a1[15] = v88;
        if ( (_DWORD)v12 )
          goto LABEL_142;
      }
      else
      {
        a1[15] = v88 + 1;
      }
    }
    else if ( *v81 == 94 )
    {
      RtlStringCchCopyA(&Src, 0x100uLL, "^");
      ++a1[15];
      v128 = &v189;
      v129 = (_BYTE *)a1[15];
      for ( j = 1; j < 0xFF; ++j )
      {
        v131 = v129;
        if ( *v129 != 94 )
          break;
        ++v129;
        *v128++ = 94;
        a1[15] = v129;
        v131 = v129;
      }
      *(&Src + j) = 0;
      if ( *v131 == 94 )
      {
        Field = -1073741562;
        LogError(3221225734LL);
        AcpiDiagTraceAmlError(a1, 3221225734LL);
        PrintDebugMessage(129, (unsigned int)&Src, 0, 0, 0LL);
        return Field;
      }
      v87 = ParseNameTail(a1, a1 + 15);
    }
    else
    {
      Src = 0;
      v87 = 0;
      v110 = -1LL;
      do
        ++v110;
      while ( *(&Src + v110) );
      v111 = *v81;
      if ( *v81 )
      {
        if ( v111 != 47 )
        {
          if ( v111 == 46 )
          {
            ++v81;
            LODWORD(v12) = 2;
            a1[15] = v81;
          }
          else
          {
            LODWORD(v12) = 1;
          }
LABEL_203:
          while ( (unsigned __int64)(unsigned int)v110 + 4 < 0x100 )
          {
            v8 = &Src + (unsigned int)v110;
            v3 = (unsigned int)(256 - v110);
            if ( (_DWORD)v110 != 256 )
            {
              if ( v3 > 0x7FFFFFFF )
              {
                *v8 = 0;
              }
              else
              {
                v112 = 4 - v3;
                v113 = v81 - v8;
                do
                {
                  if ( !(v3 + v112) )
                    break;
                  v114 = v8[v113];
                  if ( !v114 )
                    break;
                  *v8++ = v114;
                  --v3;
                }
                while ( v3 );
                v115 = v8 - 1;
                if ( v3 )
                  v115 = v8;
                *v115 = 0;
              }
            }
            LODWORD(v110) = v110 + 4;
            v81 = (char *)(a1[15] + 4LL);
            a1[15] = v81;
            v12 = (unsigned int)(v12 - 1);
            if ( (_DWORD)v12 && (v116 = v110 + 1, (unsigned int)(v110 + 1) < 0x100) )
            {
              v103 = (_DWORD)v110 == 256;
              v117 = (unsigned int)(256 - v110);
              v118 = &Src + (unsigned int)v110;
              if ( !v103 )
              {
                if ( v117 > 0x7FFFFFFF )
                {
                  *v118 = 0;
                }
                else
                {
                  v119 = 2147483646 - v117;
                  v120 = (char *)("." - v118);
                  do
                  {
                    if ( !(v117 + v119) )
                      break;
                    v121 = v120[(_QWORD)v118];
                    if ( !v121 )
                      break;
                    *v118++ = v121;
                    --v117;
                  }
                  while ( v117 );
                  v122 = v118 - 1;
                  if ( v117 )
                    v122 = v118;
                  *v122 = 0;
                }
              }
              v81 = (char *)a1[15];
              LODWORD(v110) = v116;
            }
            else if ( !(_DWORD)v12 )
            {
              goto LABEL_154;
            }
          }
          goto LABEL_324;
        }
        v126 = (unsigned __int8 *)(v81 + 1);
        a1[15] = v81 + 1;
        v81 += 2;
        v12 = *v126;
        a1[15] = v81;
        if ( (_DWORD)v12 )
          goto LABEL_203;
      }
      else
      {
        a1[15] = v81 + 1;
      }
    }
LABEL_154:
    if ( v87 || (gDebugger & 0xD0) == 0 )
    {
      NameSpaceObjectNoLock = v87;
      if ( v87 )
      {
LABEL_162:
        Field = NameSpaceObjectNoLock;
        if ( !NameSpaceObjectNoLock )
        {
          v98 = (__int64)v174;
          if ( *((_WORD *)v174 + 33) == 128 )
          {
            do
              v98 = *(_QWORD *)(v98 + 80);
            while ( *(_WORD *)(v98 + 66) == 128 );
          }
          if ( (gdwfAMLI & 4) != 0 )
            _InterlockedIncrement((volatile signed __int32 *)(v98 + 112));
          if ( *(_WORD *)(v98 + 66) == 8 )
          {
            Field = PushCall(a1, v98, v182, v3);
          }
          else
          {
            v99 = v98 + 64;
            Field = 0;
            v175 = 0LL;
            while ( 1 )
            {
              while ( 1 )
              {
                v100 = *(_WORD *)(v99 + 2);
                if ( v100 != 128 )
                  break;
                v99 = *(_QWORD *)(v99 + 16) + 64LL;
              }
              if ( v100 != 129 )
                break;
              v99 = *(_QWORD *)(v99 + 16);
            }
            if ( v100 == 5 )
            {
              Field = PushFrame(a1, 1430668097, 0x30u, (__int64)AccFieldUnit, &v175);
              if ( !Field )
              {
                v123 = v175;
                v124 = v182;
                *(_QWORD *)(v175 + 32) = v99;
                *(_DWORD *)(v123 + 16) = 0x10000;
                *(_QWORD *)(v123 + 40) = v124;
              }
            }
            else if ( v100 == 14 )
            {
              Field = ReadField(a1, v99, *(_QWORD *)(v99 + 32) + 12LL, v182);
            }
            else
            {
              v101 = v182;
              if ( v182 != v99 )
              {
                *(_OWORD *)v182 = *(_OWORD *)v99;
                *(_OWORD *)(v101 + 16) = *(_OWORD *)(v99 + 16);
                *(_QWORD *)(v101 + 32) = *(_QWORD *)(v99 + 32);
                if ( (*(_BYTE *)v99 & 1) != 0 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v99 + 8) + 8LL));
                }
                else if ( *(_QWORD *)(v99 + 32) )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v99 + 8));
                  *(_WORD *)v101 |= 1u;
                  *(_QWORD *)(v101 + 8) = v99;
                }
              }
              if ( (gDebugger & 0xD0) != 0 )
              {
                ConPrintf("=", v8, v12, v3);
                PrintObject(v101);
              }
            }
          }
          DereferenceObjectEx(v98);
          DereferenceObjectEx((__int64)v174);
        }
        return Field;
      }
    }
    else
    {
      ConPrintf("%s", &Src);
    }
    do
      ++v82;
    while ( *(&Src + v82) );
    if ( v82 + 1 >= 0x80 )
    {
      Pool2 = (_BYTE *)ExAllocatePool2(64LL, v82 + 1, 1768973121LL);
      if ( !Pool2 )
        return (unsigned int)-1073741670;
    }
    else
    {
      Pool2 = P;
    }
    memmove(Pool2, &Src, v82);
    Pool2[v82] = 0;
    v97 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2, v83, (__int64 *)&v174, 0);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v97);
    if ( P != Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Field = NameSpaceObjectNoLock;
    if ( NameSpaceObjectNoLock == -1073741772 )
    {
      LogError(3221225524LL);
      AcpiDiagTraceAmlError(a1, 3221225524LL);
      PrintDebugMessage(120, (unsigned int)&Src, 0, 0, 0LL);
      return Field;
    }
    goto LABEL_162;
  }
  if ( (v28 & 0x40) != 0 )
  {
    Field = -1072431098;
    LogError(3222536198LL);
    AcpiDiagTraceAmlError(a1, 3222536198LL);
    PrintDebugMessage(133, 0, 0, 0, 0LL);
    return Field;
  }
  v29 = 0LL;
  a1[15] = v12 + 1;
  v30 = a1 + 60;
  v31 = 0LL;
  v32 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v33 = (__int64)(a1 + 60);
  v174 = a1 + 60;
  byte_140088EC8 = v32;
  v34 = (__int64)(a1 + 60);
  v35 = (__int64)(a1 + 60);
  v36 = (__int64)(a1 + 60);
  while ( v35 )
  {
    v37 = *(_QWORD *)(v36 + 40);
    v38 = (__int64 **)(v36 + 40);
    v31 = v34;
    while ( 1 )
    {
      v29 = v37 - 16;
      if ( v38 == (__int64 **)(v29 + 16) )
      {
        v29 = 0LL;
        goto LABEL_36;
      }
      if ( *(_DWORD *)(v29 + 4) >= 0x70u )
        break;
      v37 = *(_QWORD *)(v29 + 16);
    }
    if ( v29 )
    {
      v132 = *(_QWORD *)(v29 + 16);
      if ( *(_QWORD *)(v132 + 8) != v29 + 16 )
        goto LABEL_283;
      v133 = *(_QWORD **)(v29 + 24);
      if ( *v133 != v29 + 16 )
        goto LABEL_283;
      *v133 = v132;
      *(_QWORD *)(v132 + 8) = v133;
      v134 = *(_DWORD *)(v29 + 4);
      if ( v134 >= 0x90 )
      {
        v135 = (__int64 **)(v29 + 112);
        *(_DWORD *)(v29 + 112) = 0;
        *(_DWORD *)(v29 + 116) = v134 - 112;
        *(_QWORD *)(v29 + 120) = v33;
        *(_DWORD *)(v29 + 4) = 112;
        for ( k = *v38; k != (__int64 *)v38; k = (__int64 *)*k )
        {
          if ( v29 + 128 < (unsigned __int64)k )
            break;
        }
        v137 = (__int64 **)k[1];
        v138 = (__int64 *)(v29 + 128);
        if ( *v137 != k )
          goto LABEL_283;
        *(_QWORD *)(v29 + 136) = v137;
        *v138 = (__int64)k;
        *v137 = v138;
        k[1] = (__int64)v138;
        v139 = (_QWORD *)*v138;
        v140 = *v138 - 16;
        if ( (__int64 **)*v138 != v38 )
        {
          v146 = *(unsigned int *)(v29 + 116);
          if ( (__int64 **)v140 == (__int64 **)((char *)v135 + v146) )
          {
            *(_DWORD *)(v29 + 116) = v146 + *(_DWORD *)(v140 + 4);
            v147 = *v139;
            if ( *(_QWORD **)(*v139 + 8LL) != v139 )
              goto LABEL_283;
            v148 = (_QWORD *)v139[1];
            if ( (_QWORD *)*v148 != v139 )
              goto LABEL_283;
            *v148 = v147;
            *(_QWORD *)(v147 + 8) = v148;
          }
        }
        v141 = *(__int64 ***)(v29 + 136);
        v142 = v141 - 2;
        if ( v141 != v38 )
        {
          v149 = *((unsigned int *)v142 + 1);
          if ( v135 == (__int64 **)((char *)v142 + v149) )
          {
            *((_DWORD *)v142 + 1) = *(_DWORD *)(v29 + 116) + v149;
            v150 = (__int64 *)*v138;
            if ( *(__int64 **)(*v138 + 8) != v138 )
              goto LABEL_283;
            v151 = *(__int64 ***)(v29 + 136);
            if ( *v151 != v138 )
              goto LABEL_283;
            *v151 = v150;
            v135 = v142;
            v150[1] = (__int64)v151;
          }
        }
        if ( *(_QWORD *)(v33 + 32) <= (unsigned __int64)v135 + *((unsigned int *)v135 + 1) )
        {
          *(_QWORD *)(v33 + 32) = v135;
          v143 = v135 + 2;
          v144 = *v143;
          if ( *(_QWORD **)(*v143 + 8LL) != v143 )
            goto LABEL_283;
          v145 = (_QWORD *)v143[1];
          if ( (_QWORD *)*v145 != v143 )
            goto LABEL_283;
          *v145 = v144;
          *(_QWORD *)(v144 + 8) = v145;
        }
      }
      goto LABEL_43;
    }
LABEL_36:
    if ( (unsigned int)(*(_DWORD *)(v33 + 8) - *(_DWORD *)(v33 + 32)) >= 0x70 )
      goto LABEL_42;
    v33 = *(_QWORD *)(v33 + 24);
    v35 = v33;
    v174 = (_QWORD *)v33;
    v34 = v33;
    v36 = v33;
  }
  if ( v30 == (_QWORD *)gpheapGlobal )
  {
    if ( (unsigned int)gdwGlobalHeapBlkSize < 0xA8 )
    {
      v36 = 0x70 % (unsigned int)gdwGlobalHeapBlkSize;
      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x70 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
        LODWORD(gdwGlobalHeapBlkSize) = 112;
    }
    v39 = NewGlobalHeap(&v174, v36);
  }
  else
  {
    v39 = NewLocalHeap(&v174);
  }
  if ( !v39 )
  {
    v33 = (__int64)v174;
    v174[2] = v30;
    *(_QWORD *)(v31 + 24) = v33;
LABEL_42:
    v29 = *(_QWORD *)(v33 + 32);
    *(_QWORD *)(v33 + 32) = v29 + 112;
    *(_DWORD *)(v29 + 4) = 112;
LABEL_43:
    *(_DWORD *)v29 = 1297237576;
    *(_QWORD *)(v29 + 8) = v33;
    *(_OWORD *)(v29 + 16) = 0LL;
    *(_OWORD *)(v29 + 32) = 0LL;
    *(_OWORD *)(v29 + 48) = 0LL;
    *(_OWORD *)(v29 + 64) = 0LL;
    *(_OWORD *)(v29 + 80) = 0LL;
    *(_OWORD *)(v29 + 96) = 0LL;
  }
  KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
  v40 = v29 + 16;
  if ( !v29 )
    v40 = 0LL;
  if ( !v40 )
  {
    Field = -1072431102;
    dword_1400890B8 = -1072431102;
    v66 = (const char **)&unk_140088010;
    v67 = 0;
    while ( v66[1] )
    {
      if ( *(_DWORD *)v66 == -1072431102 )
      {
        RtlStringCchPrintfA(&::pszDest, 0x100uLL, "AMLI_ERROR(%08x): %s", -1072431102, v66[1]);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Ds(
            WPP_GLOBAL_Control->DeviceExtension,
            v68,
            v69,
            v70,
            UserDataa,
            2,
            *((_QWORD *)&unk_140088010 + 2 * v67 + 1));
        break;
      }
      ++v67;
      v66 += 2;
    }
    LODWORD(v174) = -1072431102;
    v186 = 0x41002F004ELL;
    v187 = 0;
    v71 = 3;
    v72 = a1[10];
    v73 = 3;
    v184 = 0x41002F004ELL;
    v185 = 0;
    if ( v72 )
    {
      v74 = *(_DWORD *)(v72 + 40);
      v73 = 5;
      LOWORD(v184) = (char)v74;
      WORD1(v184) = SBYTE1(v74);
      WORD2(v184) = SBYTE2(v74);
      HIWORD(v184) = SHIBYTE(v74);
      v185 = 0;
    }
    v75 = a1[9];
    if ( v75 )
    {
      v76 = *(_DWORD *)(v75 + 40);
      v71 = 5;
      LOWORD(v186) = (char)v76;
      WORD1(v186) = SBYTE1(v76);
      WORD2(v186) = SBYTE2(v76);
      HIWORD(v186) = SHIBYTE(v76);
      v187 = 0;
    }
    v176.Ptr = (unsigned __int64)&v184;
    v176.Size = 2 * v73;
    v176.Reserved = 0;
    v177 = &v186;
    v178 = 2 * v71;
    v179 = 0;
    v180 = (__int64 *)&v174;
    v181 = 4LL;
    EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &v176);
    if ( !(_BYTE)KdDebuggerEnabled )
    {
      RtlStringCbPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 153, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_23;
    }
    DbgPrintEx(0x19u, 0, off_140087AB8, 0LL, 0LL, 0LL, 0LL);
    if ( (gDebugger & 0x40000) == 0 )
      return Field;
    RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 153, 0LL, 0LL, 0LL, 0LL);
LABEL_101:
    DbgCommandString("ACPI", pszDest);
    return Field;
  }
  Field = 0;
  *(_QWORD *)(v40 + 8) = a1[52];
  a1[52] = v40;
  *(_QWORD *)(v40 + 24) = ParseTerm;
  v41 = v175;
  *(_DWORD *)v40 = 1297237332;
  *(_QWORD *)(v40 + 32) = v9;
  v42 = v182;
  *(_QWORD *)(v40 + 48) = v41;
  *(_QWORD *)(v40 + 56) = v11;
  *(_QWORD *)(v40 + 88) = v42;
  v43 = *(_QWORD *)(v11 + 16);
  if ( !v43 )
  {
    *(_DWORD *)(v40 + 76) = 0;
    return Field;
  }
  v44 = -1LL;
  do
    ++v44;
  while ( *(_BYTE *)(v43 + v44) );
  *(_DWORD *)(v40 + 76) = v44;
  if ( (_DWORD)v44 )
  {
    v45 = a1[40];
    v46 = 0LL;
    v47 = 0LL;
    v48 = 40 * v44 + 16;
    if ( v48 < 40 * (int)v44 )
    {
LABEL_54:
      *(_QWORD *)(v40 + 80) = 0LL;
LABEL_55:
      Field = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(154, 0, 0, 0, 0LL);
      return Field;
    }
    if ( v48 < 0x20 )
    {
      v49 = 39;
    }
    else
    {
      v49 = 40 * v44 + 23;
      if ( v48 + 7 < v48 )
        goto LABEL_54;
    }
    v56 = v49 & 0xFFFFFFF8;
    byte_140088EC8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v57 = v45;
    v58 = v45;
    v59 = v45;
    for ( m = v45; ; m = v57 )
    {
      v182 = v57;
      if ( !v58 )
        break;
      v61 = *(_QWORD *)(m + 40);
      v62 = (__int64 **)(m + 40);
      v47 = v59;
      while ( 1 )
      {
        v46 = v61 - 16;
        if ( v62 == (__int64 **)(v46 + 16) )
        {
          v46 = 0LL;
          goto LABEL_79;
        }
        if ( v56 <= *(_DWORD *)(v46 + 4) )
          break;
        v61 = *(_QWORD *)(v46 + 16);
      }
      if ( v46 )
      {
        v152 = *(_QWORD *)(v46 + 16);
        if ( *(_QWORD *)(v152 + 8) != v46 + 16 )
          goto LABEL_283;
        v153 = *(_QWORD **)(v46 + 24);
        if ( *v153 != v46 + 16 )
          goto LABEL_283;
        *v153 = v152;
        *(_QWORD *)(v152 + 8) = v153;
        v64 = v56;
        if ( *(unsigned int *)(v46 + 4) >= (unsigned __int64)v56 + 32 )
        {
          v154 = (__int64 **)(v56 + v46);
          *(_DWORD *)v154 = 0;
          v155 = *(_DWORD *)(v46 + 4) - v56;
          v154[1] = (__int64 *)v57;
          *((_DWORD *)v154 + 1) = v155;
          *(_DWORD *)(v46 + 4) = v56;
          for ( n = *v62; n != (__int64 *)v62; n = (__int64 *)*n )
          {
            if ( v154 + 2 < (__int64 **)n )
              break;
          }
          v157 = (__int64 **)n[1];
          v158 = (__int64 *)(v154 + 2);
          if ( *v157 != n )
            goto LABEL_283;
          v154[3] = (__int64 *)v157;
          *v158 = (__int64)n;
          *v157 = v158;
          n[1] = (__int64)v158;
          v159 = (_QWORD *)*v158;
          v160 = *v158 - 16;
          if ( (__int64 **)*v158 != v62 )
          {
            v166 = *((unsigned int *)v154 + 1);
            if ( (__int64 **)v160 == (__int64 **)((char *)v154 + v166) )
            {
              *((_DWORD *)v154 + 1) = v166 + *(_DWORD *)(v160 + 4);
              v167 = *v159;
              if ( *(_QWORD **)(*v159 + 8LL) == v159 )
              {
                v168 = (_QWORD *)v159[1];
                if ( (_QWORD *)*v168 == v159 )
                {
                  *v168 = v167;
                  *(_QWORD *)(v167 + 8) = v168;
                  goto LABEL_302;
                }
              }
LABEL_283:
              __fastfail(3u);
            }
          }
LABEL_302:
          v161 = (__int64 **)v154[3];
          v162 = v161 - 2;
          if ( v161 != v62 )
          {
            v169 = *((unsigned int *)v162 + 1);
            if ( v154 == (__int64 **)((char *)v162 + v169) )
            {
              *((_DWORD *)v162 + 1) = *((_DWORD *)v154 + 1) + v169;
              v170 = (__int64 *)*v158;
              if ( *(__int64 **)(*v158 + 8) != v158 )
                goto LABEL_283;
              v171 = (__int64 **)v154[3];
              if ( *v171 != v158 )
                goto LABEL_283;
              *v171 = v170;
              v154 = v162;
              v170[1] = (__int64)v171;
            }
          }
          if ( *(_QWORD *)(v57 + 32) <= (unsigned __int64)v154 + *((unsigned int *)v154 + 1) )
          {
            *(_QWORD *)(v57 + 32) = v154;
            v163 = v154 + 2;
            v164 = *v163;
            if ( *(_QWORD **)(*v163 + 8LL) != v163 )
              goto LABEL_283;
            v165 = (_QWORD *)v163[1];
            if ( (_QWORD *)*v165 != v163 )
              goto LABEL_283;
            *v165 = v164;
            *(_QWORD *)(v164 + 8) = v165;
          }
        }
        goto LABEL_86;
      }
LABEL_79:
      if ( v56 <= *(_DWORD *)(v57 + 8) - *(_DWORD *)(v57 + 32) )
        goto LABEL_85;
      v57 = *(_QWORD *)(v57 + 24);
      v58 = v57;
      v59 = v57;
    }
    if ( v45 == gpheapGlobal )
    {
      if ( v56 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
      {
        v57 = v56 % (unsigned int)gdwGlobalHeapBlkSize;
        if ( (unsigned int)gdwGlobalHeapBlkSize * (v56 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
        {
          if ( v56 > 0x800000 )
            goto LABEL_87;
          LODWORD(gdwGlobalHeapBlkSize) = v56;
        }
        else
        {
          LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v56 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        }
      }
      v63 = NewGlobalHeap(&v182, v57);
    }
    else
    {
      v63 = NewLocalHeap(&v182);
    }
    if ( !v63 )
    {
      v57 = v182;
      *(_QWORD *)(v182 + 16) = v45;
      *(_QWORD *)(v47 + 24) = v57;
LABEL_85:
      v46 = *(_QWORD *)(v57 + 32);
      v64 = v56;
      *(_QWORD *)(v57 + 32) = v46 + v56;
      *(_DWORD *)(v46 + 4) = v56;
LABEL_86:
      *(_QWORD *)(v46 + 8) = v57;
      *(_DWORD *)v46 = 1413563464;
      memset((void *)(v46 + 16), 0, v64 - 16);
    }
LABEL_87:
    KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
    v65 = (void *)(v46 + 16);
    if ( !v46 )
      v65 = 0LL;
    *(_QWORD *)(v40 + 80) = v65;
    if ( v65 )
    {
      memset(v65, 0, 40LL * *(unsigned int *)(v40 + 76));
      return Field;
    }
    goto LABEL_55;
  }
  return Field;
}
