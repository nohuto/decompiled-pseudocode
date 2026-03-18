/*
 * XREFs of PushTerm @ 0x14000A040
 * Callers:
 *     ParseArg @ 0x14000DB50 (ParseArg.c)
 *     ParseSuperName @ 0x140024820 (ParseSuperName.c)
 * Callees:
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     RtlStringCchPrintfA @ 0x14000AE88 (RtlStringCchPrintfA.c)
 *     RtlStringCbPrintfA @ 0x14000AEFC (RtlStringCbPrintfA.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     WPP_RECORDER_SF_Ds @ 0x1400413A0 (WPP_RECORDER_SF_Ds.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall PushTerm(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rsi
  __int64 v7; // rbx
  _QWORD *v8; // rdi
  KIRQL v12; // al
  _QWORD *v13; // r8
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 **v18; // rdx
  int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // esi
  __int64 v25; // r12
  unsigned int v26; // ecx
  __int64 v27; // rbx
  __int64 v28; // r15
  unsigned int v29; // eax
  int v30; // r14d
  unsigned int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 j; // r8
  __int64 v36; // rbx
  __int64 **v37; // r8
  int v38; // eax
  __int64 v39; // r9
  void *v40; // rcx
  const char **v41; // rax
  int v42; // ebx
  int v43; // edx
  int v44; // r8d
  int v45; // r9d
  int v46; // edx
  int v47; // r8d
  __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // rcx
  int v51; // ecx
  int v52; // r9d
  __int64 v53; // rax
  _QWORD *v54; // r9
  unsigned int v55; // eax
  __int64 **v56; // r9
  __int64 *i; // rax
  __int64 **v58; // rcx
  __int64 *v59; // r10
  _QWORD *v60; // r11
  __int64 v61; // rcx
  __int64 **v62; // rax
  __int64 **v63; // r11
  _QWORD *v64; // r9
  __int64 v65; // rcx
  _QWORD *v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rcx
  _QWORD *v69; // rax
  __int64 v70; // rcx
  __int64 *v71; // rcx
  __int64 **v72; // rax
  __int64 v73; // r9
  _QWORD *v74; // rcx
  __int64 **v75; // r10
  unsigned int v76; // eax
  __int64 *k; // rax
  __int64 **v78; // rcx
  __int64 *v79; // r11
  _QWORD *v80; // r14
  __int64 v81; // rcx
  __int64 **v82; // rax
  __int64 **v83; // r14
  _QWORD *v84; // r10
  __int64 v85; // rcx
  _QWORD *v86; // rax
  __int64 v87; // r15
  __int64 v88; // rcx
  _QWORD *v89; // rax
  __int64 v90; // rcx
  __int64 *v91; // rcx
  __int64 **v92; // rax
  int UserData; // [rsp+20h] [rbp-E0h]
  _QWORD *v94; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v95; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v96; // [rsp+58h] [rbp-A8h]
  int v97; // [rsp+60h] [rbp-A0h]
  int v98; // [rsp+64h] [rbp-9Ch]
  _QWORD *v99; // [rsp+68h] [rbp-98h]
  __int64 v100; // [rsp+70h] [rbp-90h]
  __int64 v101; // [rsp+78h] [rbp-88h] BYREF
  __int16 v102; // [rsp+80h] [rbp-80h]
  __int64 v103; // [rsp+88h] [rbp-78h] BYREF
  __int16 v104; // [rsp+90h] [rbp-70h]
  char pszDest[256]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a1 + 60;
  v7 = 0LL;
  v8 = 0LL;
  v12 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v13 = v5;
  v94 = v5;
  byte_140088F48 = v12;
  v14 = v5;
  v15 = v5;
  v16 = (unsigned __int64)v5;
  while ( v15 )
  {
    v17 = *(_QWORD *)(v16 + 40);
    v18 = (__int64 **)(v16 + 40);
    v8 = v14;
    while ( 1 )
    {
      v7 = v17 - 16;
      if ( v18 == (__int64 **)(v7 + 16) )
      {
        v7 = 0LL;
        goto LABEL_6;
      }
      if ( *(_DWORD *)(v7 + 4) >= 0x70u )
        break;
      v17 = *(_QWORD *)(v7 + 16);
    }
    if ( v7 )
    {
      v53 = *(_QWORD *)(v7 + 16);
      if ( *(_QWORD *)(v53 + 8) != v7 + 16 )
        goto LABEL_82;
      v54 = *(_QWORD **)(v7 + 24);
      if ( *v54 != v7 + 16 )
        goto LABEL_82;
      *v54 = v53;
      *(_QWORD *)(v53 + 8) = v54;
      v55 = *(_DWORD *)(v7 + 4);
      if ( v55 >= 0x90 )
      {
        v56 = (__int64 **)(v7 + 112);
        *(_DWORD *)(v7 + 112) = 0;
        *(_DWORD *)(v7 + 116) = v55 - 112;
        *(_QWORD *)(v7 + 120) = v13;
        *(_DWORD *)(v7 + 4) = 112;
        for ( i = *v18; i != (__int64 *)v18; i = (__int64 *)*i )
        {
          if ( v7 + 128 < (unsigned __int64)i )
            break;
        }
        v58 = (__int64 **)i[1];
        v59 = (__int64 *)(v7 + 128);
        if ( *v58 != i )
          goto LABEL_82;
        *(_QWORD *)(v7 + 136) = v58;
        *v59 = (__int64)i;
        *v58 = v59;
        i[1] = (__int64)v59;
        v60 = (_QWORD *)*v59;
        v61 = *v59 - 16;
        if ( (__int64 **)*v59 != v18 )
        {
          v67 = *(unsigned int *)(v7 + 116);
          if ( (__int64 **)v61 == (__int64 **)((char *)v56 + v67) )
          {
            *(_DWORD *)(v7 + 116) = v67 + *(_DWORD *)(v61 + 4);
            v68 = *v60;
            if ( *(_QWORD **)(*v60 + 8LL) != v60 )
              goto LABEL_82;
            v69 = (_QWORD *)v60[1];
            if ( (_QWORD *)*v69 != v60 )
              goto LABEL_82;
            *v69 = v68;
            *(_QWORD *)(v68 + 8) = v69;
          }
        }
        v62 = *(__int64 ***)(v7 + 136);
        v63 = v62 - 2;
        if ( v62 != v18 )
        {
          v70 = *((unsigned int *)v63 + 1);
          if ( v56 == (__int64 **)((char *)v63 + v70) )
          {
            *((_DWORD *)v63 + 1) = *(_DWORD *)(v7 + 116) + v70;
            v71 = (__int64 *)*v59;
            if ( *(__int64 **)(*v59 + 8) != v59 )
              goto LABEL_82;
            v72 = *(__int64 ***)(v7 + 136);
            if ( *v72 != v59 )
              goto LABEL_82;
            *v72 = v71;
            v56 = v63;
            v71[1] = (__int64)v72;
          }
        }
        if ( v13[4] <= (unsigned __int64)v56 + *((unsigned int *)v56 + 1) )
        {
          v13[4] = v56;
          v64 = v56 + 2;
          v65 = *v64;
          if ( *(_QWORD **)(*v64 + 8LL) != v64 )
            goto LABEL_82;
          v66 = (_QWORD *)v64[1];
          if ( (_QWORD *)*v66 != v64 )
            goto LABEL_82;
          *v66 = v65;
          *(_QWORD *)(v65 + 8) = v66;
        }
      }
      goto LABEL_13;
    }
LABEL_6:
    if ( (unsigned int)(*((_DWORD *)v13 + 2) - *((_DWORD *)v13 + 8)) >= 0x70 )
      goto LABEL_12;
    v13 = (_QWORD *)v13[3];
    v15 = v13;
    v94 = v13;
    v14 = v13;
    v16 = (unsigned __int64)v13;
  }
  if ( v5 == (_QWORD *)gpheapGlobal )
  {
    if ( (unsigned int)gdwGlobalHeapBlkSize < 0xA8 )
    {
      v16 = 0x70 % (unsigned int)gdwGlobalHeapBlkSize;
      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x70 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
        LODWORD(gdwGlobalHeapBlkSize) = 112;
    }
    v19 = NewGlobalHeap(&v94, v16);
  }
  else
  {
    v19 = NewLocalHeap(&v94);
  }
  if ( !v19 )
  {
    v13 = v94;
    v94[2] = v5;
    v8[3] = v13;
LABEL_12:
    v7 = v13[4];
    v13[4] = v7 + 112;
    *(_DWORD *)(v7 + 4) = 112;
LABEL_13:
    *(_DWORD *)v7 = 1297237576;
    *(_QWORD *)(v7 + 8) = v13;
    *(_OWORD *)(v7 + 16) = 0LL;
    *(_OWORD *)(v7 + 32) = 0LL;
    *(_OWORD *)(v7 + 48) = 0LL;
    *(_OWORD *)(v7 + 64) = 0LL;
    *(_OWORD *)(v7 + 80) = 0LL;
    *(_OWORD *)(v7 + 96) = 0LL;
  }
  KeReleaseSpinLock(&gmutHeap, byte_140088F48);
  v20 = v7 + 16;
  if ( !v7 )
    v20 = 0LL;
  if ( !v20 )
  {
    v23 = -1072431102;
    dword_140089138 = -1072431102;
    v41 = (const char **)&unk_140088010;
    v42 = 0;
    while ( v41[1] )
    {
      if ( *(_DWORD *)v41 == -1072431102 )
      {
        RtlStringCchPrintfA(&::pszDest, 0x100uLL, "AMLI_ERROR(%08x): %s", -1072431102, v41[1]);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Ds(
            WPP_GLOBAL_Control->DeviceExtension,
            v43,
            v44,
            v45,
            UserData,
            2,
            *((_QWORD *)&unk_140088010 + 2 * v42 + 1));
        break;
      }
      ++v42;
      v41 += 2;
    }
    LODWORD(v94) = -1072431102;
    v104 = 0;
    v103 = 0x41002F004ELL;
    v46 = 3;
    v101 = 0x41002F004ELL;
    v47 = 3;
    v102 = 0;
    if ( a1 )
    {
      v48 = a1[10];
      if ( v48 )
      {
        v49 = *(_DWORD *)(v48 + 40);
        v47 = 5;
        LOWORD(v101) = (char)v49;
        WORD1(v101) = SBYTE1(v49);
        WORD2(v101) = SBYTE2(v49);
        HIWORD(v101) = SHIBYTE(v49);
        v102 = 0;
      }
      v50 = a1[9];
      if ( v50 )
      {
        v51 = *(_DWORD *)(v50 + 40);
        v46 = 5;
        LOWORD(v103) = (char)v51;
        WORD1(v103) = SBYTE1(v51);
        WORD2(v103) = SBYTE2(v51);
        HIWORD(v103) = SHIBYTE(v51);
        v104 = 0;
      }
    }
    v95.Ptr = (unsigned __int64)&v101;
    v95.Size = 2 * v47;
    v95.Reserved = 0;
    v96 = &v103;
    v97 = 2 * v46;
    v98 = 0;
    v99 = &v94;
    v100 = 4LL;
    EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &v95);
    if ( !(_BYTE)KdDebuggerEnabled )
    {
      RtlStringCbPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 153, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_63;
    }
    DbgPrintEx(0x19u, 0, off_140087AB8, 0LL, 0LL, 0LL, 0LL);
    if ( (gDebugger & 0x40000) == 0 )
      return v23;
    v52 = 153;
LABEL_66:
    RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", v52, 0LL, 0LL, 0LL, 0LL);
    DbgCommandString("ACPI", pszDest);
    return v23;
  }
  *(_QWORD *)(v20 + 8) = a1[52];
  a1[52] = v20;
  *(_QWORD *)(v20 + 24) = ParseTerm;
  *(_DWORD *)v20 = 1297237332;
  *(_QWORD *)(v20 + 32) = a2;
  *(_QWORD *)(v20 + 48) = a3;
  *(_QWORD *)(v20 + 56) = a4;
  *(_QWORD *)(v20 + 88) = a5;
  v21 = *(_QWORD *)(a4 + 16);
  if ( !v21 )
  {
    *(_DWORD *)(v20 + 76) = 0;
    return 0;
  }
  v22 = -1LL;
  do
    ++v22;
  while ( *(_BYTE *)(v21 + v22) );
  *(_DWORD *)(v20 + 76) = v22;
  v23 = 0;
  if ( (_DWORD)v22 )
  {
    v25 = a1[40];
    v26 = 40 * v22;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 40 * v22 + 16;
    if ( v29 < v26 )
    {
LABEL_27:
      *(_QWORD *)(v20 + 80) = 0LL;
LABEL_28:
      v23 = -1073741670;
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      if ( !(_BYTE)KdDebuggerEnabled )
      {
        RtlStringCbPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 154, 0LL, 0LL, 0LL, 0LL);
LABEL_63:
        DbgPrintEx(0x19u, 0, "%s\n", pszDest);
        return v23;
      }
      DbgPrintEx(0x19u, 0, off_140087AC8, 0LL, 0LL, 0LL, 0LL);
      if ( (gDebugger & 0x40000) == 0 )
        return v23;
      v52 = 154;
      goto LABEL_66;
    }
    if ( v29 < 0x20 )
    {
      v30 = 39;
    }
    else
    {
      v30 = v29 + 7;
      if ( v29 + 7 < v29 )
        goto LABEL_27;
    }
    v31 = v30 & 0xFFFFFFF8;
    byte_140088F48 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v32 = v25;
    v33 = v25;
    v34 = v25;
    for ( j = v25; ; j = v32 )
    {
      v94 = (_QWORD *)v32;
      if ( !v33 )
        break;
      v36 = *(_QWORD *)(j + 40);
      v37 = (__int64 **)(j + 40);
      v28 = v34;
      while ( 1 )
      {
        v27 = v36 - 16;
        if ( v37 == (__int64 **)(v27 + 16) )
        {
          v27 = 0LL;
          goto LABEL_35;
        }
        if ( v31 <= *(_DWORD *)(v27 + 4) )
          break;
        v36 = *(_QWORD *)(v27 + 16);
      }
      if ( v27 )
      {
        v73 = *(_QWORD *)(v27 + 16);
        if ( *(_QWORD *)(v73 + 8) != v27 + 16 )
          goto LABEL_82;
        v74 = *(_QWORD **)(v27 + 24);
        if ( *v74 != v27 + 16 )
          goto LABEL_82;
        *v74 = v73;
        *(_QWORD *)(v73 + 8) = v74;
        v39 = v31;
        if ( *(unsigned int *)(v27 + 4) >= (unsigned __int64)v31 + 32 )
        {
          v75 = (__int64 **)(v31 + v27);
          *(_DWORD *)v75 = 0;
          v76 = *(_DWORD *)(v27 + 4) - v31;
          v75[1] = (__int64 *)v32;
          *((_DWORD *)v75 + 1) = v76;
          *(_DWORD *)(v27 + 4) = v31;
          for ( k = *v37; k != (__int64 *)v37; k = (__int64 *)*k )
          {
            if ( v75 + 2 < (__int64 **)k )
              break;
          }
          v78 = (__int64 **)k[1];
          v79 = (__int64 *)(v75 + 2);
          if ( *v78 != k )
            goto LABEL_82;
          v75[3] = (__int64 *)v78;
          *v79 = (__int64)k;
          *v78 = v79;
          k[1] = (__int64)v79;
          v80 = (_QWORD *)*v79;
          v81 = *v79 - 16;
          if ( (__int64 **)*v79 != v37 )
          {
            v87 = *((unsigned int *)v75 + 1);
            if ( (__int64 **)v81 == (__int64 **)((char *)v75 + v87) )
            {
              *((_DWORD *)v75 + 1) = v87 + *(_DWORD *)(v81 + 4);
              v88 = *v80;
              if ( *(_QWORD **)(*v80 + 8LL) == v80 )
              {
                v89 = (_QWORD *)v80[1];
                if ( (_QWORD *)*v89 == v80 )
                {
                  *v89 = v88;
                  *(_QWORD *)(v88 + 8) = v89;
                  goto LABEL_101;
                }
              }
LABEL_82:
              __fastfail(3u);
            }
          }
LABEL_101:
          v82 = (__int64 **)v75[3];
          v83 = v82 - 2;
          if ( v82 != v37 )
          {
            v90 = *((unsigned int *)v83 + 1);
            if ( v75 == (__int64 **)((char *)v83 + v90) )
            {
              *((_DWORD *)v83 + 1) = *((_DWORD *)v75 + 1) + v90;
              v91 = (__int64 *)*v79;
              if ( *(__int64 **)(*v79 + 8) != v79 )
                goto LABEL_82;
              v92 = (__int64 **)v75[3];
              if ( *v92 != v79 )
                goto LABEL_82;
              *v92 = v91;
              v75 = v83;
              v91[1] = (__int64)v92;
            }
          }
          if ( *(_QWORD *)(v32 + 32) <= (unsigned __int64)v75 + *((unsigned int *)v75 + 1) )
          {
            *(_QWORD *)(v32 + 32) = v75;
            v84 = v75 + 2;
            v85 = *v84;
            if ( *(_QWORD **)(*v84 + 8LL) != v84 )
              goto LABEL_82;
            v86 = (_QWORD *)v84[1];
            if ( (_QWORD *)*v86 != v84 )
              goto LABEL_82;
            *v86 = v85;
            *(_QWORD *)(v85 + 8) = v86;
          }
        }
        goto LABEL_42;
      }
LABEL_35:
      if ( v31 <= *(_DWORD *)(v32 + 8) - *(_DWORD *)(v32 + 32) )
        goto LABEL_41;
      v32 = *(_QWORD *)(v32 + 24);
      v33 = v32;
      v34 = v32;
    }
    if ( v25 == gpheapGlobal )
    {
      if ( v31 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
      {
        v32 = v31 % (unsigned int)gdwGlobalHeapBlkSize;
        if ( (unsigned int)gdwGlobalHeapBlkSize * (v31 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
        {
          if ( v31 > 0x800000 )
            goto LABEL_43;
          LODWORD(gdwGlobalHeapBlkSize) = v31;
        }
        else
        {
          LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v31 / (unsigned int)gdwGlobalHeapBlkSize + 1);
        }
      }
      v38 = NewGlobalHeap(&v94, v32);
    }
    else
    {
      v38 = NewLocalHeap(&v94);
    }
    if ( !v38 )
    {
      v32 = (__int64)v94;
      v94[2] = v25;
      *(_QWORD *)(v28 + 24) = v32;
LABEL_41:
      v27 = *(_QWORD *)(v32 + 32);
      v39 = v31;
      *(_QWORD *)(v32 + 32) = v27 + v31;
      *(_DWORD *)(v27 + 4) = v31;
LABEL_42:
      *(_QWORD *)(v27 + 8) = v32;
      *(_DWORD *)v27 = 1413563464;
      memset((void *)(v27 + 16), 0, v39 - 16);
    }
LABEL_43:
    KeReleaseSpinLock(&gmutHeap, byte_140088F48);
    v40 = (void *)(v27 + 16);
    if ( !v27 )
      v40 = 0LL;
    *(_QWORD *)(v20 + 80) = v40;
    if ( v40 )
    {
      memset(v40, 0, 40LL * *(unsigned int *)(v20 + 76));
      return v23;
    }
    goto LABEL_28;
  }
  return v23;
}
