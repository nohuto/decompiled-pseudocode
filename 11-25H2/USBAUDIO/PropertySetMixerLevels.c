/*
 * XREFs of PropertySetMixerLevels @ 0x140033A60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C680 (_guard_dispatch_icall.c)
 *     QueuePropertyRequest @ 0x14003EC10 (QueuePropertyRequest.c)
 *     DeviceRequestPowerUp @ 0x14004083C (DeviceRequestPowerUp.c)
 */

__int64 __fastcall PropertySetMixerLevels(PIRP Irp, __int64 a2)
{
  unsigned int v4; // edi
  PKSFILTER FilterFromIrp; // rcx
  __int64 Length; // rdx
  _QWORD *Context; // r13
  const GUID *Type; // rbp
  unsigned int v9; // ecx

  v4 = -1073741811;
  FilterFromIrp = KsGetFilterFromIrp(Irp);
  Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( !FilterFromIrp )
    return v4;
  Context = FilterFromIrp->Context;
  Type = FilterFromIrp->Descriptor->NodeDescriptors[7 * *(unsigned int *)(a2 + 24) + 5].Type;
  v9 = 16 * *(_DWORD *)&Type->Data4[4] * *(_DWORD *)Type->Data4;
  if ( *(_DWORD *)(Context[2] + 536LL) == 1 )
  {
    Irp->IoStatus.Information = v9;
    if ( (_DWORD)Length != v9 )
      return (unsigned int)-1073741789;
    return v4;
  }
  if ( (int)DeviceRequestPowerUp(Context, Length) < 0 )
    return 3221225635LL;
  else
    return QueuePropertyRequest(Irp);
}
