/*
 * XREFs of HamSetCommitProperties @ 0x18001B390
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x180012B18 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall HamSetCommitProperties(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // r10d
  _QWORD *v6; // r11
  __int64 v7; // r11
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v10 = 0LL;
  v6 = a1;
  if ( !a2 )
    return (unsigned int)-1073741584;
  if ( !a3 )
    return (unsigned int)-1073741583;
  if ( a2 > a3 )
    return (unsigned int)-1073741776;
  if ( a2 == -1LL )
  {
    a1[41] = -1LL;
    a1[42] = -1LL;
    a1[36] = 0LL;
LABEL_11:
    v6[44] = a3;
    v6[43] = a2;
    *((_DWORD *)v6 + 74) |= 4u;
    v6[40] |= 0xFuLL;
    return v3;
  }
  if ( (int)RtlULongLongMult(a2, 0x5AuLL, &v10) >= 0 )
  {
    *(_QWORD *)(v7 + 336) = v10 / 0x64;
    RtlULongLongMult(a2, 0x32uLL, &v10);
    v8 = v10 / 0x64;
    v6[41] = v10 / 0x64;
    v6[36] = v8;
    goto LABEL_11;
  }
  return (unsigned int)-1073741584;
}
