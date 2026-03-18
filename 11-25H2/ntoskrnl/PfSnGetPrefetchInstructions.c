/*
 * XREFs of PfSnGetPrefetchInstructions @ 0x140987464
 * Callers:
 *     PfSnBeginScenario @ 0x140826530 (PfSnBeginScenario.c)
 * Callees:
 *     PfLockSharedRelease @ 0x1402054C4 (PfLockSharedRelease.c)
 *     PfLockSharedAcquire @ 0x14020739C (PfLockSharedAcquire.c)
 *     SmDecompressBuffer @ 0x1403CC850 (SmDecompressBuffer.c)
 *     RtlStringCbPrintfW @ 0x140404520 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     NtReadFile @ 0x14084E5D0 (NtReadFile.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     IopCreateFile @ 0x1408EE530 (IopCreateFile.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 *     PfVerifyScenarioBuffer @ 0x140988A00 (PfVerifyScenarioBuffer.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetPrefetchInstructions(__int64 a1, int a2, _QWORD *a3)
{
  _DWORD *v4; // rdi
  void *v5; // rsi
  __int64 v8; // rax
  unsigned int v9; // ebx
  wchar_t *Pool2; // r15
  int v11; // ebx
  ULONG Length; // r14d
  void *Buffer; // rax
  int v14; // eax
  unsigned int v16; // [rsp+80h] [rbp-80h] BYREF
  HANDLE FileHandle; // [rsp+88h] [rbp-78h] BYREF
  int v18; // [rsp+90h] [rbp-70h] BYREF
  int v19; // [rsp+94h] [rbp-6Ch] BYREF
  _DWORD *v20; // [rsp+98h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  int v22[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v23; // [rsp+C0h] [rbp-40h]
  __int128 v24; // [rsp+D0h] [rbp-30h]
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-20h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+F0h] [rbp-10h]
  void (__fastcall *v27)(void *); // [rsp+F8h] [rbp-8h]
  __int128 FileInformation; // [rsp+100h] [rbp+0h] BYREF
  __int64 v29; // [rsp+110h] [rbp+10h]

  v16 = 0;
  *(_QWORD *)&v24 = 0LL;
  DWORD2(v24) = 0;
  v29 = 0LL;
  DestinationString = 0LL;
  v19 = 0;
  v4 = 0LL;
  *(_OWORD *)v22 = 0LL;
  v20 = 0LL;
  v5 = 0LL;
  v23 = 0LL;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  PfLockSharedAcquire(qword_140E66B98);
  v8 = -1LL;
  do
    ++v8;
  while ( word_140E66A30[v8] );
  v9 = 2 * v8 + 102;
  Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    RtlStringCbPrintfW(Pool2, v9, L"%s\\%ws-%08X.%ws", word_140E66A30, a1, *(_DWORD *)(a1 + 60), L"pf");
    PfLockSharedRelease(qword_140E66B98);
    RtlInitUnicodeString(&DestinationString, Pool2);
    v22[0] = 48;
    *(_QWORD *)&v23 = &DestinationString;
    *(_QWORD *)&v22[2] = 0LL;
    DWORD2(v23) = 576;
    v24 = 0LL;
    v11 = IopCreateFile(
            &FileHandle,
            -2146435072,
            (__int64)v22,
            (NTSTATUS *)&IoStatusBlock.0,
            0LL,
            0,
            0,
            1u,
            32,
            0LL,
            0,
            0,
            0LL,
            0,
            32,
            0LL);
    if ( v11 >= 0 )
    {
      v11 = NtQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      if ( v11 >= 0 )
      {
        Length = DWORD2(FileInformation);
        v18 = 0x10000000;
        if ( (unsigned int)(DWORD2(FileInformation) - 1) > 0xFFFFFFF || HIDWORD(FileInformation) )
        {
LABEL_24:
          v11 = -1073741823;
          goto LABEL_13;
        }
        Buffer = (void *)ExAllocatePool2(0x100uLL);
        v5 = Buffer;
        if ( Buffer )
        {
          v11 = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, 0LL, 0LL);
          if ( v11 >= 0 )
          {
            v26 = PfSnScenarioAlloc;
            v27 = PspUserApcKernelRoutine;
            v14 = SmDecompressBuffer((__int64)v5, Length, &v20, &v16, &v18);
            v4 = v20;
            v11 = v14;
            if ( v14 >= 0 )
            {
              if ( !(unsigned __int8)PfVerifyScenarioBuffer(v20, v16, &v19) )
              {
                v11 = -1073741701;
                goto LABEL_13;
              }
              if ( v4[20] == a2 )
              {
                *a3 = v4;
                v11 = 0;
                v4 = 0LL;
                goto LABEL_13;
              }
              goto LABEL_24;
            }
          }
        }
        else
        {
          v11 = -1073741670;
        }
      }
    }
  }
  else
  {
    v11 = -1073741670;
    PfLockSharedRelease(qword_140E66B98);
  }
LABEL_13:
  if ( FileHandle )
    NtClose(FileHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return (unsigned int)v11;
}
