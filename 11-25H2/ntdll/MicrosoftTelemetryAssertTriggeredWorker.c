/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x18006727C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredUM @ 0x1801102E0 (MicrosoftTelemetryAssertTriggeredUM.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     EtwNotificationRegister @ 0x180045640 (EtwNotificationRegister.c)
 *     EtwNotificationUnregister @ 0x180045F20 (EtwNotificationUnregister.c)
 *     RtlSetLastWin32Error @ 0x180046B80 (RtlSetLastWin32Error.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     GetImageTuple @ 0x180067918 (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1800679B0 (_tlgCreate1Sz_char.c)
 *     EtwEventProviderEnabled @ 0x1800679F0 (EtwEventProviderEnabled.c)
 *     EtwEventWriteTransfer @ 0x18008E770 (EtwEventWriteTransfer.c)
 *     toupper @ 0x180129050 (toupper.c)
 *     ZwDelayExecution @ 0x1801638A0 (ZwDelayExecution.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180173498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredWorker(__int64 a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r14
  __int64 v3; // r15
  BOOL v4; // r12d
  __int64 v5; // r8
  __int64 i; // rdi
  __int64 Heap; // rax
  unsigned __int64 v8; // rdx
  char v9; // si
  char ImageTuple; // al
  char v11; // r13
  __int64 v12; // rbx
  unsigned int v13; // r14d
  __int64 v14; // rcx
  int v15; // ebx
  char v17; // al
  const char *v18; // rdx
  int v19; // ecx
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rcx
  const char *v23; // rdx
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // r9
  int v27; // ecx
  __int64 v28; // r9
  __int64 v29; // r8
  unsigned __int64 v30; // rdx
  char v31; // dl
  unsigned int v32; // r13d
  _BYTE *v33; // r15
  unsigned int v34; // ecx
  unsigned int v35; // eax
  char v36; // bl
  char v37; // [rsp+38h] [rbp-D0h]
  int v38; // [rsp+3Ch] [rbp-CCh]
  unsigned int v39; // [rsp+40h] [rbp-C8h] BYREF
  int v40; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-C0h] BYREF
  int v42; // [rsp+4Ch] [rbp-BCh] BYREF
  int v43; // [rsp+50h] [rbp-B8h] BYREF
  int v44; // [rsp+54h] [rbp-B4h] BYREF
  int v45; // [rsp+58h] [rbp-B0h] BYREF
  int v46; // [rsp+5Ch] [rbp-ACh] BYREF
  int v47; // [rsp+60h] [rbp-A8h] BYREF
  BOOL v48; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v49; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-98h] BYREF
  int v51; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v52[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h] BYREF
  int v55; // [rsp+98h] [rbp-70h]
  int v56; // [rsp+9Ch] [rbp-6Ch]
  void *v57; // [rsp+A8h] [rbp-60h] BYREF
  int v58; // [rsp+B0h] [rbp-58h]
  int v59; // [rsp+B4h] [rbp-54h]
  void *v60; // [rsp+B8h] [rbp-50h]
  int v61; // [rsp+C0h] [rbp-48h]
  int v62; // [rsp+C4h] [rbp-44h]
  __int64 *v63; // [rsp+C8h] [rbp-40h]
  __int64 v64; // [rsp+D0h] [rbp-38h]
  unsigned int *v65; // [rsp+D8h] [rbp-30h]
  __int64 v66; // [rsp+E0h] [rbp-28h]
  int *v67; // [rsp+E8h] [rbp-20h]
  __int64 v68; // [rsp+F0h] [rbp-18h]
  int *v69; // [rsp+F8h] [rbp-10h]
  __int64 v70; // [rsp+100h] [rbp-8h]
  _BYTE v71[16]; // [rsp+108h] [rbp+0h] BYREF
  int *v72; // [rsp+118h] [rbp+10h]
  __int64 v73; // [rsp+120h] [rbp+18h]
  int *v74; // [rsp+128h] [rbp+20h]
  __int64 v75; // [rsp+130h] [rbp+28h]
  _QWORD v76[2]; // [rsp+138h] [rbp+30h] BYREF
  int *v77; // [rsp+148h] [rbp+40h]
  __int64 v78; // [rsp+150h] [rbp+48h]
  int *v79; // [rsp+158h] [rbp+50h]
  __int64 v80; // [rsp+160h] [rbp+58h]
  BOOL *v81; // [rsp+168h] [rbp+60h]
  __int64 v82; // [rsp+170h] [rbp+68h]
  __int64 *v83; // [rsp+178h] [rbp+70h]
  int v84; // [rsp+180h] [rbp+78h]
  int v85; // [rsp+184h] [rbp+7Ch]
  _BYTE v86[272]; // [rsp+188h] [rbp+80h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1;
  v50 = a1;
  v4 = 0;
  v38 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&g_MicrosoftTelemetryAssertLock);
  for ( i = g_MicrosoftTelemetryAssertsTriggeredList; i; i = *(_QWORD *)(i + 24) )
  {
    if ( *(_QWORD *)i == v2 )
      goto LABEL_5;
  }
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  i = Heap;
  if ( !Heap )
    return RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  *(_QWORD *)Heap = v2;
  v8 = MEMORY[0x7FFE0320] * MEMORY[0x7FFE0004];
  *(_QWORD *)(Heap + 12) = 0LL;
  *(_DWORD *)(Heap + 8) = (v8 >> 24) - 60001;
  *(_QWORD *)(Heap + 24) = g_MicrosoftTelemetryAssertsTriggeredList;
  g_MicrosoftTelemetryAssertsTriggeredList = Heap;
LABEL_5:
  v9 = 1;
  ++*(_DWORD *)(i + 12);
  ++*(_DWORD *)(i + 16);
  if ( (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) - *(_DWORD *)(i + 8) > 0xEA60 )
  {
    v40 = 0;
    *(_DWORD *)(i + 8) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v39 = 0;
    ImageTuple = GetImageTuple(v1, v86, v5, &v40, &v39);
    v37 = ImageTuple;
    v11 = ImageTuple;
    if ( ImageTuple && v2 >= v1 && (v30 = v1 + v39, v30 > v1) && v2 <= v30 )
    {
      v13 = v2 - v1;
      v12 = 0LL;
    }
    else
    {
      v12 = 0LL;
      v13 = 0;
    }
    if ( !*(_QWORD *)(v3 + 32) && ImageTuple )
      *(_QWORD *)(v3 + 32) = v86;
    if ( *(_DWORD *)(i + 16) == 1
      && !(unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CE758) )
    {
      if ( dword_1801CE758 )
      {
        v31 = v86[0];
        v4 = 1;
        v38 = 1;
        v32 = 0;
        v54 = 0x4E2792C81D1727A6LL;
        v55 = -1961924164;
        v56 = -1655403451;
        if ( v86[0] )
        {
          v33 = v86;
          do
          {
            *((_BYTE *)&v54 + v12) += toupper(v31);
            v34 = v32 + 1;
            v31 = *++v33;
            v32 = v34 < 0x10 ? v34 : 0;
            v12 = (v12 + 1) & -(__int64)(v34 < 0x10);
          }
          while ( *v33 );
          v3 = v50;
        }
        v50 = 0LL;
        v35 = EtwNotificationRegister(&v54, 3, 0LL, 0LL, (unsigned __int64 *)&v50);
        if ( v35 )
        {
          RtlSetLastWin32Error(v35);
        }
        else
        {
          v36 = EtwEventProviderEnabled(v50, 0LL, 0LL);
          EtwNotificationUnregister(v50, 0LL);
          v4 = v36 == 0;
        }
        v11 = v37;
      }
      v14 = qword_1801CE778;
      qword_1801CE778 = 0LL;
      dword_1801CE758 = 0;
      EtwNotificationUnregister(v14, 0LL);
    }
    if ( (unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CE790) )
    {
      v15 = v38;
      goto LABEL_15;
    }
    if ( *(_BYTE *)(v3 + 24) )
    {
      if ( (unsigned int)dword_1801CE790 > 5 )
      {
        if ( (qword_1801CE7A0 & 0x400000000000LL) == 0 || (qword_1801CE7A8 & 0x400000000000LL) != qword_1801CE7A8 )
          v9 = 0;
        if ( v9 )
        {
          v23 = v86;
          v51 = *(_DWORD *)v3;
          v64 = 4LL;
          v63 = (__int64 *)&v51;
          v65 = &v41;
          v41 = v13;
          v66 = 4LL;
          v67 = &v42;
          v42 = v11 != 0 ? v40 : 0;
          v68 = 4LL;
          v69 = &v43;
          v43 = v11 != 0 ? v39 : 0;
          v70 = 4LL;
          if ( !v11 )
            v23 = "<unknown>";
          tlgCreate1Sz_char(v71, v23);
          v24 = *(_DWORD *)(i + 12);
          v25 = *(_QWORD *)(v3 + 32);
          v72 = &v44;
          v45 = *(_DWORD *)(i + 16);
          v44 = v24;
          v74 = &v45;
          v73 = v26;
          v75 = v26;
          tlgCreate1Sz_char(v76, v25);
          v27 = *(_DWORD *)(v3 + 40);
          v15 = v38;
          v85 = 0;
          v77 = &v46;
          v47 = *(_DWORD *)(v3 + 44);
          v79 = &v47;
          v81 = &v48;
          v83 = &v49;
          v46 = v27;
          v78 = v28;
          v80 = v28;
          v48 = v4;
          v82 = v28;
          LODWORD(v49) = v38;
          v84 = v28;
          tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801CE790, byte_1801A4654, v29, v28, 14, (__int64)&v57);
          goto LABEL_31;
        }
      }
    }
    else if ( (unsigned int)dword_1801CE790 > 5 )
    {
      if ( (qword_1801CE7A0 & 0x400000000000LL) == 0
        || (v17 = 1, (qword_1801CE7A8 & 0x400000000000LL) != qword_1801CE7A8) )
      {
        v17 = 0;
      }
      if ( v17 )
      {
        v18 = v86;
        LODWORD(v49) = *(_DWORD *)v3;
        v64 = 4LL;
        v63 = &v49;
        v65 = (unsigned int *)&v48;
        v48 = v13;
        v66 = 4LL;
        v67 = &v47;
        v47 = v11 != 0 ? v40 : 0;
        v68 = 4LL;
        v69 = &v46;
        v46 = v11 != 0 ? v39 : 0;
        v70 = 4LL;
        if ( !v11 )
          v18 = "<unknown>";
        tlgCreate1Sz_char(v71, v18);
        v19 = *(_DWORD *)(i + 12);
        v15 = v38;
        v72 = &v45;
        v44 = *(_DWORD *)(i + 16);
        v74 = &v44;
        v76[0] = &v43;
        v77 = &v42;
        v52[1] = 5;
        v57 = off_1801CE798;
        v45 = v19;
        v73 = v20;
        v75 = v20;
        v76[1] = v20;
        v78 = (unsigned int)v20;
        v53 = v21;
        v43 = v4;
        v42 = v38;
        v52[0] = 184549376;
        v58 = *(unsigned __int16 *)off_1801CE798;
        v60 = &unk_1801A471E;
        v59 = 2;
        v61 = 118;
        v62 = 1;
        v41 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwEventWriteTransfer(qword_1801CE7B0, (unsigned int)v52, 0, 0, 11, (__int64)&v57);
        goto LABEL_31;
      }
    }
    v15 = v38;
LABEL_31:
    v22 = qword_1801CE7B0;
    qword_1801CE7B0 = 0LL;
    dword_1801CE790 = 0;
    EtwNotificationUnregister(v22, 0LL);
LABEL_15:
    if ( v15 && v4 && *(_BYTE *)(v3 + 48) )
    {
      v49 = -10000000LL;
      ZwDelayExecution(0LL, &v49);
    }
    *(_DWORD *)(i + 12) = 0;
  }
  return RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
