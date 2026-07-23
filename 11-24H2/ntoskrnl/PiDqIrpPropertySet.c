/*
 * XREFs of PiDqIrpPropertySet @ 0x1409F2F90
 * Callers:
 *     PiDqDispatch @ 0x1409F1FF0 (PiDqDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiPnpRtlSetObjectProperty @ 0x1408B5E10 (PiPnpRtlSetObjectProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     PiDqGetPnpObjectType @ 0x1408D2490 (PiDqGetPnpObjectType.c)
 *     PiDqOpenObjectRegKey @ 0x1408E14CC (PiDqOpenObjectRegKey.c)
 *     _PnpSetGenericStoreProperty @ 0x14097C974 (_PnpSetGenericStoreProperty.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  char v3; // r15
  char v4; // si
  struct _IRP *MasterIrp; // rcx
  NTSTATUS v6; // edi
  WCHAR *v7; // r10
  unsigned int PnpObjectType; // r12d
  unsigned int v9; // eax
  _DWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 i; // r15
  __int64 v13; // rsi
  const wchar_t *v14; // rdx
  int v15; // r8d
  const WCHAR *v16; // r10
  HANDLE Handle; // [rsp+50h] [rbp-78h] BYREF
  HANDLE v19; // [rsp+58h] [rbp-70h] BYREF
  __int64 v20; // [rsp+60h] [rbp-68h] BYREF
  PVOID v21; // [rsp+68h] [rbp-60h] BYREF
  _QWORD v22[11]; // [rsp+70h] [rbp-58h] BYREF
  PVOID P; // [rsp+E8h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v20 = 0LL;
  Handle = 0LL;
  v19 = 0LL;
  P = 0LL;
  v3 = 0;
  v4 = 0;
  v21 = 0LL;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  if ( !MasterIrp )
    goto LABEL_28;
  v6 = MesDecodeBufferHandleCreate(MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v20);
  if ( v6 < 0 )
    goto LABEL_29;
  NdrMesTypeDecode3(v20, "TP 3\a", &off_140001EE8, &off_140E06FE0, 2, &P);
  if ( !P
    || !*((_QWORD *)P + 1)
    || !*((_QWORD *)P + 3)
    || !*((_DWORD *)P + 4)
    || (PnpObjectType = PiDqGetPnpObjectType(*(_DWORD *)P)) == 0 )
  {
LABEL_28:
    v6 = -1073741811;
    goto LABEL_29;
  }
  v6 = PnpOpenObjectRegKey(*(_QWORD **)&PiPnpRtlCtx, v7, PnpObjectType, 7, 0, (__int64)&Handle);
  if ( v6 < 0 )
    goto LABEL_29;
  v9 = *((_DWORD *)P + 4);
  if ( v9 )
  {
    v10 = (_DWORD *)(*((_QWORD *)P + 3) + 20LL);
    v11 = v9;
    do
    {
      if ( !*v10 )
        v3 = 1;
      if ( *v10 == 1 )
        v4 = 1;
      v10 += 12;
      --v11;
    }
    while ( v11 );
  }
  if ( v3 && !PiAuDoesClientHaveAccess(2u) )
    goto LABEL_41;
  if ( v4 )
  {
    if ( PiAuDoesClientHaveAccess(0x100u) )
    {
      v6 = PiDqOpenObjectRegKey(1, *((WCHAR **)P + 1), PnpObjectType, 7u, 1, 0LL, &v19);
      if ( v6 < 0 )
        goto LABEL_29;
      goto LABEL_19;
    }
LABEL_41:
    v6 = -1073741790;
    goto LABEL_29;
  }
LABEL_19:
  v6 = PiPnpRtlBeginOperation(&v21);
  if ( v6 >= 0 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 4); i = (unsigned int)(i + 1) )
    {
      v13 = *((_QWORD *)P + 3) + 48 * i;
      v14 = *(const wchar_t **)(v13 + 40);
      v15 = *(_DWORD *)(v13 + 32);
      v16 = *(const WCHAR **)(v13 + 24);
      if ( *(_DWORD *)(v13 + 20) )
      {
        v6 = PnpSetGenericStoreProperty(PiPnpRtlCtx, (int)v19, v16, v13, v15, (__int64)v14, *(_DWORD *)(v13 + 36));
        if ( v6 >= 0 )
        {
          v22[0] = 0LL;
          v22[1] = *(_QWORD *)(v13 + 24);
          v22[2] = v13;
          PiPnpRtlObjectEventWorker(*((_QWORD *)P + 1), PnpObjectType, 4LL, (__int64)v22, 1u);
        }
      }
      else
      {
        v6 = PiPnpRtlSetObjectProperty(
               *(__int64 *)&PiPnpRtlCtx,
               *((const WCHAR **)P + 1),
               PnpObjectType,
               (__int64)Handle,
               (__int64)v16,
               v13,
               v15,
               v14,
               *(_DWORD *)(v13 + 36),
               0);
      }
      if ( v6 == -1073741275 )
        v6 = *(_DWORD *)(v13 + 32) != 0 ? 0xC0000225 : 0;
      if ( v6 < 0 )
        break;
    }
  }
LABEL_29:
  if ( Handle )
    ZwClose(Handle);
  if ( v19 )
    ZwClose(v19);
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v20 )
    MesHandleFree();
  if ( v21 )
    PiPnpRtlEndOperation((PVOID **)v21);
  Irp->IoStatus.Status = v6;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v6;
}
