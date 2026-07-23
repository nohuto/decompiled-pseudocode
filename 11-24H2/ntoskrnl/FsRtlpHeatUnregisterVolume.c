/*
 * XREFs of FsRtlpHeatUnregisterVolume @ 0x14070B420
 * Callers:
 *     FsRtlHeatUninit @ 0x14070B230 (FsRtlHeatUninit.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpHeatUnregisterVolume(_QWORD *a1)
{
  PVOID *i; // rcx
  char *v3; // rdx
  PVOID *v5; // rdx
  PVOID **v6; // rax

  ExAcquireResourceExclusiveLite(&stru_140F8E370, 1u);
  for ( i = (PVOID *)FsRtlTieringHeatData; i != &FsRtlTieringHeatData; i = (PVOID *)*i )
  {
    v3 = *(char **)((char *)i + 20) - *a1;
    if ( !v3 )
      v3 = *(char **)((char *)i + 28) - a1[1];
    if ( !v3 )
    {
      if ( (*((_DWORD *)i + 4))-- == 1 )
      {
        v5 = (PVOID *)*i;
        if ( *((PVOID **)*i + 1) != i || (v6 = (PVOID **)i[1], *v6 != i) )
          __fastfail(3u);
        *v6 = v5;
        v5[1] = v6;
        ExFreePoolWithTag(i, 0x68745346u);
      }
      break;
    }
  }
  ExReleaseResourceLite(&stru_140F8E370);
}
