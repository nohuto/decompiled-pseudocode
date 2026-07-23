/*
 * XREFs of FsRtlInitializeTunnels @ 0x140C1B060
 * Callers:
 *     FsRtlInitSystem @ 0x140C1AD7C (FsRtlInitSystem.c)
 * Callees:
 *     FsRtlGetTunnelParameterValue @ 0x140708468 (FsRtlGetTunnelParameterValue.c)
 *     ExInitializePagedLookasideList @ 0x140A914C0 (ExInitializePagedLookasideList.c)
 */

void FsRtlInitializeTunnels()
{
  USHORT Depth; // ax
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF

  *(_DWORD *)(&ValueName.MaximumLength + 1) = 0;
  if ( (_BYTE)dword_140FC521C )
    TunnelMaxEntries = 1024;
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"MaximumTunnelEntries";
  FsRtlGetTunnelParameterValue(&ValueName, &TunnelMaxEntries);
  *(_DWORD *)&ValueName.Length = 4063292;
  ValueName.Buffer = L"MaximumTunnelEntryAgeInSeconds";
  FsRtlGetTunnelParameterValue(&ValueName, &TunnelMaxAge);
  if ( !TunnelMaxAge )
    TunnelMaxEntries = 0;
  TunnelMaxAge *= 10000000;
  if ( (unsigned int)TunnelMaxEntries <= 0xFFFF )
  {
    Depth = (unsigned __int16)TunnelMaxEntries >> 4;
    if ( !((unsigned __int16)TunnelMaxEntries >> 4) )
    {
      if ( !TunnelMaxEntries )
        goto LABEL_12;
      Depth = TunnelMaxEntries + 1;
    }
    if ( Depth > 0x100u )
      Depth = 256;
  }
  else
  {
    Depth = 256;
  }
LABEL_12:
  ExInitializePagedLookasideList(&TunnelLookasideList, 0LL, 0LL, 0, 0xB0uLL, 0x4C6E7554u, Depth);
}
