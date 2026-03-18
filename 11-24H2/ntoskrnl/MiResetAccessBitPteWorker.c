/*
 * XREFs of MiResetAccessBitPteWorker @ 0x1403FB050
 * Callers:
 *     MiResetAccessBitsVpabCallback @ 0x1403FA450 (MiResetAccessBitsVpabCallback.c)
 *     MiResetAccessBitPte @ 0x1403FA890 (MiResetAccessBitPte.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MiClearPteAccessed @ 0x1402307A0 (MiClearPteAccessed.c)
 *     MiSetVaAgeList @ 0x140230FB0 (MiSetVaAgeList.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x140231E18 (MiAcquirePrcbAgeTrimLists.c)
 *     MiLogPageAccess @ 0x140286F90 (MiLogPageAccess.c)
 *     MiGetVaAge @ 0x1402871E0 (MiGetVaAge.c)
 *     MiGetVmAccessLoggingPartition @ 0x140399050 (MiGetVmAccessLoggingPartition.c)
 */

__int64 __fastcall MiResetAccessBitPteWorker(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        char a6)
{
  char VaAge; // r11
  int v11; // ebx
  __int64 v12; // rbp
  int v13; // r15d
  unsigned int v14; // r14d
  __int64 result; // rax
  unsigned int PfnPriority; // eax
  __int64 v17; // r10

  VaAge = MiGetVaAge(a1, a3);
  if ( VaAge == 7
    && (MiGetVmAccessLoggingPartition(a1), PfnPriority = MiGetPfnPriority(a4), PfnPriority < *(_DWORD *)(v17 + 17456)) )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    if ( VaAge && (unsigned __int8)VaAge < 7u )
      MiSetVaAgeList(a1, a3, 1u, 0);
  }
  v12 = 0LL;
  v13 = 0;
  if ( (a6 & 4) != 0 )
  {
    v13 = 2;
  }
  else if ( *(_DWORD *)(a5 + 4) )
  {
    if ( !*(_QWORD *)(a5 + 8) )
      MiAcquirePrcbAgeTrimLists(a1, (__int64 *)(a5 + 8));
    v12 = *(_QWORD *)(a5 + 8);
  }
  v14 = v13 | 1;
  if ( !*(_DWORD *)a5 )
    v14 = v13;
  result = MiClearPteAccessed(a1, a4, a2, v12, v14);
  if ( (_DWORD)result && v11 && (v14 & 2) == 0 && *(_DWORD *)a5 && !v12 )
    return MiLogPageAccess(a1, a2);
  return result;
}
