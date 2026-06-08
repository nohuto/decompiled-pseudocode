/*
 * XREFs of sub_140029660 @ 0x140029660
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140029798 @ 0x140029798 (sub_140029798.c)
 *     sub_140046638 @ 0x140046638 (sub_140046638.c)
 */

__int64 sub_140029660()
{
  unsigned int v0; // ebx
  __int64 i; // r8
  unsigned int j; // edx
  void *v3; // rcx
  unsigned int v4; // edx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  word_140019A40 = 0;
  KeQueryPerformanceCounter(&PerformanceFrequency);
  qword_140019A50 = PerformanceFrequency.QuadPart;
  HalPrivateDispatchTable[76]((__int64)&qword_140019A58);
  sub_140029798();
  qword_1400193F8 = 0LL;
  v0 = 0;
  qword_1400193F0 = 0LL;
  for ( i = (unsigned int)dword_14001983C; v0 < dword_14001983C; ++v0 )
  {
    sub_140046638(v0);
    i = (unsigned int)dword_14001983C;
  }
  qword_1400193F8 = qword_140019938[0];
  for ( j = 1; j < (unsigned int)i; ++j )
  {
    if ( qword_140019140[32 * (unsigned __int64)j + 255] != qword_140019938[0] )
    {
      qword_1400193F8 = (__int64)sub_14000EE90;
      break;
    }
  }
  v3 = (void *)qword_140019930[0];
  v4 = 1;
  qword_1400193F0 = qword_140019930[0];
  while ( v4 < (unsigned int)i )
  {
    if ( qword_140019140[32 * (unsigned __int64)v4 + 254] != qword_140019930[0] )
    {
      v3 = sub_140003430;
      qword_1400193F0 = (__int64)sub_140003430;
      break;
    }
    ++v4;
  }
  if ( !v3 )
  {
    v3 = sub_1400031D0;
    qword_1400193F0 = (__int64)sub_1400031D0;
  }
  LOBYTE(i) = byte_1400193D8;
  return ((__int64 (__fastcall *)(void *, __int64, __int64, __int64 *))qword_140019508)(
           v3,
           qword_1400193F8,
           i,
           qword_140019140);
}
