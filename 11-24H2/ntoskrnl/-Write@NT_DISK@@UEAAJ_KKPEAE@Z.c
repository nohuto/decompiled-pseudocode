/*
 * XREFs of ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14070BAB0
 * Callers:
 *     <none>
 * Callees:
 *     IoSynchronousCallDriver @ 0x14025D510 (IoSynchronousCallDriver.c)
 *     IoBuildAsynchronousFsdRequest @ 0x14025DD20 (IoBuildAsynchronousFsdRequest.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x14025F510 (MmUnlockPages.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 */

__int64 __fastcall NT_DISK::Write(PDEVICE_OBJECT *this, LARGE_INTEGER a2, ULONG a3, unsigned __int8 *a4)
{
  PIRP v5; // rax
  IRP *v6; // rbx
  unsigned int v7; // edi
  LARGE_INTEGER v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v5 = IoBuildAsynchronousFsdRequest(4u, this[49], a4, a3, &v9, 0LL);
  v6 = v5;
  if ( v5 )
  {
    v5->Tail.Overlay.CurrentStackLocation[-1].Flags |= 0x12u;
    v7 = IoSynchronousCallDriver(this[49], v5);
    MmUnlockPages(v6->MdlAddress);
    IoFreeMdl(v6->MdlAddress);
    IoFreeIrp(v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
