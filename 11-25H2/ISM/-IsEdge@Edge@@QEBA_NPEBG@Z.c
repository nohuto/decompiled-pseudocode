/*
 * XREFs of ?IsEdge@Edge@@QEBA_NPEBG@Z @ 0x1801A2A9C
 * Callers:
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1801A22E8 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ?FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z @ 0x1801A235C (-FindEdgeWithInteraction@Edges@@AEBAHPEBGI@Z.c)
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801A3078 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801A316C (-Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Edge::IsEdge(Edge *this, const unsigned __int16 *a2)
{
  char *v2; // rcx

  v2 = (char *)this + 8;
  if ( *((_QWORD *)v2 + 3) > 7uLL )
    v2 = *(char **)v2;
  return _o__wcsicmp((const wchar_t *)v2, a2) == 0;
}
