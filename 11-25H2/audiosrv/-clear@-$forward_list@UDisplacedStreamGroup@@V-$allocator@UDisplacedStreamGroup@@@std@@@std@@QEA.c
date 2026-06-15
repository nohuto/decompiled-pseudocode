/*
 * XREFs of ?clear@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAXXZ @ 0x1800DDB54
 * Callers:
 *     ??1?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAA@XZ @ 0x1800D3590 (--1-$forward_list@UDisplacedStreamGroup@@V-$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAA@XZ.c)
 *     ?MoveDisplacedPrimaryProfileStreamGroupsToSaDevice@CBtAudioResourceManagerBase@@IEAAJPEAUISaDeviceProxy@@@Z @ 0x1800D93CC (-MoveDisplacedPrimaryProfileStreamGroupsToSaDevice@CBtAudioResourceManagerBase@@IEAAJPEAUISaDevi.c)
 *     ?ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@W4ReconnectSaDeviceOptions@1@@Z @ 0x1800D9920 (-ReconnectStreamGroupsToNewSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristi.c)
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800D9B1C (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 *     ?ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ @ 0x1800DA3F0 (-ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DB3BC (-RestoreDisplacedPrimaryProfileStreamGroups@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?RestoreDisplacedPrimaryProfileStreamGroups_Old@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DC2E0 (-RestoreDisplacedPrimaryProfileStreamGroups_Old@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ??1CBtAudioResourceManagerBase@@QEAA@XZ @ 0x1800EC80C (--1CBtAudioResourceManagerBase@@QEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1DisplacedStreamGroup@@QEAA@XZ @ 0x1800D36EC (--1DisplacedStreamGroup@@QEAA@XZ.c)
 */

void __fastcall std::forward_list<DisplacedStreamGroup>::clear(SaDeviceParams ***a1)
{
  SaDeviceParams **v1; // rdi
  SaDeviceParams **v2; // rbx

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    do
    {
      v2 = (SaDeviceParams **)*v1;
      DisplacedStreamGroup::~DisplacedStreamGroup(v1 + 1);
      std::_Deallocate<16,0>((char *)v1, (const struct std::nothrow_t *)0x30);
      v1 = v2;
    }
    while ( v2 );
  }
}
