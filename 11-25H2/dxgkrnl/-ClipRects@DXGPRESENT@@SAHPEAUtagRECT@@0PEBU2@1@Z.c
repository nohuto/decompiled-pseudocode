/*
 * XREFs of ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x140328560
 * Callers:
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1403279B8 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1403283AC (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z @ 0x140328D04 (-ClipIntervals@DXGPRESENT@@CAXPEAJ000JJ@Z.c)
 */

__int64 __fastcall DXGPRESENT::ClipRects(
        struct tagRECT *a1,
        struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4)
{
  LONG v8; // eax
  LONG v9; // r8d
  LONG v10; // edx
  LONG bottom; // ebp
  LONG top; // r14d
  LONG v13; // eax
  LONG v14; // ecx
  int v15; // r8d
  LONG right; // ebp
  LONG left; // esi
  LONG v18; // eax
  LONG v19; // ecx
  int v20; // r8d
  int v22; // r10d
  int v23; // r9d
  __int64 v24; // r15
  __int64 v25; // rbp
  __int64 v26; // r12
  __int64 v27; // r8
  LONG v28; // r11d
  LONG v29; // ecx
  LONG v30; // esi
  LONG v31; // r14d
  LONG v32; // r11d
  LONG v33; // edx
  int v34; // r13d
  int v35; // r12d
  int v36; // r13d
  int v37; // eax
  int v38; // edx
  int v39; // eax
  LONG v40; // ebp
  LONG v41; // r8d
  LONG v42; // ecx
  int v43; // r9d
  int v44; // r11d
  LONG v45; // eax
  LONG v46; // ecx
  LONG v47; // eax
  LONG v48; // r10d
  LONG v49; // r9d
  LONG v50; // ecx
  int v51; // r11d
  LONG v52; // edx
  LONG v53; // r10d
  LONG v54; // r9d
  LONG v55; // ecx
  int v56; // r11d
  LONG v57; // edx
  LONG v58; // [rsp+50h] [rbp-48h]
  int v59; // [rsp+50h] [rbp-48h]
  LONG v60; // [rsp+54h] [rbp-44h]
  LONG v61; // [rsp+58h] [rbp-40h]
  LONG v62; // [rsp+5Ch] [rbp-3Ch]
  int v63; // [rsp+60h] [rbp-38h]
  int v64; // [rsp+60h] [rbp-38h]
  LONG v65; // [rsp+68h] [rbp-30h]
  int v66; // [rsp+B0h] [rbp+18h]

  if ( !a3
    || (v8 = a3->top, v8 < a1->bottom)
    && (v9 = a3->bottom, v9 > a1->top)
    && a3->left < a1->right
    && (v10 = a3->right, a3->left < v10)
    && v10 > a1->left
    && v8 < v9 )
  {
    if ( !a4 )
    {
      if ( a3 )
      {
        bottom = a3->bottom;
        top = a3->top;
        if ( a1->top >= a1->bottom )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10255;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"*low1 < *high1", 10255LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( a2->top >= a2->bottom )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10256;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"*low2 < *high2", 10256LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( top >= bottom )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10257;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"low < high", 10257LL, 0LL, 0LL, 0LL, 0LL);
        }
        v13 = a1->top;
        if ( top > v13 )
        {
          a1->top = top;
          v13 = top;
        }
        v14 = a1->bottom;
        if ( bottom < v14 )
        {
          a1->bottom = bottom;
          v14 = bottom;
        }
        v15 = bottom - top;
        if ( v14 - v13 != bottom - top )
        {
          v48 = a2->bottom;
          v49 = a2->top;
          v50 = v48;
          v51 = v48 - v49;
          if ( top < v13 )
          {
            v49 += (v15 + v51 * (v13 - top) - 1) / v15;
            a2->top = v49;
          }
          v52 = a1->bottom;
          if ( bottom > v52 )
          {
            v50 = v48 - v51 * (bottom - v52) / v15;
            a2->bottom = v50;
          }
          if ( v49 == v50 )
          {
            if ( a1->top - top < bottom - a1->bottom )
              a2->bottom = v50 + 1;
            else
              a2->top = v49 - 1;
          }
        }
        right = a3->right;
        left = a3->left;
        if ( a1->left >= a1->right )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10255;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"*low1 < *high1", 10255LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( a2->left >= a2->right )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10256;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"*low2 < *high2", 10256LL, 0LL, 0LL, 0LL, 0LL);
        }
        if ( left >= right )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 10257;
          DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"low < high", 10257LL, 0LL, 0LL, 0LL, 0LL);
        }
        v18 = a1->left;
        if ( left > a1->left )
        {
          a1->left = left;
          v18 = left;
        }
        v19 = a1->right;
        if ( right < v19 )
        {
          a1->right = right;
          v19 = right;
        }
        v20 = right - left;
        if ( v19 - v18 != right - left )
        {
          v53 = a2->right;
          v54 = a2->left;
          v55 = v53;
          v56 = v53 - a2->left;
          if ( left < v18 )
          {
            v54 += (v20 + v56 * (v18 - left) - 1) / v20;
            a2->left = v54;
          }
          v57 = a1->right;
          if ( right > v57 )
          {
            v55 = v53 - v56 * (right - v57) / v20;
            a2->right = v55;
          }
          if ( v54 == v55 )
          {
            if ( a1->left - left < right - a1->right )
              a2->right = v55 + 1;
            else
              a2->left = v54 - 1;
          }
        }
      }
      return 1LL;
    }
    v22 = a2->bottom;
    v23 = a2->top;
    v24 = a4->top;
    if ( (int)v24 < v22 - v23 )
    {
      v25 = a4->bottom;
      if ( (int)v25 > 0 )
      {
        v26 = a4->left;
        v65 = a2->right;
        if ( (int)v26 < v65 - a2->left )
        {
          v27 = a4->right;
          if ( (int)v27 > 0 && (int)v26 < (int)v27 && (int)v24 < (int)v25 )
          {
            if ( !a3 )
            {
              DXGPRESENT::ClipIntervals(&a2->top, &a2->bottom, &a1->top, &a1->bottom, v24, v25);
              DXGPRESENT::ClipIntervals(&a2->left, &a2->right, &a1->left, &a1->right, a4->left, a4->right);
              return 1LL;
            }
            v28 = a3->left;
            v62 = a3->right;
            v61 = a3->left;
            v66 = (((int)v27 - (int)v26) << 16) / (v62 - a3->left);
            v60 = a3->top;
            v58 = a3->bottom;
            v63 = (((int)v25 - (int)v24) << 16) / (v58 - v60);
            if ( v66 && (((int)v25 - (int)v24) << 16) / (v58 - v60) )
            {
              v29 = a1->left;
              v30 = a1->right;
              if ( v28 > a1->left )
                v29 = v28;
              if ( v62 < v30 )
                v30 = v62;
              if ( v29 < v30 )
              {
                v31 = a1->top;
                v32 = a1->bottom;
                v33 = v58;
                if ( v60 > v31 )
                  v31 = v60;
                if ( v58 < v32 )
                  v32 = v58;
                if ( v31 < v32 )
                {
                  v34 = ((_DWORD)v26 << 16) + v66 * (v29 - v61);
                  v35 = (((int)v25 - (int)v24) << 16) / (v58 - v60);
                  v59 = v34;
                  v36 = ((_DWORD)v27 << 16) + v66 * (v30 - v62);
                  v37 = v63 * (v32 - v33);
                  v38 = (v59 + 0xFFFF) >> 16;
                  v64 = ((_DWORD)v24 << 16) + v63 * (v31 - v60);
                  v39 = ((_DWORD)v25 << 16) + v37;
                  v40 = a2->right;
                  if ( v38 <= a2->left )
                    v38 = a2->left;
                  a2->left = v38;
                  if ( v36 >> 16 < v65 )
                    v40 = v36 >> 16;
                  a2->right = v40;
                  if ( v38 < v40 )
                  {
                    if ( (v64 + 0xFFFF) >> 16 > v23 )
                      v23 = (v64 + 0xFFFF) >> 16;
                    a2->top = v23;
                    if ( v39 >> 16 < v22 )
                      v22 = v39 >> 16;
                    a2->bottom = v22;
                    if ( v23 < v22 )
                    {
                      v41 = (v66 + (v38 << 16) - v59 - 1) / v66 + v29;
                      v42 = v30 + ((v40 << 16) - v36) / v66;
                      v43 = ((v23 << 16) - v64 + v35 - 1) / v35 + v31;
                      v44 = ((v22 << 16) - v39) / v35 + v32;
                      if ( v41 <= a1->left )
                        v41 = a1->left;
                      v45 = a1->right;
                      a1->left = v41;
                      if ( v42 >= v45 )
                        v42 = v45;
                      a1->right = v42;
                      if ( v41 < v42 )
                      {
                        v46 = a1->top;
                        v47 = a1->bottom;
                        if ( v43 > v46 )
                          v46 = v43;
                        a1->top = v46;
                        if ( v44 < v47 )
                          v47 = v44;
                        a1->bottom = v47;
                        if ( v46 < v47 )
                          return 1LL;
                      }
                    }
                  }
                }
              }
            }
            else
            {
              WdLogSingleEntry4(3LL, v26, v24, v27, v25);
              WdLogGlobalForLineNumber = 10371;
            }
          }
        }
      }
    }
  }
  return 0LL;
}
