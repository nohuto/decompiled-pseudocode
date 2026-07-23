/*
 * XREFs of IopLiveDumpReleaseResources @ 0x140599DDC
 * Callers:
 *     IoCaptureLiveDump @ 0x1404DC764 (IoCaptureLiveDump.c)
 *     IoDiscardDeferredLiveDumpData @ 0x14059497C (IoDiscardDeferredLiveDumpData.c)
 *     IoWriteDeferredLiveDumpData @ 0x140594B84 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140595270 (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140495C54 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeMappingResources @ 0x140597EA0 (IopLiveDumpFreeMappingResources.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall IopLiveDumpReleaseResources(__int64 a1)
{
  _QWORD **v2; // rdi
  _QWORD *v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // r8
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  unsigned int i; // edi
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 80) & 0x8000) != 0 )
    {
      v2 = (_QWORD **)(a1 + 1200);
      while ( 1 )
      {
        v3 = *v2;
        if ( *v2 == v2 )
          break;
        if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
          __fastfail(3u);
        *v2 = v4;
        v4[1] = v2;
        ExFreePoolWithTag(v3, 0x706D644Cu);
      }
    }
    IopLiveDumpFreeMappingResources(a1);
    v6 = *(void **)(a1 + 1168);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0x706D644Cu);
      *(_QWORD *)(a1 + 1168) = 0LL;
    }
    v7 = *(void **)(a1 + 560);
    if ( v7 )
    {
      ExFreePoolWithTag(v7, 0x706D644Cu);
      *(_QWORD *)(a1 + 560) = 0LL;
    }
    v8 = *(void **)(a1 + 592);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x706D644Cu);
      *(_QWORD *)(a1 + 592) = 0LL;
    }
    v9 = *(void **)(a1 + 648);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x706D644Cu);
      *(_QWORD *)(a1 + 648) = 0LL;
    }
    v10 = *(void **)(a1 + 672);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x706D644Cu);
      *(_QWORD *)(a1 + 672) = 0LL;
    }
    v11 = *(_QWORD *)(a1 + 144);
    if ( v11 )
    {
      MmFreeIndependentPages(v11, *(unsigned int *)(a1 + 152), v5);
      *(_QWORD *)(a1 + 144) = 0LL;
    }
    v12 = *(_QWORD *)(a1 + 1048);
    if ( v12 )
    {
      MmFreeIndependentPages(v12, *(unsigned int *)(a1 + 1056), v5);
      *(_QWORD *)(a1 + 1048) = 0LL;
    }
    v13 = *(_QWORD *)(a1 + 1000);
    if ( v13 )
    {
      MmFreeIndependentPages(v13, *(unsigned int *)(a1 + 1008), v5);
      *(_QWORD *)(a1 + 1000) = 0LL;
    }
    IopLiveDumpFreeDumpBuffers(a1);
    v14 = *(void **)(a1 + 904);
    if ( v14 )
    {
      ZwClose(v14);
      *(_QWORD *)(a1 + 904) = 0LL;
    }
    v15 = *(void **)(a1 + 912);
    if ( v15 )
    {
      ZwClose(v15);
      *(_QWORD *)(a1 + 912) = 0LL;
    }
    v16 = *(void **)(a1 + 920);
    if ( v16 )
    {
      ZwClose(v16);
      *(_QWORD *)(a1 + 920) = 0LL;
    }
    v17 = *(void **)(a1 + 1104);
    if ( v17 )
    {
      ObfDereferenceObjectWithTag(v17, 0x746C6644u);
      *(_QWORD *)(a1 + 1104) = 0LL;
    }
    v18 = *(void **)(a1 + 1096);
    if ( v18 != (void *)-1LL )
    {
      ObCloseHandle(v18, 0);
      *(_QWORD *)(a1 + 1096) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 1120) )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 1112); ++i )
      {
        v20 = *(void **)(*(_QWORD *)(a1 + 1120) + 8LL * i);
        if ( v20 )
        {
          ExFreePoolWithTag(v20, 0x706D644Cu);
          *(_QWORD *)(*(_QWORD *)(a1 + 1120) + 8LL * i) = 0LL;
        }
      }
      ExFreePoolWithTag(*(PVOID *)(a1 + 1120), 0x706D644Cu);
      *(_QWORD *)(a1 + 1120) = 0LL;
      *(_DWORD *)(a1 + 1112) = 0;
    }
    v21 = *(void **)(a1 + 1128);
    if ( v21 )
    {
      ExFreePoolWithTag(v21, 0x706D644Cu);
      *(_QWORD *)(a1 + 1128) = 0LL;
    }
    v22 = *(void **)(a1 + 1136);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0x706D644Cu);
      *(_QWORD *)(a1 + 1136) = 0LL;
    }
  }
}
