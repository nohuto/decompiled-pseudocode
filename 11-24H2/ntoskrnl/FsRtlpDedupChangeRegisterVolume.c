/*
 * XREFs of FsRtlpDedupChangeRegisterVolume @ 0x14070A880
 * Callers:
 *     FsRtlDedupChangeInit @ 0x14070A490 (FsRtlDedupChangeInit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     McTemplateK0jjtq_EtwWriteTransfer @ 0x14057EE24 (McTemplateK0jjtq_EtwWriteTransfer.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     EtwRegister @ 0x1409EA180 (EtwRegister.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
  Pool2 = ExAllocatePool2(0x102uLL, 0x38uLL, 0x68436544u);
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
    ZwUpdateWnfStateData(&WNF_FSRL_REFSDEDUP_VOLUME_DETECTED, 0LL, 0, 0LL, 0LL, 0, 0);
  }
  return (unsigned int)v12;
}
