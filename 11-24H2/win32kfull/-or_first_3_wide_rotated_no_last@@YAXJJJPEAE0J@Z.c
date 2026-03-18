/*
 * XREFs of ?or_first_3_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x1401F8F80
 * Callers:
 *     ?draw_nf_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401A49F0 (-draw_nf_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 *     ?draw_f_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1401D2720 (-draw_f_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall or_first_3_wide_rotated_no_last(int a1, char a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  unsigned __int8 *v6; // r11
  __int64 v7; // rbx
  int v8; // eax
  int v9; // r8d
  unsigned int v10; // r8d

  v6 = &a4[2 * a1];
  v7 = a3;
  do
  {
    v8 = a4[1];
    v9 = *a4;
    a4 += 2;
    v10 = (v8 | (unsigned int)(v9 << 8)) << 8 >> a2;
    a5[2] = v10;
    *a5 |= BYTE2(v10);
    a5[1] = BYTE1(v10);
    a5 += v7;
  }
  while ( a4 != v6 );
}
