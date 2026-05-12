/*
 * XREFs of NvmeAdapterPowerUninitialize @ 0x14012FB5C
 * Callers:
 *     DeleteNvmeAdapter @ 0x1400CB320 (DeleteNvmeAdapter.c)
 *     NvmeAdapterPowerInitialize @ 0x14012F574 (NvmeAdapterPowerInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall NvmeAdapterPowerUninitialize(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v3; // rsi
  void *v4; // rcx
  struct _IO_WORKITEM *v5; // rcx
  struct _IO_WORKITEM *v6; // rcx
  __int64 i; // rdi
  void *v8; // rcx
  void *v9; // rcx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 160);
    v3 = g_CpuInfo;
    if ( v1 )
    {
      v4 = *(void **)(v1 + 48);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0x4F506152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 160) + 48LL) = 0LL;
      }
      v5 = *(struct _IO_WORKITEM **)(*(_QWORD *)(a1 + 160) + 56LL);
      if ( v5 )
      {
        IoFreeWorkItem(v5);
        *(_QWORD *)(*(_QWORD *)(a1 + 160) + 56LL) = 0LL;
      }
      v6 = *(struct _IO_WORKITEM **)(*(_QWORD *)(a1 + 160) + 216LL);
      if ( v6 )
      {
        IoFreeWorkItem(v6);
        *(_QWORD *)(*(_QWORD *)(a1 + 160) + 216LL) = 0LL;
      }
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL) )
      {
        for ( i = 0LL; (unsigned int)i < v3[2]; i = (unsigned int)(i + 1) )
        {
          v8 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL) + 8 * i);
          if ( v8 )
            ExFreePoolWithTag(v8, 0x4E506152u);
        }
        ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 160) + 16LL), 0x4E506152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 160) + 16LL) = 0LL;
      }
      v9 = *(void **)(*(_QWORD *)(a1 + 160) + 24LL);
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0x4E506152u);
        *(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL) = 0LL;
      }
      ExFreePoolWithTag(*(PVOID *)(a1 + 160), 0x4E506152u);
      *(_QWORD *)(a1 + 160) = 0LL;
    }
  }
}
