/*
 * XREFs of ??1?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAA@XZ @ 0x1800D3590
 * Callers:
 *     _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$11 @ 0x180165350 (_CBtAudioResourceManagerBase--RefreshStreamsOnDevice_--_1_--dtor$11.c)
 *     _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$12 @ 0x180165362 (_CBtAudioResourceManagerBase--RefreshStreamsOnDevice_--_1_--dtor$12.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_Old_::_1_::dtor$6 @ 0x180165470 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_Old_--_1_--dtor$6.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$7 @ 0x1801654B8 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$7.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$5 @ 0x180166459 (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::forward_list<DisplacedStreamGroup>::~forward_list<DisplacedStreamGroup>()
{
  return std::forward_list<DisplacedStreamGroup>::clear();
}
