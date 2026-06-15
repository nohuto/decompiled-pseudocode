/*
 * XREFs of ?GetCurrentLoopbackEndpointId@CSharedStreamGroupProxy@@IEAAJPEAPEAGPEA_N@Z @ 0x1800F65D8
 * Callers:
 *     ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x1800F64E0 (-GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAGPEA_N@Z @ 0x1800F661C (-GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAGPEA_N@Z.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::GetCurrentLoopbackEndpointId(
        unsigned __int16 **this,
        unsigned __int16 **a2,
        bool *a3)
{
  int CurrentLoopbackEndpointIdInternal; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CurrentLoopbackEndpointIdInternal = GetCurrentLoopbackEndpointIdInternal(this[37], a2, a3);
  v4 = CurrentLoopbackEndpointIdInternal;
  if ( CurrentLoopbackEndpointIdInternal >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x842,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)CurrentLoopbackEndpointIdInternal);
  return v4;
}
