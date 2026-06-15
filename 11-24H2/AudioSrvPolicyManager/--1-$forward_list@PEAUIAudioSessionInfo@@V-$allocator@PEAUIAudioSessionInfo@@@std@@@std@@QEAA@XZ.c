/*
 * XREFs of ??1?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAA@XZ @ 0x1800284FC
 * Callers:
 *     _CDuckingManager::CDuckingManager_::_1_::dtor$2 @ 0x18004A4D7 (_CDuckingManager--CDuckingManager_--_1_--dtor$2.c)
 *     _CDuckingManager::ForEachDuckableSession_::_1_::dtor$0 @ 0x18004A79C (_CDuckingManager--ForEachDuckableSession_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015F70 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::forward_list<IAudioSessionInfo *>::~forward_list<IAudioSessionInfo *>(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rbx

  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    do
    {
      v2 = (_QWORD *)*result;
      std::_Deallocate<16,0>(result, (const struct std::nothrow_t *)0x10);
      result = v2;
    }
    while ( v2 );
  }
  return result;
}
