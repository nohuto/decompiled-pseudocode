/*
 * XREFs of ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH@Z @ 0x1401FCB0C
 * Callers:
 *     NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1401FE240 (NtDxgkGetAvailableTrackedWorkloadIndex.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetIndexHelper@DXGTRACKEDWORKLOAD@@IEAAJPEAI@Z @ 0x1401FCBF0 (-GetIndexHelper@DXGTRACKEDWORKLOAD@@IEAAJPEAI@Z.c)
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1401FCD68 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::GetAvailableIndex(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        __int64 a4,
        unsigned __int64 *a5,
        unsigned int *a6,
        int *a7)
{
  DXGTRACKEDWORKLOAD *v8; // rcx
  __int64 v9; // rdi
  struct DXGDEVICE *v10; // r8
  unsigned __int64 v11; // r11
  int IndexHelper; // eax

  *a7 = 0;
  LODWORD(v9) = DXGTRACKEDWORKLOAD::GetIndexHelper(this, a6);
  if ( (int)v9 < 0 )
  {
    LODWORD(v9) = DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(v8, v10, v10, v11, a5);
    if ( (int)v9 >= 0 )
    {
      *a7 = 1;
      IndexHelper = DXGTRACKEDWORKLOAD::GetIndexHelper(this, a6);
      v9 = IndexHelper;
      if ( IndexHelper < 0 )
      {
        WdLogSingleEntry2(2LL, this, IndexHelper);
        WdLogGlobalForLineNumber = 1426;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"TrackedWorkload 0x%I64x: Unable to find available entry, returning 0x%I64x",
          (__int64)this,
          v9,
          0LL,
          0LL,
          0LL);
      }
    }
  }
  return (unsigned int)v9;
}
