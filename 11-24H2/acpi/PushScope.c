/*
 * XREFs of PushScope @ 0x1400050C0
 * Callers:
 *     ParseCall @ 0x140004010 (ParseCall.c)
 *     IfElse @ 0x140007D60 (IfElse.c)
 *     While @ 0x140008A20 (While.c)
 *     Device @ 0x14004F160 (Device.c)
 *     Scope @ 0x14004F670 (Scope.c)
 *     ParseLoad @ 0x140053310 (ParseLoad.c)
 *     PowerRes @ 0x14006EC70 (PowerRes.c)
 *     Processor @ 0x14006EDE0 (Processor.c)
 *     ThermalZone @ 0x14006EF50 (ThermalZone.c)
 * Callees:
 *     NewLocalHeap @ 0x140008FA0 (NewLocalHeap.c)
 *     RtlStringCbPrintfA @ 0x14000AEFC (RtlStringCbPrintfA.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     NewGlobalHeap @ 0x14006E9E8 (NewGlobalHeap.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall PushScope(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // esi
  _QWORD *v9; // rbp
  __int64 v11; // rbx
  _QWORD *v12; // r14
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *i; // r8
  __int64 v20; // rbx
  __int64 **v21; // r8
  int v22; // eax
  __int64 v23; // rcx
  char v24; // al
  __int64 v26; // r9
  _QWORD *v27; // rcx
  unsigned int v28; // eax
  __int64 **v29; // r9
  __int64 *j; // rax
  __int64 **v31; // rcx
  __int64 *v32; // r10
  _QWORD *v33; // r11
  __int64 v34; // rcx
  __int64 **v35; // rax
  __int64 **v36; // r11
  _QWORD *v37; // r9
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rbp
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 *v44; // rcx
  __int64 **v45; // rax
  _QWORD v46[2]; // [rsp+40h] [rbp-148h] BYREF
  char pszDest[256]; // [rsp+50h] [rbp-138h] BYREF

  v8 = 0;
  v9 = a1 + 60;
  v11 = 0LL;
  v12 = 0LL;
  byte_140088EC8 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v16 = (unsigned __int64)v9;
  v17 = v9;
  v18 = v9;
  for ( i = v9; ; i = (_QWORD *)v16 )
  {
    v46[0] = v16;
    if ( !v17 )
      break;
    v20 = i[5];
    v21 = (__int64 **)(i + 5);
    v12 = v18;
    while ( 1 )
    {
      v11 = v20 - 16;
      if ( v21 == (__int64 **)(v11 + 16) )
      {
        v11 = 0LL;
        goto LABEL_6;
      }
      if ( *(_DWORD *)(v11 + 4) >= 0x60u )
        break;
      v20 = *(_QWORD *)(v11 + 16);
    }
    if ( v11 )
    {
      v26 = *(_QWORD *)(v11 + 16);
      if ( *(_QWORD *)(v26 + 8) != v11 + 16 )
        goto LABEL_40;
      v27 = *(_QWORD **)(v11 + 24);
      if ( *v27 != v11 + 16 )
        goto LABEL_40;
      *v27 = v26;
      *(_QWORD *)(v26 + 8) = v27;
      v28 = *(_DWORD *)(v11 + 4);
      if ( v28 >= 0x80 )
      {
        v29 = (__int64 **)(v11 + 96);
        *(_DWORD *)(v11 + 96) = 0;
        *(_DWORD *)(v11 + 100) = v28 - 96;
        *(_QWORD *)(v11 + 104) = v16;
        *(_DWORD *)(v11 + 4) = 96;
        for ( j = *v21; j != (__int64 *)v21; j = (__int64 *)*j )
        {
          if ( v11 + 112 < (unsigned __int64)j )
            break;
        }
        v31 = (__int64 **)j[1];
        v32 = (__int64 *)(v11 + 112);
        if ( *v31 != j )
          goto LABEL_40;
        *(_QWORD *)(v11 + 120) = v31;
        *v32 = (__int64)j;
        *v31 = v32;
        j[1] = (__int64)v32;
        v33 = (_QWORD *)*v32;
        v34 = *v32 - 16;
        if ( (__int64 **)*v32 != v21 )
        {
          v40 = *(unsigned int *)(v11 + 100);
          if ( (__int64 **)v34 == (__int64 **)((char *)v29 + v40) )
          {
            *(_DWORD *)(v11 + 100) = v40 + *(_DWORD *)(v34 + 4);
            v41 = *v33;
            if ( *(_QWORD **)(*v33 + 8LL) == v33 )
            {
              v42 = (_QWORD *)v33[1];
              if ( (_QWORD *)*v42 == v33 )
              {
                *v42 = v41;
                *(_QWORD *)(v41 + 8) = v42;
                goto LABEL_35;
              }
            }
LABEL_40:
            __fastfail(3u);
          }
        }
LABEL_35:
        v35 = *(__int64 ***)(v11 + 120);
        v36 = v35 - 2;
        if ( v35 != v21 )
        {
          v43 = *((unsigned int *)v36 + 1);
          if ( v29 == (__int64 **)((char *)v36 + v43) )
          {
            *((_DWORD *)v36 + 1) = *(_DWORD *)(v11 + 100) + v43;
            v44 = (__int64 *)*v32;
            if ( *(__int64 **)(*v32 + 8) != v32 )
              goto LABEL_40;
            v45 = *(__int64 ***)(v11 + 120);
            if ( *v45 != v32 )
              goto LABEL_40;
            *v45 = v44;
            v29 = v36;
            v44[1] = (__int64)v45;
          }
        }
        if ( *(_QWORD *)(v16 + 32) <= (unsigned __int64)v29 + *((unsigned int *)v29 + 1) )
        {
          *(_QWORD *)(v16 + 32) = v29;
          v37 = v29 + 2;
          v38 = *v37;
          if ( *(_QWORD **)(*v37 + 8LL) != v37 )
            goto LABEL_40;
          v39 = (_QWORD *)v37[1];
          if ( (_QWORD *)*v39 != v37 )
            goto LABEL_40;
          *v39 = v38;
          *(_QWORD *)(v38 + 8) = v39;
        }
      }
      goto LABEL_13;
    }
LABEL_6:
    if ( (unsigned int)(*(_DWORD *)(v16 + 8) - *(_DWORD *)(v16 + 32)) >= 0x60 )
      goto LABEL_12;
    v16 = *(_QWORD *)(v16 + 24);
    v17 = (_QWORD *)v16;
    v18 = (_QWORD *)v16;
  }
  if ( v9 == (_QWORD *)gpheapGlobal )
  {
    if ( (unsigned int)gdwGlobalHeapBlkSize < 0x98 )
    {
      v16 = 0x60 % (unsigned int)gdwGlobalHeapBlkSize;
      LODWORD(gdwGlobalHeapBlkSize) = gdwGlobalHeapBlkSize * (0x60 / (unsigned int)gdwGlobalHeapBlkSize + 1);
      if ( (unsigned int)gdwGlobalHeapBlkSize > 0x800000 )
        LODWORD(gdwGlobalHeapBlkSize) = 96;
    }
    v22 = NewGlobalHeap(v46, v16);
  }
  else
  {
    v22 = NewLocalHeap(v46, v16);
  }
  if ( !v22 )
  {
    v16 = v46[0];
    *(_QWORD *)(v46[0] + 16LL) = v9;
    v12[3] = v16;
LABEL_12:
    v11 = *(_QWORD *)(v16 + 32);
    *(_QWORD *)(v16 + 32) = v11 + 96;
    *(_DWORD *)(v11 + 4) = 96;
LABEL_13:
    *(_QWORD *)(v11 + 8) = v16;
    *(_DWORD *)v11 = 1297237576;
    memset((void *)(v11 + 16), 0, 0x50uLL);
  }
  KeReleaseSpinLock(&gmutHeap, byte_140088EC8);
  v23 = v11 + 16;
  if ( !v11 )
    v23 = 0LL;
  if ( v23 )
  {
    *(_QWORD *)(v23 + 8) = a1[52];
    a1[52] = v23;
    *(_QWORD *)(v23 + 24) = ParseScope;
    *(_DWORD *)v23 = 1347371859;
    a1[15] = a2;
    *(_QWORD *)(v23 + 32) = a3;
    *(_QWORD *)(v23 + 40) = a4;
    *(_QWORD *)(v23 + 48) = a1[10];
    v24 = gdwfAMLI;
    a1[10] = a5;
    if ( (v24 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(a5 + 112));
    *(_QWORD *)(v23 + 56) = a1[11];
    a1[11] = a6;
    *(_QWORD *)(v23 + 64) = a1[40];
    a1[40] = a7;
    *(_QWORD *)(v23 + 72) = a8;
  }
  else
  {
    LogError(3222536194LL);
    AcpiDiagTraceAmlError(a1, 3222536194LL);
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
  return v8;
}
