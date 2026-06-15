/*
 * XREFs of ??1?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAA@XZ @ 0x1800DADD0
 * Callers:
 *     _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$11 @ 0x18016EA0A (_CBtAudioResourceManagerBase--RefreshStreamsOnDevice_--_1_--dtor$11.c)
 *     _CBtAudioResourceManagerBase::RefreshStreamsOnDevice_::_1_::dtor$12 @ 0x18016EA1C (_CBtAudioResourceManagerBase--RefreshStreamsOnDevice_--_1_--dtor$12.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$2 @ 0x18016EB66 (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$2.c)
 *     _CBtAudioResourceManagerBase::RestoreDisplacedPrimaryProfileStreamGroups_::_1_::dtor$7 @ 0x18016EB9C (_CBtAudioResourceManagerBase--RestoreDisplacedPrimaryProfileStreamGroups_--_1_--dtor$7.c)
 *     _CBtAudioResourceManagerBase::CBtAudioResourceManagerBase_::_1_::dtor$5 @ 0x18016FAA9 (_CBtAudioResourceManagerBase--CBtAudioResourceManagerBase_--_1_--dtor$5.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 std::forward_list<DisplacedStreamGroup>::~forward_list<DisplacedStreamGroup>()
{
  return std::forward_list<DisplacedStreamGroup>::clear();
}
