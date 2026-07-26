/*
 * XREFs of NdisMapFile @ 0x140172AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 */

void __stdcall NdisMapFile(PNDIS_STATUS Status, PVOID *MappedBuffer, NDIS_HANDLE FileHandle)
{
  PVOID *v4; // rsi
  int v6; // eax
  void *v7; // rax

  v4 = MappedBuffer;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MappedBuffer) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MappedBuffer,
      1,
      20,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids);
  }
  if ( *((_BYTE *)FileHandle + 16) == 1 )
  {
    v6 = -1073676259;
  }
  else
  {
    v7 = *(void **)FileHandle;
    *((_BYTE *)FileHandle + 16) = 1;
    *v4 = v7;
    v6 = 0;
  }
  *Status = v6;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MappedBuffer) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MappedBuffer,
      1,
      21,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
      v6);
  }
}
