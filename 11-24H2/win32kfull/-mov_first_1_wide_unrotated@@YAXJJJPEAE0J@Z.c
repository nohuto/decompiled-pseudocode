/*
 * XREFs of ?mov_first_1_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1401BB340
 * Callers:
 *     ?draw_nf_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401A49F0 (-draw_nf_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_f_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401D2720 (-draw_f_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall mov_first_1_wide_unrotated(int a1, __int64 a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  __int64 v5; // rdx
  unsigned __int8 *v7; // rdx
  unsigned __int8 v8; // al

  v5 = a1;
  v7 = &a4[v5];
  do
  {
    v8 = *a4++;
    *a5 = v8;
    a5 += a3;
  }
  while ( a4 != v7 );
}
