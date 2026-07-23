/*
 * XREFs of KseShimDatabaseBootInitialize @ 0x140C2E094
 * Callers:
 *     KseInitialize @ 0x140C2D51C (KseInitialize.c)
 * Callees:
 *     KsepLogError @ 0x140488B28 (KsepLogError.c)
 *     KsepDebugPrint @ 0x1404CC7D8 (KsepDebugPrint.c)
 *     RtlAssert @ 0x1405E6890 (RtlAssert.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KsepSdbBootInitialize @ 0x14073DE3C (KsepSdbBootInitialize.c)
 *     KsepSdbBootRelease @ 0x14073DF74 (KsepSdbBootRelease.c)
 */

__int64 __fastcall KseShimDatabaseBootInitialize(void *Src, size_t Size, void *a3, unsigned int a4)
{
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rax

  v6 = Size;
  if ( KsepShimDbDuringBoot )
  {
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v8 + 1] = -1073740768;
    KsepHistoryErrors[2 * v8] = 590051;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("KsepShimDbDuringBoot == FALSE", "minkernel\\ntos\\kshim\\ksesdb.c", 0xE3u, 0LL);
  }
  if ( KsepShimDbHandle )
  {
    v9 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v9 + 1] = -1073740768;
    KsepHistoryErrors[2 * v9] = 590052;
    if ( (KsepDebugFlag & 4) != 0 )
      RtlAssert("KsepShimDbHandle == NULL", "minkernel\\ntos\\kshim\\ksesdb.c", 0xE4u, 0LL);
  }
  KsepShimDbLock = 0LL;
  KsepShimDbHandle = 0LL;
  KsepShimDbDuringBoot = 1;
  memset_0(KsepShimDb, 0, 0x70uLL);
  if ( Src && v6 )
  {
    v10 = KsepSdbBootInitialize(Src, v6, (__int64)KsepShimDb);
    if ( v10 >= 0 )
    {
      if ( a3 && a4 )
      {
        if ( (int)KsepSdbBootInitialize(a3, a4, (__int64)qword_140F0FAD8) < 0 )
        {
          v11 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
          KsepHistoryErrors[2 * v11 + 1] = v10;
          KsepHistoryErrors[2 * v11] = 590110;
          if ( (KsepDebugFlag & 2) != 0 )
            KsepDebugPrint(1LL, (int)"KSE: KsepSdbBootInitialize failed for patch SDB!\n");
          KsepLogError(1LL, (__int64)"KSE: KsepSdbBootInitialize failed for patch SDB!\n");
        }
        else if ( dword_140F0FAD0 >= (unsigned int)dword_140F0FB08 )
        {
          KsepSdbBootRelease(qword_140F0FAD8);
        }
      }
      ++KsepShimDbRefCount;
      v10 = 0;
      KsepShimDbHandle = (__int64)KsepShimDb;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v10;
}
