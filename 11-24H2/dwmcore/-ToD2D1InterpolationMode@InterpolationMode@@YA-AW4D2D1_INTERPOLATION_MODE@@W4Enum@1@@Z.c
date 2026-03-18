/*
 * XREFs of ?ToD2D1InterpolationMode@InterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z @ 0x180063968
 * Callers:
 *     ?EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z @ 0x18006238C (-EmitWarpFastPathGeometry@CRenderingBatchCommand@@AEBAXPEAVCD3DBatchExecutionContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InterpolationMode::ToD2D1InterpolationMode(char a1)
{
  if ( !a1 )
    return 0LL;
  if ( a1 == 2 )
    return 3LL;
  return 1LL;
}
