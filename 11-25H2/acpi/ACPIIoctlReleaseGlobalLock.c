/*
 * XREFs of ACPIIoctlReleaseGlobalLock @ 0x14004A868
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1400101A0 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     ACPIReleaseGlobalLock @ 0x140022EA0 (ACPIReleaseGlobalLock.c)
 */

__int64 __fastcall ACPIIoctlReleaseGlobalLock(__int64 a1, IRP *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v6; // edi
  _IRP *MasterIrp; // rbx
  _MDL *MdlAddress; // rbx

  v4 = *(_DWORD *)(a3 + 16);
  a2->IoStatus.Information = 0LL;
  if ( v4 >= 0x10 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( *(_DWORD *)&MasterIrp->Type == 1281847873 )
    {
      MdlAddress = MasterIrp->MdlAddress;
      v6 = ACPIReleaseGlobalLock((__int64)MdlAddress, (__int64)a2, a3, a4);
      ExFreePoolWithTag(MdlAddress, 0x4C706341u);
    }
    else
    {
      v6 = -1073741585;
    }
  }
  else
  {
    v6 = -1073741820;
  }
  a2->IoStatus.Status = v6;
  IofCompleteRequest(a2, 0);
  return v6;
}
