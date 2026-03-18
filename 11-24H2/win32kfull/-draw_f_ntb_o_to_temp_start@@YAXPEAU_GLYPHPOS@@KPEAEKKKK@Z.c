/*
 * XREFs of ?draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x14021B980
 * Callers:
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x140121B88 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 * Callees:
 *     ?or_all_2_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x140180ED0 (-or_all_2_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_2_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401812F0 (-or_all_2_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_N_wide_rotated_need_last@@YAXJJJPEAE0JJ@Z @ 0x140186340 (-or_all_N_wide_rotated_need_last@@YAXJJJPEAE0JJ@Z.c)
 *     ?or_all_3_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x14018B440 (-or_all_3_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_1_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x14018D210 (-or_all_1_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_1_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x140196A70 (-or_all_1_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_N_wide_rotated_no_last@@YAXJJJPEAE0JJ@Z @ 0x14019DC10 (-or_all_N_wide_rotated_no_last@@YAXJJJPEAE0JJ@Z.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x1401A4910 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?or_all_2_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1401A5800 (-or_all_2_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_4_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x1401B97E0 (-or_all_4_wide_rotated_no_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_3_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401BBA10 (-or_all_3_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_4_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1401BEBC0 (-or_all_4_wide_rotated_need_last@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_3_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1401D38C0 (-or_all_3_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_4_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1401D6F80 (-or_all_4_wide_unrotated@@YAXJJJPEAE0J@Z.c)
 *     ?or_all_N_wide_unrotated@@YAXJJJPEAE0JJ@Z @ 0x1401DB810 (-or_all_N_wide_unrotated@@YAXJJJPEAE0JJ@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall draw_f_ntb_o_to_temp_start(
        struct _GLYPHPOS *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // rsi
  int v8; // ebx
  int v9; // r14d
  int v10; // edi
  GLYPHBITS *pgb; // r11
  LONG cx; // eax
  __int64 v14; // rdx
  int v15; // r10d
  int v16; // r9d
  unsigned __int8 *v17; // r12
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int8 *v20; // [rsp+80h] [rbp+18h]

  if ( a2 )
  {
    v20 = a3;
    v7 = 0LL;
    v8 = a1->ptl.x - a4;
    v9 = a1->ptl.y - a7;
    v10 = a2;
    do
    {
      --v10;
      pgb = a1[v7].pgdf->pgb;
      cx = pgb->sizlBitmap.cx;
      v14 = ((_BYTE)v8 + LOBYTE(pgb->ptlOrigin.x)) & 7;
      v15 = (cx + 7) >> 3;
      v16 = (cx + (int)v14 + 7) >> 3;
      v17 = &a3[(int)(a5 * (v9 + pgb->ptlOrigin.y)) + ((__int64)(v8 + pgb->ptlOrigin.x) >> 3)];
      if ( v16 > 4 )
      {
        v19 = 0LL;
        if ( v16 > v15 )
          v19 = 2LL;
        funcs_14017A834[((_DWORD)v14 == 0) | (unsigned __int64)v19](pgb->sizlBitmap.cy, v14, a5, pgb->aj, v17, v15, v16);
      }
      else
      {
        v18 = 0LL;
        if ( v16 > v15 )
          v18 = 2LL;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, BYTE *, unsigned __int8 *, int))funcs_14017A7BB[((_DWORD)v14 == 0) | (unsigned int)(4 * v16) | (unsigned __int64)v18])(
          (unsigned int)pgb->sizlBitmap.cy,
          v14,
          a5,
          pgb->aj,
          v17,
          v15);
      }
      v8 += a6;
      v7 = (unsigned int)(v7 + 1);
      a3 = v20;
    }
    while ( v10 );
  }
}
