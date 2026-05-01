/*
 * XREFs of ?evaluate@_tip_SmartFillTest@@QEAAXXZ @ 0x1805AC998
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@EEAAXXZ @ 0x1805AC7B0 (-evaluate@-$merged_data@U_tip_SmartFillTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z @ 0x1805AC434 (-RectContainsRect@@YA_NAEBUCRect@Geometry@@0@Z.c)
 */

void __fastcall _tip_SmartFillTest::evaluate(_tip_SmartFillTest *this)
{
  __int64 v1; // r9
  const char *v2; // rdx
  const struct Geometry::CRect *v3; // rcx
  __int64 v4; // r10
  const char *v5; // rax
  __int64 v6; // r9
  const struct Geometry::CRect *v7; // rcx
  _DWORD *v8; // r8
  __int64 v9; // r10
  const char *v10; // rdx
  int v11; // eax
  __int64 v12; // r9
  const char *v13; // r10
  int v14; // eax
  const char *v15; // rdx
  const char *v16; // rax
  __int16 v17; // r9
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rax

  v1 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)(v1 + 80) )
  {
    if ( *(_BYTE *)(v1 + 152) )
      return;
    *(_WORD *)(v1 + 154) = 0x4000;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v1 + 56) & 0x200) != 0 )
  {
    if ( !RectContainsRect((_tip_SmartFillTest *)((char *)this + 32), (_tip_SmartFillTest *)((char *)this + 16))
      || !RectContainsRect(v3, (const struct Geometry::CRect *)(v4 + 48)) )
    {
      goto LABEL_9;
    }
    if ( *(_BYTE *)(v9 + 84) )
    {
      if ( !RectContainsRect(v7, (const struct Geometry::CRect *)(v9 + 68)) )
        goto LABEL_9;
      v10 = (const char *)*(unsigned int *)v2;
      if ( *v8 != (_DWORD)v10 )
      {
        v11 = *(_DWORD *)(v9 + 76);
        if ( *v8 != v11 && *(_DWORD *)(v9 + 56) != (_DWORD)v10 && *(_DWORD *)(v9 + 56) != v11 )
          goto LABEL_19;
      }
    }
    if ( !*(_BYTE *)(v9 + 108) )
    {
LABEL_27:
      v15 = (const char *)*(unsigned int *)(v9 + 64);
      if ( (((unsigned __int8)v15 & 2) == 0 || *v8 == *(_DWORD *)v7)
        && (((unsigned __int8)v15 & 8) == 0 || *(_DWORD *)(v9 + 56) == *(_DWORD *)(v9 + 40))
        && (((unsigned __int8)v15 & 1) == 0 || *(_DWORD *)(v9 + 52) == *(_DWORD *)(v9 + 36)) )
      {
        if ( ((unsigned __int8)v15 & 4) == 0 || *(_DWORD *)(v9 + 60) == *(_DWORD *)(v9 + 44) )
        {
          v20 = *(_QWORD *)(v9 + 8);
          if ( !*(_BYTE *)(v20 + 152) )
          {
            *(_BYTE *)(v20 + 152) = 1;
            *(_WORD *)(v20 + 154) = 0x8000;
            *(_QWORD *)(v20 + 160) = 0LL;
          }
        }
        else
        {
          v16 = tip2::details::reason_string((tip2::details *)"reason::smart_fill_rect_not_anchored", v15);
          v19 = *(_QWORD *)(v18 + 8);
          if ( !*(_BYTE *)(v19 + 152) )
          {
            *(_BYTE *)(v19 + 152) = 3;
            *(_WORD *)(v19 + 154) = v17;
            *(_QWORD *)(v19 + 160) = v16;
          }
        }
        return;
      }
      v5 = tip2::details::reason_string((tip2::details *)"reason::smart_fill_rect_not_anchored", v15);
      if ( *(_BYTE *)(v6 + 152) )
        return;
      *(_BYTE *)(v6 + 152) = 3;
      *(_WORD *)(v6 + 154) = 4;
LABEL_11:
      *(_QWORD *)(v6 + 160) = v5;
      return;
    }
    if ( RectContainsRect(v7, (const struct Geometry::CRect *)(v9 + 92)) )
    {
      v14 = *(_DWORD *)(v9 + 96);
      if ( *(_DWORD *)(v9 + 52) != v14 )
      {
        v10 = (const char *)*(unsigned int *)(v9 + 104);
        if ( *(_DWORD *)(v9 + 52) != (_DWORD)v10 && *(_DWORD *)(v9 + 60) != v14 && *(_DWORD *)(v9 + 60) != (_DWORD)v10 )
        {
LABEL_19:
          v13 = tip2::details::reason_string((tip2::details *)"reason::smart_fill_rect_not_to_target", v10);
          if ( !*(_BYTE *)(v12 + 152) )
          {
            *(_BYTE *)(v12 + 152) = 3;
            *(_WORD *)(v12 + 154) = 3;
            *(_QWORD *)(v12 + 160) = v13;
          }
          return;
        }
      }
      goto LABEL_27;
    }
LABEL_9:
    v5 = tip2::details::reason_string((tip2::details *)"reason::rect_not_in_work_area", v2);
    if ( *(_BYTE *)(v6 + 152) )
      return;
    *(_BYTE *)(v6 + 152) = 3;
    *(_WORD *)(v6 + 154) = 1;
    goto LABEL_11;
  }
  if ( !*(_BYTE *)(v1 + 152) )
  {
    *(_WORD *)(v1 + 154) = 16385;
LABEL_4:
    *(_BYTE *)(v1 + 152) = 3;
    *(_QWORD *)(v1 + 160) = 0LL;
  }
}
