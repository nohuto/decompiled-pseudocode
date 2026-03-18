/*
 * XREFs of ?_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x140070FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

__int64 __fastcall FxWmiIrpHandler::_RegInfo(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  FxDeviceBase *m_DeviceBase; // r13
  unsigned int v5; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r15
  int Blink_high; // r8d
  unsigned __int16 *p_m_ParentObject; // r14
  unsigned int v11; // r12d
  __int64 i; // rax
  unsigned int v13; // ecx
  _UNICODE_STRING *p_m_RegistryPath; // rbp
  unsigned int v15; // edx
  unsigned int v16; // esi
  PIRP v17; // rax
  _LIST_ENTRY *v19; // rcx
  unsigned __int8 MinorFunction; // r9
  _WORD *v21; // rcx
  unsigned __int16 *v22; // rcx
  unsigned int v23; // ebp
  __int64 v24; // rdx
  unsigned int v25; // eax
  _DEVICE_OBJECT *m_DeviceObject; // rax
  _LIST_ENTRY *Flink; // rcx
  unsigned __int8 v28; // [rsp+20h] [rbp-68h]
  unsigned int v29; // [rsp+24h] [rbp-64h]
  unsigned int LowPart; // [rsp+28h] [rbp-60h]
  unsigned int v31; // [rsp+2Ch] [rbp-5Ch]
  _LIST_ENTRY *v32; // [rsp+38h] [rbp-50h]
  _UNICODE_STRING *v33; // [rsp+40h] [rbp-48h]
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  PIRP v35; // [rsp+98h] [rbp+10h]

  v35 = Irp;
  m_DeviceBase = This->m_DeviceBase;
  v5 = 0;
  irql = 0;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v29 = 0;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( SLOBYTE(This->m_ObjectFlags) < 0
    && (Flink = This[-1].m_UpdateEvent.m_Event.m_Event.Header.WaitListHead.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, &irql, (unsigned __int8)Provider);
    LOBYTE(Blink_high) = irql;
  }
  else
  {
    LOBYTE(Blink_high) = KeAcquireSpinLockRaiseToDpc(&This->m_NPLock.m_Lock);
    irql = Blink_high;
  }
  p_m_ParentObject = 0LL;
  v11 = 32 * This->m_NumProviders + 24;
  if ( m_DeviceBase[1].m_ChildEntry.Flink )
  {
    p_m_ParentObject = (unsigned __int16 *)&m_DeviceBase[1].m_ParentObject;
  }
  else
  {
    for ( i = *(_QWORD *)&m_DeviceBase[1].m_ObjectFlags; i; i = *(_QWORD *)(i + 224) )
    {
      if ( *(_QWORD *)(i + 272) )
      {
        p_m_ParentObject = (unsigned __int16 *)(i + 264);
        break;
      }
    }
    m_DeviceBase = This->m_DeviceBase;
  }
  v13 = 32 * This->m_NumProviders + 26;
  p_m_RegistryPath = &m_DeviceBase->m_Driver->m_RegistryPath;
  v31 = v13;
  v33 = p_m_RegistryPath;
  if ( p_m_ParentObject )
  {
    v13 += *p_m_ParentObject;
    v31 = v13;
  }
  v15 = v13 + p_m_RegistryPath->Length;
  if ( v15 >= v13 && (v16 = v15 + 2, v15 + 2 >= v15) )
  {
    Parameters->NamedPipeType = v16;
    if ( v16 > LowPart )
    {
      v29 = 4;
    }
    else
    {
      Parameters->ReadMode = 0;
      Parameters->MaximumInstances = v11;
      Parameters->CompletionMode = v13;
      Parameters->InboundQuota = This->m_NumProviders;
      v19 = This->m_ProvidersListHead.Flink;
      v29 = v15 + 2;
      v32 = v19;
      MinorFunction = v35->Tail.Overlay.CurrentStackLocation->MinorFunction;
      v28 = MinorFunction;
      if ( This->m_NumProviders )
      {
        v23 = 0;
        do
        {
          v24 = 32LL * v23;
          *(_LIST_ENTRY *)((char *)&Parameters->DefaultTimeout.LowPart + v24) = v19[3];
          *(unsigned int *)((char *)&Parameters[1].ReadMode + v24) = (unsigned int)v19[2].Flink;
          Blink_high = HIDWORD(v19[4].Blink);
          if ( (Blink_high & 4) != 0 )
          {
            v25 = 528384;
          }
          else
          {
            v25 = (HIDWORD(v19[4].Blink) & 2 | 0x40u) >> 1;
            if ( (Blink_high & 1) != 0 )
              v25 |= 0x40u;
          }
          if ( BYTE2(v19[5].Blink) )
          {
            v25 |= 0x10000u;
            BYTE2(v19[5].Blink) = 0;
          }
          *(unsigned int *)((char *)&Parameters[1].NamedPipeType + v24) = v25;
          m_DeviceObject = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
          *(_QWORD *)((char *)&Parameters[1].CompletionMode + v24) = m_DeviceObject;
          if ( MinorFunction == 11 )
          {
            ObfReferenceObject(m_DeviceObject);
            v19 = v32;
            MinorFunction = v28;
          }
          v19 = v19->Flink;
          ++v23;
          v32 = v19;
        }
        while ( v23 < This->m_NumProviders );
        p_m_RegistryPath = v33;
      }
    }
    FxNonPagedObject::Unlock(This, irql, Blink_high);
    if ( v16 <= LowPart )
    {
      v21 = (_WORD *)((char *)Parameters + v11);
      if ( p_m_ParentObject )
      {
        *v21 = *p_m_ParentObject;
        memmove(v21 + 1, *((const void **)p_m_ParentObject + 1), *p_m_ParentObject);
      }
      else
      {
        *v21 = 0;
      }
      v22 = (unsigned __int16 *)((char *)Parameters + v31);
      *v22 = p_m_RegistryPath->Length;
      memmove(v22 + 1, p_m_RegistryPath->Buffer, p_m_RegistryPath->Length);
    }
  }
  else
  {
    v5 = -1073741675;
    FxNonPagedObject::Unlock(This, Blink_high, Blink_high);
  }
  v17 = v35;
  v35->IoStatus.Information = v29;
  v17->IoStatus.Status = v5;
  IofCompleteRequest(v17, 0);
  return v5;
}
