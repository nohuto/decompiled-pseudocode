/*
 * XREFs of ?_TryToMapCloneGroups@CCD_SET_STRING_ID@@CA_NAEBV1@0@Z @ 0x140268CC4
 * Callers:
 *     ?IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x14018A73C (-IsSimilarTopology@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x140268AF4 (-FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z.c)
 *     ?QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z @ 0x1403403BC (-QueryMonitorId@CCD_SET_STRING_ID@@QEBAJIPEAU_STRING@@@Z.c)
 */

char __fastcall CCD_SET_STRING_ID::_TryToMapCloneGroups(
        const struct CCD_SET_STRING_ID *this,
        const struct CCD_SET_STRING_ID *a2)
{
  int v3; // esi
  int v5; // ebp
  unsigned int i; // ebx
  int PathByMonitorId; // eax
  __int64 v8; // rcx
  struct _STRING v10; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = -1;
  v5 = -1;
  for ( i = 0; i < *((unsigned __int16 *)this + 16); ++i )
  {
    if ( *(_WORD *)(*((_QWORD *)this + 3) + 8LL * i + 4) )
      return 0;
    v10 = 0LL;
    CCD_SET_STRING_ID::QueryMonitorId(this, i, &v10);
    v11 = 0;
    PathByMonitorId = CCD_SET_STRING_ID::FindPathByMonitorId(a2, &v10, &v11);
    if ( PathByMonitorId < 0 )
    {
      if ( PathByMonitorId != -1073741275 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1993;
      }
      return 0;
    }
    v8 = *((_QWORD *)a2 + 3);
    if ( v3 == *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * i + 2) )
    {
      if ( v5 != *(unsigned __int16 *)(v8 + 8LL * v11 + 2) )
        return 0;
    }
    else
    {
      v5 = *(unsigned __int16 *)(v8 + 8LL * v11 + 2);
      v3 = *(unsigned __int16 *)(*((_QWORD *)this + 3) + 8LL * i + 2);
    }
  }
  return 1;
}
