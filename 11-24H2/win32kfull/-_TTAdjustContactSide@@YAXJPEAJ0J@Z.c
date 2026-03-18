/*
 * XREFs of ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1401B6644
 * Callers:
 *     TouchTargetingCreateContact @ 0x1401B4948 (TouchTargetingCreateContact.c)
 * Callees:
 *     _TTHmToPixels @ 0x1401B6728 (_TTHmToPixels.c)
 *     _TTPixelsToHm @ 0x1401B683C (_TTPixelsToHm.c)
 */

void __fastcall _TTAdjustContactSide(int a1, int *a2, int *a3, unsigned int a4)
{
  int v5; // ebp
  int v7; // esi
  int v10; // eax
  int v11; // r10d
  int v12; // r11d
  __int64 v13; // rcx

  v5 = *a3;
  v7 = *a3 - *a2;
  v10 = TTPixelsToHm((unsigned int)v7, a4);
  if ( !v10 )
  {
    v13 = 700LL;
LABEL_3:
    v12 = TTHmToPixels(v13, a4);
    goto LABEL_4;
  }
  v13 = 400LL;
  if ( v10 < 400 )
    goto LABEL_3;
  v13 = 1100LL;
  if ( v10 > 1100 )
    goto LABEL_3;
LABEL_4:
  if ( a1 == v5 || a1 == v11 )
  {
    v11 = a1 - v12 / 2;
  }
  else
  {
    if ( v7 == v12 )
      goto LABEL_7;
    v11 = a1 - (a1 - v11) * (100 * v12 / v7) / 100;
  }
  *a2 = v11;
LABEL_7:
  *a3 = v11 + v12;
}
