/*
 * XREFs of ?UpdateDripsBlockerVidMmEvictionData@DripsBlockerTrackingHelper@@QEAAX_KPEAU_DXGK_SLEEP_STUDY_DATA@@@Z @ 0x1402BBA14
 * Callers:
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x1402BB4A4 (-PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DripsBlockerTrackingHelper::UpdateDripsBlockerVidMmEvictionData(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        struct _DXGK_SLEEP_STUDY_DATA *a3)
{
  unsigned int i; // eax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx

  for ( i = 0; i < 6; ++i )
  {
    v5 = (unsigned __int64)i << 6;
    if ( *(_DWORD *)((char *)this + v5 + 302160) && *(_QWORD *)((char *)this + v5 + 302168) == a2 )
    {
LABEL_6:
      v6 = (unsigned __int64)i << 6;
      *(_QWORD *)((char *)this + v6 + 302176) = *(_QWORD *)a3;
      *(_QWORD *)((char *)this + v6 + 302184) = *((_QWORD *)a3 + 1);
      *(_QWORD *)((char *)this + v6 + 302192) = *((_QWORD *)a3 + 2);
      *(_QWORD *)((char *)this + v6 + 302200) = *((_QWORD *)a3 + 3);
      *((_QWORD *)this + 8 * i + 37776) = *((_QWORD *)a3 + 4);
      *(_QWORD *)((char *)this + v6 + 302216) = *((_QWORD *)a3 + 5);
      return;
    }
  }
  for ( i = 0; i < 6; ++i )
  {
    v7 = (unsigned __int64)i << 6;
    if ( !*(_DWORD *)((char *)this + v7 + 302160) )
    {
      *(_QWORD *)((char *)this + v7 + 302168) = a2;
      *(_DWORD *)((char *)this + v7 + 302160) = 1;
      goto LABEL_6;
    }
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 1500;
}
