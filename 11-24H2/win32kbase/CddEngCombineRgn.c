/*
 * XREFs of CddEngCombineRgn @ 0x1401CF310
 * Callers:
 *     CddEngCopyRgn @ 0x1401CF400 (CddEngCopyRgn.c)
 * Callees:
 *     ?iComplexity@RGNCOREOBJ@@QEBAJXZ @ 0x1400107A0 (-iComplexity@RGNCOREOBJ@@QEBAJXZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ?iCombine@RGNCOREOBJ@@QEAAJAEAV1@0J@Z @ 0x1400F3120 (-iCombine@RGNCOREOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x14017A1BC (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 */

__int64 __fastcall CddEngCombineRgn(REGION_CORE **a1, REGION_CORE *a2, const struct REGION_CORE *a3, int a4)
{
  REGION_CORE *v5; // rbx
  const struct REGION_CORE *v6; // rdx
  unsigned int v7; // ecx
  REGION_CORE *v8; // rax
  const struct REGION_CORE *v9; // rdx
  REGION_CORE *v11; // [rsp+20h] [rbp-20h] BYREF
  REGION_CORE *v12; // [rsp+28h] [rbp-18h] BYREF
  REGION_CORE *v13; // [rsp+30h] [rbp-10h] BYREF

  if ( (unsigned int)(a4 - 1) > 4 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    if ( a4 == 5 )
    {
      v5 = *a1;
      v12 = a2;
      v11 = v5;
      if ( RGNCOREOBJ::bCopy(&v11, &v12, a3) )
        v7 = RGNCOREOBJ::iComplexity(&v11, v6);
      else
        v7 = 0;
      if ( !WPP_MAIN_CB.Dpc.SystemArgument1 )
      {
        if ( v7 )
          *a1 = v5;
      }
    }
    else
    {
      v8 = *a1;
      if ( *a1 == a2 || v8 == a3 )
      {
        return 0;
      }
      else
      {
        v13 = a2;
        v12 = a3;
        v11 = v8;
        if ( (unsigned int)RGNCOREOBJ::iCombine(
                             (RGNCOREOBJ *)&v11,
                             (struct RGNCOREOBJ *)&v13,
                             (struct RGNCOREOBJ *)&v12) )
          v7 = RGNCOREOBJ::iComplexity(&v11, v9);
        else
          v7 = 0;
        if ( !WPP_MAIN_CB.Dpc.SystemArgument1 && v7 )
          *a1 = v11;
      }
    }
    return v7;
  }
}
