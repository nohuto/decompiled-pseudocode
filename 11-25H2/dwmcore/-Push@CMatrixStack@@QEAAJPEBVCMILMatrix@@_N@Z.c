/*
 * XREFs of ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800268C0
 * Callers:
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18002668C (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x18002682C (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B5890 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BA220 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180134654 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180016DF0 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Grow@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x1800B3320 (-Grow@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 */

__int64 __fastcall CMatrixStack::Push(CMatrixStack *this, const struct CMILMatrix *a2, char a3)
{
  __int64 v3; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  int v16; // ecx
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  unsigned int v20; // ecx
  unsigned int v21; // ebp
  __int64 v22; // rdx
  unsigned int v23; // ebx
  unsigned int v24; // r14d
  HANDLE ProcessHeap; // rax
  void *v26; // rax
  void *v27; // rdi
  int v28; // eax
  unsigned int v29; // esi
  void *v30; // r14
  HANDLE v31; // rax
  int v32; // [rsp+20h] [rbp-B8h]
  int v33; // [rsp+20h] [rbp-B8h]
  _OWORD v34[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v35; // [rsp+70h] [rbp-68h]
  _OWORD v36[4]; // [rsp+80h] [rbp-58h] BYREF
  int v37; // [rsp+C0h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v3 = *((unsigned int *)this + 2);
  if ( !(_DWORD)v3 || !a3 )
  {
    v6 = *((unsigned int *)this + 3);
    if ( (_DWORD)v3 != (_DWORD)v6 )
    {
LABEL_3:
      v7 = *(_QWORD *)this + 68LL * *((unsigned int *)this + 2);
      *(_OWORD *)v7 = *(_OWORD *)a2;
      *(_OWORD *)(v7 + 16) = *((_OWORD *)a2 + 1);
      *(_OWORD *)(v7 + 32) = *((_OWORD *)a2 + 2);
      *(_OWORD *)(v7 + 48) = *((_OWORD *)a2 + 3);
      *(_DWORD *)(v7 + 64) = *((_DWORD *)a2 + 16);
      ++*((_DWORD *)this + 2);
      v8 = *((_DWORD *)this + 5);
      if ( v8 <= *((_DWORD *)this + 2) )
        v8 = *((_DWORD *)this + 2);
      *((_DWORD *)this + 5) = v8;
      return 0LL;
    }
    v21 = 2 * v6;
    if ( (unsigned __int64)(2 * v6) <= 0xFFFFFFFF )
    {
      if ( v21 <= 8 )
        v21 = 8;
      v24 = 68 * v3;
      if ( (unsigned __int64)(68 * v3) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v21 <= 0x44 )
        {
          v23 = -2147024809;
        }
        else
        {
          ProcessHeap = GetProcessHeap();
          v26 = HeapAlloc(ProcessHeap, 0, 68LL * v21);
          v27 = v26;
          if ( v26 )
          {
            memcpy_0(v26, *(const void **)this, v24);
            v30 = *(void **)this;
            if ( *(_QWORD *)this )
            {
              v31 = GetProcessHeap();
              HeapFree(v31, 0, v30);
            }
            *(_QWORD *)this = v27;
            *((_DWORD *)this + 3) = v21;
            goto LABEL_3;
          }
          v23 = -2147024882;
        }
        v22 = 104LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v23,
          v32);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v23,
          v33);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x36u, 0LL);
        return v23;
      }
      v22 = 101LL;
    }
    else
    {
      v22 = 98LL;
    }
    v23 = -2147024362;
    goto LABEL_14;
  }
  v35 = 0;
  v37 = 0;
  v10 = (unsigned int)(v3 - 1);
  v11 = *(_QWORD *)this;
  v12 = *(_OWORD *)(68 * v10 + *(_QWORD *)this + 16);
  v34[0] = *(_OWORD *)(68 * v10 + *(_QWORD *)this);
  v13 = *(_OWORD *)(68 * v10 + v11 + 32);
  v34[1] = v12;
  v14 = *(_OWORD *)(68 * v10 + v11 + 48);
  LODWORD(v11) = *(_DWORD *)(68 * v10 + v11 + 64);
  v34[2] = v13;
  v34[3] = v14;
  v35 = v11;
  CMILMatrix::Multiply((__m128 *)a2, (const struct CMILMatrix *)v34, (struct CMILMatrix *)v36);
  if ( *((_DWORD *)this + 2) == *((_DWORD *)this + 3)
    && (v28 = CWatermarkStack<CMILMatrix,8,2,8>::Grow(this), v29 = v28, v28 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v28,
      (int)this);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x45u, 0LL);
    return v29;
  }
  else
  {
    v15 = v36[1];
    v16 = v37;
    result = 0LL;
    v17 = *(_QWORD *)this + 68LL * *((unsigned int *)this + 2);
    *(_OWORD *)v17 = v36[0];
    v18 = v36[2];
    *(_OWORD *)(v17 + 16) = v15;
    v19 = v36[3];
    *(_OWORD *)(v17 + 32) = v18;
    *(_OWORD *)(v17 + 48) = v19;
    *(_DWORD *)(v17 + 64) = v16;
    v20 = *((_DWORD *)this + 5);
    if ( v20 <= ++*((_DWORD *)this + 2) )
      v20 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 5) = v20;
  }
  return result;
}
