/*
 * XREFs of ParseSuperName @ 0x140024820
 * Callers:
 *     ParseArg @ 0x14000DB50 (ParseArg.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     PushTerm @ 0x14000A040 (PushTerm.c)
 *     GetNameSpaceObjectNoLock @ 0x14000AA30 (GetNameSpaceObjectNoLock.c)
 *     RtlStringCbPrintfA @ 0x14000AEFC (RtlStringCbPrintfA.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     GetBaseData @ 0x140025460 (GetBaseData.c)
 *     ParseNameTail @ 0x1400254A0 (ParseNameTail.c)
 *     RtlStringCchCopyA @ 0x1400256A0 (RtlStringCchCopyA.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ParseSuperName(_QWORD *a1, __int64 a2, char a3, __int64 a4)
{
  unsigned __int8 *v4; // r10
  unsigned int v5; // edi
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  __int64 v11; // r15
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rbx
  size_t v15; // rbx
  _BYTE *Pool2; // rsi
  KIRQL v17; // bl
  int NameSpaceObjectNoLock; // r14d
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v22; // rdx
  char *p_Src; // rcx
  char v24; // al
  char *v25; // rax
  _BYTE *v26; // r10
  __int64 v27; // rcx
  char v28; // al
  int v29; // r12d
  char *v30; // rdx
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // r9
  __int64 v33; // r10
  char v34; // al
  char *v35; // rax
  int v36; // r8d
  __int64 v37; // rcx
  int v38; // edx
  int v39; // ecx
  __int64 v40; // rcx
  int v41; // ecx
  int v42; // eax
  unsigned __int8 *v43; // rbx
  const void *v44; // rsi
  int v45; // edx
  __int64 v46; // rcx
  int v47; // r8d
  int v48; // ecx
  __int64 v49; // rcx
  int v50; // ecx
  int v51; // r11d
  bool v52; // zf
  unsigned __int64 v53; // rdx
  char *v54; // rcx
  unsigned __int64 v55; // r8
  char *v56; // r9
  char v57; // al
  char *v58; // rax
  __int64 v59; // rdx
  int v60; // r12d
  char *v61; // rcx
  unsigned __int64 v62; // r8
  unsigned __int64 v63; // r9
  __int64 v64; // r10
  char v65; // al
  char *v66; // rax
  int v67; // r11d
  char *v68; // rcx
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // rdx
  char *v71; // r9
  char v72; // al
  char *v73; // rax
  unsigned int v74; // eax
  unsigned __int8 *v75; // rax
  unsigned __int8 *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rbx
  char *v79; // rdx
  _BYTE *v80; // rax
  unsigned int i; // r12d
  _BYTE *v82; // rcx
  __int64 v84; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v86; // [rsp+60h] [rbp-A0h]
  int v87; // [rsp+68h] [rbp-98h]
  int v88; // [rsp+6Ch] [rbp-94h]
  __int64 *v89; // [rsp+70h] [rbp-90h]
  __int64 v90; // [rsp+78h] [rbp-88h]
  __int64 v91; // [rsp+80h] [rbp-80h] BYREF
  __int16 v92; // [rsp+88h] [rbp-78h]
  __int64 v93; // [rsp+90h] [rbp-70h] BYREF
  __int16 v94; // [rsp+98h] [rbp-68h]
  char Src; // [rsp+A0h] [rbp-60h] BYREF
  char v96; // [rsp+A1h] [rbp-5Fh] BYREF
  _BYTE P[128]; // [rsp+1A0h] [rbp+A0h] BYREF

  v4 = (unsigned __int8 *)a1[15];
  v5 = 0;
  v93 = a2;
  v84 = 0LL;
  v9 = *v4;
  v10 = v4 + 1;
  v11 = 0LL;
  if ( !(_BYTE)v9 )
  {
    a1[15] = v10;
    return v5;
  }
  if ( (_BYTE)v9 == 91 && *v10 == 49 )
  {
    a1[15] = v4 + 2;
    *(_WORD *)(a2 + 2) = 16;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("Debug");
    return v5;
  }
  v12 = (__int64)*(&OpcodeTable + v9);
  if ( v12 )
  {
    v13 = *(_DWORD *)(v12 + 28);
    if ( (v13 & 0x20) == 0 )
    {
      if ( (v13 & 2) != 0 )
      {
        v77 = a1[12];
        v78 = (unsigned int)(v9 - 104);
        a1[15] = v10;
        if ( (unsigned int)v78 >= *(_DWORD *)(v77 + 60) )
        {
          LogError(-1072431099);
          AcpiDiagTraceAmlError((__int64)a1, -1072431099);
          PrintDebugMessage(0x8Eu, (const void *)(unsigned int)v78, 0LL, 0LL, 0LL);
          return (unsigned int)-1072431099;
        }
        else
        {
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("Arg%d", v78);
          *(_WORD *)(a2 + 2) = 129;
          *(_QWORD *)(a2 + 16) = GetBaseData(*(_QWORD *)(a1[12] + 64LL) + 40 * v78);
        }
        return v5;
      }
      if ( (v13 & 4) != 0 )
      {
        a1[15] = v10;
        v14 = (unsigned int)(v9 - 96);
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("Local%d", v14);
        *(_WORD *)(a2 + 2) = 129;
        *(_QWORD *)(a2 + 16) = a1[12] + 8 * (v14 + 4 * v14 + 9);
        return v5;
      }
      if ( (v13 & 0x80u) != 0 )
      {
        v74 = PushTerm(a1, (__int64)v4, a4, v12, a2);
        ++a1[15];
        return v74;
      }
      LogError(-1072431097);
      LODWORD(v84) = -1072431097;
      v91 = 0x41002F004ELL;
      v92 = 0;
      v45 = 3;
      v46 = a1[10];
      v47 = 3;
      v93 = 0x41002F004ELL;
      v94 = 0;
      if ( v46 )
      {
        v48 = *(_DWORD *)(v46 + 40);
        v47 = 5;
        LOWORD(v93) = (char)v48;
        WORD1(v93) = SBYTE1(v48);
        WORD2(v93) = SBYTE2(v48);
        HIWORD(v93) = SHIBYTE(v48);
        v94 = 0;
      }
      v49 = a1[9];
      if ( v49 )
      {
        v50 = *(_DWORD *)(v49 + 40);
        v45 = 5;
        LOWORD(v91) = (char)v50;
        WORD1(v91) = SBYTE1(v50);
        WORD2(v91) = SBYTE2(v50);
        HIWORD(v91) = SHIBYTE(v50);
        v92 = 0;
      }
      UserData.Ptr = (unsigned __int64)&v93;
      UserData.Size = 2 * v47;
      v86 = &v91;
      v42 = 2 * v45;
      goto LABEL_59;
    }
    v15 = -1LL;
    v91 = a1[10];
    if ( (_BYTE)v9 == 92 )
    {
      v22 = 256LL;
      p_Src = &Src;
      do
      {
        if ( v22 == -2147483390 )
          break;
        v24 = p_Src["\\" - &Src];
        if ( !v24 )
          break;
        *p_Src++ = v24;
        --v22;
      }
      while ( v22 );
      v25 = p_Src - 1;
      NameSpaceObjectNoLock = 0;
      if ( v22 )
        v25 = p_Src;
      v26 = v4 + 1;
      a1[15] = v26;
      v27 = -1LL;
      *v25 = 0;
      do
        ++v27;
      while ( *(&Src + v27) );
      v28 = *v26;
      if ( !*v26 )
      {
        a1[15] = v26 + 1;
        goto LABEL_11;
      }
      if ( v28 != 47 )
      {
        if ( v28 == 46 )
        {
          ++v26;
          v29 = 2;
          a1[15] = v26;
        }
        else
        {
          v29 = 1;
        }
LABEL_41:
        while ( (unsigned __int64)(unsigned int)v27 + 4 < 0x100 )
        {
          v30 = &Src + (unsigned int)v27;
          v31 = (unsigned int)(256 - v27);
          if ( (_DWORD)v27 != 256 )
          {
            if ( v31 > 0x7FFFFFFF )
            {
              *v30 = 0;
            }
            else
            {
              v32 = 4 - v31;
              v33 = v26 - v30;
              do
              {
                if ( !(v31 + v32) )
                  break;
                v34 = v30[v33];
                if ( !v34 )
                  break;
                *v30++ = v34;
                --v31;
              }
              while ( v31 );
              v35 = v30 - 1;
              if ( v31 )
                v35 = v30;
              *v35 = 0;
            }
          }
          LODWORD(v27) = v27 + 4;
          v26 = (_BYTE *)(a1[15] + 4LL);
          a1[15] = v26;
          if ( --v29 && (v51 = v27 + 1, (unsigned int)(v27 + 1) < 0x100) )
          {
            v52 = (_DWORD)v27 == 256;
            v53 = (unsigned int)(256 - v27);
            v54 = &Src + (unsigned int)v27;
            if ( !v52 )
            {
              if ( v53 > 0x7FFFFFFF )
              {
                *v54 = 0;
              }
              else
              {
                v55 = 2147483646 - v53;
                v56 = (char *)("." - v54);
                do
                {
                  if ( !(v53 + v55) )
                    break;
                  v57 = v56[(_QWORD)v54];
                  if ( !v57 )
                    break;
                  *v54++ = v57;
                  --v53;
                }
                while ( v53 );
                v58 = v54 - 1;
                if ( v53 )
                  v58 = v54;
                *v58 = 0;
              }
            }
            v26 = (_BYTE *)a1[15];
            LODWORD(v27) = v51;
          }
          else if ( !v29 )
          {
            goto LABEL_11;
          }
        }
LABEL_145:
        NameSpaceObjectNoLock = -1073741562;
        LogError(-1073741562);
        AcpiDiagTraceAmlError((__int64)a1, -1073741562);
        PrintDebugMessage(0x82u, &Src, 0LL, 0LL, 0LL);
        goto LABEL_11;
      }
      v75 = v26 + 1;
      a1[15] = v26 + 1;
      v26 += 2;
      v29 = *v75;
      a1[15] = v26;
      if ( v29 )
        goto LABEL_41;
    }
    else if ( (_BYTE)v9 == 94 )
    {
      RtlStringCchCopyA(&Src, 0x100uLL, "^");
      ++a1[15];
      v79 = &v96;
      v80 = (_BYTE *)a1[15];
      for ( i = 1; i < 0xFF; ++i )
      {
        v82 = v80;
        if ( *v80 != 94 )
          break;
        ++v80;
        *v79++ = 94;
        a1[15] = v80;
        v82 = v80;
      }
      *(&Src + i) = 0;
      if ( *v82 == 94 )
      {
        LogError(-1073741562);
        AcpiDiagTraceAmlError((__int64)a1, -1073741562);
        PrintDebugMessage(0x81u, &Src, 0LL, 0LL, 0LL);
        return (unsigned int)-1073741562;
      }
      NameSpaceObjectNoLock = ParseNameTail(a1, a1 + 15);
    }
    else
    {
      Src = 0;
      NameSpaceObjectNoLock = 0;
      v59 = -1LL;
      do
        ++v59;
      while ( *(&Src + v59) );
      if ( (_BYTE)v9 != 47 )
      {
        if ( (_BYTE)v9 == 46 )
        {
          ++v4;
          v60 = 2;
          a1[15] = v4;
        }
        else
        {
          v60 = 1;
        }
LABEL_84:
        while ( (unsigned __int64)(unsigned int)v59 + 4 < 0x100 )
        {
          v61 = &Src + (unsigned int)v59;
          v62 = (unsigned int)(256 - v59);
          if ( (_DWORD)v59 != 256 )
          {
            if ( v62 > 0x7FFFFFFF )
            {
              *v61 = 0;
            }
            else
            {
              v63 = 4 - v62;
              v64 = v4 - (unsigned __int8 *)v61;
              do
              {
                if ( !(v62 + v63) )
                  break;
                v65 = v61[v64];
                if ( !v65 )
                  break;
                *v61++ = v65;
                --v62;
              }
              while ( v62 );
              v66 = v61 - 1;
              if ( v62 )
                v66 = v61;
              *v66 = 0;
            }
          }
          v59 = (unsigned int)(v59 + 4);
          v4 = (unsigned __int8 *)(a1[15] + 4LL);
          a1[15] = v4;
          if ( --v60 && (v67 = v59 + 1, (unsigned int)(v59 + 1) < 0x100) )
          {
            v68 = &Src + v59;
            v69 = (unsigned int)(256 - v59);
            if ( (_DWORD)v59 != 256 )
            {
              if ( v69 > 0x7FFFFFFF )
              {
                *v68 = 0;
              }
              else
              {
                v70 = 2147483646 - v69;
                v71 = (char *)("." - v68);
                do
                {
                  if ( !(v69 + v70) )
                    break;
                  v72 = v71[(_QWORD)v68];
                  if ( !v72 )
                    break;
                  *v68++ = v72;
                  --v69;
                }
                while ( v69 );
                v73 = v68 - 1;
                if ( v69 )
                  v73 = v68;
                *v73 = 0;
              }
            }
            v4 = (unsigned __int8 *)a1[15];
            LODWORD(v59) = v67;
          }
          else if ( !v60 )
          {
            goto LABEL_11;
          }
        }
        goto LABEL_145;
      }
      v76 = v4 + 1;
      a1[15] = v4 + 1;
      v4 += 2;
      v60 = *v76;
      a1[15] = v4;
      if ( v60 )
        goto LABEL_84;
    }
LABEL_11:
    if ( !NameSpaceObjectNoLock )
    {
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("%s", &Src);
      do
        ++v15;
      while ( *(&Src + v15) );
      if ( v15 + 1 >= 0x80 )
      {
        Pool2 = (_BYTE *)ExAllocatePool2(64LL, v15 + 1, 1768973121LL);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
      }
      else
      {
        Pool2 = P;
      }
      memmove(Pool2, &Src, v15);
      Pool2[v15] = 0;
      v17 = ExAcquireSpinLockShared(&ACPINamespaceLock);
      NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2, v91, &v84, 0);
      ExReleaseSpinLockShared(&ACPINamespaceLock, v17);
      if ( P != Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      if ( NameSpaceObjectNoLock == -1073741772 )
      {
        if ( !a3 )
        {
          LogError(-1073741772);
          AcpiDiagTraceAmlError((__int64)a1, -1073741772);
          PrintDebugMessage(0x78u, &Src, 0LL, 0LL, 0LL);
          return (unsigned int)-1073741772;
        }
        v84 = 0LL;
LABEL_22:
        if ( v11 )
        {
          v19 = v93;
          v20 = v11;
          for ( *(_WORD *)(v93 + 2) = 128; *(_WORD *)(v20 + 66) == 128; v20 = *(_QWORD *)(v20 + 80) )
            ;
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v20 + 112));
            v11 = v84;
          }
          *(_QWORD *)(v19 + 16) = v20;
          DereferenceObjectEx(v11);
          DereferenceObjectEx(*(_QWORD *)(v19 + 16));
        }
        return v5;
      }
      v11 = v84;
    }
    v5 = NameSpaceObjectNoLock;
    if ( NameSpaceObjectNoLock )
      return v5;
    goto LABEL_22;
  }
  LogError(-1072431097);
  LODWORD(v84) = -1072431097;
  v91 = 0x41002F004ELL;
  v92 = 0;
  v36 = 3;
  v37 = a1[10];
  v38 = 3;
  v93 = 0x41002F004ELL;
  v94 = 0;
  if ( v37 )
  {
    v39 = *(_DWORD *)(v37 + 40);
    v38 = 5;
    LOWORD(v93) = (char)v39;
    WORD1(v93) = SBYTE1(v39);
    WORD2(v93) = SBYTE2(v39);
    HIWORD(v93) = SHIBYTE(v39);
    v94 = 0;
  }
  v40 = a1[9];
  if ( v40 )
  {
    v41 = *(_DWORD *)(v40 + 40);
    v36 = 5;
    LOWORD(v91) = (char)v41;
    WORD1(v91) = SBYTE1(v41);
    WORD2(v91) = SBYTE2(v41);
    HIWORD(v91) = SHIBYTE(v41);
    v92 = 0;
  }
  UserData.Ptr = (unsigned __int64)&v93;
  UserData.Size = 2 * v38;
  v86 = &v91;
  v42 = 2 * v36;
LABEL_59:
  v87 = v42;
  UserData.Reserved = 0;
  v89 = &v84;
  v88 = 0;
  v90 = 4LL;
  EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &UserData);
  v43 = (unsigned __int8 *)a1[15];
  v44 = (const void *)*v43;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    DbgPrintEx(0x19u, 0, off_1400879F8, v44, v43, 0LL, 0LL);
    if ( (gDebugger & 0x40000) != 0 )
    {
      RtlStringCbPrintfA(&Src, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 141, v44, v43, 0LL, 0LL);
      DbgCommandString("ACPI", &Src);
      return (unsigned int)-1072431097;
    }
  }
  else
  {
    RtlStringCbPrintfA(&Src, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 141, v44, v43, 0LL, 0LL);
    DbgPrintEx(0x19u, 0, "%s\n", &Src);
  }
  return (unsigned int)-1072431097;
}
