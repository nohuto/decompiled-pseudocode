/*
 * XREFs of ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18000C3F0
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18000ED10 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18000CD84 (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?GetRelativeOffsetInternal@CVisual@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x18000D550 (-GetRelativeOffsetInternal@CVisual@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18000D5E0 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x180181100 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x180182A8C (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXMMM@Z @ 0x1801CB59C (-SetOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetSize@CVisual@@QEAAXMM@Z @ 0x1801D78F4 (-SetSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetVisible@CVisual@@QEAAX_N@Z @ 0x1801F6960 (-SetVisible@CVisual@@QEAAX_N@Z.c)
 *     ?SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z @ 0x18028C214 (-SetPixelSnappingEnabled@CVisual@@QEAAX_N@Z.c)
 */

__int64 __fastcall CVisual::SetProperty(float *a1, unsigned int a2, int a3, __int64 a4)
{
  CVisual *v4; // rbx
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  unsigned int v11; // ebx
  float v13; // xmm6_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  unsigned int v16; // edx
  float z; // xmm3_4
  float v18; // xmm2_4
  float x; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned int v28; // edx
  float y; // xmm2_4
  struct D2D_VECTOR_3F *RelativeOffsetInternal; // rax
  struct D2D_VECTOR_3F v31; // [rsp+30h] [rbp-38h] BYREF
  struct D2D_VECTOR_3F v32; // [rsp+40h] [rbp-28h] BYREF

  v4 = (CVisual *)a1;
  v5 = a3 - 17;
  if ( !v5 )
  {
    if ( a2 == 27 )
    {
      CVisual::SetPixelSnappingEnabled((CVisual *)a1, *(_BYTE *)a4);
      return 0;
    }
    if ( a2 == 38 )
    {
      CVisual::SetVisible((CVisual *)a1, *(_BYTE *)a4);
      return 0;
    }
    goto LABEL_12;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v13 = *(float *)a4;
    if ( a2 <= 0x1A )
    {
      if ( a2 == 26 )
      {
        CVisual::SetOpacity((CVisual *)a1, *(float *)a4);
        return 0;
      }
      v16 = a2 - 1;
      if ( !v16 )
      {
        v8 = a1[31];
        v10 = *(float *)a4;
        v9 = a1[30];
        goto LABEL_7;
      }
      v22 = v16 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 21;
          if ( v24 )
          {
            if ( v24 != 1 )
              goto LABEL_12;
            v15 = a1[34];
            v14 = *(float *)a4;
          }
          else
          {
            v14 = a1[35];
            v15 = *(float *)a4;
          }
LABEL_18:
          CVisual::SetSize((CVisual *)a1, v15, v14);
          return 0;
        }
        v9 = a1[30];
        v8 = *(float *)a4;
      }
      else
      {
        v8 = a1[31];
        v9 = *(float *)a4;
      }
      v10 = a1[29];
      goto LABEL_7;
    }
    v25 = a2 - 32;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            if ( v28 != 1 )
              goto LABEL_12;
            v20 = *(float *)a4;
            v21 = **(float **)&CVisual::GetRelativeLayoutSizeInternal((CVisual *)a1);
            goto LABEL_38;
          }
        }
        else
        {
          y = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v31)->y;
          RelativeOffsetInternal = CVisual::GetRelativeOffsetInternal(v4, &v32);
          CVisual::SetRelativeOffset(v4, RelativeOffsetInternal->x, y, v13);
        }
        v21 = v13;
        v20 = *(float *)(*(_QWORD *)&CVisual::GetRelativeLayoutSizeInternal(v4) + 4LL);
LABEL_38:
        a1 = (float *)v4;
        goto LABEL_39;
      }
      z = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v32)->z;
      v18 = v13;
      x = CVisual::GetRelativeOffsetInternal(v4, &v31)->x;
    }
    else
    {
      z = CVisual::GetRelativeOffsetInternal((CVisual *)a1, &v32)->z;
      x = v13;
      v18 = CVisual::GetRelativeOffsetInternal(v4, &v31)->y;
    }
    a1 = (float *)v4;
    goto LABEL_49;
  }
  v7 = v6 - 17;
  if ( !v7 )
  {
    if ( a2 == 29 )
    {
      v14 = *(float *)(a4 + 4);
      v15 = *(float *)a4;
      goto LABEL_18;
    }
    if ( a2 != 31 )
      goto LABEL_12;
    v20 = *(float *)(a4 + 4);
    v21 = *(float *)a4;
LABEL_39:
    CVisual::SetRelativeSize((CVisual *)a1, v21, v20);
    return 0;
  }
  if ( v7 != 17 )
    goto LABEL_12;
  if ( a2 != 28 )
  {
    if ( a2 == 30 )
    {
      z = *(float *)(a4 + 8);
      v18 = *(float *)(a4 + 4);
      x = *(float *)a4;
LABEL_49:
      CVisual::SetRelativeOffset((CVisual *)a1, x, v18, z);
      return 0;
    }
LABEL_12:
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x98Cu, 0LL);
    return v11;
  }
  v8 = *(float *)(a4 + 8);
  v9 = *(float *)(a4 + 4);
  v10 = *(float *)a4;
LABEL_7:
  CVisual::SetOffset((CVisual *)a1, v10, v9, v8);
  return 0;
}
