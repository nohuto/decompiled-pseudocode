/*
 * XREFs of ?ShouldNotify@CInteractionTracker@@AEAA_NI@Z @ 0x18003E410
 * Callers:
 *     ?SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z @ 0x18003E2B8 (-SendValuesChangedCallbackIfNecessary@CInteractionTracker@@AEAA_NUD2DVector3@@M_N@Z.c)
 *     ?NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z @ 0x180257514 (-NotifyRequestIgnored@CInteractionTracker@@AEAAXH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::ShouldNotify(CInteractionTracker *this, unsigned int a2)
{
  __int64 v2; // rax
  bool result; // al
  int v4; // eax

  v2 = *((_QWORD *)this + 7);
  result = 0;
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 108) )
    {
      if ( *((_DWORD *)this + 18) )
      {
        v4 = *((_DWORD *)this + 48);
        if ( _bittest(&v4, a2) )
          return 1;
      }
    }
  }
  return result;
}
