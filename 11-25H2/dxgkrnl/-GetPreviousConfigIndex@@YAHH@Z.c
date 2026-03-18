/*
 * XREFs of ?GetPreviousConfigIndex@@YAHH@Z @ 0x140394CA4
 * Callers:
 *     ?RemovePlaneConfig@@YAXPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@H@Z @ 0x140198460 (-RemovePlaneConfig@@YAXPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@H@Z.c)
 *     ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x140198574 (-RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z.c)
 *     ?ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z @ 0x14039498C (-ReplaceDisplayedAllocation@ADAPTER_DISPLAY@@QEAAXPEBVDXGALLOCATION@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPreviousConfigIndex(int a1)
{
  unsigned int v2; // ecx
  __int64 result; // rax

  if ( a1 == -1 )
    return 0LL;
  v2 = a1 - 1;
  result = 1LL;
  if ( a1 )
    return v2;
  return result;
}
