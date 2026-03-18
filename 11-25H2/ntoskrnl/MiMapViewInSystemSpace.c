/*
 * XREFs of MiMapViewInSystemSpace @ 0x1408BA3B8
 * Callers:
 *     MmMapViewInSessionSpace @ 0x1408BA360 (MmMapViewInSessionSpace.c)
 *     MmMapViewInSystemSpaceEx @ 0x1408BA390 (MmMapViewInSystemSpaceEx.c)
 *     PspSchedulerSharedDataRegionCreate @ 0x1408BA4BC (PspSchedulerSharedDataRegionCreate.c)
 * Callees:
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1403A4900 (MiCheckPurgeAndUpMapCount.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiDereferenceControlArea @ 0x14046FD68 (MiDereferenceControlArea.c)
 */

__int64 __fastcall MiMapViewInSystemSpace(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 *a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r10
  int v14; // ebx
  ULONG_PTR v16[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( (a5 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    return 3221225716LL;
  v16[0] = 0LL;
  v10 = MiSectionControlArea(a1);
  MiCheckPurgeAndUpMapCount(v10);
  v11 = *a3;
  if ( !*a3 )
  {
    *(_WORD *)a4 = 0;
    v13 = *(_QWORD *)(a1 + 48) - *a4;
    *a3 = v13;
    goto LABEL_5;
  }
  v12 = (unsigned __int16)*(_DWORD *)a4;
  if ( v11 + v12 >= v12 )
  {
    *a3 = v11 + v12;
    *(_WORD *)a4 = 0;
    v13 = *a3;
    if ( *a3 <= *(_QWORD *)(a1 + 48) - *a4 )
    {
LABEL_5:
      v14 = MiInsertInSystemSpace(v13, a1, a4, a5, a6, v16);
      if ( v14 >= 0 )
      {
        *a2 = v16[0];
        return 0LL;
      }
      goto LABEL_10;
    }
  }
  v14 = -1073741793;
LABEL_10:
  MiDereferenceControlArea(v10);
  return (unsigned int)v14;
}
