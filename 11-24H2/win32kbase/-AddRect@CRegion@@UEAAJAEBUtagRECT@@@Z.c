/*
 * XREFs of ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x140019860
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z @ 0x140019A04 (-InitializeFromRect@CRegion@@IEAAJAEBUtagRECT@@@Z.c)
 *     ??0RGNCOREMEMOBJ@@QEAA@XZ @ 0x140019CF8 (--0RGNCOREMEMOBJ@@QEAA@XZ.c)
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x14001B7A0 (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x1400291D0 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___ @ 0x1400296C0 (RGNCOREOBJ--bMerge__RGNCOREOBJ--bMerge_--_2_--_lambda_1___.c)
 *     ?RegionCore_bMerge@Win32kRS@@YAHPEAVREGION_CORE@@PEBV2@1E@Z @ 0x1400D8464 (-RegionCore_bMerge@Win32kRS@@YAHPEAVREGION_CORE@@PEBV2@1E@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall CRegion::AddRect(CRegion *this, const struct tagRECT *a2)
{
  int v4; // ecx
  unsigned int v5; // edi
  int v7; // ecx
  struct REGION_CORE *v8; // rbx
  const struct REGION_CORE *v9; // r9
  char v10; // al
  unsigned __int8 v11; // [rsp+20h] [rbp-40h]
  Win32kRS *v12; // [rsp+30h] [rbp-30h] BYREF
  struct REGION_CORE *v13; // [rsp+38h] [rbp-28h] BYREF
  int v14[2]; // [rsp+40h] [rbp-20h] BYREF
  _RECTL v15; // [rsp+48h] [rbp-18h] BYREF

  if ( a2->left > a2->right || a2->top > a2->bottom )
    return (unsigned int)-1073741811;
  v4 = *((_DWORD *)this + 3);
  v5 = 0;
  if ( !v4 )
    return (unsigned int)CRegion::InitializeFromRect(this, a2);
  v7 = v4 - 1;
  if ( !v7 )
    return v5;
  if ( v7 != 1 )
    return (unsigned int)-1073741811;
  v8 = (struct REGION_CORE *)*((_QWORD *)this + 2);
  *(_QWORD *)v14 = v8;
  RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v13);
  RGNCOREMEMOBJ::RGNCOREMEMOBJ((RGNCOREMEMOBJ *)&v12);
  if ( v13 && v12 )
  {
    v15 = (_RECTL)*a2;
    RGNCOREOBJ::vSet((RGNCOREOBJ *)&v13, &v15);
    LOBYTE(v9) = 14;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
      v10 = (unsigned int)Win32kRS::RegionCore_bMerge(v12, v8, v13, v9, v11) != 0;
    else
      v10 = RGNCOREOBJ::bMerge__RGNCOREOBJ::bMerge_::_2_::_lambda_1___(
              (int)&v12,
              (int)v14,
              (int)&v13,
              (int)v9,
              (RGNCOREOBJ *)&v12);
    if ( v10 )
    {
      *((_QWORD *)this + 2) = v12;
      v12 = v8;
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    v5 = -1073741801;
  }
  RGNCOREOBJ::vDeleteRGNCOREOBJ((RGNCOREOBJ *)&v12);
  RGNCOREOBJ::vDeleteRGNCOREOBJ((RGNCOREOBJ *)&v13);
  return v5;
}
