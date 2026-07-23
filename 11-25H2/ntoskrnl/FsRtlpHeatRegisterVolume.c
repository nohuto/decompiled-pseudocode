/*
 * XREFs of FsRtlpHeatRegisterVolume @ 0x1407017FC
 * Callers:
 *     FsRtlHeatInit @ 0x140701530 (FsRtlHeatInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14028A9E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     McTemplateK0jq_EtwWriteTransfer @ 0x14057E768 (McTemplateK0jq_EtwWriteTransfer.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlpHeatRegisterVolume(__int64 a1, const GUID *a2, unsigned int *a3)
{
  PVOID *i; // r9
  char *v7; // rcx
  __int64 Pool2; // r8
  int v9; // ebx
  PVOID *v10; // rax
  unsigned int v11; // edx
  __int128 v12; // xmm0
  __int64 *v13; // rcx
  __int64 v14; // rdx
  void *ExplicitScope; // [rsp+20h] [rbp-28h]

  ExAcquireResourceExclusiveLite(&stru_140F8D9D0, 1u);
  for ( i = (PVOID *)FsRtlTieringHeatData; i != &FsRtlTieringHeatData; i = (PVOID *)*i )
  {
    v7 = *(char **)((char *)i + 20) - *(_QWORD *)a1;
    if ( !v7 )
      v7 = *(char **)((char *)i + 28) - *(_QWORD *)(a1 + 8);
    if ( !v7 )
    {
      ++*((_DWORD *)i + 4);
      *a3 = *((_DWORD *)i + 9);
      goto LABEL_21;
    }
  }
  Pool2 = ExAllocatePool2(0x102uLL);
  if ( !Pool2 )
  {
    v9 = -1073741670;
    goto LABEL_22;
  }
  v10 = (PVOID *)FsRtlTieringHeatData;
  v11 = *(_DWORD *)a1 ^ (*(unsigned __int16 *)(a1 + 6) | (*(unsigned __int16 *)(a1 + 4) << 16)) ^ (*(unsigned __int8 *)(a1 + 15) | (*(unsigned __int8 *)(a1 + 10) << 24));
  while ( v10 != &FsRtlTieringHeatData )
  {
    if ( *((_DWORD *)v10 + 9) == v11 )
    {
      if ( !++v11 )
        v10 = &FsRtlTieringHeatData;
    }
    else if ( *((_DWORD *)v10 + 9) > v11 )
    {
      break;
    }
    v10 = (PVOID *)*v10;
  }
  v12 = *(_OWORD *)a1;
  *(_DWORD *)(Pool2 + 36) = v11;
  *(_DWORD *)(Pool2 + 16) = 1;
  *(_OWORD *)(Pool2 + 20) = v12;
  v13 = (__int64 *)v10[1];
  if ( (PVOID *)*v13 != v10 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v10;
  *(_QWORD *)(Pool2 + 8) = v13;
  *v13 = Pool2;
  v10[1] = (PVOID)Pool2;
  *a3 = v11;
  if ( !MS_StorageTiering_Provider_Context[0] )
    EtwRegister(
      &MS_StorageTiering_Provider,
      (PETWENABLECALLBACK)FsRtlpTieringHeatEventsControlCallbackV2,
      MS_StorageTiering_Provider_Context,
      MS_StorageTiering_Provider_Context);
LABEL_21:
  v9 = 0;
LABEL_22:
  ExReleaseResourceLite(&stru_140F8D9D0);
  if ( v9 >= 0 )
  {
    if ( (Microsoft_Windows_Storage_Tiering_IoHeatEnableBits & 1) != 0 )
    {
      LODWORD(ExplicitScope) = *a3;
      McTemplateK0jq_EtwWriteTransfer(MS_StorageTiering_Provider_Context, v14, a2, a1, (__int64)ExplicitScope);
    }
    ZwUpdateWnfStateData(&WNF_FSRL_TIERED_VOLUME_DETECTED, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  return (unsigned int)v9;
}
