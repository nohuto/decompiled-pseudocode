/*
 * XREFs of IopLiveDumpFreeMappingResources @ 0x14059AF20
 * Callers:
 *     IopLiveDumpAllocateMappingResources @ 0x1405997A8 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x14059CE5C (IopLiveDumpReleaseResources.c)
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     MmReleaseDumpHibernateResources @ 0x1407ED788 (MmReleaseDumpHibernateResources.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpFreeMappingResources(__int64 a1)
{
  unsigned int i; // edi
  _QWORD *v3; // rsi
  struct _MDL *v4; // rcx

  if ( *(_QWORD *)(a1 + 896) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 888); ++i )
    {
      v3 = (_QWORD *)(*(_QWORD *)(a1 + 896) + 16LL * i);
      if ( *v3 )
        MmReleaseDumpHibernateResources(*v3, 0x10000LL);
      v4 = (struct _MDL *)v3[1];
      if ( v4 )
        IoFreeMdl(v4);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 896), 0x706D644Cu);
    *(_QWORD *)(a1 + 896) = 0LL;
    *(_DWORD *)(a1 + 888) = 0;
  }
}
