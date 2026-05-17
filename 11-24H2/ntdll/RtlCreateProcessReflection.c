/*
 * XREFs of RtlCreateProcessReflection @ 0x180132F10
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x18008C310 (RtlpCreateUserThreadEx.c)
 *     RtlpProcessReflectionStartup @ 0x1801334B0 (RtlpProcessReflectionStartup.c)
 *     NtWaitForSingleObject @ 0x180161D10 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x180161E50 (ZwSetEvent.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x180161FB0 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x180162190 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x180162410 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x180162590 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x1801625D0 (NtCreateSection.c)
 *     ZwQuerySystemTime @ 0x1801627D0 (ZwQuerySystemTime.c)
 *     NtWaitForMultipleObjects @ 0x1801627E0 (NtWaitForMultipleObjects.c)
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
  __int64 v22; // [rsp+38h] [rbp-89h]
  __int64 v23; // [rsp+38h] [rbp-89h]
  __int64 v24; // [rsp+38h] [rbp-89h]
  __int64 v25; // [rsp+68h] [rbp-59h] BYREF
  __int64 v26; // [rsp+70h] [rbp-51h] BYREF
  __int64 v27; // [rsp+78h] [rbp-49h] BYREF
  HANDLE v28; // [rsp+80h] [rbp-41h] BYREF
  ULONG ProcessInformationLength[2]; // [rsp+88h] [rbp-39h] BYREF
  PVOID ProcessInformation; // [rsp+90h] [rbp-31h] BYREF
  __int64 v31; // [rsp+98h] [rbp-29h] BYREF
  HANDLE v32; // [rsp+A0h] [rbp-21h] BYREF
  HANDLE v33; // [rsp+A8h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-9h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-1h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+7h] BYREF
  __int64 v38; // [rsp+D0h] [rbp+Fh] BYREF
  _QWORD v39[2]; // [rsp+D8h] [rbp+17h] BYREF

  *(_QWORD *)ProcessInformationLength = 4096LL;
  Handle = 0LL;
  v26 = 0LL;
  ProcessInformation = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v32 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v31 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v33 = 0LL;
  v28 = 0LL;
  ZwQuerySystemTime(&v37);
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
  v27 = 88LL;
  v11 = ZwAllocateVirtualMemory(-1LL, &v25, 0LL, &v27, 12288, 4);
  if ( v11 < 0 )
  {
    v25 = 0LL;
    goto LABEL_41;
  }
  v12 = v25;
  v13 = v27;
  *(_QWORD *)(v25 + 24) = a4;
  *(_QWORD *)(v12 + 16) = a3;
  *(_QWORD *)v12 = v13;
  *(_DWORD *)(v12 + 8) = a2;
  *(_QWORD *)(v12 + 48) = a5;
  if ( a1 == -1 )
  {
    *(_DWORD *)(v12 + 8) = a2 | 0x10;
    v11 = RtlpProcessReflectionStartup(v25);
    if ( v11 >= 0 && a6 )
    {
      *(_QWORD *)a6 = *(_QWORD *)(v25 + 56);
      *(_QWORD *)(a6 + 8) = *(_QWORD *)(v25 + 64);
      *(_QWORD *)(a6 + 16) = *(_QWORD *)(v25 + 72);
      v14 = v25;
LABEL_40:
      *(_QWORD *)(a6 + 24) = *(_QWORD *)(v14 + 80);
      goto LABEL_41;
    }
    goto LABEL_41;
  }
  v36 = v27;
  v11 = NtCreateSection(&v32, 6LL, 0LL, &v36);
  if ( v11 < 0 )
    goto LABEL_41;
  v35 = v27;
  v11 = ZwMapViewOfSection(v32, a1, &v31, 0LL, v27, 0LL, &v35, 2, 0, 4);
  if ( v11 >= 0 )
  {
    v11 = ZwMapViewOfSection(v32, -1LL, &v26, 0LL, v27, 0LL, &v35, 2, 0, 4);
    if ( v11 < 0 )
    {
      v26 = 0LL;
      goto LABEL_41;
    }
    if ( !a6 )
      goto LABEL_30;
    LOBYTE(ReturnLength) = 0;
    v11 = ZwCreateEvent(&v33, 2031619LL, 0LL, 0LL, ReturnLength);
    if ( v11 >= 0 )
    {
      LOBYTE(ReturnLengtha) = 0;
      v11 = ZwCreateEvent(&v28, 2031619LL, 0LL, 0LL, ReturnLengtha);
      if ( v11 >= 0 )
      {
        LODWORD(v21) = 2;
        v11 = ZwDuplicateObject(-1LL, v33, a1, v25 + 32, 2031619, 0, v21);
        if ( v11 >= 0 )
        {
          LODWORD(v22) = 2;
          v11 = ZwDuplicateObject(-1LL, v28, a1, v25 + 40, 2031619, 0, v22);
          if ( v11 >= 0 )
          {
            if ( !a5 || (LODWORD(v21) = 2, v11 = ZwDuplicateObject(-1LL, a5, a1, v25 + 48, 2031619, 0, v21), v11 >= 0) )
            {
LABEL_30:
              v15 = v25;
              v16 = v26;
              *(_OWORD *)v26 = *(_OWORD *)v25;
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
                      v31,
                      &Handle,
                      0LL);
              if ( v11 >= 0 )
              {
                if ( a6 )
                {
                  v39[0] = Handle;
                  v39[1] = v33;
                  if ( (unsigned int)NtWaitForMultipleObjects(2LL, v39, 1LL, 0LL, 0LL) == 1 )
                  {
                    if ( *(_QWORD *)(v26 + 56) )
                    {
                      LODWORD(v23) = 2;
                      if ( (int)ZwDuplicateObject(a1, *(_QWORD *)(v26 + 56), -1LL, a6, 0x1FFFFF, 0, v23) >= 0 )
                      {
                        LODWORD(v24) = 2;
                        v18 = ZwDuplicateObject(a1, *(_QWORD *)(v26 + 64), -1LL, a6 + 8, 0x1FFFFF, 0, v24);
                        v17 = v28;
                        if ( v18 >= 0 )
                        {
                          v11 = ZwSetEvent(v28, 0LL);
                          *(_QWORD *)(a6 + 16) = *(_QWORD *)(v26 + 72);
                          v14 = v26;
                          goto LABEL_40;
                        }
                      }
                      else
                      {
                        v17 = v28;
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
          }
        }
      }
    }
LABEL_41:
    if ( v31 )
      NtUnmapViewOfSection(a1);
    goto LABEL_43;
  }
  v31 = 0LL;
LABEL_43:
  if ( v26 )
    NtUnmapViewOfSection(-1LL);
  if ( v32 )
    NtClose(v32);
  if ( v25 )
    ZwFreeVirtualMemory(-1LL, &v25, &v27, 0x8000LL);
  if ( v33 )
    NtClose(v33);
  if ( v28 )
    NtClose(v28);
  if ( Handle )
    NtClose(Handle);
  ZwQuerySystemTime(&v38);
  return (unsigned int)v11;
}
