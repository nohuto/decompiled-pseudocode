/*
 * XREFs of ?GetAudioFormat@@YAXPEAUIAudioMediaType@@PEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000EEA4
 * Callers:
 *     ?CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCache@@@Z @ 0x14000D58C (-CreateConnection@CConnectionNode@@QEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEAUIDeviceGraphObjectCac.c)
 *     ?AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEBUDEVICE_GRAPH_CONNECTION_DESCRIPTOR@@PEAPEAUIDeviceGraphConnectionBuffer@@@Z @ 0x140010510 (-AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEBUDEVICE_GRAPH_CONNECTION_DESCRIPTOR@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall GetAudioFormat(struct IAudioMediaType *a1, struct _UNCOMPRESSEDAUDIOFORMAT *a2)
{
  unsigned __int16 *v3; // rdx
  DWORD v4; // eax

  v3 = (unsigned __int16 *)((__int64 (__fastcall *)(struct IAudioMediaType *))a1->lpVtbl->GetAudioFormat)(a1);
  a2->dwSamplesPerFrame = v3[1];
  a2->dwBytesPerSampleContainer = v3[7] >> 3;
  a2->fFramesPerSecond = (float)*((int *)v3 + 1);
  if ( *v3 == 0xFFFE )
  {
    a2->guidFormatType = *(GUID *)(v3 + 12);
    a2->dwValidBitsPerSample = v3[9];
    v4 = *((_DWORD *)v3 + 5);
  }
  else
  {
    a2->guidFormatType = GUID_00000001_0000_0010_8000_00aa00389b71;
    a2->guidFormatType.Data1 = *v3;
    a2->dwValidBitsPerSample = v3[7];
    v4 = 1;
    if ( v3[1] != 1 )
    {
      v4 = 0;
      if ( v3[1] == 2 )
        v4 = 3;
    }
  }
  a2->dwChannelMask = v4;
}
