/*
 * XREFs of ?DispatchWorker@@YAJPEAVFxDevice@@PEAU_IRP@@PEAX@Z @ 0x140049C10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DispatchWorker(unsigned __int64 Device, _IRP *Irp, _LIST_ENTRY *DispatchContext)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v6; // r14
  _LIST_ENTRY *v7; // rbx
  unsigned __int8 MinorFunction; // si
  char *v9; // r10
  unsigned int v10; // r11d
  unsigned int i; // edx
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // rcx
  unsigned int v14; // ebx
  int MajorFunction; // ecx
  void *v17; // rcx

  while ( 1 )
  {
    do
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      if ( DispatchContext == (_LIST_ENTRY *)(Device + 368) )
      {
        MajorFunction = CurrentStackLocation->MajorFunction;
        if ( MajorFunction == 15 )
        {
LABEL_16:
          v17 = *(void **)(Device + 640);
        }
        else
        {
          if ( MajorFunction == 16 )
            return (*(__int64 (__fastcall **)(_QWORD, _IRP *))(**(_QWORD **)(Device + 656) + 64LL))(
                     *(_QWORD *)(Device + 656),
                     Irp);
          switch ( CurrentStackLocation->MajorFunction )
          {
            case 0u:
            case 2u:
            case 0x12u:
              return (*(__int64 (__fastcall **)(_QWORD, _IRP *))(**(_QWORD **)(Device + 656) + 64LL))(
                       *(_QWORD *)(Device + 656),
                       Irp);
            case 3u:
            case 4u:
            case 0xEu:
              goto LABEL_16;
            case 0x16u:
            case 0x1Bu:
              v17 = *(void **)(Device + 648);
              if ( v17 )
                return (*(__int64 (__fastcall **)(void *, _IRP *))(*(_QWORD *)v17 + 64LL))(v17, Irp);
              goto LABEL_22;
            case 0x17u:
              return (*(__int64 (__fastcall **)(_QWORD, _IRP *))(**(_QWORD **)(Device + 664) + 64LL))(
                       *(_QWORD *)(Device + 664),
                       Irp);
            default:
LABEL_22:
              v17 = *(void **)(Device + 672);
              break;
          }
        }
        return (*(__int64 (__fastcall **)(void *, _IRP *))(*(_QWORD *)v17 + 64LL))(v17, Irp);
      }
      v6 = CurrentStackLocation->MajorFunction;
      v7 = DispatchContext;
      MinorFunction = CurrentStackLocation->MinorFunction;
      DispatchContext = DispatchContext->Flink;
      v9 = (char *)v7 + 24 * v6;
    }
    while ( !*((_QWORD *)v9 + 2) );
    v10 = *((_DWORD *)v9 + 6);
    if ( !v10 )
      break;
    for ( i = 0; i < v10; ++i )
    {
      if ( *(_BYTE *)(i + *((_QWORD *)v9 + 4)) == MinorFunction )
        goto LABEL_8;
    }
  }
LABEL_8:
  v12 = *(_WORD *)(Device + 10);
  v13 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( LOBYTE(v7[43].Flink) )
  {
    if ( !v12 )
      v13 = 0LL;
  }
  else if ( !v12 )
  {
    v13 = 0LL;
  }
  v14 = (*((__int64 (__fastcall **)(unsigned __int64, _IRP *, _LIST_ENTRY *))v9 + 2))(v13, Irp, DispatchContext);
  if ( (_DWORD)v6 == 22 || (_DWORD)v6 == 23 || (_DWORD)v6 == 27 && MinorFunction != 2 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(Device + 144) + 336LL), Irp, 0x20u);
  return v14;
}
