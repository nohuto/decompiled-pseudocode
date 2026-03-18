/*
 * XREFs of PsInitializeQuotaSystem @ 0x140C2489C
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     PspRegisterResource @ 0x1405D92C0 (PspRegisterResource.c)
 *     PspSanitizeResourceLimits @ 0x14076445C (PspSanitizeResourceLimits.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

char __fastcall PsInitializeQuotaSystem(int a1)
{
  char v1; // dl
  int v2; // r8d
  int v3; // edx
  _QWORD *v4; // rdx
  char *v5; // rcx
  ULONG_PTR Pool2; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx

  if ( a1 )
  {
    PspRegisterResource(0, 5, -1073741756);
    PspRegisterResource(1, v1, v2);
    PspRegisterResource(2, 0, -1073741524);
    PspRegisterResource(v3 + 3, v3, -1073741663);
    qword_140F05470 = 0LL;
    dword_140F05498 = 0;
    qword_140F054A8 = 0LL;
    qword_140F05490 = (__int64)&qword_140F05488;
    qword_140F05488 = (__int64)&qword_140F05488;
    qword_140F054C8 = (__int64)&qword_140F054C0;
    qword_140F054C0 = (__int64)&qword_140F054C0;
    qword_140F05468[0] = 0x10000LL;
    qword_140F05478 = (__int64)MmRaisePoolQuota;
    qword_140F05480 = (__int64)MmReturnPoolQuota;
    PspQuotaExpansionDescriptors[0] = 1;
    qword_140F054A0 = 0x80000LL;
    qword_140F054B0 = (__int64)MmRaisePoolQuota;
    qword_140F054B8 = (__int64)MmReturnPoolQuota;
LABEL_10:
    LOBYTE(Pool2) = 1;
    return Pool2;
  }
  dword_140E27E40 = 1;
  v4 = &unk_140E27C80;
  dword_140E27E44 = 1;
  v5 = PspResourceFlags;
  do
  {
    if ( (*v5 & 2) == 0 )
      *v4 = -1LL;
    v5 += 8;
    v4 += 16;
  }
  while ( (__int64)v5 < (__int64)&PspSystemMitigationAuditOptions );
  KeGetCurrentThread()->ApcState.Process[1].SchedulingGroup = (_KSCHEDULING_GROUP *)&PspSystemQuotaBlock;
  PspSanitizeResourceLimits((unsigned int *)PspDefaultResourceLimits, 1);
  Pool2 = ExAllocatePool2(0x100uLL, 0x300uLL, 0x74517350uLL);
  PspQuotaBlockTable = Pool2;
  if ( Pool2 )
  {
    v7 = (_QWORD *)(Pool2 + 8);
    v8 = 32LL;
    do
    {
      v7[1] = v7;
      *v7 = v7;
      *(v7 - 1) = 0LL;
      v7 += 3;
      --v8;
    }
    while ( v8 );
    goto LABEL_10;
  }
  return Pool2;
}
