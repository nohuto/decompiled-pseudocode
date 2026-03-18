/*
 * XREFs of ACPIIoctlEnumChildren @ 0x140049858
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1400101A0 (ACPIIrpDispatchDeviceControl.c)
 *     ACPIThermalDeviceControl @ 0x140037210 (ACPIThermalDeviceControl.c)
 *     ACPIProcessorDeviceControl @ 0x1400B48A0 (ACPIProcessorDeviceControl.c)
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1400463D4 (ACPIIoctlEnumChildrenPopulateOutputBuffer.c)
 *     AMLIFindNameSpaceObject @ 0x14004C134 (AMLIFindNameSpaceObject.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ACPIIoctlEnumChildren(ULONG_PTR a1, IRP *a2, __int64 a3)
{
  bool v4; // cf
  int v5; // ebx
  unsigned int v6; // r13d
  _IRP *MasterIrp; // r15
  int v8; // ebx
  int MdlAddress; // ecx
  unsigned int v10; // ebx
  size_t MdlAddress_low; // rdi
  char *Pool2; // rax
  char *v13; // rsi
  char *v14; // rax
  PVOID *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h]

  a2->IoStatus.Information = 0LL;
  v4 = *(_DWORD *)(a3 + 16) < 0x10u;
  v19 = 0;
  if ( v4 )
  {
    v5 = -1073741820;
    goto LABEL_32;
  }
  v6 = *(_DWORD *)(a3 + 8);
  if ( v6 < 0x14 )
  {
    v5 = -1073741789;
    goto LABEL_32;
  }
  v20 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
  if ( !v20 )
  {
    v5 = -1073741810;
    goto LABEL_32;
  }
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( *(_DWORD *)&MasterIrp->Type != 1214866753 )
  {
    v5 = -1073741585;
    goto LABEL_32;
  }
  v8 = *(_DWORD *)&MasterIrp->AllocationProcessorNumber;
  MdlAddress = (int)MasterIrp->MdlAddress;
  if ( (MasterIrp->AllocationProcessorNumber & 3) == 3 || (v8 & 7) == 0 || (v8 & 4) != 0 && !MdlAddress )
  {
    v5 = -1072431089;
    goto LABEL_32;
  }
  v10 = *(_DWORD *)&MasterIrp->AllocationProcessorNumber & 1;
  if ( MdlAddress )
  {
    MdlAddress_low = LODWORD(MasterIrp->MdlAddress);
    Pool2 = (char *)ExAllocatePool2(64LL, MdlAddress_low, 1383097153LL);
    v13 = Pool2;
    if ( !Pool2 )
    {
LABEL_15:
      v5 = -1073741670;
      goto LABEL_32;
    }
    memmove(Pool2, (char *)&MasterIrp->MdlAddress + 4, MdlAddress_low);
    _strupr(v13);
  }
  else
  {
    v14 = (char *)ExAllocatePool2(64LL, 2LL, 1383097153LL);
    v13 = v14;
    if ( !v14 )
      goto LABEL_15;
    *v14 = 0;
    v10 |= 2u;
  }
  v15 = (PVOID *)ExAllocatePool2(64LL, 40LL, 1383097153LL);
  if ( v15 )
  {
    v16 = ExAllocatePool2(64LL, 40LL, 1383097153LL);
    v15[1] = (PVOID)v16;
    if ( v16 )
    {
      v5 = AMLIFindNameSpaceObject(v20, v15, v10, v13);
      if ( v5 >= 0 )
      {
        v5 = ACPIIoctlEnumChildrenPopulateOutputBuffer(MasterIrp, v6, (int *)&v19, (__int64)v15);
        a2->IoStatus.Information = v19;
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  else
  {
    v5 = -1073741670;
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0x52706341u);
  if ( v15 )
  {
    v17 = (__int64)v15[1];
    if ( v17 )
    {
      dword_140089138 = 0;
      pszDest = 0;
      FreeDataBuffs(v17, 1u);
      ExFreePoolWithTag(v15[1], 0x52706341u);
      v15[1] = 0LL;
    }
    dword_140089138 = 0;
    pszDest = 0;
    FreeDataBuffs((__int64)v15, 1u);
    ExFreePoolWithTag(v15, 0x52706341u);
  }
LABEL_32:
  a2->IoStatus.Status = v5;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v5;
}
