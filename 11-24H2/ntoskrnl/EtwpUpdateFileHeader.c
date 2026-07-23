/*
 * XREFs of EtwpUpdateFileHeader @ 0x1409D5658
 * Callers:
 *     EtwpCreateLogFile @ 0x1409D51BC (EtwpCreateLogFile.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14027D604 (EtwpQueryUsedProcessorCount.c)
 *     EtwpResetBufferHeader @ 0x14044D7A0 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x14047540C (EtwpInitializeBufferHeader.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1406A7470 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1406A74B0 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x1406A75D0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1406A7890 (ZwSetInformationFile.c)
 *     EtwpAddLogHeader @ 0x1409D59FC (EtwpAddLogHeader.c)
 *     EtwpIsWow64Logger @ 0x1409D68EC (EtwpIsWow64Logger.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateFileHeader(__int64 a1, char a2, int a3)
{
  ULONG Length; // r12d
  _DWORD *Pool2; // rax
  __int64 Buffer; // rsi
  NTSTATUS v9; // ebx
  LARGE_INTEGER v10; // rcx
  void *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // r14
  signed __int64 v16; // rcx
  LARGE_INTEGER FileInformation; // [rsp+50h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK v19; // [rsp+68h] [rbp-11h] BYREF
  __int128 v20; // [rsp+78h] [rbp-1h] BYREF
  __int64 v21; // [rsp+88h] [rbp+Fh]

  v21 = 0LL;
  v20 = 0LL;
  IoStatusBlock = 0LL;
  if ( a2 )
    Length = -a3 & (a3 + 383);
  else
    Length = *(_DWORD *)(a1 + 4);
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, (Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
  Buffer = (__int64)Pool2;
  if ( Pool2 )
  {
    if ( !a2 )
    {
      EtwpInitializeBufferHeader((__int16 *)a1, Pool2);
      EtwpResetBufferHeader(Buffer, 4);
      EtwpAddLogHeader(a1, Buffer);
      v9 = ZwWriteFile(*(HANDLE *)(a1 + 800), 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)Buffer, Length, 0LL, 0LL);
      if ( v9 >= 0 )
      {
        if ( (*(_DWORD *)(a1 + 12) & 0x20) == 0
          || (v10.QuadPart = *(unsigned int *)(a1 + 292)
                           * ((-(__int64)((*(_DWORD *)(a1 + 12) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000),
              v19 = 0LL,
              FileInformation = v10,
              v9 = ZwSetInformationFile(*(HANDLE *)(a1 + 800), &v19, &FileInformation, 8u, FileEndOfFileInformation),
              v9 >= 0) )
        {
          *(_DWORD *)(a1 + 248) = 1;
          *(_DWORD *)(a1 + 204) = 1;
          *(_QWORD *)(a1 + 216) = Length;
        }
      }
      goto LABEL_9;
    }
    v12 = *(void **)(a1 + 800);
    FileInformation.QuadPart = 0LL;
    v9 = ZwReadFile(v12, 0LL, 0LL, 0LL, &IoStatusBlock, Pool2, Length, &FileInformation, 0LL);
    if ( v9 >= 0 )
    {
      if ( (*(_DWORD *)(Buffer + 136) & 0x4000402) != 0 )
      {
        v9 = -1073741811;
        *(_DWORD *)(a1 + 44) = 1;
      }
      else if ( *(_BYTE *)(Buffer + 108) != 10 || *(_BYTE *)(Buffer + 109) )
      {
        v9 = -1073741811;
        *(_DWORD *)(a1 + 44) = 2;
      }
      else if ( *(_DWORD *)(Buffer + 148) == ((unsigned __int8)EtwpIsWow64Logger(a1) != 0 ? 4 : 8) )
      {
        v14 = *(unsigned int *)(Buffer + 104);
        LODWORD(v15) = *(_DWORD *)(Buffer + 140);
        if ( ((a3 - 1) & (unsigned int)v14) != 0 )
        {
          v9 = -1073741306;
        }
        else
        {
          if ( (unsigned int)(v14 - 1024) > 0xFFFC00 )
          {
            v9 = -1073741811;
            *(_DWORD *)(a1 + 44) = 4;
            goto LABEL_9;
          }
          if ( (*(_DWORD *)(a1 + 816) & 2) == 0 || *(_DWORD *)(a1 + 4) == (_DWORD)v14 )
          {
            if ( !*(_QWORD *)(Buffer + 120) )
            {
              if ( (v13 & 0x20) != 0 )
              {
                v9 = -1073741811;
                *(_DWORD *)(a1 + 44) = 6;
                goto LABEL_9;
              }
              v9 = ZwQueryInformationFile(*(HANDLE *)(a1 + 800), &IoStatusBlock, &v20, 0x18u, FileStandardInformation);
              if ( v9 < 0 )
              {
                *(_DWORD *)(a1 + 44) = 7;
                goto LABEL_9;
              }
              v16 = *(unsigned int *)(a1 + 292)
                  * ((-(__int64)((*(_DWORD *)(a1 + 12) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000);
              if ( v16 && *((__int64 *)&v20 + 1) >= v16 )
              {
                v9 = -1073741432;
                *(_DWORD *)(a1 + 44) = 8;
                goto LABEL_9;
              }
              v13 = *((_QWORD *)&v20 + 1) % v14;
              v15 = *((_QWORD *)&v20 + 1) / v14;
            }
            if ( (_DWORD)v15 )
            {
              if ( *(_DWORD *)(Buffer + 116) == (unsigned int)EtwpQueryUsedProcessorCount(a1, v13) )
              {
                *(_QWORD *)(Buffer + 120) = 0LL;
                v9 = ZwWriteFile(
                       *(HANDLE *)(a1 + 800),
                       0LL,
                       0LL,
                       0LL,
                       &IoStatusBlock,
                       (PVOID)Buffer,
                       Length,
                       &FileInformation,
                       0LL);
                if ( v9 >= 0 )
                {
                  *(_DWORD *)(a1 + 248) = v15;
                  *(_DWORD *)(a1 + 204) = v15;
                  *(_DWORD *)(a1 + 4) = v14;
                  *(_QWORD *)(a1 + 216) = (unsigned int)(v14 * v15);
                }
              }
              else
              {
                v9 = -1073741811;
                *(_DWORD *)(a1 + 44) = 10;
              }
            }
            else
            {
              v9 = -1073741811;
              *(_DWORD *)(a1 + 44) = 9;
            }
            goto LABEL_9;
          }
          v9 = -1073741306;
          *(_DWORD *)(a1 + 44) = 5;
        }
      }
      else
      {
        v9 = -1073741811;
        *(_DWORD *)(a1 + 44) = 3;
      }
    }
LABEL_9:
    ExFreePoolWithTag((PVOID)Buffer, 0);
    return (unsigned int)v9;
  }
  return 3221225495LL;
}
