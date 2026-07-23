/*
 * XREFs of IopBuildAsynchronousFsdRequest @ 0x14025DD60
 * Callers:
 *     IoBuildAsynchronousFsdRequest @ 0x14025DD20 (IoBuildAsynchronousFsdRequest.c)
 *     PnpQueryInterface @ 0x140982B38 (PnpQueryInterface.c)
 *     IopBuildSynchronousFsdRequest @ 0x140A326E0 (IopBuildSynchronousFsdRequest.c)
 *     IopCreateArcName @ 0x140A6FCE0 (IopCreateArcName.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x14022BEB0 (PsGetIoPriorityThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14025CAE0 (IoSetDiskIoAttributionFromThread.c)
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     IopProbeAndLockPages @ 0x14025F42C (IopProbeAndLockPages.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x1402C30B0 (IoFreeIrp.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopBuildAsynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6)
{
  ULONG_PTR v6; // r13
  __int64 v8; // rsi
  __int64 Irp; // rbx
  unsigned __int8 *v11; // rdi
  int v12; // eax
  int v14; // eax
  PMDL Mdl; // rax
  int v17; // edx
  void *Pool2; // rax
  int v19; // eax

  v6 = a4;
  v8 = a2;
  LOBYTE(a2) = *(_BYTE *)(a2 + 76);
  Irp = IopAllocateIrpExReturn(v8, a2, 0LL);
  if ( Irp )
  {
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    v11 = (unsigned __int8 *)(*(_QWORD *)(Irp + 184) - 72LL);
    *v11 = a1;
    if ( a1 <= 0x1B )
    {
      v12 = 138478080;
      if ( _bittest(&v12, a1) )
      {
LABEL_4:
        *(_DWORD *)(Irp + 16) = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(*(_QWORD *)(Irp + 152)) << 17)
                                                                    + 0x20000);
        *(_QWORD *)(Irp + 72) = a6;
        return Irp;
      }
    }
    v14 = *(_DWORD *)(v8 + 48);
    if ( (v14 & 4) != 0 )
    {
      Pool2 = (void *)ExAllocatePool2(0x48uLL, v6, 0x42536F49u);
      *(_QWORD *)(Irp + 24) = Pool2;
      if ( Pool2 )
      {
        if ( a1 == 4 )
        {
          memmove(Pool2, a3, v6);
          v19 = 48;
        }
        else
        {
          *(_QWORD *)(Irp + 112) = a3;
          v19 = 112;
        }
        *(_DWORD *)(Irp + 16) = v19;
        LODWORD(v6) = a4;
        goto LABEL_8;
      }
    }
    else
    {
      if ( (v14 & 0x10) == 0 )
      {
        *(_QWORD *)(Irp + 112) = a3;
LABEL_8:
        *((_DWORD *)v11 + 2) = v6;
        if ( a5 )
          *((_QWORD *)v11 + 3) = *a5;
        if ( *(_DWORD *)(v8 + 72) == 7
          || *(_DWORD *)(v8 + 72) == 8
          || *(_DWORD *)(v8 + 72) == 9
          || *(_DWORD *)(v8 + 72) == 36 )
        {
          IoSetDiskIoAttributionFromThread(Irp, *(struct _KTHREAD **)(Irp + 152));
        }
        goto LABEL_4;
      }
      Mdl = IoAllocateMdl(a3, v6, 0, 0, 0LL);
      *(_QWORD *)(Irp + 8) = Mdl;
      if ( Mdl )
      {
        IopProbeAndLockPages((_DWORD)Mdl, v17, a1 == 3, v8, *v11);
        goto LABEL_8;
      }
    }
    IoFreeIrp((PIRP)Irp);
  }
  return 0LL;
}
