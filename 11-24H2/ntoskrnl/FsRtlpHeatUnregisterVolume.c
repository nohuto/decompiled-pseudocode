/*
 * XREFs of FsRtlpHeatUnregisterVolume @ 0x14070D880
 * Callers:
 *     FsRtlHeatUninit @ 0x14070D690 (FsRtlHeatUninit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpHeatUnregisterVolume(_QWORD *a1)
{
  PVOID *i; // rcx
  char *v3; // rdx
  PVOID *v5; // rdx
  PVOID **v6; // rax

  ExAcquireResourceExclusiveLite(&stru_140F8E190, 1u);
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
  ExReleaseResourceLite(&stru_140F8E190);
}
