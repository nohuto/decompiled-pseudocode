/*
 * XREFs of KsepSdbBootInitialize @ 0x14073DE3C
 * Callers:
 *     KseShimDatabaseBootInitialize @ 0x140C2E094 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     KsepLogError @ 0x140488B28 (KsepLogError.c)
 *     KsepPoolAllocatePaged @ 0x14049AA70 (KsepPoolAllocatePaged.c)
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x1404CC7D8 (KsepDebugPrint.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SdbGetDatabaseEdition @ 0x140944D54 (SdbGetDatabaseEdition.c)
 *     SdbInitDatabaseInMemory @ 0x140944DCC (SdbInitDatabaseInMemory.c)
 */

__int64 __fastcall KsepSdbBootInitialize(void *Src, size_t Size, __int64 a3)
{
  size_t v4; // rbp
  void *Paged; // rax
  unsigned int v7; // edi
  void *v8; // rbx
  __int64 v9; // rax
  __int64 inited; // rax
  __int64 v11; // rax

  v4 = (unsigned int)Size;
  Paged = KsepPoolAllocatePaged((unsigned int)Size);
  v7 = 0;
  v8 = Paged;
  if ( Paged )
  {
    memmove(Paged, Src, v4);
    inited = SdbInitDatabaseInMemory(v8, (unsigned int)v4);
    if ( inited )
    {
      *(_QWORD *)(a3 + 8) = v8;
      *(_QWORD *)a3 = inited;
      *(_DWORD *)(a3 + 48) = SdbGetDatabaseEdition(*(_QWORD *)(inited + 8));
    }
    else
    {
      v7 = -1073741823;
      v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      KsepHistoryErrors[2 * v11 + 1] = -1073741823;
      KsepHistoryErrors[2 * v11] = 590004;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(1LL, (int)"KSE: SdbInitDatabaseInMemory failed during boot!\n");
      KsepLogError(1LL, (__int64)"KSE: SdbInitDatabaseInMemory failed during boot!\n");
      KsepPoolFreePaged(v8);
    }
  }
  else
  {
    v7 = -1073741670;
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = -1073741670;
    KsepHistoryErrors[2 * v9] = 589988;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, (int)"KSE: Failed to allocate memory for shim database during boot!\n");
    KsepLogError(0LL, (__int64)"KSE: Failed to allocate memory for shim database during boot!\n");
  }
  return v7;
}
