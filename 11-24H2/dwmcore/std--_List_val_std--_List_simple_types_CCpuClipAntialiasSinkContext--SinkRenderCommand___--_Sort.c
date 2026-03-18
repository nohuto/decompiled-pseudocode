/*
 * XREFs of std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___ @ 0x1801471B8
 * Callers:
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x180077230 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x180077F10 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___ @ 0x1801471B8 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Sort.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x1801482FC (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 * Callees:
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___ @ 0x1801471B8 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Sort.c)
 *     _lambda_0c3994cbe405861b61e36de8c3dd15dd_::operator() @ 0x1801ED77C (_lambda_0c3994cbe405861b61e36de8c3dd15dd_--operator().c)
 */

__int64 __fastcall std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  char v3; // bl
  unsigned __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rbx
  float *v12; // r10
  float v13; // xmm1_4
  __int64 v14; // r11
  __int64 v15; // r8
  __int64 *v16; // rdx
  float **v17; // rcx
  __int64 *v18; // rax
  __int64 *v19; // r10
  __int64 v20; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  if ( a2 )
  {
    if ( a2 == 1 )
      return *(_QWORD *)*a1;
    v7 = a2 >> 1;
    v20 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
            a1,
            a2 >> 1,
            a3);
    LOBYTE(v8) = v3;
    v9 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
           &v20,
           a2 - v7,
           v8);
    v10 = v20;
    v11 = v9;
    v12 = (float *)*a1;
    v13 = *(float *)(v20 + 24);
    if ( *(float *)(*a1 + 28) <= v13 || *(float *)(v20 + 28) <= v12[6] )
    {
      if ( v12[6] <= v13 )
      {
LABEL_7:
        v14 = *a1;
        while ( 1 )
        {
          v12 = *(float **)v12;
          if ( v12 == (float *)v20 )
            break;
          if ( v12[7] <= v13 || *(float *)(v20 + 28) <= v12[6] )
          {
            if ( v12[6] > v13 )
              goto LABEL_16;
          }
          else if ( *(_DWORD *)(v20 + 16) < *((_DWORD *)v12 + 4) )
          {
            goto LABEL_16;
          }
        }
LABEL_9:
        *a1 = v14;
        return v11;
      }
    }
    else if ( *(_DWORD *)(v20 + 16) >= *((_DWORD *)v12 + 4) )
    {
      goto LABEL_7;
    }
    v14 = v20;
LABEL_16:
    v15 = v10;
    while ( 1 )
    {
      v10 = *(_QWORD *)v10;
      if ( v10 == v11 )
        break;
      if ( v12[7] <= *(float *)(v10 + 24) || *(float *)(v10 + 28) <= v12[6] )
      {
        if ( v12[6] <= *(float *)(v10 + 24) )
          break;
      }
      else if ( *(_DWORD *)(v10 + 16) >= *((_DWORD *)v12 + 4) )
      {
        break;
      }
    }
    v16 = *(__int64 **)(v15 + 8);
    *v16 = v10;
    v17 = *(float ***)(v10 + 8);
    *v17 = v12;
    v18 = (__int64 *)*((_QWORD *)v12 + 1);
    *v18 = v15;
    *((_QWORD *)v12 + 1) = v17;
    *(_QWORD *)(v10 + 8) = v16;
    *(_QWORD *)(v15 + 8) = v18;
    if ( v10 != v11 )
    {
      while ( 1 )
      {
        v19 = *(__int64 **)v12;
        if ( v19 == (__int64 *)v10 )
          break;
        if ( (unsigned __int8)lambda_0c3994cbe405861b61e36de8c3dd15dd_::operator()(v17, v10 + 16, v19 + 2) )
          goto LABEL_16;
      }
    }
    goto LABEL_9;
  }
  return *a1;
}
