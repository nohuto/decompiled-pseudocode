/*
 * XREFs of RtlReportExceptionHelper @ 0x1800CF388
 * Callers:
 *     RtlpPossibleDeadlock @ 0x1800072A0 (RtlpPossibleDeadlock.c)
 *     RtlReportException @ 0x1800CF050 (RtlReportException.c)
 * Callees:
 *     ReportExceptionInternal @ 0x1800CF998 (ReportExceptionInternal.c)
 *     WerpProcessId @ 0x1800CFAD0 (WerpProcessId.c)
 *     WerpThreadId @ 0x1800CFB20 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x1800CFB70 (WerpWaitForCrashReporting.c)
 *     WerpSetProcessFaultInformation @ 0x180116D64 (WerpSetProcessFaultInformation.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x1801639A0 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x180163B20 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlReportExceptionHelper(_OWORD *a1, _OWORD *a2, int a3, __int64 a4)
{
  int v5; // ebx
  HANDLE v6; // r15
  char *v7; // r13
  int v8; // esi
  __int64 v9; // rbx
  int v10; // ebx
  int v11; // eax
  int v12; // r8d
  _OWORD *v13; // rdx
  _OWORD *v14; // rax
  __int64 v15; // rax
  unsigned int v17; // [rsp+50h] [rbp-128h]
  void *v18; // [rsp+58h] [rbp-120h] BYREF
  HANDLE v19; // [rsp+60h] [rbp-118h] BYREF
  HANDLE v20; // [rsp+68h] [rbp-110h] BYREF
  HANDLE v21; // [rsp+70h] [rbp-108h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-100h] BYREF
  char *v23; // [rsp+80h] [rbp-F8h]
  HANDLE v24; // [rsp+88h] [rbp-F0h]
  HANDLE v25; // [rsp+90h] [rbp-E8h] BYREF
  int v26; // [rsp+98h] [rbp-E0h]
  __int64 v27; // [rsp+A0h] [rbp-D8h]
  __int64 v28; // [rsp+A8h] [rbp-D0h] BYREF
  _OWORD *v29; // [rsp+B0h] [rbp-C8h]
  __int64 v30; // [rsp+B8h] [rbp-C0h]
  __int128 v31; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-A8h]
  __int64 v33; // [rsp+D8h] [rbp-A0h]
  __int128 v34; // [rsp+E0h] [rbp-98h]
  __int128 v35; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v36; // [rsp+100h] [rbp-78h]
  __int64 v37; // [rsp+108h] [rbp-70h]
  __int128 v38; // [rsp+110h] [rbp-68h]
  _QWORD v39[4]; // [rsp+120h] [rbp-58h] BYREF

  v30 = a4;
  v26 = a3;
  v29 = a1;
  v25 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  memset(v39, 0, sizeof(v39));
  v5 = 0;
  v23 = 0LL;
  if ( (a3 & 4) == 0 )
    WerpSetProcessFaultInformation(-1LL);
  v21 = 0LL;
  v31 = 0x30uLL;
  v33 = 2LL;
  v32 = 0LL;
  v34 = 0LL;
  if ( (int)ZwCreateEvent(&v21, 2031619LL, &v31, 0LL, 0) < 0 )
  {
    v21 = 0LL;
  }
  else
  {
    v39[0] = v21;
    v5 = 1;
  }
  Handle = 0LL;
  v18 = 0LL;
  v28 = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  v7 = 0LL;
  v23 = 0LL;
  v35 = 0x30uLL;
  v37 = 2LL;
  v36 = 0LL;
  v38 = 0LL;
  v27 = 1648LL;
  v8 = NtCreateSection(&Handle, 983047LL, &v35);
  if ( v8 >= 0 )
  {
    v8 = ZwMapViewOfSection(Handle, -1LL, &v18, 0LL, 0LL, 0LL, &v28, 1, 0, 4);
    if ( v8 >= 0 )
    {
      memset_thunk_772440563353939046(v18, 0, 0xF8uLL);
      v8 = 0;
      v6 = Handle;
      v24 = Handle;
      Handle = 0LL;
      v7 = (char *)v18;
      v23 = (char *)v18;
      v18 = 0LL;
    }
  }
  if ( v18 )
  {
    NtUnmapViewOfSection(-1LL);
    v18 = 0LL;
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v8 >= 0 )
  {
    v39[v5] = v6;
    v9 = (unsigned int)(v5 + 1);
    v17 = v9;
    if ( (int)ZwDuplicateObject(-1LL, -1LL, -1LL, &v19, 0x1FFFFF, 2, 0) < 0 )
    {
      v19 = 0LL;
    }
    else
    {
      v39[v9] = v19;
      v9 = (unsigned int)(v9 + 1);
      v17 = v9;
    }
    if ( (int)ZwDuplicateObject(-1LL, -2LL, -1LL, &v20, 0x1FFFFF, 2, 0) < 0 )
    {
      v20 = 0LL;
    }
    else
    {
      v39[v9] = v20;
      v17 = v9 + 1;
    }
    v10 = WerpProcessId(-1LL);
    LODWORD(v18) = v10;
    v11 = WerpThreadId(-2LL);
    *(_DWORD *)v7 = 248;
    *((_QWORD *)v7 + 21) = 1LL;
    *((_DWORD *)v7 + 1) = v10;
    *((_DWORD *)v7 + 2) = v11;
    *((_QWORD *)v7 + 23) = v19;
    *((_QWORD *)v7 + 24) = v20;
    *((_QWORD *)v7 + 26) = v21;
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
    v8 = ReportExceptionInternal((unsigned int)v18, v24, v39, v17, v12, &v25);
    if ( v8 >= 0 )
    {
      if ( !v25 || (v8 = WerpWaitForCrashReporting(0LL, v21, v25, v30), v8 >= 0) )
        v8 = 0;
    }
  }
  if ( v7 )
  {
    NtUnmapViewOfSection(-1LL);
    if ( v6 )
      NtClose(v6);
    if ( v25 )
      NtClose(v25);
  }
  if ( v19 )
  {
    NtClose(v19);
    v19 = 0LL;
  }
  if ( v20 )
  {
    NtClose(v20);
    v20 = 0LL;
  }
  if ( v21 )
    NtClose(v21);
  return (unsigned int)v8;
}
