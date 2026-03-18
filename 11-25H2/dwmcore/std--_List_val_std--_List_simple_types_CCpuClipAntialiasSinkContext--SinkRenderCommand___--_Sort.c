/*
 * XREFs of std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___ @ 0x1800922B8
 * Callers:
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___ @ 0x1800922B8 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Sort.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x18009309C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800A9050 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800A9D30 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___ @ 0x1800922B8 (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderCommand___--_Sort.c)
 *     _lambda_0c3994cbe405861b61e36de8c3dd15dd_::operator() @ 0x1801FA21C (_lambda_0c3994cbe405861b61e36de8c3dd15dd_--operator().c)
 */

__int64 __fastcall std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  float *v9; // r10
  float v10; // xmm1_4
  __int64 v11; // r11
  __int64 v12; // r8
  __int64 *v13; // rdx
  float **v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // r10
  __int64 v17; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    if ( a2 == 1 )
      return *(_QWORD *)*a1;
    v5 = a2 >> 1;
    v17 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
            a1,
            a2 >> 1);
    v6 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_0c3994cbe405861b61e36de8c3dd15dd___(
           &v17,
           a2 - v5);
    v7 = v17;
    v8 = v6;
    v9 = (float *)*a1;
    v10 = *(float *)(v17 + 24);
    if ( *(float *)(*a1 + 28) <= v10 || *(float *)(v17 + 28) <= v9[6] )
    {
      if ( v9[6] <= v10 )
      {
LABEL_7:
        v11 = *a1;
        while ( 1 )
        {
          v9 = *(float **)v9;
          if ( v9 == (float *)v17 )
            break;
          if ( v9[7] <= v10 || *(float *)(v17 + 28) <= v9[6] )
          {
            if ( v9[6] > v10 )
              goto LABEL_16;
          }
          else if ( *(_DWORD *)(v17 + 16) < *((_DWORD *)v9 + 4) )
          {
            goto LABEL_16;
          }
        }
LABEL_9:
        *a1 = v11;
        return v8;
      }
    }
    else if ( *(_DWORD *)(v17 + 16) >= *((_DWORD *)v9 + 4) )
    {
      goto LABEL_7;
    }
    v11 = v17;
LABEL_16:
    v12 = v7;
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( v7 == v8 )
        break;
      if ( v9[7] <= *(float *)(v7 + 24) || *(float *)(v7 + 28) <= v9[6] )
      {
        if ( v9[6] <= *(float *)(v7 + 24) )
          break;
      }
      else if ( *(_DWORD *)(v7 + 16) >= *((_DWORD *)v9 + 4) )
      {
        break;
      }
    }
    v13 = *(__int64 **)(v12 + 8);
    *v13 = v7;
    v14 = *(float ***)(v7 + 8);
    *v14 = v9;
    v15 = (__int64 *)*((_QWORD *)v9 + 1);
    *v15 = v12;
    *((_QWORD *)v9 + 1) = v14;
    *(_QWORD *)(v7 + 8) = v13;
    *(_QWORD *)(v12 + 8) = v15;
    if ( v7 != v8 )
    {
      while ( 1 )
      {
        v16 = *(__int64 **)v9;
        if ( v16 == (__int64 *)v7 )
          break;
        if ( (unsigned __int8)lambda_0c3994cbe405861b61e36de8c3dd15dd_::operator()(v14, v7 + 16, v16 + 2) )
          goto LABEL_16;
      }
    }
    goto LABEL_9;
  }
  return *a1;
}
