/*
 * XREFs of SmKmFileInfoGetPath @ 0x14078A818
 * Callers:
 *     SmProcessListRequestExtended @ 0x140788E88 (SmProcessListRequestExtended.c)
 *     SmcGetCacheStats @ 0x14078E27C (SmcGetCacheStats.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x14045E010 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObQueryNameStringMode @ 0x1408C0E20 (ObQueryNameStringMode.c)
 */

__int64 __fastcall SmKmFileInfoGetPath(__int64 a1, void *a2, unsigned int a3)
{
  __int64 v4; // rdi
  BOOLEAN v6; // bp
  int NameStringMode; // ebx
  unsigned int v8; // eax
  int v10; // [rsp+30h] [rbp-248h] BYREF
  unsigned __int16 v11; // [rsp+40h] [rbp-238h] BYREF
  void *Src; // [rsp+48h] [rbp-230h]

  v10 = 0;
  v4 = a3;
  memset_0(&v11, 0, 0x210uLL);
  v6 = IoSetThreadHardErrorMode(0);
  NameStringMode = ObQueryNameStringMode(*(_QWORD *)(a1 + 8), (unsigned int)&v11, 528, (unsigned int)&v10, 0);
  if ( NameStringMode >= 0 )
  {
    memset_0(a2, 0, (unsigned int)v4);
    v8 = v11;
    if ( v11 >= (unsigned __int64)(v4 - 2) )
      v8 = v4 - 2;
    memmove(a2, Src, v8);
    NameStringMode = 0;
  }
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)NameStringMode;
}
