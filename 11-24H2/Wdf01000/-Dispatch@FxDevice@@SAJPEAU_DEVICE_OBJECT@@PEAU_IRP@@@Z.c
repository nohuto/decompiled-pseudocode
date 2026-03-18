/*
 * XREFs of ?Dispatch@FxDevice@@SAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140052C70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxDevice::Dispatch(_DEVICE_OBJECT *DeviceObject, _IRP *Irp)
{
  __int64 v3; // rbx
  _QWORD *v4; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v6; // r14
  _QWORD *v7; // r8
  unsigned __int8 MinorFunction; // bp
  unsigned int v9; // esi
  unsigned int i; // edx
  __int64 (__fastcall *v11)(unsigned __int64, _IRP *, _QWORD *); // r11
  __int16 v12; // ax
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned int v15; // esi
  unsigned int MajorFunction; // ecx
  __int64 v18; // rcx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx

  v3 = *((_QWORD *)DeviceObject->DeviceExtension - 6);
  v4 = *(_QWORD **)(v3 + 368);
  while ( 1 )
  {
    do
    {
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      if ( v4 == (_QWORD *)(v3 + 368) )
      {
        MajorFunction = CurrentStackLocation->MajorFunction;
        if ( MajorFunction > 0xF )
        {
          v19 = MajorFunction - 16;
          if ( v19 )
          {
            v20 = v19 - 2;
            if ( v20 )
            {
              v21 = v20 - 4;
              if ( !v21 )
                goto LABEL_44;
              v22 = v21 - 1;
              if ( !v22 )
              {
                v18 = *(_QWORD *)(v3 + 664);
                return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v18 + 64LL))(v18, Irp);
              }
              if ( v22 == 4 )
              {
LABEL_44:
                v18 = *(_QWORD *)(v3 + 648);
                if ( v18 )
                  return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v18 + 64LL))(v18, Irp);
              }
              goto LABEL_41;
            }
          }
        }
        else
        {
          if ( MajorFunction == 15 )
          {
LABEL_19:
            v18 = *(_QWORD *)(v3 + 640);
            return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v18 + 64LL))(v18, Irp);
          }
          if ( CurrentStackLocation->MajorFunction )
          {
            v23 = MajorFunction - 2;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( !v24 )
                goto LABEL_19;
              v25 = v24 - 1;
              if ( !v25 || v25 == 10 )
                goto LABEL_19;
LABEL_41:
              v18 = *(_QWORD *)(v3 + 672);
              return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v18 + 64LL))(v18, Irp);
            }
          }
        }
        v18 = *(_QWORD *)(v3 + 656);
        return (*(unsigned int (__fastcall **)(__int64, _IRP *))(*(_QWORD *)v18 + 64LL))(v18, Irp);
      }
      v6 = CurrentStackLocation->MajorFunction;
      v7 = v4;
      v4 = (_QWORD *)*v4;
      MinorFunction = CurrentStackLocation->MinorFunction;
    }
    while ( !v7[3 * v6 + 2] );
    v9 = v7[3 * v6 + 3];
    if ( !v9 )
      break;
    for ( i = 0; i < v9; ++i )
    {
      if ( *(_BYTE *)(i + v7[3 * v6 + 4]) == MinorFunction )
        goto LABEL_9;
    }
  }
LABEL_9:
  v11 = (__int64 (__fastcall *)(unsigned __int64, _IRP *, _QWORD *))v7[3 * v6 + 2];
  v12 = *(_WORD *)(v3 + 10);
  v13 = v3 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( *((_BYTE *)v7 + 688) )
  {
    if ( !v12 )
      v13 = 0LL;
    v14 = v11(v13, Irp, v4);
  }
  else
  {
    if ( !v12 )
      v13 = 0LL;
    v14 = ((__int64 (__fastcall *)(unsigned __int64, _IRP *, _QWORD *, _QWORD *))v11)(v13, Irp, v7, v4);
  }
  v15 = v14;
  if ( (_DWORD)v6 == 22 || (_DWORD)v6 == 23 || (_DWORD)v6 == 27 && MinorFunction != 2 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(v3 + 144) + 336LL), Irp, 0x20u);
  return v15;
}
