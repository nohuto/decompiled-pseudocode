/*
 * XREFs of RtlReportExceptionHelper @ 0x18000226C
 * Callers:
 *     RtlReportException @ 0x180001490 (RtlReportException.c)
 *     RtlpPossibleDeadlock @ 0x18009BC30 (RtlpPossibleDeadlock.c)
 * Callees:
 *     ReportExceptionInternal @ 0x18000287C (ReportExceptionInternal.c)
 *     WerpProcessId @ 0x1800029B4 (WerpProcessId.c)
 *     WerpThreadId @ 0x180002A04 (WerpThreadId.c)
 *     WerpWaitForCrashReporting @ 0x180002A54 (WerpWaitForCrashReporting.c)
 *     WerpSetProcessFaultInformation @ 0x180113E80 (WerpSetProcessFaultInformation.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180162190 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x180162410 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x180162590 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x1801625D0 (NtCreateSection.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
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
  __int64 v17; // [rsp+30h] [rbp-148h]
  __int64 v18; // [rsp+30h] [rbp-148h]
  int v19; // [rsp+50h] [rbp-128h]
  unsigned int v20; // [rsp+50h] [rbp-128h]
  void *v21; // [rsp+58h] [rbp-120h] BYREF
  HANDLE v22; // [rsp+60h] [rbp-118h] BYREF
  HANDLE v23; // [rsp+68h] [rbp-110h] BYREF
  HANDLE v24; // [rsp+70h] [rbp-108h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-100h] BYREF
  char *v26; // [rsp+80h] [rbp-F8h]
  HANDLE v27; // [rsp+88h] [rbp-F0h]
  HANDLE v28; // [rsp+90h] [rbp-E8h] BYREF
  int v29; // [rsp+98h] [rbp-E0h]
  __int64 v30; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-D0h] BYREF
  _OWORD *v32; // [rsp+B0h] [rbp-C8h]
  __int64 v33; // [rsp+B8h] [rbp-C0h]
  __int128 v34; // [rsp+C0h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+D0h] [rbp-A8h]
  __int64 v36; // [rsp+D8h] [rbp-A0h]
  __int128 v37; // [rsp+E0h] [rbp-98h]
  __int128 v38; // [rsp+F0h] [rbp-88h] BYREF
  __int64 v39; // [rsp+100h] [rbp-78h]
  __int64 v40; // [rsp+108h] [rbp-70h]
  __int128 v41; // [rsp+110h] [rbp-68h]
  _QWORD v42[4]; // [rsp+120h] [rbp-58h] BYREF

  v33 = a4;
  v29 = a3;
  v32 = a1;
  v28 = 0LL;
  v24 = 0LL;
  v27 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  memset(v42, 0, sizeof(v42));
  v5 = 0;
  v26 = 0LL;
  if ( (a3 & 4) == 0 )
    WerpSetProcessFaultInformation(-1LL);
  v24 = 0LL;
  v34 = 0x30uLL;
  v36 = 2LL;
  v35 = 0LL;
  v37 = 0LL;
  if ( (int)ZwCreateEvent(&v24, 2031619LL, &v34, 0LL, 0) < 0 )
  {
    v24 = 0LL;
  }
  else
  {
    v42[0] = v24;
    v5 = 1;
    v19 = 1;
  }
  Handle = 0LL;
  v21 = 0LL;
  v31 = 0LL;
  v6 = 0LL;
  v27 = 0LL;
  v7 = 0LL;
  v26 = 0LL;
  v38 = 0x30uLL;
  v40 = 2LL;
  v39 = 0LL;
  v41 = 0LL;
  v30 = 1648LL;
  HIDWORD(v17) = 0;
  v8 = NtCreateSection(&Handle, 983047LL, &v38, &v30);
  if ( v8 >= 0 )
  {
    v8 = ZwMapViewOfSection(Handle, -1LL, &v21, 0LL, 0LL, 0LL, &v31, 1, 0, 4, v19);
    if ( v8 >= 0 )
    {
      memset_thunk_772440563353939046(v21, 0, 0xF8uLL);
      v8 = 0;
      v6 = Handle;
      v27 = Handle;
      Handle = 0LL;
      v7 = (char *)v21;
      v26 = (char *)v21;
      v21 = 0LL;
    }
  }
  if ( v21 )
  {
    NtUnmapViewOfSection(-1LL);
    v21 = 0LL;
  }
  if ( Handle )
  {
    NtClose(Handle);
    Handle = 0LL;
  }
  if ( v8 >= 0 )
  {
    v42[v5] = v6;
    v9 = (unsigned int)(v5 + 1);
    v20 = v9;
    LODWORD(v17) = 0;
    if ( (int)ZwDuplicateObject(-1LL, -1LL, -1LL, &v22, 0x1FFFFF, 2, v17) < 0 )
    {
      v22 = 0LL;
    }
    else
    {
      v42[v9] = v22;
      v9 = (unsigned int)(v9 + 1);
      v20 = v9;
    }
    LODWORD(v18) = 0;
    if ( (int)ZwDuplicateObject(-1LL, -2LL, -1LL, &v23, 0x1FFFFF, 2, v18) < 0 )
    {
      v23 = 0LL;
    }
    else
    {
      v42[v9] = v23;
      v20 = v9 + 1;
    }
    v10 = WerpProcessId(-1LL);
    LODWORD(v21) = v10;
    v11 = WerpThreadId(-2LL);
    *(_DWORD *)v7 = 248;
    *((_QWORD *)v7 + 21) = 1LL;
    *((_DWORD *)v7 + 1) = v10;
    *((_DWORD *)v7 + 2) = v11;
    *((_QWORD *)v7 + 23) = v22;
    *((_QWORD *)v7 + 24) = v23;
    *((_QWORD *)v7 + 26) = v24;
    *((_QWORD *)v7 + 28) = 0LL;
    *((_DWORD *)v7 + 58) = -1073741823;
    v12 = v29;
    *((_DWORD *)v7 + 59) = v29;
    v7 = v26;
    *((_DWORD *)v26 + 60) = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v13 = v7 + 416;
    *((_QWORD *)v7 + 31) = 1LL;
    *((_QWORD *)v7 + 32) = 1LL;
    v14 = v32;
    *(_OWORD *)(v7 + 264) = *v32;
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
    v6 = v27;
    v8 = ReportExceptionInternal((unsigned int)v21, v27, v42, v20, v12, &v28);
    if ( v8 >= 0 )
    {
      if ( !v28 || (v8 = WerpWaitForCrashReporting(0LL, v24, v28, v33), v8 >= 0) )
        v8 = 0;
    }
  }
  if ( v7 )
  {
    NtUnmapViewOfSection(-1LL);
    if ( v6 )
      NtClose(v6);
    if ( v28 )
      NtClose(v28);
  }
  if ( v22 )
  {
    NtClose(v22);
    v22 = 0LL;
  }
  if ( v23 )
  {
    NtClose(v23);
    v23 = 0LL;
  }
  if ( v24 )
    NtClose(v24);
  return (unsigned int)v8;
}
