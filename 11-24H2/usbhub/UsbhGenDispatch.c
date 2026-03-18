/*
 * XREFs of UsbhGenDispatch @ 0x14002BE30
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapBadIrp @ 0x1400399A0 (UsbhTrapBadIrp.c)
 *     UsbhPdoSuccess @ 0x14005D060 (UsbhPdoSuccess.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhGenDispatch(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  int v4; // eax
  __int64 v5; // rax
  __int64 MajorFunction; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v4 = **(_DWORD **)(a1 + 64);
  if ( v4 != 1329877064 )
  {
    if ( v4 != 541218120 )
    {
      a2->IoStatus.Status = -1073741811;
      IofCompleteRequest(a2, 0);
      return 3221225485LL;
    }
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( (unsigned __int8)MajorFunction <= 0x1Bu )
      return ((__int64 (__fastcall *)(ULONG_PTR, IRP *))*(&off_1400642B8 + 2 * MajorFunction))(a1, a2);
LABEL_9:
    UsbhTrapBadIrp(a1, (ULONG_PTR)a2);
  }
  v5 = CurrentStackLocation->MajorFunction;
  if ( (unsigned __int8)v5 > 0x1Bu )
    goto LABEL_9;
  return funcs_14002BE69[2 * v5](a1, (ULONG_PTR)a2);
}
