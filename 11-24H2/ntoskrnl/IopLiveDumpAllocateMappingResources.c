/*
 * XREFs of IopLiveDumpAllocateMappingResources @ 0x140596728
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x140595270 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     IoAllocateMdl @ 0x14025F1D0 (IoAllocateMdl.c)
 *     IopLiveDumpFreeMappingResources @ 0x140597EA0 (IopLiveDumpFreeMappingResources.c)
 *     MmAllocateDumpHibernateResources @ 0x140A9873C (MmAllocateDumpHibernateResources.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopLiveDumpAllocateMappingResources(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 Pool2; // rax
  unsigned int v4; // ebx
  unsigned int i; // esi
  _QWORD *v7; // r14
  void *DumpHibernateResources; // rax
  PMDL Mdl; // rax

  v1 = KeNumberProcessors_0;
  Pool2 = ExAllocatePool2(0x40uLL, 16LL * (unsigned int)KeNumberProcessors_0, 0x706D644Cu);
  v4 = 0;
  *(_QWORD *)(a1 + 896) = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(a1 + 888) = v1;
    for ( i = 0; i < v1; ++i )
    {
      v7 = (_QWORD *)(*(_QWORD *)(a1 + 896) + 16LL * i);
      DumpHibernateResources = (void *)MmAllocateDumpHibernateResources(0x10000LL);
      *v7 = DumpHibernateResources;
      if ( !DumpHibernateResources )
        goto LABEL_3;
      Mdl = IoAllocateMdl(DumpHibernateResources, 0x10000u, 0, 0, 0LL);
      v7[1] = Mdl;
      if ( !Mdl )
        goto LABEL_3;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 888) = 0;
LABEL_3:
    v4 = -1073741670;
    IopLiveDumpFreeMappingResources(a1);
  }
  return v4;
}
