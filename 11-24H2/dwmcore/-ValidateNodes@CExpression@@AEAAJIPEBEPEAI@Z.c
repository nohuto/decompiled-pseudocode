/*
 * XREFs of ?ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z @ 0x18029B45C
 * Callers:
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x18023D230 (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_EXPRESSION_SETNODESINFO.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??$emplace_back@II@?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXII@Z @ 0x18029A3EC (--$emplace_back@II@-$vector_facade@UNodesDataBookmark@CExpression@@V-$buffer_impl@UNodesDataBook.c)
 *     ??1?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18029A538 (--1-$vector_facade@UNodesDataBookmark@CExpression@@V-$buffer_impl@UNodesDataBookmark@CExpression.c)
 *     ?AdjustPropertyTypeWithMask@CExpression@@AEBA?AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z @ 0x18029A5D4 (-AdjustPropertyTypeWithMask@CExpression@@AEBA-AW4DCOMPOSITION_EXPRESSION_TYPE@@W42@@Z.c)
 *     ?GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18029A654 (-GetExpressionTypeByteSize@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?clear_region@?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18029B924 (-clear_region@-$vector_facade@UNodesDataBookmark@CExpression@@V-$buffer_impl@UNodesDataBookmark@.c)
 */

__int64 __fastcall CExpression::ValidateNodes(
        CExpression *this,
        unsigned int a2,
        const unsigned __int8 *a3,
        unsigned int *a4)
{
  unsigned int v4; // r12d
  const unsigned __int8 *v5; // r10
  _BYTE *v6; // r9
  _BYTE *v8; // r8
  unsigned int v10; // r14d
  int v11; // r11d
  bool v12; // zf
  int v13; // esi
  int *v14; // rdx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  bool v22; // zf
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // rax
  _DWORD *v26; // r9
  unsigned int v27; // edx
  int ExpressionTypeByteSize; // eax
  __int64 v29; // r9
  unsigned int v30; // eax
  bool v31; // zf
  int v32; // ecx
  bool v33; // zf
  int v34; // ecx
  int v35; // ecx
  int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ebx
  unsigned int v39; // edi
  int v40; // ecx
  int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  int v51; // ecx
  unsigned int v52; // eax
  unsigned int v53; // ebx
  _BYTE *v57; // [rsp+40h] [rbp-89h] BYREF
  _BYTE *v58; // [rsp+48h] [rbp-81h]
  char *v59; // [rsp+50h] [rbp-79h]
  _BYTE v60[128]; // [rsp+58h] [rbp-71h] BYREF
  char v61; // [rsp+D8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v4 = 0;
  v5 = a3;
  v6 = v60;
  v8 = v60;
  v57 = v60;
  v58 = v60;
  v59 = &v61;
  v10 = 0;
  while ( 1 )
  {
    v11 = 8;
    v12 = v10 == a2;
    if ( v10 < a2 )
      break;
LABEL_107:
    if ( !v12 )
    {
      v24 = 1346LL;
LABEL_128:
      v53 = -2147467259;
      goto LABEL_129;
    }
    if ( v8 == v6 )
    {
      *a4 = v4;
      detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::~vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>((__int64)&v57);
      return 0LL;
    }
    a2 = *((_DWORD *)v8 - 1);
    v10 = *((_DWORD *)v8 - 2);
    detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::clear_region(
      &v57,
      (v8 - 8 - v6) >> 3);
    v8 = v58;
    v6 = v57;
    v5 = a3;
  }
  while ( 1 )
  {
    v13 = 4;
    if ( v10 + 4 < v10 )
      break;
    if ( v10 + 4 > a2 )
    {
      v24 = 1131LL;
      goto LABEL_128;
    }
    v14 = (int *)&v5[v10];
    v15 = *v14;
    if ( *v14 > 51 )
    {
      if ( v15 > 78 )
      {
        if ( v15 <= 91 )
        {
          if ( v15 == 91 )
            goto LABEL_104;
          if ( v15 <= 85 )
          {
            if ( v15 == 85 )
              goto LABEL_104;
            v32 = v15 - 79;
            if ( !v32 )
              goto LABEL_81;
            goto LABEL_42;
          }
          v34 = v15 - 86;
          v33 = v34 == 0;
LABEL_43:
          if ( v33 )
            goto LABEL_104;
          v35 = v34 - 1;
          if ( !v35 )
            goto LABEL_104;
          v36 = v35 - 1;
          if ( !v36 )
            goto LABEL_104;
          v23 = v36 - 1;
          v22 = v23 == 0;
          goto LABEL_24;
        }
        if ( v15 <= 97 )
        {
          if ( v15 == 97 )
            goto LABEL_104;
          v34 = v15 - 92;
          v33 = v34 == 0;
          goto LABEL_43;
        }
        v48 = v15 - 98;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            v50 = v49 - 1;
            if ( v50 )
            {
              v51 = v50 - 1;
              if ( !v51 )
                goto LABEL_103;
              if ( v51 != 1 )
                goto LABEL_26;
              v13 = 24;
            }
          }
        }
      }
      else
      {
        if ( v15 == 78 )
          goto LABEL_81;
        if ( v15 <= 65 )
        {
          if ( v15 == 65 )
            goto LABEL_104;
          if ( v15 > 59 )
          {
            v34 = v15 - 60;
            v33 = v34 == 0;
          }
          else
          {
            if ( v15 == 59 )
              goto LABEL_104;
            v32 = v15 - 53;
            v31 = v32 == 0;
LABEL_41:
            if ( v31 )
              goto LABEL_104;
LABEL_42:
            v34 = v32 - 1;
            v33 = v34 == 0;
          }
          goto LABEL_43;
        }
        if ( v15 > 72 )
        {
          v45 = v15 - 73;
          if ( !v45 )
            goto LABEL_81;
          v46 = v45 - 1;
          if ( !v46 )
            goto LABEL_81;
          v47 = v46 - 1;
          if ( !v47 )
            goto LABEL_81;
          v44 = v47 - 1;
          if ( v44 )
            goto LABEL_80;
        }
        else
        {
          if ( v15 == 72 )
            goto LABEL_81;
          v40 = v15 - 66;
          if ( v40 )
          {
            v41 = v40 - 1;
            if ( v41 )
            {
              v42 = v41 - 1;
              if ( v42 )
              {
                v43 = v42 - 1;
                if ( v43 )
                {
                  v44 = v43 - 1;
                  if ( v44 )
                  {
LABEL_80:
                    if ( v44 != 1 )
                      goto LABEL_26;
                  }
LABEL_81:
                  v13 = v11;
                }
              }
            }
          }
        }
      }
    }
    else if ( v15 == 51 )
    {
      v37 = v10 + 12;
      v13 = 12;
      if ( v10 + 12 < v10 )
      {
        v24 = 1313LL;
        goto LABEL_125;
      }
      if ( v37 > a2 )
      {
        v24 = 1314LL;
        goto LABEL_128;
      }
      v38 = v37 + v14[1];
      if ( v38 < v37 )
      {
        v24 = 1319LL;
        goto LABEL_125;
      }
      if ( v38 > a2 )
      {
        v24 = 1320LL;
        goto LABEL_128;
      }
      v39 = v38 + v14[2];
      if ( v39 < v38 )
      {
        v24 = 1323LL;
        goto LABEL_125;
      }
      if ( v39 > a2 )
      {
        v24 = 1324LL;
        goto LABEL_128;
      }
      detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::emplace_back<unsigned int,unsigned int>(
        &v57,
        v39,
        a2);
      detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::emplace_back<unsigned int,unsigned int>(
        &v57,
        v38,
        v39);
      v5 = a3;
      v11 = 8;
      a2 = v38;
    }
    else
    {
      if ( v15 > 26 )
      {
        if ( v15 > 39 )
        {
          if ( v15 > 45 )
          {
            v34 = v15 - 46;
            v33 = v34 == 0;
          }
          else
          {
            if ( v15 == 45 )
              goto LABEL_104;
            v34 = v15 - 40;
            v33 = v34 == 0;
          }
        }
        else
        {
          if ( v15 == 39 )
            goto LABEL_104;
          if ( v15 <= 33 )
          {
            if ( v15 == 33 )
              goto LABEL_104;
            v32 = v15 - 27;
            v31 = v32 == 0;
            goto LABEL_41;
          }
          v34 = v15 - 34;
          v33 = v34 == 0;
        }
        goto LABEL_43;
      }
      if ( v15 == 26 )
        goto LABEL_104;
      if ( v15 > 13 )
      {
        if ( v15 <= 20 )
        {
          if ( v15 == 20 )
            goto LABEL_104;
          v32 = v15 - 14;
          v31 = v32 == 0;
          goto LABEL_41;
        }
        v34 = v15 - 21;
        v33 = v34 == 0;
        goto LABEL_43;
      }
      if ( v15 == 13 )
        goto LABEL_104;
      if ( v15 <= 6 )
      {
        if ( v15 == 6 )
          goto LABEL_18;
        if ( !v15 )
          goto LABEL_81;
        v16 = v15 - 1;
        if ( !v16 )
          goto LABEL_81;
        v17 = v16 - 1;
        if ( !v17 )
        {
          v13 = 12;
          goto LABEL_104;
        }
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( (unsigned int)(v18 - 1) > 1 )
            goto LABEL_26;
LABEL_18:
          v13 = 20;
          goto LABEL_104;
        }
LABEL_103:
        v13 = 16;
        goto LABEL_104;
      }
      v19 = v15 - 7;
      if ( !v19 )
      {
        v13 = 28;
        goto LABEL_104;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        v13 = 68;
        goto LABEL_104;
      }
      v21 = v20 - 1;
      if ( v21 )
      {
        v23 = v21 - 2;
        v22 = v23 == 0;
LABEL_24:
        if ( !v22 && v23 != 1 )
        {
LABEL_26:
          v24 = 1339LL;
          goto LABEL_128;
        }
        goto LABEL_104;
      }
      v13 = v11;
      if ( v10 + 8 < v10 )
      {
        v24 = 1169LL;
        goto LABEL_125;
      }
      if ( v10 + 8 > a2 )
      {
        v24 = 1170LL;
        goto LABEL_128;
      }
      v25 = (unsigned int)v14[1];
      if ( (unsigned int)v25 >= *((_DWORD *)this + 93) )
      {
        v24 = 1173LL;
        goto LABEL_128;
      }
      v26 = (_DWORD *)(*((_QWORD *)this + 44) + 28 * v25);
      if ( v26[4] >= *((_DWORD *)this + 92) )
      {
        v24 = 1176LL;
        goto LABEL_128;
      }
      v27 = v26[1];
      if ( v26[3] == 1 )
        v27 = CExpression::AdjustPropertyTypeWithMask((__int64)this, v27);
      ExpressionTypeByteSize = GetExpressionTypeByteSize(v27);
      if ( !ExpressionTypeByteSize )
      {
        v24 = 1184LL;
        goto LABEL_128;
      }
      v30 = v4 + ExpressionTypeByteSize;
      *(_DWORD *)(v29 + 20) = v4;
      if ( v30 < v4 )
      {
        v24 = 1187LL;
        goto LABEL_125;
      }
      v4 = v30;
    }
LABEL_104:
    v52 = v13 + v10;
    if ( v13 + v10 < v10 )
    {
      v24 = 1342LL;
      goto LABEL_125;
    }
    v10 += v13;
    if ( v52 >= a2 )
    {
      v8 = v58;
      v12 = v52 == a2;
      v6 = v57;
      goto LABEL_107;
    }
  }
  v24 = 1130LL;
LABEL_125:
  v53 = -2147024362;
LABEL_129:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expression.cpp",
    (const char *)v53);
  detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::~vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>((__int64)&v57);
  return v53;
}
