/*
 * XREFs of KeChangeEnclavePageProtection @ 0x1405B7D00
 * Callers:
 *     MiProtectEnclavePages @ 0x1404C420C (MiProtectEnclavePages.c)
 * Callees:
 *     KiEnclsStatus @ 0x14046D4CC (KiEnclsStatus.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiEncls @ 0x1406ABEA0 (KiEncls.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeChangeEnclavePageProtection(__int64 a1, char a2)
{
  int *v2; // rbp
  unsigned int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  _BYTE v11[80]; // [rsp+B0h] [rbp+B0h] BYREF

  v2 = (int *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL);
  if ( !_bittest64(&KeFeatureBits, 0x2Bu) )
    return 3221225659LL;
  memset_0((void *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
  if ( (a2 & 8) != 0 )
  {
    v5 = 15;
    *v2 = 256;
  }
  else if ( a2 >= 0 )
  {
    v5 = 14;
    v6 = a2 & 1;
    v7 = *v2;
    if ( (a2 & 1) != 0 )
      v7 = 1;
    *v2 = v7;
    if ( (a2 & 2) != 0 )
      *v2 = v6 | 2;
    v8 = v6 | 2;
    if ( (a2 & 2) == 0 )
      v8 = a2 & 1;
    if ( (a2 & 4) != 0 )
      *v2 = v8 | 4;
  }
  else
  {
    v5 = 15;
    *v2 = 1024;
  }
  do
    v9 = KiEncls(v5, (unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL, a1, 0LL);
  while ( v9 == 15 );
  return KiEnclsStatus(v9);
}
