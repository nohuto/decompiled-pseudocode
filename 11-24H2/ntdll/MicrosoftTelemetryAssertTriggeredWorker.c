/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1800ADB9C
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredUM @ 0x18010D860 (MicrosoftTelemetryAssertTriggeredUM.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x18001C5D0 (RtlSetLastWin32Error.c)
 *     EtwNotificationUnregister @ 0x18001D140 (EtwNotificationUnregister.c)
 *     EtwNotificationRegister @ 0x18001D450 (EtwNotificationRegister.c)
 *     EtwEventWriteTransfer @ 0x18003AD80 (EtwEventWriteTransfer.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180051AD4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     GetImageTuple @ 0x1800AE238 (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1800AE2D0 (_tlgCreate1Sz_char.c)
 *     EtwEventProviderEnabled @ 0x1800AE310 (EtwEventProviderEnabled.c)
 *     toupper @ 0x180127570 (toupper.c)
 *     ZwDelayExecution @ 0x180162310 (ZwDelayExecution.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180171498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall MicrosoftTelemetryAssertTriggeredWorker(
        __int64 a1,
        volatile signed __int32 **a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  BOOL v6; // r12d
  __int64 v7; // r8
  __int64 i; // rdi
  __int64 Heap; // rax
  unsigned __int64 v10; // rdx
  char v11; // si
  char ImageTuple; // al
  char v13; // r13
  __int64 v14; // rbx
  unsigned int v15; // r14d
  __int64 v16; // rcx
  int v17; // ebx
  char v19; // al
  const char *v20; // rdx
  int v21; // ecx
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rcx
  const char *v25; // rdx
  int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // r9
  int v29; // ecx
  __int64 v30; // r9
  __int64 v31; // r8
  unsigned __int64 v32; // rdx
  char v33; // dl
  unsigned int v34; // r13d
  _BYTE *v35; // r15
  unsigned int v36; // ecx
  unsigned int v37; // eax
  char v38; // bl
  char v39; // [rsp+38h] [rbp-D0h]
  int v40; // [rsp+3Ch] [rbp-CCh]
  unsigned int v41; // [rsp+40h] [rbp-C8h] BYREF
  int v42; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v43; // [rsp+48h] [rbp-C0h] BYREF
  int v44; // [rsp+4Ch] [rbp-BCh] BYREF
  int v45; // [rsp+50h] [rbp-B8h] BYREF
  int v46; // [rsp+54h] [rbp-B4h] BYREF
  int v47; // [rsp+58h] [rbp-B0h] BYREF
  int v48; // [rsp+5Ch] [rbp-ACh] BYREF
  int v49; // [rsp+60h] [rbp-A8h] BYREF
  BOOL v50; // [rsp+64h] [rbp-A4h] BYREF
  __int64 v51; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+70h] [rbp-98h] BYREF
  int v53; // [rsp+78h] [rbp-90h] BYREF
  __int128 v54; // [rsp+80h] [rbp-88h] BYREF
  __int64 v55; // [rsp+90h] [rbp-78h] BYREF
  int v56; // [rsp+98h] [rbp-70h]
  int v57; // [rsp+9Ch] [rbp-6Ch]
  void *v58; // [rsp+A8h] [rbp-60h] BYREF
  int v59; // [rsp+B0h] [rbp-58h]
  int v60; // [rsp+B4h] [rbp-54h]
  void *v61; // [rsp+B8h] [rbp-50h]
  int v62; // [rsp+C0h] [rbp-48h]
  int v63; // [rsp+C4h] [rbp-44h]
  __int64 *v64; // [rsp+C8h] [rbp-40h]
  __int64 v65; // [rsp+D0h] [rbp-38h]
  unsigned int *v66; // [rsp+D8h] [rbp-30h]
  __int64 v67; // [rsp+E0h] [rbp-28h]
  int *v68; // [rsp+E8h] [rbp-20h]
  __int64 v69; // [rsp+F0h] [rbp-18h]
  int *v70; // [rsp+F8h] [rbp-10h]
  __int64 v71; // [rsp+100h] [rbp-8h]
  _BYTE v72[16]; // [rsp+108h] [rbp+0h] BYREF
  int *v73; // [rsp+118h] [rbp+10h]
  __int64 v74; // [rsp+120h] [rbp+18h]
  int *v75; // [rsp+128h] [rbp+20h]
  __int64 v76; // [rsp+130h] [rbp+28h]
  _QWORD v77[2]; // [rsp+138h] [rbp+30h] BYREF
  int *v78; // [rsp+148h] [rbp+40h]
  __int64 v79; // [rsp+150h] [rbp+48h]
  int *v80; // [rsp+158h] [rbp+50h]
  __int64 v81; // [rsp+160h] [rbp+58h]
  BOOL *v82; // [rsp+168h] [rbp+60h]
  __int64 v83; // [rsp+170h] [rbp+68h]
  __int64 *v84; // [rsp+178h] [rbp+70h]
  int v85; // [rsp+180h] [rbp+78h]
  int v86; // [rsp+184h] [rbp+7Ch]
  _BYTE v87[272]; // [rsp+188h] [rbp+80h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v5 = a1;
  v52 = a1;
  v6 = 0;
  v40 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&g_MicrosoftTelemetryAssertLock, a2, a3);
  for ( i = g_MicrosoftTelemetryAssertsTriggeredList; i; i = *(_QWORD *)(i + 24) )
  {
    if ( *(_QWORD *)i == v4 )
      goto LABEL_5;
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  i = Heap;
  if ( !Heap )
    return RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  *(_QWORD *)Heap = v4;
  v10 = MEMORY[0x7FFE0320] * MEMORY[0x7FFE0004];
  *(_QWORD *)(Heap + 12) = 0LL;
  *(_DWORD *)(Heap + 8) = (v10 >> 24) - 60001;
  *(_QWORD *)(Heap + 24) = g_MicrosoftTelemetryAssertsTriggeredList;
  g_MicrosoftTelemetryAssertsTriggeredList = Heap;
LABEL_5:
  v11 = 1;
  ++*(_DWORD *)(i + 12);
  ++*(_DWORD *)(i + 16);
  if ( (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) - *(_DWORD *)(i + 8) > 0xEA60 )
  {
    v42 = 0;
    *(_DWORD *)(i + 8) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v41 = 0;
    ImageTuple = GetImageTuple(v3, v87, v7, &v42, &v41);
    v39 = ImageTuple;
    v13 = ImageTuple;
    if ( ImageTuple && v4 >= v3 && (v32 = v3 + v41, v32 > v3) && v4 <= v32 )
    {
      v15 = v4 - v3;
      v14 = 0LL;
    }
    else
    {
      v14 = 0LL;
      v15 = 0;
    }
    if ( !*(_QWORD *)(v5 + 32) && ImageTuple )
      *(_QWORD *)(v5 + 32) = v87;
    if ( *(_DWORD *)(i + 16) == 1
      && !(unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CC758) )
    {
      if ( dword_1801CC758 )
      {
        v33 = v87[0];
        v6 = 1;
        v40 = 1;
        v34 = 0;
        v55 = 0x4E2792C81D1727A6LL;
        v56 = -1961924164;
        v57 = -1655403451;
        if ( v87[0] )
        {
          v35 = v87;
          do
          {
            *((_BYTE *)&v55 + v14) += toupper(v33);
            v36 = v34 + 1;
            v33 = *++v35;
            v34 = v36 < 0x10 ? v36 : 0;
            v14 = (v14 + 1) & -(__int64)(v36 < 0x10);
          }
          while ( *v35 );
          v5 = v52;
        }
        v52 = 0LL;
        v37 = EtwNotificationRegister(&v55, 3u, 0LL, 0LL, (unsigned __int64 *)&v52);
        if ( v37 )
        {
          RtlSetLastWin32Error(v37);
        }
        else
        {
          v38 = EtwEventProviderEnabled(v52, 0LL, 0LL);
          EtwNotificationUnregister(v52, 0LL);
          v6 = v38 == 0;
        }
        v13 = v39;
      }
      v16 = qword_1801CC778;
      qword_1801CC778 = 0LL;
      dword_1801CC758 = 0;
      EtwNotificationUnregister(v16, 0LL);
    }
    if ( (unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CC790) )
    {
      v17 = v40;
      goto LABEL_15;
    }
    if ( *(_BYTE *)(v5 + 24) )
    {
      if ( (unsigned int)dword_1801CC790 > 5 )
      {
        if ( (qword_1801CC7A0 & 0x400000000000LL) == 0 || (qword_1801CC7A8 & 0x400000000000LL) != qword_1801CC7A8 )
          v11 = 0;
        if ( v11 )
        {
          v25 = v87;
          v53 = *(_DWORD *)v5;
          v65 = 4LL;
          v64 = (__int64 *)&v53;
          v66 = &v43;
          v43 = v15;
          v67 = 4LL;
          v68 = &v44;
          v44 = v13 != 0 ? v42 : 0;
          v69 = 4LL;
          v70 = &v45;
          v45 = v13 != 0 ? v41 : 0;
          v71 = 4LL;
          if ( !v13 )
            v25 = "<unknown>";
          tlgCreate1Sz_char(v72, v25);
          v26 = *(_DWORD *)(i + 12);
          v27 = *(_QWORD *)(v5 + 32);
          v73 = &v46;
          v47 = *(_DWORD *)(i + 16);
          v46 = v26;
          v75 = &v47;
          v74 = v28;
          v76 = v28;
          tlgCreate1Sz_char(v77, v27);
          v29 = *(_DWORD *)(v5 + 40);
          v17 = v40;
          v86 = 0;
          v78 = &v48;
          v49 = *(_DWORD *)(v5 + 44);
          v80 = &v49;
          v82 = &v50;
          v84 = &v51;
          v48 = v29;
          v79 = v30;
          v81 = v30;
          v50 = v6;
          v83 = v30;
          LODWORD(v51) = v40;
          v85 = v30;
          tlgWriteTransfer_EtwEventWriteTransfer((__int64)&dword_1801CC790, byte_1801A260C, v31, v30, 14, (__int64)&v58);
          goto LABEL_31;
        }
      }
    }
    else if ( (unsigned int)dword_1801CC790 > 5 )
    {
      if ( (qword_1801CC7A0 & 0x400000000000LL) == 0
        || (v19 = 1, (qword_1801CC7A8 & 0x400000000000LL) != qword_1801CC7A8) )
      {
        v19 = 0;
      }
      if ( v19 )
      {
        v20 = v87;
        LODWORD(v51) = *(_DWORD *)v5;
        v65 = 4LL;
        v64 = &v51;
        v66 = (unsigned int *)&v50;
        v50 = v15;
        v67 = 4LL;
        v68 = &v49;
        v49 = v13 != 0 ? v42 : 0;
        v69 = 4LL;
        v70 = &v48;
        v48 = v13 != 0 ? v41 : 0;
        v71 = 4LL;
        if ( !v13 )
          v20 = "<unknown>";
        tlgCreate1Sz_char(v72, v20);
        v21 = *(_DWORD *)(i + 12);
        v17 = v40;
        v73 = &v47;
        v46 = *(_DWORD *)(i + 16);
        v75 = &v46;
        v77[0] = &v45;
        v78 = &v44;
        v58 = off_1801CC798;
        v47 = v21;
        v74 = v22;
        v76 = v22;
        v77[1] = v22;
        v79 = (unsigned int)v22;
        *((_QWORD *)&v54 + 1) = v23;
        v45 = v6;
        v44 = v40;
        *(_QWORD *)&v54 = 0x50B000000LL;
        v59 = *(unsigned __int16 *)off_1801CC798;
        v61 = &unk_1801A26D6;
        v60 = 2;
        v62 = 118;
        v63 = 1;
        v43 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwEventWriteTransfer(qword_1801CC7B0, &v54, 0LL, 0LL, 11, (__int64)&v58);
        goto LABEL_31;
      }
    }
    v17 = v40;
LABEL_31:
    v24 = qword_1801CC7B0;
    qword_1801CC7B0 = 0LL;
    dword_1801CC790 = 0;
    EtwNotificationUnregister(v24, 0LL);
LABEL_15:
    if ( v17 && v6 && *(_BYTE *)(v5 + 48) )
    {
      v51 = -10000000LL;
      ZwDelayExecution(0LL, &v51);
    }
    *(_DWORD *)(i + 12) = 0;
  }
  return RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
