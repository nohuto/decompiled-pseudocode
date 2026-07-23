/*
 * XREFs of PspLookupSyscallProviderByIdNoLock @ 0x14077165C
 * Callers:
 *     PspLookupSyscallProviderById @ 0x1405E1F54 (PspLookupSyscallProviderById.c)
 *     PsRegisterSyscallProvider @ 0x140771100 (PsRegisterSyscallProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspLookupSyscallProviderByIdNoLock(_QWORD *a1, volatile signed __int64 **a2)
{
  volatile signed __int64 *v2; // r8
  unsigned int v4; // r9d
  char *v5; // rdx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt

  v2 = (volatile signed __int64 *)PspSyscallProviders;
  v4 = -1073741275;
  while ( v2 != (volatile signed __int64 *)&PspSyscallProviders )
  {
    v5 = (char *)(*((_QWORD *)v2 + 2) - *a1);
    if ( !v5 )
      v5 = (char *)(*((_QWORD *)v2 + 3) - a1[1]);
    if ( !v5 )
    {
      _m_prefetchw((const void *)(v2 + 6));
      v6 = *((_QWORD *)v2 + 6);
      while ( (unsigned __int64)(v6 + 1) > 1 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64(v2 + 6, v6 + 1, v6);
        if ( v7 == v6 )
        {
          *a2 = v2;
          return 0;
        }
      }
      if ( v6 )
        __fastfail(0xEu);
      return (unsigned int)-1073741738;
    }
    v2 = (volatile signed __int64 *)*v2;
  }
  return v4;
}
