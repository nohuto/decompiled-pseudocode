/*
 * XREFs of EtwpWriteRemainingCompressedData @ 0x1407B0C70
 * Callers:
 *     EtwpSavePersistedLogger @ 0x1407B02B0 (EtwpSavePersistedLogger.c)
 * Callees:
 *     ZwWriteFile @ 0x1406A74B0 (ZwWriteFile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall EtwpWriteRemainingCompressedData(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v4; // rcx
  NTSTATUS v7; // eax
  int v8; // edx
  unsigned int v9; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  v4 = *(unsigned int *)(a1 + 52);
  IoStatusBlock = 0LL;
  if ( !(_DWORD)v4 )
    goto LABEL_5;
  memset_0((void *)(*(_QWORD *)(a1 + 40) + v4), 0, (unsigned int)(*(_DWORD *)(a1 + 16) - v4));
  v7 = ZwWriteFile(
         *(HANDLE *)a1,
         0LL,
         0LL,
         0LL,
         &IoStatusBlock,
         *(PVOID *)(a1 + 40),
         *(_DWORD *)(a1 + 16),
         (PLARGE_INTEGER)(a1 + 8),
         0LL);
  v8 = *(_DWORD *)(a1 + 56);
  v9 = v7;
  if ( v7 >= 0 )
  {
    *(_QWORD *)(a1 + 8) += *(unsigned int *)(a1 + 52);
    *(_DWORD *)(a1 + 20) += v8;
LABEL_5:
    v9 = 0;
    goto LABEL_6;
  }
  *(_DWORD *)(a1 + 24) += v8;
LABEL_6:
  *a2 += *(_DWORD *)(a1 + 20);
  *a3 += *(_DWORD *)(a1 + 24);
  return v9;
}
