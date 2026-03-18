/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@std@@V?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@stdext@@V?$move_iterator@PEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@@0@0V12@@Z @ 0x1801E2924
 * Callers:
 *     ?reserve_region@?$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V?$buffer_impl@USinkRenderParameters@CCpuClipAntialiasSinkContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSinkRenderParameters@CCpuClipAntialiasSinkContext@@_K0@Z @ 0x18014A2A0 (-reserve_region@-$vector_facade@USinkRenderParameters@CCpuClipAntialiasSinkContext@@V-$buffer_im.c)
 *     ?AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z @ 0x18014A5F0 (-AddCpuClipAntialiasDrawList@CDrawingContext@@QEAAJPEAVCDrawListEntry@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>,stdext::checked_array_iterator<CCpuClipAntialiasSinkContext::SinkRenderParameters *>>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4)
{
  signed __int64 v6; // r10
  __int64 *v7; // rdx
  __int64 i; // r9
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // xmm1_8

  v6 = 0xCCCCCCCCCCCCCCCDuLL * (((__int64)a3 - a2) >> 3);
  if ( v6 < 0 )
  {
    if ( a4[2] >= (unsigned __int64)(0x3333333333333333LL * (((__int64)a3 - a2) >> 3)) )
      goto LABEL_4;
LABEL_9:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v6 > 0 && a4[1] - a4[2] < (unsigned __int64)v6 )
    goto LABEL_9;
LABEL_4:
  v7 = (__int64 *)(a2 + 16);
  for ( i = *a4 + 40LL * a4[2]; ; i += 40LL )
  {
    v9 = v7 - 2;
    if ( v7 - 2 == a3 )
      break;
    v10 = *v9;
    *v9 = 0LL;
    *(_QWORD *)i = v10;
    *(_DWORD *)(i + 8) = *((_DWORD *)v7 - 2);
    *(_DWORD *)(i + 12) = *((_DWORD *)v7 - 1);
    v11 = *v7;
    *v7 = 0LL;
    *(_QWORD *)(i + 16) = v11;
    v12 = v7[1];
    v7[1] = 0LL;
    *(_QWORD *)(i + 24) = v12;
    *(_BYTE *)(i + 32) = *((_BYTE *)v7 + 16);
    *(_BYTE *)(i + 33) = *((_BYTE *)v7 + 17);
    v7 += 5;
  }
  result = a1;
  a4[2] = 0xCCCCCCCCCCCCCCCDuLL * ((i - *a4) >> 3);
  v14 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v14;
  return result;
}
