/*
 * XREFs of ?DetachFromChannel@CHolographicExclusiveMode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802DAA10
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x1802D8D94 (-RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 */

void __fastcall CHolographicExclusiveMode::DetachFromChannel(
        CHolographicExclusiveMode *this,
        struct CChannelContext *a2)
{
  CHolographicManager *v3; // rcx

  v3 = (CHolographicManager *)*((_QWORD *)this + 10);
  if ( v3 )
    CHolographicManager::RemoveExclusiveModeProxy(v3, this);
  CResource::DetachFromChannel(this, a2);
}
