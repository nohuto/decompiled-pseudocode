/*
 * XREFs of RawQueryVolumeInformation @ 0x1408ADF94
 * Callers:
 *     RawDispatch @ 0x1408AD4A0 (RawDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     RawQueryFsDeviceInfo @ 0x14077CA74 (RawQueryFsDeviceInfo.c)
 *     RawQueryFsVolumeInfo @ 0x1408AE090 (RawQueryFsVolumeInfo.c)
 *     FsRtlGetSectorSizeInformation @ 0x14094E860 (FsRtlGetSectorSizeInformation.c)
 *     RawQueryFsSizeInfo @ 0x140A86008 (RawQueryFsSizeInfo.c)
 */

__int64 __fastcall RawQueryVolumeInformation(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 MasterIrp; // r8
  int v7; // eax
  int SectorSizeInformation; // ebx
  unsigned int v9; // eax
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_DWORD *)(a3 + 8);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v11 = v3;
  switch ( *(_DWORD *)(a3 + 16) )
  {
    case 1:
      v7 = RawQueryFsVolumeInfo(a1, *(_QWORD *)(a3 + 48), MasterIrp, &v11);
LABEL_3:
      v3 = v11;
      SectorSizeInformation = v7;
      break;
    case 3:
      v7 = RawQueryFsSizeInfo(a1, *(_QWORD *)(a3 + 48), MasterIrp, &v11);
      goto LABEL_3;
    case 4:
      v7 = RawQueryFsDeviceInfo(a1, *(_QWORD *)(a3 + 48), MasterIrp, &v11);
      goto LABEL_3;
    case 5:
      if ( v3 < 0x12 )
      {
        SectorSizeInformation = -2147483643;
      }
      else
      {
        *(_DWORD *)MasterIrp = 0;
        v3 -= 18;
        *(_DWORD *)(MasterIrp + 4) = 0;
        *(_DWORD *)(MasterIrp + 8) = 6;
        SectorSizeInformation = 0;
        *(_DWORD *)(MasterIrp + 12) = *(_DWORD *)L"RAW";
        *(_WORD *)(MasterIrp + 16) = aRaw[2];
      }
      break;
    case 0xB:
      SectorSizeInformation = FsRtlGetSectorSizeInformation(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 200) + 16LL));
      if ( SectorSizeInformation >= 0 )
        v3 -= 28;
      break;
    default:
      SectorSizeInformation = -1073741811;
      break;
  }
  v9 = *(_DWORD *)(a3 + 8) - v3;
  a2->IoStatus.Status = SectorSizeInformation;
  a2->IoStatus.Information = v9;
  IofCompleteRequest(a2, 1);
  return (unsigned int)SectorSizeInformation;
}
