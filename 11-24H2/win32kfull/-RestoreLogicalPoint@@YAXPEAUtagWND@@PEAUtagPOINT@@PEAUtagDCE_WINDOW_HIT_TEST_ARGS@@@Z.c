/*
 * XREFs of ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x140153DE0
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14003F500 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x140153DE0 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 * Callees:
 *     ?IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z @ 0x1400651C0 (-IsCompositionInputWindowForHitTest@@YA_NPEAUtagWND@@@Z.c)
 *     ?RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x140153DE0 (-RestoreLogicalPoint@@YAXPEAUtagWND@@PEAUtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z.c)
 *     BuildVertexList @ 0x140159D28 (BuildVertexList.c)
 *     ?DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z @ 0x140159F8C (-DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall RestoreLogicalPoint(struct tagWND *a1, struct tagPOINT *a2, struct tagDCE_WINDOW_HIT_TEST_ARGS *a3)
{
  __int64 v3; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  const struct _SUBPIXELS *v9; // rdi
  float x; // xmm9_4
  float y; // xmm6_4
  __int64 v12; // r10
  unsigned int i; // r8d
  char v14; // dl
  float v15; // xmm1_4
  int v16; // r9d
  int v17; // eax
  int v18; // eax
  int v19; // eax
  float v20; // xmm7_4
  float v21; // xmm0_4
  float v22; // xmm4_4
  float v23; // xmm0_4
  float v24; // xmm4_4
  float v25; // xmm0_4
  float v26; // xmm4_4
  float v27; // xmm5_4
  float v28; // xmm1_4
  float v29; // xmm3_4
  float v30; // xmm1_4
  _DWORD v31[48]; // [rsp+30h] [rbp-128h] BYREF

  if ( a1 )
  {
    v3 = *((_QWORD *)a1 + 3);
    if ( !v3 || (v7 = *(_QWORD *)(v3 + 8)) == 0 || a1 != *(struct tagWND **)(v7 + 24) )
    {
      RestoreLogicalPoint(*((struct tagWND **)a1 + 13), a2, a3);
      if ( *((_QWORD *)a1 + 27) )
      {
        if ( (*((_DWORD *)a3 + 8) & 2) == 0 && !IsCompositionInputWindowForHitTest(a1, v8) )
        {
          v9 = (const struct _SUBPIXELS *)*((_QWORD *)a3 + 5);
          x = (float)a2->x;
          y = (float)a2->y;
          BuildVertexList(v31, *((_QWORD *)a1 + 5) + 88LL, *((_QWORD *)a1 + 27));
          for ( i = 0; ; ++i )
          {
            if ( i >= 2 )
              return;
            v14 = 0;
            v15 = *(float *)&v31[24 * i + 1];
            if ( v15 == *(float *)&v31[24 * i + 9]
              && v15 == y
              && x >= *(float *)&v31[24 * i]
              && *(float *)&v31[24 * i + 8] >= x )
            {
LABEL_28:
              DCEInverseTransform((const struct tagRECT *)(v12 + 88), (const struct _D3DVERTEX *)&v31[24 * i], v9, a2);
              return;
            }
            v16 = -1;
            v17 = -1;
            if ( (float)(v15 - y) >= 0.0 )
              v16 = 1;
            if ( (float)(*(float *)&v31[24 * i + 9] - y) >= 0.0 )
              v17 = 1;
            if ( v16 != v17 )
              break;
LABEL_18:
            v18 = -1;
            if ( (float)(*(float *)&v31[24 * i + 17] - y) >= 0.0 )
              v18 = 1;
            if ( v16 != v18 )
            {
              v22 = *(float *)&v31[24 * i + 8] - x;
              v23 = *(float *)&v31[24 * i + 16] - x;
              if ( v22 > 0.0 )
              {
                if ( v23 > 0.0 )
                  goto LABEL_36;
                goto LABEL_46;
              }
              if ( v23 > 0.0 )
              {
LABEL_46:
                v27 = *(float *)&v31[24 * i + 9];
                v28 = *(float *)&v31[24 * i + 17] - v27;
                if ( COERCE_FLOAT(LODWORD(v28) & _xmm) > 0.00000011920929
                  && (float)(v22
                           - (float)((float)((float)(*(float *)&v31[24 * i + 16] - *(float *)&v31[24 * i + 8])
                                           * (float)(v27 - y))
                                   / v28)) > 0.0 )
                {
LABEL_36:
                  ++v14;
                }
              }
              v16 = v18;
            }
            v19 = -1;
            if ( (float)(*(float *)&v31[24 * i + 1] - y) >= 0.0 )
              v19 = 1;
            if ( v16 != v19 )
            {
              v24 = *(float *)&v31[24 * i + 16] - x;
              v25 = *(float *)&v31[24 * i] - x;
              if ( v24 <= 0.0 )
              {
                if ( v25 <= 0.0 )
                  goto LABEL_24;
              }
              else if ( v25 > 0.0 )
              {
                goto LABEL_40;
              }
              v29 = *(float *)&v31[24 * i + 17];
              v30 = *(float *)&v31[24 * i + 1] - v29;
              if ( COERCE_FLOAT(LODWORD(v30) & _xmm) > 0.00000011920929
                && (float)(v24
                         - (float)((float)((float)(v29 - y)
                                         * (float)(*(float *)&v31[24 * i] - *(float *)&v31[24 * i + 16]))
                                 / v30)) > 0.0 )
              {
LABEL_40:
                ++v14;
              }
            }
LABEL_24:
            if ( (v14 & 1) != 0 )
              goto LABEL_28;
          }
          v20 = *(float *)&v31[24 * i] - x;
          v21 = *(float *)&v31[24 * i + 8] - x;
          if ( v20 <= 0.0 )
          {
            if ( v21 <= 0.0 )
              goto LABEL_33;
          }
          else if ( v21 > 0.0 )
          {
LABEL_32:
            v14 = 1;
LABEL_33:
            v16 = v17;
            goto LABEL_18;
          }
          v26 = *(float *)&v31[24 * i + 9] - v15;
          if ( COERCE_FLOAT(LODWORD(v26) & _xmm) <= 0.00000011920929
            || (float)(v20
                     - (float)((float)((float)(*(float *)&v31[24 * i + 8] - *(float *)&v31[24 * i]) * (float)(v15 - y))
                             / v26)) <= 0.0 )
          {
            goto LABEL_33;
          }
          goto LABEL_32;
        }
      }
    }
  }
}
