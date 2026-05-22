/*
 * XREFs of ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801A98F8
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A9680 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801A97A4 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 *     ?FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z @ 0x1801A98C8 (-FindEdge@Edges@@AEBAHAEBUCandidateIdentity@@@Z.c)
 *     ?OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1801AA0DC (-OnControllerGestureDirectionChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2.c)
 *     ?OnControllerGestureDistanceChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@I@Z @ 0x1801AA1CC (-OnControllerGestureDistanceChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@I@Z.c)
 *     ?OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@Internal@UI@Windows@@@Z @ 0x1801AA214 (-OnControllerRoutingChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyInputRouting@Input@.c)
 *     ?OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState@Input@Internal@UI@Windows@@@Z @ 0x1801AA28C (-OnControllerRunStateChanged@Edges@@QEAAJPEAVEdgyControllerClientProxy@@W4EdgyExperienceRunState.c)
 *     ?OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1801AA2F4 (-OnControllerVertex0Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z @ 0x1801AA380 (-OnControllerVertex1Changed@Edges@@QEAAJPEAVEdgyControllerClientProxy@@PEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AA40C (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AA5E0 (-Remove@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x1801AA0AC (-IsEdge@Edge@@QEBA_NPEBG@Z.c)
 */

__int64 __fastcall Edges::FindEdge(Edges *this, const unsigned __int16 *a2)
{
  int i; // ebx

  if ( a2 && *a2 )
  {
    for ( i = 0; i < (int)((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 7); ++i )
    {
      if ( Edge::IsEdge((Edge *)(*(_QWORD *)this + ((__int64)i << 7)), a2) )
        return (unsigned int)i;
    }
  }
  return 0xFFFFFFFFLL;
}
