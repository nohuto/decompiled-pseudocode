/*
 * XREFs of ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1801A9AE0
 * Callers:
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18008FA94 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2710 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C1560 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801A98A0 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z @ 0x1801A9A4C (-PushTransformInternal@COcclusionContext@@AEAAJPEAVCTransform@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Grow@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z @ 0x18001E260 (-Grow@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@AEAAJ_KIIPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800B4D30 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v18; // xmm1
  int v19; // ecx
  __int64 v20; // rdx
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  unsigned int v23; // ecx
  unsigned int v24; // ebp
  __int64 v25; // rdx
  unsigned int v26; // ebx
  unsigned int v27; // r14d
  HANDLE ProcessHeap; // rax
  void *v29; // rax
  void *v30; // rdi
  int v31; // eax
  unsigned int v32; // esi
  void *v33; // r14
  HANDLE v34; // rax
  _OWORD v35[4]; // [rsp+30h] [rbp-A8h] BYREF
  int v36; // [rsp+70h] [rbp-68h]
  _OWORD v37[4]; // [rsp+80h] [rbp-58h] BYREF
  int v38; // [rsp+C0h] [rbp-18h]
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
    v24 = 2 * v6;
    if ( (unsigned __int64)(2 * v6) <= 0xFFFFFFFF )
    {
      if ( v24 <= 8 )
        v24 = 8;
      v27 = 68 * v3;
      if ( (unsigned __int64)(68 * v3) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v24 <= 0x44 )
        {
          v26 = -2147024809;
        }
        else
        {
          ProcessHeap = GetProcessHeap();
          v29 = HeapAlloc(ProcessHeap, 0, 68LL * v24);
          v30 = v29;
          if ( v29 )
          {
            memcpy_0(v29, *(const void **)this, v27);
            v33 = *(void **)this;
            if ( *(_QWORD *)this )
            {
              v34 = GetProcessHeap();
              HeapFree(v34, 0, v33);
            }
            *(_QWORD *)this = v30;
            *((_DWORD *)this + 3) = v24;
            goto LABEL_3;
          }
          v26 = -2147024882;
        }
        v25 = 104LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v26);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v26);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x36u, 0LL);
        return v26;
      }
      v25 = 101LL;
    }
    else
    {
      v25 = 98LL;
    }
    v26 = -2147024362;
    goto LABEL_14;
  }
  v36 = 0;
  v38 = 0;
  v10 = (unsigned int)(v3 - 1);
  v11 = *(_QWORD *)this;
  v12 = *(_OWORD *)(68 * v10 + *(_QWORD *)this + 16);
  v35[0] = *(_OWORD *)(68 * v10 + *(_QWORD *)this);
  v13 = *(_OWORD *)(68 * v10 + v11 + 32);
  v35[1] = v12;
  v14 = *(_OWORD *)(68 * v10 + v11 + 48);
  LODWORD(v11) = *(_DWORD *)(68 * v10 + v11 + 64);
  v35[2] = v13;
  v35[3] = v14;
  v36 = v11;
  CMILMatrix::Multiply((__m128 *)a2, (const struct CMILMatrix *)v35, (struct CMILMatrix *)v37);
  if ( *((_DWORD *)this + 2) == *((_DWORD *)this + 3)
    && (v31 = CWatermarkStack<CMILMatrix,8,2,8>::Grow((__int64)this, v15, v16, v17, (const void **)this),
        v32 = v31,
        v31 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
      (const char *)(unsigned int)v31);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x45u, 0LL);
    return v32;
  }
  else
  {
    v18 = v37[1];
    v19 = v38;
    result = 0LL;
    v20 = *(_QWORD *)this + 68LL * *((unsigned int *)this + 2);
    *(_OWORD *)v20 = v37[0];
    v21 = v37[2];
    *(_OWORD *)(v20 + 16) = v18;
    v22 = v37[3];
    *(_OWORD *)(v20 + 32) = v21;
    *(_OWORD *)(v20 + 48) = v22;
    *(_DWORD *)(v20 + 64) = v19;
    v23 = *((_DWORD *)this + 5);
    if ( v23 <= ++*((_DWORD *)this + 2) )
      v23 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 5) = v23;
  }
  return result;
}
