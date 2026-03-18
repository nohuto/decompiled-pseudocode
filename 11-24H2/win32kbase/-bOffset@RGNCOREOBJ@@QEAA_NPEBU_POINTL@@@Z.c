/*
 * XREFs of ?bOffset@RGNCOREOBJ@@QEAA_NPEBU_POINTL@@@Z @ 0x1401CEFB0
 * Callers:
 *     CddEngOffsetRgn @ 0x1401CF4C0 (CddEngOffsetRgn.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140047EB8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?LongLongToLong@@YAJ_JPEAJ@Z @ 0x1400BC4F4 (-LongLongToLong@@YAJ_JPEAJ@Z.c)
 *     ?RegionCore_bOffset@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_POINTL@@@Z @ 0x1400DCF08 (-RegionCore_bOffset@Win32kRS@@YAHPEAVREGION_CORE@@PEBU_POINTL@@@Z.c)
 */

bool __fastcall RGNCOREOBJ::bOffset(Win32kRS **this, struct _POINTL *a2, const struct _POINTL *a3)
{
  Win32kRS *v5; // r9
  __int64 x; // r14
  __int64 y; // rsi
  LONG v8; // edx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // ebx
  struct SCAN *i; // r8
  __int64 v13; // rcx
  _DWORD *v14; // rdx
  char *v15; // r8
  struct REGION_CORE *v16; // rdx
  struct tagRECT v17; // [rsp+20h] [rbp-10h] BYREF

  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    return (unsigned int)Win32kRS::RegionCore_bOffset(*this, (struct REGION_CORE *)a2, a3) != 0;
  v5 = *this;
  x = a2->x;
  y = a2->y;
  if ( *((_DWORD *)*this + 6) == 1 )
    return 1;
  v8 = *((_DWORD *)v5 + 7);
  v17.top = *((_DWORD *)v5 + 8);
  v17.right = *((_DWORD *)v5 + 9);
  v17.bottom = *((_DWORD *)v5 + 10);
  v17.left = v8;
  if ( IsRectEmptyInl(&v17) )
    return 1;
  if ( (int)LongLongToLong(x + v9, &v17.left) >= 0
    && (int)LongLongToLong(y + v17.bottom, &v17.bottom) >= 0
    && (int)LongLongToLong(x + v17.right, &v17.right) >= 0
    && (int)LongLongToLong(y + v17.top, &v17.top) >= 0
    && ((v17.left & 0xF8000000) == 0 || (v17.left & 0xF8000000) == -134217728)
    && (((v17.bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((v17.right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((v17.top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
  {
    *(struct tagRECT *)(v10 + 28) = v17;
    v11 = *((_DWORD *)*this + 6);
    for ( i = REGION_CORE::get_pScan(*this, (struct REGION_CORE *)0xF8000000LL);
          v11;
          i = (struct SCAN *)((char *)i + (unsigned int)(4 * *(_DWORD *)i + 16)) )
    {
      *((_DWORD *)i + 1) += y;
      --v11;
      *((_DWORD *)i + 2) += y;
      v13 = *(unsigned int *)i;
      if ( (_DWORD)v13 )
      {
        v14 = (_DWORD *)((char *)i + 4 * v13 + 12);
        do
        {
          *--v14 += x;
          LODWORD(v13) = v13 - 1;
        }
        while ( (_DWORD)v13 );
      }
    }
    v15 = (char *)i - 4;
    v16 = (struct REGION_CORE *)(unsigned int)(4 * *(_DWORD *)v15 + 16);
    *(_DWORD *)(v15 - (char *)v16 + 12) = 0x7FFFFFFF;
    *((_DWORD *)REGION_CORE::get_pScan(*this, v16) + 1) = 0x80000000;
    return 1;
  }
  EngSetLastError(0x216u);
  return 0;
}
