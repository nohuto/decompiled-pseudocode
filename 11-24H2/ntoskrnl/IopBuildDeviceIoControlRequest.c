/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x14025EF00
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x14025EEA0 (IoBuildDeviceIoControlRequest.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     IopProbeAndLockPages @ 0x14025F42C (IopProbeAndLockPages.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

IRP *__fastcall IopBuildDeviceIoControlRequest(
        int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        PVOID VirtualAddress,
        unsigned int Length,
        char a7,
        struct _KEVENT *a8,
        struct _IO_STATUS_BLOCK *a9)
{
  ULONG_PTR v9; // r14
  int v11; // r13d
  __int64 Irp; // rax
  IRP *v14; // rbx
  __int64 v15; // rdi
  int v16; // esi
  ULONG_PTR v17; // rdx
  struct _IRP *v18; // rax
  PETHREAD Thread; // rdx
  int v20; // eax
  unsigned __int64 v21; // rcx
  int v22; // ecx
  struct _IRP *Pool2; // rax
  int v25; // eax
  int v26; // r14d
  PMDL Mdl; // rax
  int v28; // edx

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
      goto LABEL_12;
    }
    if ( a3 )
    {
      Pool2 = (struct _IRP *)ExAllocatePool2(0x4AuLL, v9, 0x42536F49u);
      v14->AssociatedIrp.MasterIrp = Pool2;
      if ( !Pool2 )
        goto LABEL_30;
      memmove(Pool2, a3, v9);
      v25 = 48;
      v26 = 0;
    }
    else
    {
      v26 = 0;
      v25 = 0;
    }
    v14->Flags = v25;
    if ( !VirtualAddress )
      goto LABEL_12;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v14->MdlAddress = Mdl;
    if ( Mdl )
    {
      LOBYTE(v26) = v16 != 1;
      IopProbeAndLockPages((_DWORD)Mdl, v28, v26, v11, *(unsigned __int8 *)(v15 - 72));
      goto LABEL_12;
    }
    if ( a3 )
      ExFreePoolWithTag(v14->AssociatedIrp.MasterIrp, 0);
LABEL_30:
    IoFreeIrp(v14);
    return 0LL;
  }
  if ( (_DWORD)v9 || Length )
  {
    v17 = (unsigned int)v9;
    if ( (unsigned int)v9 <= Length )
      v17 = Length;
    v18 = (struct _IRP *)ExAllocatePool2(0x48uLL, v17, 0x42536F49u);
    v14->AssociatedIrp.MasterIrp = v18;
    if ( v18 )
    {
      if ( a3 )
        memmove(v18, a3, v9);
      v14->Flags = 48;
      v14->UserBuffer = VirtualAddress;
      if ( VirtualAddress )
        v14->Flags = 112;
      goto LABEL_12;
    }
    goto LABEL_30;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_12:
  v14->UserIosb = a9;
  v14->UserEvent = a8;
  v14->Tail.Overlay.Thread = KeGetCurrentThread();
  IopQueueThreadIrp(v14);
  Thread = v14->Tail.Overlay.Thread;
  v20 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
  v21 = Thread->Process[1].Padding[3];
  if ( v21 )
  {
    v22 = *(_DWORD *)(v21 + 1084);
    if ( v20 >= v22 )
      v20 = v22;
  }
  if ( v20 < 2 && Thread == KeGetCurrentThread() )
  {
    if ( LODWORD(Thread[1].Timer.TimerListEntry.Flink) )
      v20 = 2;
  }
  v14->Flags = v14->Flags & 0xFFF1FFFF | ((v20 << 17) + 0x20000);
  return v14;
}
