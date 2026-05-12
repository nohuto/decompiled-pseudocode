/*
 * XREFs of PortpCompleteRequestIrp @ 0x140032324
 * Callers:
 *     PortpAsyncCompletion @ 0x140032280 (PortpAsyncCompletion.c)
 *     PortpCancelRoutine @ 0x14013B2B0 (PortpCancelRoutine.c)
 * Callees:
 *     PortPassThroughFreeSrb @ 0x14003240C (PortPassThroughFreeSrb.c)
 *     IsScsiPassThroughEx @ 0x140032488 (IsScsiPassThroughEx.c)
 *     PortPassThroughMarshalResultsFromSrb @ 0x1400324B0 (PortPassThroughMarshalResultsFromSrb.c)
 *     PortPassThroughExMarshalResultsFromSrbEx @ 0x1400325F8 (PortPassThroughExMarshalResultsFromSrbEx.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

void __fastcall PortpCompleteRequestIrp(__int64 a1, void *a2, __int64 a3)
{
  IRP *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  IRP *v8; // r10
  struct _MDL *MdlAddress; // rcx
  _DWORD v10[2]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 Information; // [rsp+28h] [rbp-10h]

  v3 = (IRP *)*((_QWORD *)a2 + 1);
  LOBYTE(a3) = *(_BYTE *)a2;
  v10[1] = 0;
  v5 = *((_QWORD *)a2 + 3);
  v10[0] = v3->IoStatus.Status;
  Information = v3->IoStatus.Information;
  if ( (unsigned __int8)IsScsiPassThroughEx(a1, v5, a3) )
    PortPassThroughExMarshalResultsFromSrbEx(v8);
  else
    PortPassThroughMarshalResultsFromSrb(v8, v6, v7, v10);
  *(_DWORD *)(*((_QWORD *)a2 + 2) + 48LL) = v10[0];
  *(_QWORD *)(*((_QWORD *)a2 + 2) + 56LL) = Information;
  MdlAddress = v3->MdlAddress;
  if ( MdlAddress )
  {
    MmUnlockPages(MdlAddress);
    IoFreeMdl(v3->MdlAddress);
    v3->MdlAddress = 0LL;
  }
  IoFreeIrp(v3);
  PortPassThroughFreeSrb(*((PVOID *)a2 + 3));
  (*((void (__fastcall **)(_QWORD, _QWORD))a2 + 4))(*((_QWORD *)a2 + 2), *((_QWORD *)a2 + 5));
  ExFreePoolWithTag(a2, 0x69506C50u);
}
