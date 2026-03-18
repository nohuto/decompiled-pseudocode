/*
 * XREFs of ?CanTunnelToLayer@CBatchOptimizer@@AEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@HPEAH@Z @ 0x1801B6B40
 * Callers:
 *     ?AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180295158 (-AddRenderingCommand@CBatchOptimizer@@QEAA_N$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete.c)
 * Callees:
 *     <none>
 */

char __fastcall CBatchOptimizer::CanTunnelToLayer(__int64 a1, float *a2, int a3, _DWORD *a4)
{
  int v4; // ebx
  __int64 v5; // r8
  int *v8; // r11
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  float *i; // rcx

  v4 = a3 - 1;
  v5 = v4;
  v8 = (int *)(a1 + 48 + 4LL * v4);
LABEL_2:
  if ( v5 == *a4 )
    return 1;
  v9 = 0LL;
  v10 = a1 + 520LL * *v8;
  v11 = *(int *)(v10 + 100);
  for ( i = (float *)(v10 + 284); ; i += 4 )
  {
    if ( v9 == v11 )
    {
      --v4;
      --v5;
      --v8;
      goto LABEL_2;
    }
    if ( a2[2] >= *(i - 1) && i[1] >= *a2 && a2[3] >= *i && i[2] >= a2[1] )
      break;
    ++v9;
  }
  *a4 = v4;
  return 0;
}
