/*
 * XREFs of ?VidSchiReprogramVSyncSuppressionForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IIPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_K_NPEAI@Z @ 0x14002FC94
 * Callers:
 *     ?VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PRESENTS_FLAGS@@@Z @ 0x14002F548 (-VidSchiReprogramVSyncSuppressionForPresent@@YAXPEAU_VIDSCH_DEVICE@@U_LUID@@_KU_D3DKMT_CANCEL_PR.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14002CBC4 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 */

void __fastcall VidSchiReprogramVSyncSuppressionForFlipEntry(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int a3,
        struct _VIDSCH_DEVICE *a4,
        struct VIDSCH_FLIP_QUEUE *a5,
        unsigned __int64 a6,
        bool a7,
        unsigned int *a8)
{
  __int64 v8; // r14
  unsigned int v9; // edx
  __int64 v10; // rsi
  __int64 v11; // r11
  unsigned int v12; // r9d
  int v13; // eax
  int v14; // ebx
  __int64 v15; // r9
  unsigned __int64 v16; // r9

  v8 = a2;
  *a8 = 0;
  if ( *((_BYTE *)a1 + 59) )
  {
    v9 = *((_DWORD *)a5 + 17);
    v10 = *((_QWORD *)a1 + v8 + 429) + 304LL * a3;
    while ( v9 != *((_DWORD *)a5 + 14) )
    {
      v11 = 1400LL * v9;
      v12 = *(_DWORD *)((char *)a5 + v11 + 1172);
      if ( v12 > 0xC || (v13 = 4673, !_bittest(&v13, v12)) )
      {
        v14 = *(_DWORD *)((char *)a5 + v11 + 1272);
        if ( (v14 & 0x20) != 0 && *(_DWORD *)((char *)a5 + v11 + 1176) == a6 )
        {
          if ( ((v14 & 0x80000) == 0) != a7 )
          {
            *(_DWORD *)((char *)a5 + v11 + 1272) = v14 & 0xFFF7FFFF | (!a7 << 19);
            if ( a7 )
            {
              if ( v12 == 5 || v12 == 15 )
              {
                v15 = *(_QWORD *)((char *)a5 + v11 + 1312);
                *a8 = 1;
                if ( ((*(_DWORD *)v15 | (*(_DWORD *)v15 >> 10)) & 0x3FF) != 0 )
                {
                  v16 = *(_QWORD *)(v15 + 24);
                  if ( v16 )
                  {
                    if ( v16 < *(_QWORD *)(v10 + 424) )
                      VidSchiSetInterruptTargetPresentId(a1, v8, a3, v16, 0, 0);
                  }
                }
              }
              else
              {
                *a8 = 2;
              }
            }
          }
          return;
        }
      }
      v9 = ((_BYTE)v9 + 1) & 0x3F;
    }
  }
}
