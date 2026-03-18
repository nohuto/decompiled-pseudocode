/*
 * XREFs of ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x14007B9BC
 * Callers:
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x14009DDFC (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x14002CA9C (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x140035320 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x140037570 (-FxObjectHandleAlloc2@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@_K1KPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObject.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x140050488 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ??0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400532F8 (--0FxObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??0FxNPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z @ 0x1400955F8 (--0FxNPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

int __fastcall FxUsbPipeContinuousReader::Config(
        FxUsbPipeContinuousReader *this,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config,
        unsigned __int64 TotalBufferLength,
        __int64 a4)
{
  FxUsbPipe *m_Pipe; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  FX_POOL **v9; // rax
  unsigned __int64 v10; // rsi
  unsigned int Tag; // ebx
  FX_POOL **v12; // rax
  FxLookasideList *v13; // rax
  int result; // eax
  _WDF_OBJECT_ATTRIBUTES *BufferAttributes; // rax
  void *v16; // rdx
  __int64 v17; // r9
  signed int v18; // eax
  signed int v19; // ebx
  FxUsbPipeContinuousReader **p_Parent; // rbx
  int v21; // esi
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+40h] [rbp-40h] BYREF

  m_Pipe = this->m_Pipe;
  memset(&attributes, 0, sizeof(attributes));
  m_Globals = m_Pipe->m_Globals;
  if ( TotalBufferLength >= 0x1000 )
  {
    v12 = FxObjectHandleAlloc2(m_Globals, (unsigned __int64)Config, 0x1C0uLL, a4, 0LL, 0, FxObjectTypeExternal);
    if ( v12 )
    {
      FxNPagedLookasideListFromPool::FxNPagedLookasideListFromPool(
        (FxNPagedLookasideListFromPool *)v12,
        m_Globals,
        m_Globals->Tag);
      v10 = (unsigned __int64)v13;
      goto LABEL_7;
    }
  }
  else
  {
    v9 = FxObjectHandleAlloc2(m_Globals, (unsigned __int64)Config, 0x140uLL, a4, 0LL, 0, FxObjectTypeExternal);
    v10 = (unsigned __int64)v9;
    if ( v9 )
    {
      Tag = m_Globals->Tag;
      FxObject::FxObject((FxObject *)v9, (_FX_DRIVER_GLOBALS *)0x1009, 0x140u, m_Globals);
      *(_QWORD *)(v10 + 160) = 0LL;
      *(_QWORD *)v10 = FxNPagedLookasideList::`vftable';
      *(_QWORD *)(v10 + 168) = 0LL;
      *(_DWORD *)(v10 + 176) = Tag;
      goto LABEL_7;
    }
  }
  v10 = 0LL;
LABEL_7:
  this->m_Lookaside = (FxLookasideList *)v10;
  if ( !v10 )
    return -1073741670;
  BufferAttributes = Config->BufferAttributes;
  if ( BufferAttributes )
  {
    attributes = *BufferAttributes;
  }
  else
  {
    attributes.Size = 56;
    attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
    attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  }
  v16 = (void *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !*(_WORD *)(v10 + 10) )
    v16 = 0LL;
  attributes.ParentObject = v16;
  result = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, _WDF_OBJECT_ATTRIBUTES *))(*(_QWORD *)v10 + 64LL))(
             v10,
             TotalBufferLength,
             &attributes);
  if ( result >= 0 )
  {
    v18 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_Pipe->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_WorkItem,
            v17);
    v19 = v18;
    if ( v18 >= 0 )
    {
      p_Parent = &this->m_Readers[0].Parent;
      this->m_Offsets.BufferLength = Config->TransferLength;
      v21 = 0;
      this->m_Offsets.BufferOffset = Config->HeaderLength;
      while ( v21 < this->m_NumReaders )
      {
        *p_Parent = this;
        KeInitializeDpc((PRKDPC)(p_Parent + 1), FxUsbPipeContinuousReader::_FxUsbPipeContinuousReadDpc, 0LL);
        result = FxRequest::_Create(
                   m_Globals,
                   0LL,
                   0LL,
                   (unsigned __int64)this->m_Pipe,
                   1u,
                   FxRequestConstructorCallerIsFx,
                   (FxRequest **)p_Parent - 2);
        if ( result < 0 )
          return result;
        *(p_Parent - 1) = (FxUsbPipeContinuousReader *)(*(p_Parent - 2))->m_Readers[0].Dpc.DeferredContext;
        KeInitializeEvent((PRKEVENT)p_Parent + 3, NotificationEvent, 1u);
        *((_BYTE *)p_Parent + 96) = 1;
        result = FxUsbPipeContinuousReader::FormatRepeater(this, (FxUsbPipeRepeatReader *)(p_Parent - 2));
        if ( result < 0 )
          return result;
        ++v21;
        p_Parent += 15;
      }
      return 0;
    }
    else
    {
      WPP_IFR_SF_D(m_Globals, 2u, 0xDu, 0xAu, WPP_FxUsbPipeKm_cpp_Traceguids, v18);
      return v19;
    }
  }
  return result;
}
