/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x1402D4A40
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x1402D49E0 (IoBuildDeviceIoControlRequest.c)
 * Callees:
 *     IoFreeIrp @ 0x1402508A0 (IoFreeIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402537B0 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     IopProbeAndLockPages @ 0x1402D4D10 (IopProbeAndLockPages.c)
 *     IoAllocateMdl @ 0x1402D5350 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

IRP *__fastcall IopBuildDeviceIoControlRequest(
        int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        ULONG Length,
        char a7,
        struct _KEVENT *a8,
        struct _IO_STATUS_BLOCK *a9)
{
  size_t v9; // r14
  int v11; // r13d
  __int64 Irp; // rax
  IRP *v14; // rbx
  __int64 v15; // rdi
  int v16; // esi
  struct _IRP *v17; // rax
  PETHREAD Thread; // rdx
  int v19; // eax
  unsigned __int64 v20; // rcx
  int v21; // ecx
  struct _IRP *Pool2; // rax
  int v24; // eax
  int v25; // r14d
  PMDL Mdl; // rax
  int v27; // edx

  v9 = a4;
  v11 = a2;
  Irp = IopAllocateIrpExReturn(a2, *(unsigned __int8 *)(a2 + 76), 0LL);
  v14 = (IRP *)Irp;
  if ( !Irp )
    return 0LL;
  v15 = *(_QWORD *)(Irp + 184);
  *(_BYTE *)(v15 - 72) = (a7 != 0) + 14;
  *(_DWORD *)(v15 - 64) = Length;
  *(_DWORD *)(v15 - 56) = v9;
  *(_DWORD *)(v15 - 48) = a1;
  v16 = a1 & 3;
  if ( v16 )
  {
    if ( v16 != 1 && v16 != 2 )
    {
      *(_QWORD *)(Irp + 112) = VirtualAddress;
      *(_QWORD *)(v15 - 40) = a3;
      goto LABEL_10;
    }
    if ( a3 )
    {
      Pool2 = (struct _IRP *)ExAllocatePool2(0x4AuLL);
      v14->AssociatedIrp.MasterIrp = Pool2;
      if ( !Pool2 )
        goto LABEL_28;
      memmove(Pool2, a3, v9);
      v24 = 48;
      v25 = 0;
    }
    else
    {
      v25 = 0;
      v24 = 0;
    }
    v14->Flags = v24;
    if ( !VirtualAddress )
      goto LABEL_10;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v14->MdlAddress = Mdl;
    if ( Mdl )
    {
      LOBYTE(v25) = v16 != 1;
      IopProbeAndLockPages((_DWORD)Mdl, v27, v25, v11, *(unsigned __int8 *)(v15 - 72));
      goto LABEL_10;
    }
    if ( a3 )
      ExFreePoolWithTag(v14->AssociatedIrp.MasterIrp, 0);
LABEL_28:
    IoFreeIrp(v14);
    return 0LL;
  }
  if ( (_DWORD)v9 || Length )
  {
    v17 = (struct _IRP *)ExAllocatePool2(0x48uLL);
    v14->AssociatedIrp.MasterIrp = v17;
    if ( v17 )
    {
      if ( a3 )
        memmove(v17, a3, v9);
      v14->Flags = 48;
      v14->UserBuffer = VirtualAddress;
      if ( VirtualAddress )
        v14->Flags = 112;
      goto LABEL_10;
    }
    goto LABEL_28;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_10:
  v14->UserIosb = a9;
  v14->UserEvent = a8;
  v14->Tail.Overlay.Thread = KeGetCurrentThread();
  IopQueueThreadIrp((__int64)v14);
  Thread = v14->Tail.Overlay.Thread;
  v19 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
  v20 = Thread->Process[1].Padding[3];
  if ( v20 )
  {
    v21 = *(_DWORD *)(v20 + 1084);
    if ( v19 >= v21 )
      v19 = v21;
  }
  if ( v19 < 2 && Thread == KeGetCurrentThread() )
  {
    if ( LODWORD(Thread[1].Timer.TimerListEntry.Flink) )
      v19 = 2;
  }
  v14->Flags = v14->Flags & 0xFFF1FFFF | ((v19 << 17) + 0x20000);
  return v14;
}
