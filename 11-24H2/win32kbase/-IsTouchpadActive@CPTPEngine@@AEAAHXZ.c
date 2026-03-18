/*
 * XREFs of ?IsTouchpadActive@CPTPEngine@@AEAAHXZ @ 0x1400CD1A8
 * Callers:
 *     ?DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB07C (-DoFinalProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB6F0 (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessTimer@CPTPEngine@@MEAAJXZ @ 0x1400CD140 (-ProcessTimer@CPTPEngine@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::IsTouchpadActive(CPTPEngine *this)
{
  int v1; // eax
  unsigned int v2; // edx
  unsigned int i; // r8d

  v1 = *((_DWORD *)this + 768);
  if ( (v1 & 1) != 0 )
    return 1;
  if ( (v1 & 2) != 0 )
    return 1;
  if ( (v1 & 4) != 0 )
    return 1;
  v2 = 0;
  if ( *((_DWORD *)this + 762) )
  {
    return 1;
  }
  else
  {
    for ( i = 0; i < 6; ++i )
    {
      if ( (*((_DWORD *)this + 82 * i + 204) & 0x20000000) != 0 )
        return 1;
    }
  }
  return v2;
}
