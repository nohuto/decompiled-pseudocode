/*
 * XREFs of ??1_Flist_node_remove_op@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAA@XZ @ 0x18001EE90
 * Callers:
 *     _std::forward_list_IAudioSessionInfo___std::allocator_IAudioSessionInfo_____::remove_if__lambda_6c758f270a739346e4977fa18103cf5e____::_1_::dtor$0 @ 0x18004C4AC (_std--forward_list_IAudioSessionInfo___std--allocator_IAudioSessionInfo_____--remove_if__lambda_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015D50 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::forward_list<IAudioSessionInfo *>::_Flist_node_remove_op::~_Flist_node_remove_op(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rbx

  v1 = *(_QWORD **)(a1 + 8);
  if ( v1 )
  {
    do
    {
      v2 = (_QWORD *)*v1;
      std::_Deallocate<16,0>(v1, (const struct std::nothrow_t *)0x10);
      v1 = v2;
    }
    while ( v2 );
  }
}
