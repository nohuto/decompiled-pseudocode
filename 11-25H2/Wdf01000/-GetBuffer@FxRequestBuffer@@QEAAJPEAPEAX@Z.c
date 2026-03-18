/*
 * XREFs of ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x14005B410
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x14002EF20 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxRequestBuffer::GetBuffer(FxRequestBuffer *this, IFxMemory **Buffer)
{
  FxRequestBufferType DataType; // eax
  __int64 result; // rax
  __int32 v6; // eax
  __int64 (*GetBuffer)(void); // rax
  IFxMemory *v8; // rax
  IFxMemory *MappedSystemVa; // rax
  _WDFMEMORY_OFFSET *Offsets; // rcx
  __int32 v11; // eax
  _MDL *Mdl; // rcx
  IFxMemory *Memory; // rcx
  IFxMemory *v14; // rdx

  DataType = this->DataType;
  if ( this->DataType == FxRequestBufferBuffer )
  {
    *Buffer = this->u.Memory.Memory;
    return 0LL;
  }
  else
  {
    if ( DataType == FxRequestBufferUnspecified )
    {
      *Buffer = 0LL;
      return 0LL;
    }
    v6 = DataType - 1;
    if ( !v6 )
    {
      GetBuffer = (__int64 (*)(void))this->u.Memory.Memory->GetBuffer;
      if ( !this->u.Memory.Offsets )
      {
        v8 = (IFxMemory *)GetBuffer();
LABEL_9:
        *Buffer = v8;
        return 0LL;
      }
      MappedSystemVa = (IFxMemory *)GetBuffer();
      Offsets = this->u.Memory.Offsets;
LABEL_11:
      v8 = (IFxMemory *)((char *)MappedSystemVa + Offsets->BufferOffset);
      goto LABEL_9;
    }
    v11 = v6 - 1;
    if ( v11 )
    {
      if ( v11 == 2 )
      {
        Mdl = this->u.RefMdl.Mdl;
        if ( (Mdl->MdlFlags & 5) != 0 )
          MappedSystemVa = (IFxMemory *)Mdl->MappedSystemVa;
        else
          MappedSystemVa = (IFxMemory *)MmMapLockedPagesSpecifyCache(
                                          Mdl,
                                          0,
                                          MmCached,
                                          0LL,
                                          0,
                                          ExDefaultMdlProtection | 0x40000010);
        *Buffer = MappedSystemVa;
        if ( MappedSystemVa )
        {
          Offsets = this->u.Memory.Offsets;
          if ( !Offsets )
            return 0LL;
          goto LABEL_11;
        }
        return 3221225626LL;
      }
      else
      {
        return 3221225485LL;
      }
    }
    else
    {
      Memory = this->u.Memory.Memory;
      if ( (BYTE2(Memory[1].__vftable) & 5) != 0 )
        v14 = (IFxMemory *)Memory[3].__vftable;
      else
        v14 = (IFxMemory *)MmMapLockedPagesSpecifyCache(
                             (PMDL)Memory,
                             0,
                             MmCached,
                             0LL,
                             0,
                             ExDefaultMdlProtection | 0x40000010);
      *Buffer = v14;
      result = 3221225626LL;
      if ( v14 )
        return 0LL;
    }
  }
  return result;
}
