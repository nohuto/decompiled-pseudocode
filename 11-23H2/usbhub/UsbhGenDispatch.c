/*
 * XREFs of UsbhGenDispatch @ 0x1C001E130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapBadIrp @ 0x1C002DFF0 (UsbhTrapBadIrp.c)
 */

__int64 __fastcall UsbhGenDispatch(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int v4; // eax
  __int64 v5; // rax
  unsigned int v7; // ebx
  __int64 MajorFunction; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = **(_DWORD **)(a1 + 64);
  if ( v4 != 1329877064 )
  {
    if ( v4 != 541218120 )
    {
      v7 = -1073741811;
      a2->IoStatus.Status = -1073741811;
      IofCompleteRequest(a2, 0);
      return v7;
    }
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( (unsigned __int8)MajorFunction <= 0x1Bu )
      return ((unsigned int (__fastcall *)(ULONG_PTR, IRP *))off_1C005EC18[2 * MajorFunction])(a1, a2);
LABEL_9:
    UsbhTrapBadIrp(a1, (ULONG_PTR)a2);
  }
  v5 = CurrentStackLocation->MajorFunction;
  if ( (unsigned __int8)v5 > 0x1Bu )
    goto LABEL_9;
  return (unsigned int)off_1C005EDD8[2 * v5](a1, (ULONG_PTR)a2);
}
