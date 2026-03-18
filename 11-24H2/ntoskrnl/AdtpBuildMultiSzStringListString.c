/*
 * XREFs of AdtpBuildMultiSzStringListString @ 0x140453EDC
 * Callers:
 *     AdtpPackageParameters @ 0x1404534B8 (AdtpPackageParameters.c)
 * Callees:
 *     AdtpEtwBuildDashString @ 0x140A93E50 (AdtpEtwBuildDashString.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall AdtpBuildMultiSzStringListString(unsigned __int16 *a1, _QWORD *a2, _BYTE *a3)
{
  unsigned int v6; // ebp
  int v7; // r12d
  __int64 v8; // r9
  unsigned int v9; // r14d
  unsigned int v10; // ebx
  unsigned int i; // edx
  unsigned __int64 v13; // rdi
  _QWORD *Pool2; // rax
  unsigned int j; // r8d
  __int16 v16; // r9

  v6 = 0;
  v7 = 0;
  if ( !a1 || (v8 = *((_QWORD *)a1 + 1)) == 0 )
  {
    if ( a2 )
      AdtpEtwBuildDashString(a2);
    return 0LL;
  }
  v9 = *a1 >> 1;
  v10 = 1;
  for ( i = 0; i < v9; ++i )
  {
    if ( v10 + (*(_WORD *)(v8 + 2LL * i) != 0 ? 1 : 4) < v10 )
      return 3221225621LL;
    v10 += *(_WORD *)(v8 + 2LL * i) != 0 ? 1 : 4;
  }
  if ( v10 - 1 > v9 )
  {
    if ( v10 + 4 < v10 )
      return 3221225621LL;
    v10 += 4;
    v7 = 1;
  }
  v13 = 2LL * v10;
  if ( v13 > 0xFFFFFFFF )
    return 3221225621LL;
  if ( (unsigned int)v13 > 0xFFFF )
    return 3221225485LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225495LL;
  *a3 = 1;
  if ( v7 )
  {
    *Pool2 = 0x90009000A000DLL;
    v6 = 4;
  }
  for ( j = 0; j < v9; ++j )
  {
    v16 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * j);
    if ( v16 )
    {
      *((_WORD *)Pool2 + v6++) = v16;
    }
    else
    {
      *(_QWORD *)((char *)Pool2 + 2 * v6) = 0x90009000A000DLL;
      if ( v6 + 4 < v6 )
        return 3221225621LL;
      v6 += 4;
    }
  }
  *((_WORD *)Pool2 + v10 - 1) = 0;
  *a2 = Pool2;
  a2[1] = (unsigned int)v13;
  return 0LL;
}
