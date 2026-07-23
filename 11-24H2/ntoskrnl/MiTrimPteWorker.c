/*
 * XREFs of MiTrimPteWorker @ 0x140212FB0
 * Callers:
 *     MiTrimWorkingSetVpabCallback @ 0x1404041F0 (MiTrimWorkingSetVpabCallback.c)
 * Callees:
 *     MiTrimThisWsle @ 0x140213460 (MiTrimThisWsle.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402590F0 (MI_WSLE_LOG_ACCESS.c)
 *     MiTrimWorkingSetBuildup @ 0x1402EA6B0 (MiTrimWorkingSetBuildup.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x140303A64 (MiAcquirePrcbAgeTrimLists.c)
 */

__int64 __fastcall MiTrimPteWorker(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, char a6, __int64 a7)
{
  __int64 v7; // rbp
  unsigned int v11; // esi
  __int64 v13; // rdi
  __int64 v14; // rax

  v7 = *(_QWORD *)(a1 + 32);
  v11 = 0;
  if ( !(unsigned int)MiTrimThisWsle(v7, a3, a4, a5, a6, a7) )
    return 0LL;
  v13 = *(_QWORD *)(a5 + 72);
  if ( !v13 )
  {
    MiAcquirePrcbAgeTrimLists(v7, a5 + 64);
    v13 = *(_QWORD *)(a5 + 72);
  }
  MiInsertTbFlushEntry(v13, a3, 1LL);
  if ( (*(_DWORD *)a5 & 0x100) != 0 )
    MI_WSLE_LOG_ACCESS(v7, a2);
  v14 = *(_QWORD *)(a5 + 16) + 1LL;
  *(_QWORD *)(a5 + 16) = v14;
  if ( v14 != *(_QWORD *)(a5 + 8) && *(_DWORD *)(v13 + 28) != *(_DWORD *)(v13 + 12) )
    return 0LL;
  MiTrimWorkingSetBuildup(a1, a5);
  LOBYTE(v11) = *(_QWORD *)(a5 + 16) == *(_QWORD *)(a5 + 8);
  return v11;
}
