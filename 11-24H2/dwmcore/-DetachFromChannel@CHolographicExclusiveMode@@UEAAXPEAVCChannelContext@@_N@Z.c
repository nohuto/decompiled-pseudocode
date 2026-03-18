/*
 * XREFs of ?DetachFromChannel@CHolographicExclusiveMode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1802D1770
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x1802CFAF4 (-RemoveExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z.c)
 */

void __fastcall CHolographicExclusiveMode::DetachFromChannel(
        CHolographicExclusiveMode *this,
        struct CChannelContext *a2,
        __int64 a3)
{
  CHolographicManager *v4; // rcx

  v4 = (CHolographicManager *)*((_QWORD *)this + 10);
  if ( v4 )
    CHolographicManager::RemoveExclusiveModeProxy(v4, this, a3);
  CResource::DetachFromChannel(this, a2);
}
