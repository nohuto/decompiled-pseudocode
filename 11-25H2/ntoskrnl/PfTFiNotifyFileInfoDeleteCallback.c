/*
 * XREFs of PfTFiNotifyFileInfoDeleteCallback @ 0x140471280
 * Callers:
 *     PfpPartitionIterate @ 0x140301540 (PfpPartitionIterate.c)
 *     PfFileInfoNotify @ 0x140301AC0 (PfFileInfoNotify.c)
 * Callees:
 *     PfFbLogEntryComplete @ 0x140324110 (PfFbLogEntryComplete.c)
 *     PfFbLogEntryReserve @ 0x140324A3C (PfFbLogEntryReserve.c)
 */

__int64 __fastcall PfTFiNotifyFileInfoDeleteCallback(__int64 a1, __int64 a2)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v6; // r8
  int v7; // edx
  __int64 v8; // rcx
  PSLIST_ENTRY v9; // rdx
  PSLIST_ENTRY v10; // rdx
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  PSLIST_ENTRY v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = 0LL;
  v12 = 0LL;
  v4 = PfFbLogEntryReserve(a1, a1 + 288, &v13, &v12, 0x20u);
  if ( v4 < 0 )
  {
    v10 = v13;
  }
  else
  {
    v6 = v12;
    v7 = *(_DWORD *)a2 & 3;
    *(_DWORD *)(v12 + 16) ^= ((unsigned __int8)*(_DWORD *)(v12 + 16) ^ (unsigned __int8)*(_DWORD *)a2) & 3;
    *(_DWORD *)(v6 + 16) = v7 | (4 * *(_DWORD *)(a2 + 24));
    *(_QWORD *)(v6 + 24) = *(_QWORD *)(a2 + 8);
    *(_DWORD *)v6 = *(_DWORD *)v6 & 0x80000000 | 0x103;
    v8 = v12;
    *(_DWORD *)(v12 + 4) = dword_140E66BBC
                         + ((((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)
                           + ((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)) >> 10);
    v9 = v13;
    *(_DWORD *)(v8 + 8) = *(_DWORD *)(a2 + 16);
    PfFbLogEntryComplete(a1, (__int64)v9, v6, 0x20u);
    v10 = 0LL;
    v4 = 0;
  }
  if ( v10 )
    PfFbLogEntryComplete(a1, (__int64)v10, v5, 0);
  if ( v4 < 0 )
    ++*(_DWORD *)(a1 + 708);
  return (unsigned int)v4;
}
