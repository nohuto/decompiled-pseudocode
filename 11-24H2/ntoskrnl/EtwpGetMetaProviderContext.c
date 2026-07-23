/*
 * XREFs of EtwpGetMetaProviderContext @ 0x140423450
 * Callers:
 *     EtwpEnableMetaProviderGuid @ 0x1404233C0 (EtwpEnableMetaProviderGuid.c)
 *     EtwpGetTraceGuidInfo @ 0x1409DD060 (EtwpGetTraceGuidInfo.c)
 * Callees:
 *     <none>
 */

__int64 (**__fastcall EtwpGetMetaProviderContext(_QWORD *a1))[2]
{
  __int64 i; // rdx
  __int64 *v2; // r8
  __int64 v3; // rax

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 0x11 )
      return 0LL;
    v2 = (__int64 *)(&EtwMetaProviderContext)[i][2];
    v3 = *a1 - *v2;
    if ( *a1 == *v2 )
      v3 = a1[1] - v2[1];
    if ( !v3 )
      break;
  }
  return (&EtwMetaProviderContext)[i];
}
