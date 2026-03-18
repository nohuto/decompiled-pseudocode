/*
 * XREFs of PushFrame @ 0x140009A30
 * Callers:
 *     IncDec @ 0x140002610 (IncDec.c)
 *     AccFieldUnit @ 0x140003430 (AccFieldUnit.c)
 *     Store @ 0x140006870 (Store.c)
 *     WriteObject @ 0x140006BD0 (WriteObject.c)
 *     ExprOp2_64 @ 0x1400072C0 (ExprOp2_64.c)
 *     PushPost @ 0x140008C34 (PushPost.c)
 *     AccessBaseField @ 0x14000C680 (AccessBaseField.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 *     Divide @ 0x14002EC90 (Divide.c)
 *     SleepQueueRequest @ 0x14003B5B0 (SleepQueueRequest.c)
 *     Release @ 0x14003B700 (Release.c)
 *     Acquire @ 0x14003E2D0 (Acquire.c)
 *     Package @ 0x1400400A0 (Package.c)
 *     PushPreserveWriteObj @ 0x140044438 (PushPreserveWriteObj.c)
 *     LoadDDB @ 0x14006B644 (LoadDDB.c)
 *     NestAsyncEvalObject @ 0x14006D32C (NestAsyncEvalObject.c)
 * Callees:
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     RtlStringCchPrintfA @ 0x14000AE88 (RtlStringCchPrintfA.c)
 *     RtlStringCbPrintfA @ 0x14000AEFC (RtlStringCbPrintfA.c)
 *     WPP_RECORDER_SF_Ds @ 0x1400413A0 (WPP_RECORDER_SF_Ds.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall PushFrame(_QWORD *a1, int a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  unsigned int v5; // esi
  _QWORD *v7; // r15
  __int64 v8; // rbx
  _QWORD *v9; // r13
  int v10; // edi
  const char **v11; // rax
  int v12; // ebx
  unsigned int v13; // edi
  __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  _QWORD *i; // r8
  __int64 v18; // rbx
  __int64 **v19; // r8
  int v20; // eax
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // eax
  int v25; // edx
  int v26; // r8d
  int v27; // r9d
  int v28; // edx
  int v29; // r8d
  __int64 v30; // rcx
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // ecx
  __int64 v34; // r9
  _QWORD *v35; // rcx
  __int64 **v36; // r10
  unsigned int v37; // eax
  __int64 *j; // rax
  __int64 **v39; // rcx
  __int64 *v40; // r11
  _QWORD *v41; // rdi
  __int64 v42; // rcx
  __int64 **v43; // rax
  __int64 **v44; // rdi
  _QWORD *v45; // r10
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // r15
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rcx
  __int64 *v52; // rcx
  __int64 **v53; // rax
  int UserData; // [rsp+20h] [rbp-E0h]
  int v55; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v57; // [rsp+58h] [rbp-A8h]
  int v58; // [rsp+60h] [rbp-A0h]
  int v59; // [rsp+64h] [rbp-9Ch]
  int *v60; // [rsp+68h] [rbp-98h]
  __int64 v61; // [rsp+70h] [rbp-90h]
  __int64 v62; // [rsp+78h] [rbp-88h] BYREF
  __int16 v63; // [rsp+80h] [rbp-80h]
  __int64 v64; // [rsp+88h] [rbp-78h] BYREF
  __int16 v65; // [rsp+90h] [rbp-70h]
  char pszDest[256]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = 0;
  v64 = a4;
  v55 = a2;
  v7 = a1 + 60;
  v8 = 0LL;
  v9 = 0LL;
  if ( a3 + 16 < a3 )
    goto LABEL_4;
  if ( a3 + 16 < 0x20 )
  {
    v10 = 39;
  }
  else
  {
    v10 = a3 + 23;
    if ( a3 + 23 < a3 + 16 )
      goto LABEL_4;
  }
  v13 = v10 & 0xFFFFFFF8;
  byte_140088F48 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v14 = (__int64)v7;
  v15 = v7;
  v16 = v7;
  for ( i = v7; ; i = (_QWORD *)v14 )
  {
    v62 = v14;
    if ( !v15 )
      break;
    v18 = i[5];
    v19 = (__int64 **)(i + 5);
    v9 = v16;
    while ( 1 )
    {
      v8 = v18 - 16;
      if ( v19 == (__int64 **)(v8 + 16) )
      {
        v8 = 0LL;
        goto LABEL_13;
      }
      if ( v13 <= *(_DWORD *)(v8 + 4) )
        break;
      v18 = *(_QWORD *)(v8 + 16);
    }
    if ( v8 )
    {
      v34 = *(_QWORD *)(v8 + 16);
      if ( *(_QWORD *)(v34 + 8) != v8 + 16 )
        goto LABEL_54;
      v35 = *(_QWORD **)(v8 + 24);
      if ( *v35 != v8 + 16 )
        goto LABEL_54;
      *v35 = v34;
      *(_QWORD *)(v34 + 8) = v35;
      v21 = v13;
      if ( *(unsigned int *)(v8 + 4) >= (unsigned __int64)v13 + 32 )
      {
        v36 = (__int64 **)(v13 + v8);
        *(_DWORD *)v36 = 0;
        v37 = *(_DWORD *)(v8 + 4) - v13;
        v36[1] = (__int64 *)v14;
        *((_DWORD *)v36 + 1) = v37;
        *(_DWORD *)(v8 + 4) = v13;
        for ( j = *v19; j != (__int64 *)v19; j = (__int64 *)*j )
        {
          if ( v36 + 2 < (__int64 **)j )
            break;
        }
        v39 = (__int64 **)j[1];
        v40 = (__int64 *)(v36 + 2);
        if ( *v39 != j )
          goto LABEL_54;
        v36[3] = (__int64 *)v39;
        *v40 = (__int64)j;
        *v39 = v40;
        j[1] = (__int64)v40;
        v41 = (_QWORD *)*v40;
        v42 = *v40 - 16;
        if ( (__int64 **)*v40 != v19 )
        {
          v48 = *((unsigned int *)v36 + 1);
          if ( (__int64 **)v42 == (__int64 **)((char *)v36 + v48) )
          {
            *((_DWORD *)v36 + 1) = v48 + *(_DWORD *)(v42 + 4);
            v49 = *v41;
            if ( *(_QWORD **)(*v41 + 8LL) == v41 )
            {
              v50 = (_QWORD *)v41[1];
              if ( (_QWORD *)*v50 == v41 )
              {
                *v50 = v49;
                *(_QWORD *)(v49 + 8) = v50;
                goto LABEL_49;
              }
            }
LABEL_54:
            __fastfail(3u);
          }
        }
LABEL_49:
        v43 = (__int64 **)v36[3];
        v44 = v43 - 2;
        if ( v43 != v19 )
        {
          v51 = *((unsigned int *)v44 + 1);
          if ( v36 == (__int64 **)((char *)v44 + v51) )
          {
            *((_DWORD *)v44 + 1) = *((_DWORD *)v36 + 1) + v51;
            v52 = (__int64 *)*v40;
            if ( *(__int64 **)(*v40 + 8) != v40 )
              goto LABEL_54;
            v53 = (__int64 **)v36[3];
            if ( *v53 != v40 )
              goto LABEL_54;
            *v53 = v52;
            v36 = v44;
            v52[1] = (__int64)v53;
          }
        }
        if ( *(_QWORD *)(v14 + 32) <= (unsigned __int64)v36 + *((unsigned int *)v36 + 1) )
        {
          *(_QWORD *)(v14 + 32) = v36;
          v45 = v36 + 2;
          v46 = *v45;
          if ( *(_QWORD **)(*v45 + 8LL) != v45 )
            goto LABEL_54;
          v47 = (_QWORD *)v45[1];
          if ( (_QWORD *)*v47 != v45 )
            goto LABEL_54;
          *v47 = v46;
          *(_QWORD *)(v46 + 8) = v47;
        }
      }
      goto LABEL_20;
    }
LABEL_13:
    if ( v13 <= *(_DWORD *)(v14 + 8) - *(_DWORD *)(v14 + 32) )
      goto LABEL_19;
    v14 = *(_QWORD *)(v14 + 24);
    v15 = (_QWORD *)v14;
    v16 = (_QWORD *)v14;
  }
  if ( v7 == (_QWORD *)gpheapGlobal )
  {
    if ( v13 + 56 > (unsigned int)gdwGlobalHeapBlkSize )
    {
      v14 = v13 % (unsigned int)gdwGlobalHeapBlkSize;
      if ( (unsigned int)gdwGlobalHeapBlkSize * (v13 / (unsigned int)gdwGlobalHeapBlkSize + 1) > 0x800000 )
      {
        if ( v13 > 0x800000 )
          goto LABEL_21;
        LODWORD(gdwGlobalHeapBlkSize) = v13;
      }
      else
      {
        LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (v13 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      }
    }
    v20 = NewGlobalHeap(&v62, v14);
  }
  else
  {
    v20 = NewLocalHeap(&v62);
  }
  if ( !v20 )
  {
    v14 = v62;
    *(_QWORD *)(v62 + 16) = v7;
    v9[3] = v14;
LABEL_19:
    v8 = *(_QWORD *)(v14 + 32);
    v21 = v13;
    *(_QWORD *)(v14 + 32) = v8 + v13;
    *(_DWORD *)(v8 + 4) = v13;
LABEL_20:
    *(_QWORD *)(v8 + 8) = v14;
    *(_DWORD *)v8 = 1297237576;
    memset((void *)(v8 + 16), 0, v21 - 16);
  }
LABEL_21:
  KeReleaseSpinLock(&gmutHeap, byte_140088F48);
  v22 = v8 + 16;
  if ( !v8 )
    v22 = 0LL;
  if ( v22 )
  {
    *(_QWORD *)(v22 + 8) = a1[52];
    v23 = v55;
    a1[52] = v22;
    *(_DWORD *)v22 = v23;
    *(_QWORD *)(v22 + 24) = v64;
    if ( a5 )
      *a5 = v22;
    return v5;
  }
LABEL_4:
  dword_140089138 = -1072431102;
  v11 = (const char **)&unk_140088010;
  v12 = 0;
  while ( v11[1] )
  {
    if ( *(_DWORD *)v11 == -1072431102 )
    {
      RtlStringCchPrintfA(&::pszDest, 0x100uLL, "AMLI_ERROR(%08x): %s", -1072431102, v11[1]);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Ds(
          WPP_GLOBAL_Control->DeviceExtension,
          v25,
          v26,
          v27,
          UserData,
          2,
          *((_QWORD *)&unk_140088010 + 2 * v12 + 1));
      break;
    }
    ++v12;
    v11 += 2;
  }
  v55 = -1072431102;
  v63 = 0;
  v62 = 0x41002F004ELL;
  v28 = 3;
  v64 = 0x41002F004ELL;
  v29 = 3;
  v65 = 0;
  if ( a1 )
  {
    v30 = a1[10];
    if ( v30 )
    {
      v31 = *(_DWORD *)(v30 + 40);
      v29 = 5;
      LOWORD(v64) = (char)v31;
      WORD1(v64) = SBYTE1(v31);
      WORD2(v64) = SBYTE2(v31);
      HIWORD(v64) = SHIBYTE(v31);
      v65 = 0;
    }
    v32 = a1[9];
    if ( v32 )
    {
      v33 = *(_DWORD *)(v32 + 40);
      v28 = 5;
      LOWORD(v62) = (char)v33;
      WORD1(v62) = SBYTE1(v33);
      WORD2(v62) = SBYTE2(v33);
      HIWORD(v62) = SHIBYTE(v33);
      v63 = 0;
    }
  }
  v56.Ptr = (unsigned __int64)&v64;
  v56.Reserved = 0;
  v56.Size = 2 * v29;
  v59 = 0;
  v57 = &v62;
  v58 = 2 * v28;
  v61 = 4LL;
  v60 = &v55;
  EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.Wcb.DeviceContext, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &v56);
  if ( (_BYTE)KdDebuggerEnabled )
  {
    DbgPrintEx(0x19u, 0, off_140087AB8, 0LL, 0LL, 0LL, 0LL);
    if ( (gDebugger & 0x40000) != 0 )
    {
      RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 153, 0LL, 0LL, 0LL, 0LL);
      DbgCommandString("ACPI", pszDest);
      return (unsigned int)-1072431102;
    }
  }
  else
  {
    RtlStringCbPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 153, 0LL, 0LL, 0LL, 0LL);
    DbgPrintEx(0x19u, 0, "%s\n", pszDest);
  }
  return (unsigned int)-1072431102;
}
