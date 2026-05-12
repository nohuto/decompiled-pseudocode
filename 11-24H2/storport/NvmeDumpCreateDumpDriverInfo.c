/*
 * XREFs of NvmeDumpCreateDumpDriverInfo @ 0x14019F4E0
 * Callers:
 *     NvmeDumpCreateDumpAdapterInfo @ 0x14019F024 (NvmeDumpCreateDumpAdapterInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RtlStringCbCopyW @ 0x1400338A8 (RtlStringCbCopyW.c)
 *     RtlStringCbPrintfW @ 0x1400375F0 (RtlStringCbPrintfW.c)
 *     RaidDriverGetName @ 0x14003E03C (RaidDriverGetName.c)
 *     NvmeNativeDumpFreeDumpDriverInfo @ 0x14019F8A8 (NvmeNativeDumpFreeDumpDriverInfo.c)
 */

__int64 __fastcall NvmeDumpCreateDumpDriverInfo(__int64 a1, __int64 a2, __int64 *a3, _BYTE *a4)
{
  unsigned int v5; // ebx
  __int64 v7; // rcx
  size_t v10; // rdi
  wchar_t *Pool; // rax
  wchar_t *v12; // rsi
  _QWORD *i; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // rax
  wchar_t *v17; // rax
  __int64 v18; // r11
  wchar_t *v19; // rax
  __int64 v20; // r11
  int FullDriverPath; // esi
  __int64 v22; // rax
  __int128 v24; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+70h] [rbp+8h] BYREF
  __int64 v26; // [rsp+78h] [rbp+10h]

  v26 = a2;
  v5 = 0;
  *a4 = 0;
  v7 = *(_QWORD *)(a1 + 16);
  *a3 = 0LL;
  v24 = 0LL;
  RaidDriverGetName(v7, (__int64)&v24);
  v10 = (unsigned int)(unsigned __int16)v24 + 10;
  Pool = (wchar_t *)RaidAllocatePool(64LL, v10, 1145266514LL, *(_QWORD *)(a1 + 8));
  v12 = Pool;
  if ( Pool )
  {
    RtlStringCbPrintfW(Pool, v10, L"%ws.sys", *((_QWORD *)&v24 + 1));
    for ( i = *(_QWORD **)(a2 + 56); i != (_QWORD *)(a2 + 56); i = (_QWORD *)*i )
    {
      if ( !_wcsicmp((const wchar_t *)i[3], v12) )
      {
        *a3 = (__int64)(i - 1);
        *a4 = 1;
LABEL_10:
        ExFreePoolWithTag(v12, 0x44436152u);
        return v5;
      }
    }
    v14 = RaidAllocatePool(64LL, 176LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v25 = v14;
    v15 = v14;
    if ( !v14 )
    {
      v5 = -1073741670;
      goto LABEL_10;
    }
    v16 = (_QWORD *)(v14 + 8);
    v16[1] = v16;
    *v16 = v16;
    *(_DWORD *)v15 = 176;
    *(_QWORD *)(v15 + 24) = NvmeDumpStorageDumpControl;
    *(_QWORD *)(v15 + 32) = v12;
    v17 = (wchar_t *)RaidAllocatePool(64LL, 34LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( !v17 )
      goto LABEL_14;
    RtlStringCbCopyW(v17, 0x22uLL, L"dumpstorport.sys");
    *(_QWORD *)(v15 + 48) = v18;
    v19 = (wchar_t *)RaidAllocatePool(64LL, 26LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( !v19 )
      goto LABEL_14;
    RtlStringCbCopyW(v19, 0x1AuLL, L"storport.sys");
    *(_QWORD *)(v15 + 56) = v20;
    RtlInitUnicodeString((PUNICODE_STRING)(v15 + 144), L"\\SystemRoot\\System32\\Drivers\\dumpstorport.sys");
    FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL), v15 + 128);
    v22 = RaidAllocatePool(64LL, 208LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( v22 )
    {
      *(_DWORD *)(v15 + 68) = 208;
      *(_QWORD *)(v15 + 72) = v22;
      if ( FullDriverPath >= 0 )
        v5 = FullDriverPath;
      *(_QWORD *)(v15 + 112) = v26;
      *a3 = v15;
    }
    else
    {
LABEL_14:
      v5 = -1073741670;
      NvmeNativeDumpFreeDumpDriverInfo(&v25);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
