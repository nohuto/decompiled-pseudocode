/*
 * XREFs of ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x1801069D8
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x180105228 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x1800E5090 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180106D38 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180106E70 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 */

void __fastcall CWindowNode::NotifyDirtySurface(CWindowNode *this, int **a2, char a3)
{
  char v3; // di
  int *v5; // rdi
  float v6; // xmm10_4
  float v7; // xmm11_4
  int v8; // eax
  __int64 v9; // r15
  _DWORD *v10; // rdi
  char *v11; // r15
  int v12; // r14d
  _DWORD *v13; // r13
  _DWORD *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r8
  _DWORD *v18; // r12
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm3_4
  __int64 v27; // rax
  unsigned int v28; // edx
  float v29; // [rsp+20h] [rbp-50h] BYREF
  int v30; // [rsp+24h] [rbp-4Ch]
  int v31; // [rsp+28h] [rbp-48h]
  int v32; // [rsp+2Ch] [rbp-44h]
  char *v33; // [rsp+B0h] [rbp+40h]

  v3 = a3;
  if ( *((_BYTE *)this + 745) )
  {
    *((_BYTE *)this + 888) &= ~2u;
  }
  else if ( (!*((_BYTE *)this + 744) || !a3) && (*((_BYTE *)this + 96) & 4) == 0 )
  {
    v5 = *a2;
    v6 = (float)*((int *)this + 180);
    v7 = (float)(int)HIDWORD(*((_QWORD *)this + 90));
    v8 = **a2;
    if ( v8 )
    {
      v9 = v5[4];
      v10 = v5 + 3;
      v11 = (char *)v10 + v9;
      v12 = 0;
      v13 = &v10[2 * v8 - 2];
      v14 = v10 + 2;
      v15 = ((__int64)v10 + (int)v10[3] - (_QWORD)v11 + 8) >> 3;
      if ( (int)v15 <= 0 )
      {
        v12 = 1;
        while ( 1 )
        {
          v10 = v14;
          v16 = (int)v14[3];
          v11 = (char *)v14 + (int)v14[1];
          v14 += 2;
          LODWORD(v15) = ((__int64)v14 + v16 - (__int64)v11) >> 3;
          if ( (_DWORD)v15 )
            break;
          if ( v10 >= v13 )
            goto LABEL_9;
        }
        v12 = 0;
      }
    }
    else
    {
      LODWORD(v15) = (_DWORD)v33;
      v13 = 0LL;
      v12 = (int)v33;
      v10 = 0LL;
      v11 = v33;
    }
LABEL_9:
    while ( v10 < v13 )
    {
      v17 = *((unsigned int *)this + 176);
      v18 = v10 + 2;
      v19 = (float)(v17 + *(_DWORD *)&v11[8 * v12]);
      v20 = (float)(*((_DWORD *)this + 176) + *(_DWORD *)&v11[8 * v12 + 4]);
      v21 = (float)(int)(HIDWORD(*((_QWORD *)this + 88)) + *v10);
      v22 = (float)(int)(HIDWORD(*((_QWORD *)this + 88)) + v10[2]);
      if ( v19 <= -3.4028235e38 )
        v23 = FLOAT_N3_4028235e38;
      else
        v23 = v19 - 0.5;
      v29 = v23;
      if ( v21 <= -3.4028235e38 )
      {
        v24 = FLOAT_N3_4028235e38;
        v30 = -8388609;
      }
      else
      {
        v24 = v21 - 0.5;
        v30 = LODWORD(v24);
      }
      if ( v20 >= 3.4028235e38 )
      {
        v31 = 2139095039;
        v25 = FLOAT_3_4028235e38;
      }
      else
      {
        v25 = v20 + 0.5;
        v31 = LODWORD(v25);
      }
      if ( v22 >= 3.4028235e38 )
      {
        v32 = 2139095039;
        v26 = FLOAT_3_4028235e38;
      }
      else
      {
        v26 = v22 + 0.5;
        v32 = LODWORD(v26);
      }
      if ( v23 < 0.0 )
      {
        v23 = 0.0;
        v29 = 0.0;
      }
      if ( v24 < 0.0 )
      {
        v30 = 0;
        v24 = 0.0;
      }
      if ( v25 > v6 )
      {
        v31 = LODWORD(v6);
        v25 = v6;
      }
      if ( v26 > v7 )
      {
        v32 = LODWORD(v7);
        v26 = v7;
      }
      if ( v25 <= v23 || v26 <= v24 )
      {
        v32 = 0;
        v31 = 0;
        v30 = 0;
        v29 = 0.0;
      }
      else
      {
        LOBYTE(v17) = 1;
        CVisual::AddAdditionalDirtyRect(this, &v29, v17);
      }
      if ( ++v12 >= (int)v15 )
      {
        while ( 1 )
        {
          v10 = v18;
          v27 = (int)v18[3];
          v11 = (char *)v18 + (int)v18[1];
          v18 += 2;
          LODWORD(v15) = ((__int64)v18 + v27 - (__int64)v11) >> 3;
          if ( (_DWORD)v15 )
            break;
          if ( v10 >= v13 )
            goto LABEL_9;
        }
        v12 = 0;
      }
    }
    v3 = a3;
  }
  if ( !CWindowNode::ProcessReadyGdiSpriteBitmaps(this) )
  {
    if ( *((_BYTE *)this + 745) )
    {
      v28 = 8;
      goto LABEL_44;
    }
    if ( *((_BYTE *)this + 744) && v3 )
    {
      *((_BYTE *)this + 888) &= ~1u;
      v28 = 5;
LABEL_44:
      CVisual::PropagateFlags((__int64)this, v28);
    }
  }
}
