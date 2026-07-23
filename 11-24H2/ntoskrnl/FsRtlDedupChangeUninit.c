/*
 * XREFs of FsRtlDedupChangeUninit @ 0x14070A650
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     McTemplateK0jjq_EtwWriteTransfer @ 0x14057ED9C (McTemplateK0jjq_EtwWriteTransfer.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlDedupChangeUninit(_DWORD *a1, _QWORD *a2, __int64 a3)
{
  PVOID *i; // rcx
  PVOID *v7; // r8
  char *v8; // rdx
  PVOID **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // [rsp+28h] [rbp-10h]

  ExAcquireResourceExclusiveLite(&Resource, 1u);
  for ( i = (PVOID *)FsRtlDedupChangeData; i != &FsRtlDedupChangeData; i = (PVOID *)*i )
  {
    v7 = (PVOID *)*i;
    v8 = (char *)i[2] - *a2;
    if ( !v8 )
      v8 = (char *)i[3] - a2[1];
    if ( !v8 )
    {
      if ( v7[1] != i || (v9 = (PVOID **)i[1], *v9 != i) )
        __fastfail(3u);
      *v9 = v7;
      v7[1] = v9;
      ExFreePoolWithTag(i, 0x68436544u);
      break;
    }
  }
  ExReleaseResourceLite(&Resource);
  if ( (Microsoft_Windows_Dedup_ChangeEnableBits & 8) != 0 )
  {
    LODWORD(v13) = *a1;
    McTemplateK0jjq_EtwWriteTransfer(v11, v10, v12, (__int64)a2, a3, v13);
  }
}
