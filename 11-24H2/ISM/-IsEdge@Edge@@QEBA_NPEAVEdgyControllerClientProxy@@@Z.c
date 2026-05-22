/*
 * XREFs of ?IsEdge@Edge@@QEBA_NPEAVEdgyControllerClientProxy@@@Z @ 0x1801AA094
 * Callers:
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AA40C (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AA688 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Edge::IsEdge(struct EdgyControllerClientProxy **this, struct EdgyControllerClientProxy *a2)
{
  bool result; // al

  result = 0;
  if ( a2 )
    return a2 == this[5];
  return result;
}
