/*
 * XREFs of RaidFreeATADeviceIdMappings @ 0x14006F394
 * Callers:
 *     DllUnload @ 0x1400A5120 (DllUnload.c)
 * Callees:
 *     <none>
 */

void RaidFreeATADeviceIdMappings()
{
  PVOID *v0; // rbx
  __int64 v1; // rax

  while ( 1 )
  {
    v0 = *(PVOID **)&WPP_MAIN_CB.SectorSize;
    if ( *(struct _DEVICE_OBJECT **)&WPP_MAIN_CB.SectorSize == (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize )
      break;
    if ( *(struct _DEVICE_OBJECT **)(*(_QWORD *)&WPP_MAIN_CB.SectorSize + 8LL) != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.SectorSize
      || (v1 = **(_QWORD **)&WPP_MAIN_CB.SectorSize,
          *(_QWORD *)(**(_QWORD **)&WPP_MAIN_CB.SectorSize + 8LL) != *(_QWORD *)&WPP_MAIN_CB.SectorSize) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)&WPP_MAIN_CB.SectorSize = **(_QWORD **)&WPP_MAIN_CB.SectorSize;
    *(_QWORD *)(v1 + 8) = &WPP_MAIN_CB.SectorSize;
    ExFreePoolWithTag(v0[3], 0x48536152u);
    ExFreePoolWithTag(v0, 0x48536152u);
  }
}
