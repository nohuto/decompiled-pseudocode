/*
 * XREFs of std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___ @ 0x18009244C
 * Callers:
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___ @ 0x18009244C (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderComm_ea_18009244C.c)
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x18009309C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800A9050 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z @ 0x1800A9D30 (-PopCpuClipFromScope@CScopedClipStack@@QEAAXPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___ @ 0x18009244C (std--_List_val_std--_List_simple_types_CCpuClipAntialiasSinkContext--SinkRenderComm_ea_18009244C.c)
 */

__int64 __fastcall std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 *v7; // r8
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // r11
  __int64 *v12; // rdx
  __int64 **v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return *a1;
  if ( a2 == 1 )
    return *(_QWORD *)*a1;
  v5 = a2 >> 1;
  v15 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___(
          a1,
          a2 >> 1);
  v6 = std::_List_val_std::_List_simple_types_CCpuClipAntialiasSinkContext::SinkRenderCommand___::_Sort__lambda_894843b827d9c4fe3ec8d7f4d554a50c___(
         &v15,
         a2 - v5);
  v7 = (__int64 *)*a1;
  v8 = v6;
  v9 = v15;
  if ( *(float *)(*a1 + 24) > *(float *)(v15 + 24) )
  {
    v10 = v15;
LABEL_9:
    v11 = v9;
    do
      v9 = *(_QWORD *)v9;
    while ( v9 != v8 && *((float *)v7 + 6) > *(float *)(v9 + 24) );
    v12 = *(__int64 **)(v11 + 8);
    *v12 = v9;
    v13 = *(__int64 ***)(v9 + 8);
    *v13 = v7;
    v14 = (__int64 *)v7[1];
    *v14 = v11;
    v7[1] = (__int64)v13;
    *(_QWORD *)(v9 + 8) = v12;
    *(_QWORD *)(v11 + 8) = v14;
    if ( v9 != v8 )
    {
      while ( 1 )
      {
        v7 = (__int64 *)*v7;
        if ( v7 == (__int64 *)v9 )
          break;
        if ( *((float *)v7 + 6) > *(float *)(v9 + 24) )
          goto LABEL_9;
      }
    }
  }
  else
  {
    v10 = *a1;
    while ( 1 )
    {
      v7 = (__int64 *)*v7;
      if ( v7 == (__int64 *)v15 )
        break;
      if ( *((float *)v7 + 6) > *(float *)(v15 + 24) )
        goto LABEL_9;
    }
  }
  *a1 = v10;
  return v8;
}
