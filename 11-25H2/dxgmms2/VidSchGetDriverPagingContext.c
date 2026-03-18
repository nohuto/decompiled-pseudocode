/*
 * XREFs of VidSchGetDriverPagingContext @ 0x1400F4C20
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1400AE064 (VidSchiSubmitPagingCommand.c)
 *     ?SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1400BD134 (-SetupForBuildPagingBuffer@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDriverPagingContext(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)(a1[41] + 8LL * a2);
  if ( v3 )
    return *(_QWORD *)(v3 + 48);
  if ( a3 )
    v4 = a1[43];
  else
    v4 = a1[40];
  return *(_QWORD *)(*(_QWORD *)(v4 + 8LL * a2) + 64LL);
}
