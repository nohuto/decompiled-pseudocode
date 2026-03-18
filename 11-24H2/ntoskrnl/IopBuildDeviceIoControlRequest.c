/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x140267920
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x1402678C0 (IoBuildDeviceIoControlRequest.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x140267BF0 (IoAllocateMdl.c)
 *     IopProbeAndLockPages @ 0x140267E4C (IopProbeAndLockPages.c)
 *     IoFreeIrp @ 0x14031A520 (IoFreeIrp.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  IRP *v16; // rbx
  __int64 v17; // rdi
  int v18; // esi
  struct _IRP *v19; // rax
  PETHREAD Thread; // rdx
  int v21; // eax
  unsigned __int64 v22; // rcx
  int v23; // ecx
  struct _IRP *Pool2; // rax
  int v26; // eax
  int v27; // r14d
  PMDL Mdl; // rax
  int v29; // edx

  v9 = a4;
  v11 = a2;
  Irp = IopAllocateIrpExReturn(a2, *(unsigned __int8 *)(a2 + 76), 0LL);
  v16 = (IRP *)Irp;
  if ( !Irp )
    return 0LL;
  v17 = *(_QWORD *)(Irp + 184);
  *(_BYTE *)(v17 - 72) = (a7 != 0) + 14;
  *(_DWORD *)(v17 - 64) = Length;
  *(_DWORD *)(v17 - 56) = v9;
  *(_DWORD *)(v17 - 48) = a1;
  v18 = a1 & 3;
  if ( v18 )
  {
    if ( v18 != 1 && v18 != 2 )
    {
      *(_QWORD *)(Irp + 112) = VirtualAddress;
      *(_QWORD *)(v17 - 40) = a3;
      goto LABEL_10;
    }
    if ( a3 )
    {
      Pool2 = (struct _IRP *)ExAllocatePool2(0x4AuLL);
      v16->AssociatedIrp.MasterIrp = Pool2;
      if ( !Pool2 )
        goto LABEL_28;
      memmove(Pool2, a3, v9);
      v26 = 48;
      v27 = 0;
    }
    else
    {
      v27 = 0;
      v26 = 0;
    }
    v16->Flags = v26;
    if ( !VirtualAddress )
      goto LABEL_10;
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v16->MdlAddress = Mdl;
    if ( Mdl )
    {
      LOBYTE(v27) = v18 != 1;
      IopProbeAndLockPages((_DWORD)Mdl, v29, v27, v11, *(unsigned __int8 *)(v17 - 72));
      goto LABEL_10;
    }
    if ( a3 )
      ExFreePoolWithTag(v16->AssociatedIrp.MasterIrp, 0);
LABEL_28:
    IoFreeIrp(v16);
    return 0LL;
  }
  if ( (_DWORD)v9 || Length )
  {
    v19 = (struct _IRP *)ExAllocatePool2(0x48uLL);
    v16->AssociatedIrp.MasterIrp = v19;
    if ( v19 )
    {
      if ( a3 )
        memmove(v19, a3, v9);
      v16->Flags = 48;
      v16->UserBuffer = VirtualAddress;
      if ( VirtualAddress )
        v16->Flags = 112;
      goto LABEL_10;
    }
    goto LABEL_28;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_10:
  v16->UserIosb = a9;
  v16->UserEvent = a8;
  v16->Tail.Overlay.Thread = KeGetCurrentThread();
  IopQueueThreadIrp((__int64)v16, v14, v15);
  Thread = v16->Tail.Overlay.Thread;
  v21 = (*((_DWORD *)&Thread[1].SwapListEntry + 2) >> 9) & 7;
  v22 = Thread->Process[1].Padding[3];
  if ( v22 )
  {
    v23 = *(_DWORD *)(v22 + 1084);
    if ( v21 >= v23 )
      v21 = v23;
  }
  if ( v21 < 2 && Thread == KeGetCurrentThread() )
  {
    if ( LODWORD(Thread[1].Timer.TimerListEntry.Flink) )
      v21 = 2;
  }
  v16->Flags = v16->Flags & 0xFFF1FFFF | ((v21 << 17) + 0x20000);
  return v16;
}
