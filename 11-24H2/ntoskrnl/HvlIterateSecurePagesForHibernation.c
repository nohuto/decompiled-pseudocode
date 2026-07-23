/*
 * XREFs of HvlIterateSecurePagesForHibernation @ 0x140586570
 * Callers:
 *     PopWriteSecurePages @ 0x1405D0EA4 (PopWriteSecurePages.c)
 * Callees:
 *     HvlpEndSecurePageListIteration @ 0x140589660 (HvlpEndSecurePageListIteration.c)
 *     HvlpStartSecurePageListIteration @ 0x140589958 (HvlpStartSecurePageListIteration.c)
 *     VslGetSecurePageList @ 0x14058A504 (VslGetSecurePageList.c)
 *     PopWriteSecurePagesCallback @ 0x1405D0F58 (PopWriteSecurePagesCallback.c)
 */

__int64 __fastcall HvlIterateSecurePagesForHibernation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  __int64 v9; // rcx
  int SecurePageList; // edi
  unsigned int v11; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = a1;
  v5 = 0;
  v12[0] = 0LL;
  v11 = 0;
  result = HvlpStartSecurePageListIteration(
             0LL,
             3LL,
             (char *)HvlpHibernateScratchPage + 4096,
             (char *)HvlpHibernateScratchPage + (unsigned int)((HvlpHibernateScratchPageCount - 2) << 12) + 4096,
             (HvlpHibernateScratchPageCount - 2) << 12,
             v12);
  if ( (int)result >= 0 )
  {
    do
    {
      LOBYTE(v13) = 0;
      LOBYTE(v9) = 1;
      SecurePageList = VslGetSecurePageList(v9, 0LL, &v11, &v13);
      if ( SecurePageList >= 0 )
        PopWriteSecurePagesCallback(a2, v12[0], v11);
    }
    while ( !SecurePageList );
    HvlpEndSecurePageListIteration(0LL, a3, a4);
    if ( SecurePageList != -2147483622 )
      return (unsigned int)SecurePageList;
    return v5;
  }
  return result;
}
