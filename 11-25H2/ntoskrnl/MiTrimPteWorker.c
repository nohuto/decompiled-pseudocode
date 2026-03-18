/*
 * XREFs of MiTrimPteWorker @ 0x140387E98
 * Callers:
 *     MiTrimWorkingSetVpabCallback @ 0x140388840 (MiTrimWorkingSetVpabCallback.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiTrimThisWsle @ 0x140388394 (MiTrimThisWsle.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x14038870C (MiAcquirePrcbAgeTrimLists.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140389E74 (MI_WSLE_LOG_ACCESS.c)
 *     MiTrimWorkingSetBuildup @ 0x14038A000 (MiTrimWorkingSetBuildup.c)
 */

__int64 __fastcall MiTrimPteWorker(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  __int64 v7; // rbp
  unsigned int v11; // esi
  __int64 v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax

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
  MiInsertTbFlushEntry(v13, a3, 1LL, 0);
  if ( (*(_DWORD *)a5 & 0x100) != 0 )
    MI_WSLE_LOG_ACCESS(v7, a2, v14, v15);
  v16 = *(_QWORD *)(a5 + 16) + 1LL;
  *(_QWORD *)(a5 + 16) = v16;
  if ( v16 != *(_QWORD *)(a5 + 8) && *(_DWORD *)(v13 + 28) != *(_DWORD *)(v13 + 12) )
    return 0LL;
  MiTrimWorkingSetBuildup(a1, a5);
  LOBYTE(v11) = *(_QWORD *)(a5 + 16) == *(_QWORD *)(a5 + 8);
  return v11;
}
