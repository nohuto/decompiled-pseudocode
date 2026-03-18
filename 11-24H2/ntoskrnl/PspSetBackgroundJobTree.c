/*
 * XREFs of PspSetBackgroundJobTree @ 0x140A58988
 * Callers:
 *     NtSetInformationJobObject @ 0x140ACE760 (NtSetInformationJobObject.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1408EBCAC (PspEnumJobsAndProcessesInJobHierarchy.c)
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
