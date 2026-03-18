/*
 * XREFs of ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x14001E250
 * Callers:
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x140009550 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x14000C900 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x14000DD80 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x14001DA9C (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x14004DBA0 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x14001E120 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     FxProbeAndLockWithAccess @ 0x14001E6A4 (FxProbeAndLockWithAccess.c)
 *     ?FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x140056F18 (-FxMdlFree@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     WPP_IFR_SF_Dd @ 0x140080004 (WPP_IFR_SF_Dd.c)
 *     ?FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z @ 0x1400980C4 (-FxMdlAllocateDebug@@YAPEAU_MDL@@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@PEAXKEE2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxRequestBuffer::GetOrAllocateMdl(
        FxRequestBuffer *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _MDL **Mdl,
        _MDL **MdlToFree,
        unsigned __int8 *UnlockWhenFreed,
        _LOCK_OPERATION Operation,
        unsigned __int8 ReuseMdl,
        unsigned __int64 *SizeOfMdl)
{
  _WDFMEMORY_OFFSET *Offsets; // rax
  char *v13; // r15
  signed int BufferLength; // r12d
  SIZE_T v15; // rax
  unsigned __int64 v16; // r13
  _MDL *v17; // rax
  __int64 (*GetBuffer)(void); // rax
  unsigned __int64 Memory; // r14
  SIZE_T _a1; // r15
  SIZE_T v21; // rax
  __int16 v22; // dx
  unsigned __int8 v23; // r12
  unsigned __int64 v24; // r13
  _MDL *Debug; // rax
  __int64 result; // rax
  _MDL *v27; // r9
  int _a2; // r14d
  _MDL *v29; // rax
  unsigned __int8 Irp; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  *UnlockWhenFreed = 0;
  switch ( this->DataType )
  {
    case FxRequestBufferUnspecified:
      result = 0LL;
      goto LABEL_29;
    case FxRequestBufferMemory:
      GetBuffer = (__int64 (*)(void))this->u.Memory.Memory->GetBuffer;
      if ( this->u.Memory.Offsets )
        Memory = GetBuffer() + this->u.Memory.Offsets->BufferOffset;
      else
        Memory = GetBuffer();
      if ( Memory )
        goto LABEL_21;
      goto LABEL_20;
    case FxRequestBufferMdl:
      v29 = this->u.Mdl.Mdl;
      goto LABEL_41;
    case FxRequestBufferBuffer:
LABEL_20:
      Memory = (unsigned __int64)this->u.Memory.Memory;
LABEL_21:
      _a1 = (int)FxRequestBuffer::GetBufferLength(this);
      v21 = MmSizeOfMdl((PVOID)Memory, _a1);
      v23 = ReuseMdl;
      v24 = v21;
      if ( ReuseMdl && v21 <= *SizeOfMdl )
      {
        if ( ((*MdlToFree)->MdlFlags & 0x20) != 0 )
          MmUnmapLockedPages((*MdlToFree)->MappedSystemVa, *MdlToFree);
        *Mdl = *MdlToFree;
      }
      else
      {
        v23 = 0;
        if ( *MdlToFree )
        {
          FxMdlFree(FxDriverGlobals, *MdlToFree);
          *MdlToFree = 0LL;
          if ( SizeOfMdl )
            *SizeOfMdl = 0LL;
        }
        if ( FxDriverGlobals->FxVerifierOn )
          Debug = FxMdlAllocateDebug(FxDriverGlobals, 0LL, (void *)Memory, _a1, Irp, 0, retaddr);
        else
          Debug = IoAllocateMdl((PVOID)Memory, _a1, 0, 0, 0LL);
        *Mdl = Debug;
        if ( !Debug )
        {
          WPP_IFR_SF_Dd(FxDriverGlobals, 2u, 6u, 0xAu, WPP_FxRequestBufferKm_cpp_Traceguids, _a1, -1073741670);
          return 3221225626LL;
        }
        if ( SizeOfMdl )
          *SizeOfMdl = v24;
      }
      if ( v23 == 1 )
      {
        v27 = *Mdl;
        v27->Next = 0LL;
        v27->MdlFlags = 0;
        v22 = 8 * ((((Memory & 0xFFF) + _a1 + 4095) >> 12) + 6);
        v27->Size = v22;
        v27->ByteOffset = Memory & 0xFFF;
        v27->StartVa = (void *)(Memory & 0xFFFFFFFFFFFFF000uLL);
        v27->ByteCount = _a1;
      }
      _a2 = FxProbeAndLockWithAccess(*Mdl, v22, Operation);
      if ( _a2 >= 0 )
      {
        *UnlockWhenFreed = 1;
        goto LABEL_38;
      }
      WPP_IFR_SF_qd(FxDriverGlobals, 2u, 6u, 0xBu, WPP_FxRequestBufferKm_cpp_Traceguids, *Mdl, _a2);
      if ( !v23 )
        FxMdlFree(FxDriverGlobals, *Mdl);
      result = (unsigned int)_a2;
LABEL_29:
      *Mdl = 0LL;
      return result;
  }
  if ( this->DataType != FxRequestBufferReferencedMdl )
  {
    result = 3221225485LL;
    goto LABEL_29;
  }
  Offsets = this->u.Memory.Offsets;
  if ( !Offsets || !Offsets->BufferOffset && !Offsets->BufferLength )
  {
    v29 = this->u.RefMdl.Mdl;
LABEL_41:
    *Mdl = v29;
    return 0LL;
  }
  v13 = (char *)this->u.RefMdl.Mdl->StartVa + this->u.RefMdl.Mdl->ByteOffset + Offsets->BufferOffset;
  BufferLength = FxRequestBuffer::GetBufferLength(this);
  v15 = MmSizeOfMdl(v13, BufferLength);
  v16 = v15;
  if ( ReuseMdl && v15 <= *SizeOfMdl )
  {
    if ( ((*MdlToFree)->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages((*MdlToFree)->MappedSystemVa, *MdlToFree);
    v17 = *MdlToFree;
    *Mdl = *MdlToFree;
    goto LABEL_16;
  }
  if ( *MdlToFree )
  {
    FxMdlFree(FxDriverGlobals, *MdlToFree);
    *MdlToFree = 0LL;
    if ( SizeOfMdl )
      *SizeOfMdl = 0LL;
  }
  if ( FxDriverGlobals->FxVerifierOn )
    v17 = FxMdlAllocateDebug(FxDriverGlobals, 0LL, v13, BufferLength, Irp, 0, retaddr);
  else
    v17 = IoAllocateMdl(v13, BufferLength, 0, 0, 0LL);
  *Mdl = v17;
  if ( v17 )
  {
    if ( SizeOfMdl )
    {
      *SizeOfMdl = v16;
      v17 = *Mdl;
    }
LABEL_16:
    IoBuildPartialMdl(this->u.RefMdl.Mdl, v17, v13, BufferLength);
LABEL_38:
    *MdlToFree = *Mdl;
    return 0LL;
  }
  WPP_IFR_SF_Dd(FxDriverGlobals, 2u, 6u, 0xCu, WPP_FxRequestBufferKm_cpp_Traceguids, BufferLength, -1073741670);
  return 3221225626LL;
}
