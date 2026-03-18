/*
 * XREFs of MiMapViewInSystemSpace @ 0x140946C58
 * Callers:
 *     MmMapViewInSessionSpace @ 0x140946C00 (MmMapViewInSessionSpace.c)
 *     MmMapViewInSystemSpaceEx @ 0x140946C30 (MmMapViewInSystemSpaceEx.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x140946D5C (PspSchedulerSharedDataRegionCreate.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     MiDereferenceControlArea @ 0x14036F494 (MiDereferenceControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14040EFF0 (MiCheckPurgeAndUpMapCount.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 */

__int64 __fastcall MiMapViewInSystemSpace(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r10
  int v16; // ebx
  ULONG_PTR v18[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( (a5 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 3221225716LL;
  v18[0] = 0LL;
  v10 = MiSectionControlArea(a1);
  MiCheckPurgeAndUpMapCount(v10, v11, v12);
  v13 = *a3;
  if ( !*a3 )
  {
    *(_WORD *)a4 = 0;
    v15 = *(_QWORD *)(a1 + 48) - *a4;
    *a3 = v15;
    goto LABEL_5;
  }
  v14 = (unsigned __int16)*(_DWORD *)a4;
  if ( v13 + v14 >= v14 )
  {
    *a3 = v13 + v14;
    *(_WORD *)a4 = 0;
    v15 = *a3;
    if ( *a3 <= *(_QWORD *)(a1 + 48) - *a4 )
    {
LABEL_5:
      v16 = MiInsertInSystemSpace(v15, a1, a4, a5, a6, v18);
      if ( v16 >= 0 )
      {
        *a2 = v18[0];
        return 0LL;
      }
      goto LABEL_10;
    }
  }
  v16 = -1073741793;
LABEL_10:
  MiDereferenceControlArea(v10);
  return (unsigned int)v16;
}
