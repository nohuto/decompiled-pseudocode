/*
 * XREFs of RtlReportExceptionHelper @ 0x1800ABF6C
 * Callers:
 *     RtlpPossibleDeadlock @ 0x180030A80 (RtlpPossibleDeadlock.c)
 *     RtlReportException @ 0x18010B4F0 (RtlReportException.c)
 * Callees:
 *     ReportExceptionInternal @ 0x1800AC57C (ReportExceptionInternal.c)
 *     WerpProcessId @ 0x1800AC6B4 (WerpProcessId.c)
 *     WerpThreadId @ 0x1800AC704 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x1800AC754 (WerpWaitForCrashReporting.c)
 *     WerpSetProcessFaultInformation @ 0x18010F180 (WerpSetProcessFaultInformation.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x1801607D0 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x180160950 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x180160990 (NtCreateSection.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlReportExceptionHelper(_OWORD *a1, _OWORD *a2, int a3, __int64 a4)
{
  int v5; // ebx
  HANDLE v6; // r15
  char *v7; // r13
  NTSTATUS v8; // esi
  __int64 v9; // rbx
  int v10; // ebx
  int v11; // eax
  int v12; // r8d
  _OWORD *v13; // rdx
  _OWORD *v14; // rax
  __int64 v15; // rax
  unsigned int v17; // [rsp+50h] [rbp-128h]
  PVOID BaseAddress; // [rsp+58h] [rbp-120h] BYREF
  HANDLE TargetHandle; // [rsp+60h] [rbp-118h] BYREF
  HANDLE v20; // [rsp+68h] [rbp-110h] BYREF
  HANDLE EventHandle; // [rsp+70h] [rbp-108h] BYREF
  HANDLE SectionHandle; // [rsp+78h] [rbp-100h] BYREF
  char *v23; // [rsp+80h] [rbp-F8h]
  HANDLE v24; // [rsp+88h] [rbp-F0h]
  HANDLE Handle; // [rsp+90h] [rbp-E8h] BYREF
  int v26; // [rsp+98h] [rbp-E0h]
  LARGE_INTEGER MaximumSize; // [rsp+A0h] [rbp-D8h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp-D0h] BYREF
  _OWORD *v29; // [rsp+B0h] [rbp-C8h]
  __int64 v30; // [rsp+B8h] [rbp-C0h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-B8h] BYREF
  _OBJECT_ATTRIBUTES v32; // [rsp+F0h] [rbp-88h] BYREF
  _QWORD v33[4]; // [rsp+120h] [rbp-58h] BYREF

  v30 = a4;
  v26 = a3;
  v29 = a1;
  Handle = 0LL;
  EventHandle = 0LL;
  v24 = 0LL;
  TargetHandle = 0LL;
  v20 = 0LL;
  memset(v33, 0, sizeof(v33));
  v5 = 0;
  v23 = 0LL;
  if ( (a3 & 4) == 0 )
    WerpSetProcessFaultInformation(-1LL);
  memset(&ObjectAttributes.Length + 1, 0, 20);
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  EventHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 2;
  if ( ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) < 0 )
  {
    EventHandle = 0LL;
  }
  else
  {
    v33[0] = EventHandle;
    v5 = 1;
  }
  memset(&v32.Length + 1, 0, 20);
  memset(&v32.Attributes + 1, 0, 20);
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  v32.Length = 48;
  v32.Attributes = 2;
  MaximumSize.QuadPart = 1648LL;
  v8 = NtCreateSection(&SectionHandle, 0xF0007u, &v32, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v8 >= 0 )
  {
    v8 = ZwMapViewOfSection(
           SectionHandle,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &BaseAddress,
           0LL,
           0LL,
           0LL,
           &ViewSize,
           ViewShare,
           0,
           4u);
    if ( v8 >= 0 )
    {
      memset_thunk_772440563353939046(BaseAddress, 0, 0xF8uLL);
      v8 = 0;
      v6 = SectionHandle;
      v24 = SectionHandle;
      SectionHandle = 0LL;
      v7 = (char *)BaseAddress;
      v23 = (char *)BaseAddress;
      BaseAddress = 0LL;
    }
  }
  if ( BaseAddress )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    BaseAddress = 0LL;
  }
  if ( SectionHandle )
  {
    NtClose(SectionHandle);
    SectionHandle = 0LL;
  }
  if ( v8 >= 0 )
  {
    v33[v5] = v6;
    v9 = (unsigned int)(v5 + 1);
    v17 = v9;
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &TargetHandle,
           0x1FFFFFu,
           2u,
           0) < 0 )
    {
      TargetHandle = 0LL;
    }
    else
    {
      v33[v9] = TargetHandle;
      v9 = (unsigned int)(v9 + 1);
      v17 = v9;
    }
    if ( ZwDuplicateObject(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           (HANDLE)0xFFFFFFFFFFFFFFFELL,
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           &v20,
           0x1FFFFFu,
           2u,
           0) < 0 )
    {
      v20 = 0LL;
    }
    else
    {
      v33[v9] = v20;
      v17 = v9 + 1;
    }
    v10 = WerpProcessId(-1LL);
    LODWORD(BaseAddress) = v10;
    v11 = WerpThreadId(-2LL);
    *(_DWORD *)v7 = 248;
    *((_QWORD *)v7 + 21) = 1LL;
    *((_DWORD *)v7 + 1) = v10;
    *((_DWORD *)v7 + 2) = v11;
    *((_QWORD *)v7 + 23) = TargetHandle;
    *((_QWORD *)v7 + 24) = v20;
    *((_QWORD *)v7 + 26) = EventHandle;
    *((_QWORD *)v7 + 28) = 0LL;
    *((_DWORD *)v7 + 58) = -1073741823;
    v12 = v26;
    *((_DWORD *)v7 + 59) = v26;
    v7 = v23;
    *((_DWORD *)v23 + 60) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v13 = v7 + 416;
    *((_QWORD *)v7 + 31) = 1LL;
    *((_QWORD *)v7 + 32) = 1LL;
    v14 = v29;
    *(_OWORD *)(v7 + 264) = *v29;
    *(_OWORD *)(v7 + 280) = v14[1];
    *(_OWORD *)(v7 + 296) = v14[2];
    *(_OWORD *)(v7 + 312) = v14[3];
    *(_OWORD *)(v7 + 328) = v14[4];
    *(_OWORD *)(v7 + 344) = v14[5];
    *(_OWORD *)(v7 + 360) = v14[6];
    *(_OWORD *)(v7 + 376) = v14[7];
    *(_OWORD *)(v7 + 392) = v14[8];
    *((_QWORD *)v7 + 51) = *((_QWORD *)v14 + 18);
    v15 = 9LL;
    do
    {
      *v13 = *a2;
      v13[1] = a2[1];
      v13[2] = a2[2];
      v13[3] = a2[3];
      v13[4] = a2[4];
      v13[5] = a2[5];
      v13[6] = a2[6];
      v13 += 8;
      *(v13 - 1) = a2[7];
      a2 += 8;
      --v15;
    }
    while ( v15 );
    *v13 = *a2;
    v13[1] = a2[1];
    v13[2] = a2[2];
    v13[3] = a2[3];
    v13[4] = a2[4];
    v6 = v24;
    v8 = ReportExceptionInternal((unsigned int)BaseAddress, v24, v33, v17, v12, &Handle);
    if ( v8 >= 0 )
    {
      if ( !Handle || (v8 = WerpWaitForCrashReporting(0LL, EventHandle, Handle, v30), v8 >= 0) )
        v8 = 0;
    }
  }
  if ( v7 )
  {
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7);
    if ( v6 )
      NtClose(v6);
    if ( Handle )
      NtClose(Handle);
  }
  if ( TargetHandle )
  {
    NtClose(TargetHandle);
    TargetHandle = 0LL;
  }
  if ( v20 )
  {
    NtClose(v20);
    v20 = 0LL;
  }
  if ( EventHandle )
    NtClose(EventHandle);
  return (unsigned int)v8;
}
