/*
 * XREFs of MicrosoftTelemetryAssertTriggeredWorker @ 0x1800E3360
 * Callers:
 *     MicrosoftTelemetryAssertTriggeredUM @ 0x180108740 (MicrosoftTelemetryAssertTriggeredUM.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18001B000 (EtwEventWriteTransfer.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x180048FD0 (RtlSetLastWin32Error.c)
 *     EtwNotificationUnregister @ 0x180049B40 (EtwNotificationUnregister.c)
 *     EtwNotificationRegister @ 0x180049E50 (EtwNotificationRegister.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800676B4 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     GetImageTuple @ 0x1800E39FC (GetImageTuple.c)
 *     _tlgCreate1Sz_char @ 0x1800E3A94 (_tlgCreate1Sz_char.c)
 *     EtwEventProviderEnabled @ 0x1800E3AD0 (EtwEventProviderEnabled.c)
 *     toupper @ 0x1801257A0 (toupper.c)
 *     ZwDelayExecution @ 0x1801606D0 (ZwDelayExecution.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180170498 (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(ULONGLONG a1)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v2; // r14
  ULONGLONG v3; // r15
  BOOL v4; // r12d
  __int64 v5; // r8
  __int64 i; // rdi
  char *Heap; // rax
  unsigned __int64 v8; // rdx
  char v9; // si
  char ImageTuple; // al
  char v11; // r13
  __int64 v12; // rbx
  unsigned int v13; // r14d
  REGHANDLE v14; // rcx
  unsigned int v15; // ebx
  char v16; // al
  const char *v17; // rdx
  int v18; // ecx
  __int64 v19; // r9
  unsigned __int64 v20; // r8
  REGHANDLE v21; // rcx
  const char *v22; // rdx
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // r9
  int v26; // ecx
  __int64 v27; // r9
  __int64 v28; // r8
  unsigned __int64 v29; // rdx
  char v30; // dl
  unsigned int v31; // r13d
  _BYTE *v32; // r15
  unsigned int v33; // ecx
  LONG v34; // eax
  BOOLEAN v35; // bl
  char v36; // [rsp+38h] [rbp-D0h]
  unsigned int v37; // [rsp+3Ch] [rbp-CCh]
  unsigned int v38; // [rsp+40h] [rbp-C8h] BYREF
  int v39; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v40; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v41; // [rsp+4Ch] [rbp-BCh] BYREF
  int v42; // [rsp+50h] [rbp-B8h] BYREF
  int v43; // [rsp+54h] [rbp-B4h] BYREF
  int v44; // [rsp+58h] [rbp-B0h] BYREF
  int v45; // [rsp+5Ch] [rbp-ACh] BYREF
  int v46; // [rsp+60h] [rbp-A8h] BYREF
  BOOL v47; // [rsp+64h] [rbp-A4h] BYREF
  LARGE_INTEGER DelayInterval; // [rsp+68h] [rbp-A0h] BYREF
  ULONGLONG RegHandle; // [rsp+70h] [rbp-98h] BYREF
  unsigned int v50; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-88h] BYREF
  GUID Guid; // [rsp+90h] [rbp-78h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-60h] BYREF
  void *v54; // [rsp+B8h] [rbp-50h]
  int v55; // [rsp+C0h] [rbp-48h]
  int v56; // [rsp+C4h] [rbp-44h]
  LARGE_INTEGER *v57; // [rsp+C8h] [rbp-40h]
  __int64 v58; // [rsp+D0h] [rbp-38h]
  unsigned int *v59; // [rsp+D8h] [rbp-30h]
  __int64 v60; // [rsp+E0h] [rbp-28h]
  unsigned int *v61; // [rsp+E8h] [rbp-20h]
  __int64 v62; // [rsp+F0h] [rbp-18h]
  int *v63; // [rsp+F8h] [rbp-10h]
  __int64 v64; // [rsp+100h] [rbp-8h]
  _BYTE v65[16]; // [rsp+108h] [rbp+0h] BYREF
  int *v66; // [rsp+118h] [rbp+10h]
  __int64 v67; // [rsp+120h] [rbp+18h]
  int *v68; // [rsp+128h] [rbp+20h]
  __int64 v69; // [rsp+130h] [rbp+28h]
  _QWORD v70[2]; // [rsp+138h] [rbp+30h] BYREF
  unsigned int *v71; // [rsp+148h] [rbp+40h]
  __int64 v72; // [rsp+150h] [rbp+48h]
  int *v73; // [rsp+158h] [rbp+50h]
  __int64 v74; // [rsp+160h] [rbp+58h]
  BOOL *v75; // [rsp+168h] [rbp+60h]
  __int64 v76; // [rsp+170h] [rbp+68h]
  LARGE_INTEGER *p_DelayInterval; // [rsp+178h] [rbp+70h]
  int v78; // [rsp+180h] [rbp+78h]
  int v79; // [rsp+184h] [rbp+7Ch]
  _BYTE v80[272]; // [rsp+188h] [rbp+80h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1;
  RegHandle = a1;
  v4 = 0;
  v37 = 0;
  RtlAcquireSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
  for ( i = g_MicrosoftTelemetryAssertsTriggeredList; i; i = *(_QWORD *)(i + 24) )
  {
    if ( *(_QWORD *)i == v2 )
      goto LABEL_5;
  }
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  i = (__int64)Heap;
  if ( !Heap )
    goto LABEL_20;
  *(_QWORD *)Heap = v2;
  v8 = MEMORY[0x7FFE0320] * MEMORY[0x7FFE0004];
  *(_QWORD *)(Heap + 12) = 0LL;
  *((_DWORD *)Heap + 2) = (v8 >> 24) - 60001;
  *((_QWORD *)Heap + 3) = g_MicrosoftTelemetryAssertsTriggeredList;
  g_MicrosoftTelemetryAssertsTriggeredList = (__int64)Heap;
LABEL_5:
  v9 = 1;
  ++*(_DWORD *)(i + 12);
  ++*(_DWORD *)(i + 16);
  if ( (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) - *(_DWORD *)(i + 8) > 0xEA60 )
  {
    v39 = 0;
    *(_DWORD *)(i + 8) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v38 = 0;
    ImageTuple = GetImageTuple(v1, v80, v5, &v39, &v38);
    v36 = ImageTuple;
    v11 = ImageTuple;
    if ( ImageTuple && v2 >= v1 && (v29 = v1 + v38, v29 > v1) && v2 <= v29 )
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
      *(_QWORD *)(v3 + 32) = v80;
    if ( *(_DWORD *)(i + 16) == 1
      && !(unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CB758) )
    {
      if ( dword_1801CB758 )
      {
        v30 = v80[0];
        v4 = 1;
        v37 = 1;
        v31 = 0;
        Guid.Data1 = 488056742;
        *(_DWORD *)&Guid.Data2 = 1311216328;
        *(_DWORD *)Guid.Data4 = -1961924164;
        *(_DWORD *)&Guid.Data4[4] = -1655403451;
        if ( v80[0] )
        {
          v32 = v80;
          do
          {
            *((_BYTE *)&Guid.Data1 + v12) += toupper(v30);
            v33 = v31 + 1;
            v30 = *++v32;
            v31 = v33 < 0x10 ? v33 : 0;
            v12 = (v12 + 1) & -(__int64)(v33 < 0x10);
          }
          while ( *v32 );
          v3 = RegHandle;
        }
        RegHandle = 0LL;
        v34 = EtwNotificationRegister(&Guid, 3u, 0LL, 0LL, &RegHandle);
        if ( v34 )
        {
          RtlSetLastWin32Error(v34);
        }
        else
        {
          v35 = EtwEventProviderEnabled(RegHandle, 0, 0LL);
          EtwNotificationUnregister(RegHandle, 0LL);
          v4 = v35 == 0;
        }
        v11 = v36;
      }
      v14 = qword_1801CB778;
      qword_1801CB778 = 0LL;
      dword_1801CB758 = 0;
      EtwNotificationUnregister(v14, 0LL);
    }
    if ( (unsigned int)TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_1801CB790) )
    {
      v15 = v37;
      goto LABEL_15;
    }
    if ( *(_BYTE *)(v3 + 24) )
    {
      if ( (unsigned int)dword_1801CB790 > 5 )
      {
        if ( (qword_1801CB7A0 & 0x400000000000LL) == 0 || (qword_1801CB7A8 & 0x400000000000LL) != qword_1801CB7A8 )
          v9 = 0;
        if ( v9 )
        {
          v22 = v80;
          v50 = *(_DWORD *)v3;
          v58 = 4LL;
          v57 = (LARGE_INTEGER *)&v50;
          v59 = &v40;
          v40 = v13;
          v60 = 4LL;
          v61 = &v41;
          v41 = v11 != 0 ? v39 : 0;
          v62 = 4LL;
          v63 = &v42;
          v42 = v11 != 0 ? v38 : 0;
          v64 = 4LL;
          if ( !v11 )
            v22 = "<unknown>";
          tlgCreate1Sz_char(v65, v22);
          v23 = *(_DWORD *)(i + 12);
          v24 = *(_QWORD *)(v3 + 32);
          v66 = &v43;
          v44 = *(_DWORD *)(i + 16);
          v43 = v23;
          v68 = &v44;
          v67 = v25;
          v69 = v25;
          tlgCreate1Sz_char(v70, v24);
          v26 = *(_DWORD *)(v3 + 40);
          v15 = v37;
          v79 = 0;
          v71 = (unsigned int *)&v45;
          v46 = *(_DWORD *)(v3 + 44);
          v73 = &v46;
          v75 = &v47;
          p_DelayInterval = &DelayInterval;
          v45 = v26;
          v72 = v27;
          v74 = v27;
          v47 = v4;
          v76 = v27;
          DelayInterval.LowPart = v37;
          v78 = v27;
          tlgWriteTransfer_EtwEventWriteTransfer(
            (__int64)&dword_1801CB790,
            (unsigned __int8 *)dword_1801A17AC,
            v28,
            v27,
            0xEu,
            &UserData);
          goto LABEL_31;
        }
      }
    }
    else if ( (unsigned int)dword_1801CB790 > 5 )
    {
      if ( (qword_1801CB7A0 & 0x400000000000LL) == 0
        || (v16 = 1, (qword_1801CB7A8 & 0x400000000000LL) != qword_1801CB7A8) )
      {
        v16 = 0;
      }
      if ( v16 )
      {
        v17 = v80;
        DelayInterval.LowPart = *(_DWORD *)v3;
        v58 = 4LL;
        v57 = &DelayInterval;
        v59 = (unsigned int *)&v47;
        v47 = v13;
        v60 = 4LL;
        v61 = (unsigned int *)&v46;
        v46 = v11 != 0 ? v39 : 0;
        v62 = 4LL;
        v63 = &v45;
        v45 = v11 != 0 ? v38 : 0;
        v64 = 4LL;
        if ( !v11 )
          v17 = "<unknown>";
        tlgCreate1Sz_char(v65, v17);
        v18 = *(_DWORD *)(i + 12);
        v15 = v37;
        v66 = &v44;
        v43 = *(_DWORD *)(i + 16);
        v68 = &v43;
        v70[0] = &v42;
        v71 = &v41;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (unsigned __int64)off_1801CB798;
        v44 = v18;
        v67 = v19;
        v69 = v19;
        v70[1] = v19;
        v72 = (unsigned int)v19;
        EventDescriptor.Keyword = v20;
        v42 = v4;
        v41 = v37;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        UserData.Size = *(unsigned __int16 *)off_1801CB798;
        v54 = &unk_1801A1876;
        UserData.Reserved = 2;
        v55 = 118;
        v56 = 1;
        v40 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwEventWriteTransfer(qword_1801CB7B0, &EventDescriptor, 0LL, 0LL, 0xBu, &UserData);
        goto LABEL_31;
      }
    }
    v15 = v37;
LABEL_31:
    v21 = qword_1801CB7B0;
    qword_1801CB7B0 = 0LL;
    dword_1801CB790 = 0;
    EtwNotificationUnregister(v21, 0LL);
LABEL_15:
    if ( v15 && v4 && *(_BYTE *)(v3 + 48) )
    {
      DelayInterval.QuadPart = -10000000LL;
      ZwDelayExecution(0, &DelayInterval);
    }
    *(_DWORD *)(i + 12) = 0;
  }
LABEL_20:
  RtlReleaseSRWLockExclusive(&g_MicrosoftTelemetryAssertLock);
}
