/*
 * XREFs of ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x18019DC9C
 * Callers:
 *     ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18019D240 (-EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x18019DB48 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExtendMode::ToD2D1ExtendMode(char a1)
{
  if ( !a1 || a1 == 1 )
    return 0LL;
  if ( a1 != 2 )
  {
    if ( a1 == 3 )
      return 2LL;
    return 0LL;
  }
  return 1LL;
}
