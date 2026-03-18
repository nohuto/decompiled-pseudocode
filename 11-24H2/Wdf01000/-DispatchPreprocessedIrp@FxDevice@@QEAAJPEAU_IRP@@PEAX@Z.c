/*
 * XREFs of ?DispatchPreprocessedIrp@FxDevice@@QEAAJPEAU_IRP@@PEAX@Z @ 0x140058828
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrp @ 0x1400584A0 (imp_WdfDeviceWdmDispatchIrp.c)
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x140058650 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDevice::DispatchPreprocessedIrp(FxDevice *this, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _IO_STACK_LOCATION *v5; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v8; // r14
  _LIST_ENTRY *v9; // rsi
  unsigned __int8 MinorFunction; // bp
  _LIST_ENTRY *v11; // r8
  unsigned int v12; // r10d
  unsigned int i; // edx
  __int64 (__fastcall *v14)(unsigned __int64, _IRP *, _LIST_ENTRY *); // r9
  unsigned __int64 v15; // rcx
  unsigned __int16 m_ObjectSize; // ax
  unsigned int v17; // eax
  unsigned int v18; // esi
  unsigned int MajorFunction; // ecx
  void *m_PkgWmi; // rcx
  unsigned int v22; // ecx
  NTSTATUS v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx

  --Irp->CurrentLocation;
  v5 = Irp->Tail.Overlay.CurrentStackLocation - 1;
  Irp->Tail.Overlay.CurrentStackLocation = v5;
  if ( v5->MajorFunction == 22 || v5->MajorFunction == 23 || v5->MajorFunction == 27 && v5->MinorFunction != 2 )
  {
    v23 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceObject.m_DeviceObject[1], Irp, a5, 1u, 0x20u);
    v18 = v23;
    if ( v23 < 0 )
    {
      Irp->IoStatus.Status = v23;
      Irp->IoStatus.Information = 0LL;
      IofCompleteRequest(Irp, 0);
      return v18;
    }
  }
  while ( 1 )
  {
    do
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      if ( DispatchContext == &this->m_PreprocessInfoListHead )
      {
        MajorFunction = CurrentStackLocation->MajorFunction;
        if ( MajorFunction > 0xF )
        {
          v22 = MajorFunction - 16;
          if ( v22 )
          {
            v24 = v22 - 2;
            if ( v24 )
            {
              v25 = v24 - 4;
              if ( !v25 )
                goto LABEL_49;
              v26 = v25 - 1;
              if ( !v26 )
              {
                m_PkgWmi = this->m_PkgWmi;
                return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgWmi + 64LL))(m_PkgWmi, Irp);
              }
              if ( v26 == 4 )
              {
LABEL_49:
                m_PkgWmi = this->m_PkgPnp;
                if ( m_PkgWmi )
                  return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgWmi + 64LL))(m_PkgWmi, Irp);
              }
              goto LABEL_46;
            }
          }
        }
        else
        {
          if ( MajorFunction == 15 )
          {
LABEL_21:
            m_PkgWmi = this->m_PkgIo;
            return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgWmi + 64LL))(m_PkgWmi, Irp);
          }
          if ( CurrentStackLocation->MajorFunction )
          {
            v27 = MajorFunction - 2;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( !v28 )
                goto LABEL_21;
              v29 = v28 - 1;
              if ( !v29 || v29 == 10 )
                goto LABEL_21;
LABEL_46:
              m_PkgWmi = this->m_PkgDefault;
              return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgWmi + 64LL))(m_PkgWmi, Irp);
            }
          }
        }
        m_PkgWmi = this->m_PkgGeneral;
        return (*(unsigned int (__fastcall **)(void *, _IRP *))(*(_QWORD *)m_PkgWmi + 64LL))(m_PkgWmi, Irp);
      }
      v8 = CurrentStackLocation->MajorFunction;
      v9 = DispatchContext;
      MinorFunction = CurrentStackLocation->MinorFunction;
      v11 = DispatchContext;
      DispatchContext = DispatchContext->Flink;
    }
    while ( !*((_QWORD *)&v9[1].Flink + 3 * v8) );
    v12 = *((_DWORD *)&v9[1].Blink + 6 * v8);
    if ( !v12 )
      break;
    for ( i = 0; i < v12; ++i )
    {
      if ( *(_BYTE *)(i + *((_QWORD *)&v11[2].Flink + 3 * v8)) == MinorFunction )
        goto LABEL_11;
    }
  }
LABEL_11:
  v14 = (__int64 (__fastcall *)(unsigned __int64, _IRP *, _LIST_ENTRY *))*((_QWORD *)&v9[1].Flink + 3 * v8);
  v15 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
  m_ObjectSize = this->m_ObjectSize;
  if ( LOBYTE(v11[43].Flink) )
  {
    if ( !m_ObjectSize )
      v15 = 0LL;
    v17 = v14(v15, Irp, DispatchContext);
  }
  else
  {
    if ( !m_ObjectSize )
      v15 = 0LL;
    v17 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *))v14)(v15, Irp);
  }
  v18 = v17;
  if ( (_DWORD)v8 == 22 || (_DWORD)v8 == 23 || (_DWORD)v8 == 27 && MinorFunction != 2 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&this->m_DeviceObject.m_DeviceObject[1], Irp, 0x20u);
  return v18;
}
