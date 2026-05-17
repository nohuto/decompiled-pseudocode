/*
 * XREFs of RtlCreateProcessReflection @ 0x1801349F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800B4FC0 (RtlpCreateUserThreadEx.c)
 *     RtlpProcessReflectionStartup @ 0x180134F90 (RtlpProcessReflectionStartup.c)
 *     NtWaitForSingleObject @ 0x1801632A0 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1801633E0 (ZwSetEvent.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x180163540 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x1801639A0 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x180163B20 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     ZwQuerySystemTime @ 0x180163D60 (ZwQuerySystemTime.c)
 *     NtWaitForMultipleObjects @ 0x180163D70 (NtWaitForMultipleObjects.c)
 */

__int64 __fastcall RtlCreateProcessReflection(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  HANDLE v17; // rcx
  int v18; // eax
  int ReturnLength; // [rsp+28h] [rbp-99h]
  int ReturnLengtha; // [rsp+28h] [rbp-99h]
  __int64 v21; // [rsp+38h] [rbp-89h]
  __int64 v22; // [rsp+68h] [rbp-59h] BYREF
  __int64 v23; // [rsp+70h] [rbp-51h] BYREF
  __int64 v24; // [rsp+78h] [rbp-49h] BYREF
  HANDLE v25; // [rsp+80h] [rbp-41h] BYREF
  ULONG ProcessInformationLength[2]; // [rsp+88h] [rbp-39h] BYREF
  PVOID ProcessInformation; // [rsp+90h] [rbp-31h] BYREF
  __int64 v28; // [rsp+98h] [rbp-29h] BYREF
  HANDLE v29; // [rsp+A0h] [rbp-21h] BYREF
  HANDLE v30; // [rsp+A8h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-1h]
  __int64 v34; // [rsp+C8h] [rbp+7h] BYREF
  __int64 v35; // [rsp+D0h] [rbp+Fh] BYREF
  _QWORD v36[2]; // [rsp+D8h] [rbp+17h] BYREF

  *(_QWORD *)ProcessInformationLength = 4096LL;
  Handle = 0LL;
  v23 = 0LL;
  ProcessInformation = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v29 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v28 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  ZwQuerySystemTime(&v34);
  if ( (a2 & 0xFFFFFFE1) != 0 )
    return 3221225712LL;
  if ( (a2 & 8) != 0 && a3 )
    return 3221225715LL;
  if ( a6 )
  {
    *(_OWORD *)a6 = 0LL;
    *(_OWORD *)(a6 + 16) = 0LL;
  }
  v11 = ZwAllocateVirtualMemory(-1LL, &ProcessInformation, 0LL, ProcessInformationLength, 12288, 4);
  if ( v11 < 0 )
  {
    ProcessInformation = 0LL;
    goto LABEL_41;
  }
  NtQueryInformationProcess(
    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
    ProcessImageFileName,
    ProcessInformation,
    ProcessInformationLength[0],
    ProcessInformationLength);
  *(_QWORD *)ProcessInformationLength = 4096LL;
  ZwFreeVirtualMemory(-1LL, &ProcessInformation, ProcessInformationLength, 0x8000LL);
  v24 = 88LL;
  v11 = ZwAllocateVirtualMemory(-1LL, &v22, 0LL, &v24, 12288, 4);
  if ( v11 < 0 )
  {
    v22 = 0LL;
    goto LABEL_41;
  }
  v12 = v22;
  v13 = v24;
  *(_QWORD *)(v22 + 24) = a4;
  *(_QWORD *)(v12 + 16) = a3;
  *(_QWORD *)v12 = v13;
  *(_DWORD *)(v12 + 8) = a2;
  *(_QWORD *)(v12 + 48) = a5;
  if ( a1 == -1 )
  {
    *(_DWORD *)(v12 + 8) = a2 | 0x10;
    v11 = RtlpProcessReflectionStartup(v22);
    if ( v11 >= 0 && a6 )
    {
      *(_QWORD *)a6 = *(_QWORD *)(v22 + 56);
      *(_QWORD *)(a6 + 8) = *(_QWORD *)(v22 + 64);
      *(_QWORD *)(a6 + 16) = *(_QWORD *)(v22 + 72);
      v14 = v22;
LABEL_40:
      *(_QWORD *)(a6 + 24) = *(_QWORD *)(v14 + 80);
      goto LABEL_41;
    }
    goto LABEL_41;
  }
  v33 = v24;
  v11 = NtCreateSection(&v29, 6LL, 0LL);
  if ( v11 < 0 )
    goto LABEL_41;
  v32 = v24;
  v11 = ZwMapViewOfSection(v29, a1, &v28, 0LL, v24, 0LL, &v32, 2, 0, 4);
  if ( v11 >= 0 )
  {
    v11 = ZwMapViewOfSection(v29, -1LL, &v23, 0LL, v24, 0LL, &v32, 2, 0, 4);
    if ( v11 < 0 )
    {
      v23 = 0LL;
      goto LABEL_41;
    }
    if ( !a6
      || (LOBYTE(ReturnLength) = 0, v11 = ZwCreateEvent(&v30, 2031619LL, 0LL, 0LL, ReturnLength), v11 >= 0)
      && (LOBYTE(ReturnLengtha) = 0, v11 = ZwCreateEvent(&v25, 2031619LL, 0LL, 0LL, ReturnLengtha), v11 >= 0)
      && (v11 = ZwDuplicateObject(-1LL, v30, a1, v22 + 32, 2031619, 0, 2), v11 >= 0)
      && (v11 = ZwDuplicateObject(-1LL, v25, a1, v22 + 40, 2031619, 0, 2), v11 >= 0)
      && (!a5 || (v11 = ZwDuplicateObject(-1LL, a5, a1, v22 + 48, 2031619, 0, 2), v11 >= 0)) )
    {
      v15 = v22;
      v16 = v23;
      *(_OWORD *)v23 = *(_OWORD *)v22;
      *(_OWORD *)(v16 + 16) = *(_OWORD *)(v15 + 16);
      *(_OWORD *)(v16 + 32) = *(_OWORD *)(v15 + 32);
      *(_OWORD *)(v16 + 48) = *(_OWORD *)(v15 + 48);
      *(_OWORD *)(v16 + 64) = *(_OWORD *)(v15 + 64);
      *(_QWORD *)(v16 + 80) = *(_QWORD *)(v15 + 80);
      v11 = RtlpCreateUserThreadEx(
              a1,
              0LL,
              2,
              0,
              0LL,
              0LL,
              v21,
              (__int64)RtlpProcessReflectionStartup,
              v28,
              &Handle,
              0LL);
      if ( v11 >= 0 )
      {
        if ( a6 )
        {
          v36[0] = Handle;
          v36[1] = v30;
          if ( (unsigned int)NtWaitForMultipleObjects(2LL, v36, 1LL, 0LL, 0LL) == 1 )
          {
            if ( *(_QWORD *)(v23 + 56) )
            {
              if ( (int)ZwDuplicateObject(a1, *(_QWORD *)(v23 + 56), -1LL, a6, 0x1FFFFF, 0, 2) >= 0 )
              {
                v18 = ZwDuplicateObject(a1, *(_QWORD *)(v23 + 64), -1LL, a6 + 8, 0x1FFFFF, 0, 2);
                v17 = v25;
                if ( v18 >= 0 )
                {
                  v11 = ZwSetEvent(v25, 0LL);
                  *(_QWORD *)(a6 + 16) = *(_QWORD *)(v23 + 72);
                  v14 = v23;
                  goto LABEL_40;
                }
              }
              else
              {
                v17 = v25;
              }
              v11 = ZwSetEvent(v17, 0LL);
              goto LABEL_41;
            }
            NtWaitForSingleObject(Handle, 0, 0LL);
          }
          v11 = -1073741823;
        }
      }
    }
LABEL_41:
    if ( v28 )
      NtUnmapViewOfSection(a1);
    goto LABEL_43;
  }
  v28 = 0LL;
LABEL_43:
  if ( v23 )
    NtUnmapViewOfSection(-1LL);
  if ( v29 )
    NtClose(v29);
  if ( v22 )
    ZwFreeVirtualMemory(-1LL, &v22, &v24, 0x8000LL);
  if ( v30 )
    NtClose(v30);
  if ( v25 )
    NtClose(v25);
  if ( Handle )
    NtClose(Handle);
  ZwQuerySystemTime(&v35);
  return (unsigned int)v11;
}
