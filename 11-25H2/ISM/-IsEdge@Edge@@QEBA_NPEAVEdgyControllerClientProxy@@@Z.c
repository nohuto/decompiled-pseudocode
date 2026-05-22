/*
 * XREFs of ?IsEdge@Edge@@QEBA_NPEAVEdgyControllerClientProxy@@@Z @ 0x1801A2A84
 * Callers:
 *     ?Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A2DFC (-Remove@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A3078 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
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
