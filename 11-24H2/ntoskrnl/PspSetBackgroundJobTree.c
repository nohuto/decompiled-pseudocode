/*
 * XREFs of PspSetBackgroundJobTree @ 0x140A50138
 * Callers:
 *     NtSetInformationJobObject @ 0x140ACC7F0 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspSetBackgroundJobTree(char *Object, char a2)
{
  struct _ERESOURCE *v2; // rdi
  char v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+41h] [rbp+9h]

  v2 = (struct _ERESOURCE *)(Object + 56);
  v7 = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(Object + 56), 1u);
  if ( a2 )
  {
    if ( (*((_DWORD *)Object + 388) & 0x400) != 0 )
      goto LABEL_3;
    _interlockedbittestandset((volatile signed __int32 *)Object + 388, 0xAu);
  }
  else
  {
    if ( (*((_DWORD *)Object + 388) & 0x400) == 0 )
    {
LABEL_3:
      ExReleaseResourceLite(v2);
      return 3221225485LL;
    }
    _interlockedbittestandreset((volatile signed __int32 *)Object + 388, 0xAu);
  }
  v6 = a2;
  PspEnumJobsAndProcessesInJobHierarchy(
    Object,
    (int)PspSetJobBackgroundCountCallback,
    0,
    (int)PspSetProcessBackgroundCountCallback,
    (__int64)&v6,
    5);
  ExReleaseResourceLite(v2);
  return 0LL;
}
