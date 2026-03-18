/*
 * XREFs of FsRtlpDedupChangeRegisterVolume @ 0x14070CCE0
 * Callers:
 *     FsRtlDedupChangeInit @ 0x14070C8F0 (FsRtlDedupChangeInit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     McTemplateK0jjtq_EtwWriteTransfer @ 0x140581AA4 (McTemplateK0jjtq_EtwWriteTransfer.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlpDedupChangeRegisterVolume(__int64 a1, __int128 *a2, char a3, const GUID *a4, unsigned int *a5)
{
  PVOID *i; // r10
  char *v10; // rcx
  __int64 Pool2; // r8
  int v12; // ebx
  PVOID *v13; // rax
  unsigned int v14; // edx
  __int128 v15; // xmm1
  __int64 *v16; // rcx
  __int64 v17; // rdx

  ExAcquireResourceExclusiveLite(&Resource, 1u);
  for ( i = (PVOID *)FsRtlDedupChangeData; i != &FsRtlDedupChangeData; i = (PVOID *)*i )
  {
    v10 = (char *)i[2] - *(_QWORD *)a1;
    if ( !v10 )
      v10 = (char *)i[3] - *(_QWORD *)(a1 + 8);
    if ( !v10 )
    {
      *a5 = *((_DWORD *)i + 12);
      *((_BYTE *)i + 52) = a3;
      goto LABEL_21;
    }
  }
  Pool2 = ExAllocatePool2(0x102uLL);
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_22;
  }
  v13 = (PVOID *)FsRtlDedupChangeData;
  v14 = *(_DWORD *)a1 ^ (*(unsigned __int16 *)(a1 + 6) | (*(unsigned __int16 *)(a1 + 4) << 16)) ^ (*(unsigned __int8 *)(a1 + 15) | (*(unsigned __int8 *)(a1 + 10) << 24));
  while ( v13 != &FsRtlDedupChangeData )
  {
    if ( *((_DWORD *)v13 + 12) == v14 )
    {
      if ( !++v14 )
        v13 = &FsRtlDedupChangeData;
    }
    else if ( *((_DWORD *)v13 + 12) > v14 )
    {
      break;
    }
    v13 = (PVOID *)*v13;
  }
  *(_OWORD *)(Pool2 + 16) = *(_OWORD *)a1;
  v15 = *a2;
  *(_DWORD *)(Pool2 + 48) = v14;
  *(_BYTE *)(Pool2 + 52) = a3;
  *(_OWORD *)(Pool2 + 32) = v15;
  v16 = (__int64 *)v13[1];
  if ( (PVOID *)*v16 != v13 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = v13;
  *(_QWORD *)(Pool2 + 8) = v16;
  *v16 = Pool2;
  v13[1] = (PVOID)Pool2;
  *a5 = v14;
  if ( !MS_Dedup_Change_Provider_Context[0] )
    EtwRegister(
      &MS_Dedup_Change_Provider,
      (PETWENABLECALLBACK)FsRtlpDedupChangeEventsControlCallbackV2,
      MS_Dedup_Change_Provider_Context,
      MS_Dedup_Change_Provider_Context);
LABEL_21:
  v12 = 0;
LABEL_22:
  ExReleaseResourceLite(&Resource);
  if ( v12 >= 0 )
  {
    if ( (Microsoft_Windows_Dedup_ChangeEnableBits & 1) != 0 )
      McTemplateK0jjtq_EtwWriteTransfer(MS_Dedup_Change_Provider_Context, v17, a4, a1, (__int64)a2, a3, *a5);
    ZwUpdateWnfStateData((__int64)&WNF_FSRL_REFSDEDUP_VOLUME_DETECTED, 0LL);
  }
  return (unsigned int)v12;
}
