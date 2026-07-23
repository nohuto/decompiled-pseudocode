/*
 * XREFs of CmFcpFindNextProviderWithDescriptors @ 0x140667514
 * Callers:
 *     CmFcpSecondaryMultiPartDumpDataCallback @ 0x1406676C0 (CmFcpSecondaryMultiPartDumpDataCallback.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CmFcpFindNextProviderWithDescriptors(__int64 *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rdx

  while ( 1 )
  {
    if ( a1 == &qword_140EF76C8 )
      return 0LL;
    v1 = a1[14];
    if ( v1 )
    {
      v2 = a1[15];
      if ( v2 )
      {
        if ( v2 > v1 )
          break;
      }
    }
    a1 = (__int64 *)*a1;
  }
  return a1;
}
