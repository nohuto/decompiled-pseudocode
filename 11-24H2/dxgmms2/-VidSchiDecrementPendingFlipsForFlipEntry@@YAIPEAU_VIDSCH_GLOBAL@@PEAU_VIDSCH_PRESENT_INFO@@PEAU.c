/*
 * XREFs of ?VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14002CFEC
 * Callers:
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x14002A7D4 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x14002AB90 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14005392C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x140027710 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiDecrementPendingFlipsForFlipEntry(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3)
{
  struct _VIDSCH_PRESENT_INFO *v4; // r10
  unsigned int *v5; // r8
  unsigned int v7; // r9d
  unsigned int v9; // r8d
  unsigned int v10; // r11d
  bool v11; // zf
  unsigned int v12; // r8d
  char v13; // dl
  int v14; // eax
  char v15; // cl
  int v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // r11d
  int v22; // r11d
  int v23; // eax
  _QWORD v24[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-20h]
  unsigned int v26; // [rsp+44h] [rbp-1Ch]
  int v27; // [rsp+48h] [rbp-18h]
  unsigned int v28; // [rsp+4Ch] [rbp-14h]
  unsigned int v29; // [rsp+50h] [rbp-10h]

  v4 = a2;
  v5 = (unsigned int *)*((_QWORD *)a3 + 149);
  if ( (*((_DWORD *)a3 + 288) & 0x10) != 0 )
    v7 = (*v5 | (*v5 >> 10)) & 0x3FF;
  else
    v7 = (1 << *((_DWORD *)a1 + 38)) - 1;
  if ( *((_BYTE *)a1 + 59) )
  {
    v24[1] = v5;
    v9 = *v5;
    v10 = v9 & 0x3FF;
    v24[0] = a1;
    v11 = *((_BYTE *)a1 + 156) == 0;
    v25 = v10;
    if ( v11 )
      v12 = 0;
    else
      v12 = (v9 >> 10) & 0x3FF;
    v27 = 0;
    v13 = -1;
    v11 = !_BitScanForward((unsigned int *)&v14, v10);
    v15 = -1;
    v26 = v12;
    if ( !v11 )
      v15 = v14;
    v11 = !_BitScanForward((unsigned int *)&v16, v12);
    v17 = v15;
    v28 = v15;
    if ( !v11 )
      v13 = v16;
    v18 = v13;
    v29 = v13;
    while ( v10 || v12 )
    {
      if ( v17 < v18 )
        v18 = v17;
      v19 = v18;
      v20 = 304LL * v18;
      v21 = *(_DWORD *)((char *)v4 + v20 + 200);
      if ( !v21 )
        goto LABEL_27;
      v22 = v21 - 1;
      *(_DWORD *)((char *)v4 + v20 + 200) = v22;
      if ( (*((_DWORD *)a3 + 288) & 0x20) != 0 )
      {
        v23 = *(_DWORD *)((char *)v4 + v20 + 204);
        if ( !v23 )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 45056LL, a1, v4, v18);
          WdLogGlobalForLineNumber = 906;
LABEL_27:
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 45056LL, a1, v4, v19);
          WdLogGlobalForLineNumber = 906;
          JUMPOUT(0x14002D1C8LL);
        }
        *(_DWORD *)((char *)v4 + v20 + 204) = v23 - 1;
      }
      if ( !v22 )
        *((_DWORD *)v4 + 812) &= ~(1 << v18);
      VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v24);
      v18 = v29;
      v12 = v26;
      v17 = v28;
      v10 = v25;
    }
  }
  else
  {
    *((_DWORD *)a2 + 812) &= ~v7;
  }
  return v7;
}
