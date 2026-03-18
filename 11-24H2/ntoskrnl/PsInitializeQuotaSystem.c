/*
 * XREFs of PsInitializeQuotaSystem @ 0x140C35B68
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     PspRegisterResource @ 0x1405E525C (PspRegisterResource.c)
 *     PspSanitizeResourceLimits @ 0x140773E2C (PspSanitizeResourceLimits.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
    qword_140F05850 = 0LL;
    dword_140F05878 = 0;
    qword_140F05888 = 0LL;
    qword_140F05870 = (__int64)&qword_140F05868;
    qword_140F05868 = (__int64)&qword_140F05868;
    qword_140F058A8 = (__int64)&qword_140F058A0;
    qword_140F058A0 = (__int64)&qword_140F058A0;
    qword_140F05848[0] = 0x10000LL;
    qword_140F05858 = (__int64)MmRaisePoolQuota;
    qword_140F05860 = (__int64)MmReturnPoolQuota;
    PspQuotaExpansionDescriptors[0] = 1;
    qword_140F05880 = 0x80000LL;
    qword_140F05890 = (__int64)MmRaisePoolQuota;
    qword_140F05898 = (__int64)MmReturnPoolQuota;
LABEL_10:
    LOBYTE(Pool2) = 1;
    return Pool2;
  }
  dword_140E28080 = 1;
  v4 = &unk_140E27EC0;
  dword_140E28084 = 1;
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
