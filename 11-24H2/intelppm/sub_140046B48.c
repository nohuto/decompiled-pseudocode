/*
 * XREFs of sub_140046B48 @ 0x140046B48
 * Callers:
 *     sub_14002B750 @ 0x14002B750 (sub_14002B750.c)
 *     sub_1400468E0 @ 0x1400468E0 (sub_1400468E0.c)
 * Callees:
 *     sub_140048008 @ 0x140048008 (sub_140048008.c)
 */

__int64 __fastcall sub_140046B48(__int64 *a1)
{
  unsigned int v2; // r12d
  unsigned int v3; // r14d
  _OWORD *v4; // rsi
  unsigned int i; // edx
  bool v6; // zf
  unsigned int j; // r8d
  __int64 Pool2; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  char v14[56]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v15; // [rsp+68h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+78h] [rbp+20h]

  v15 = 0;
  v14[0] = 0;
  v2 = 0;
  v3 = 0;
  v4 = 0LL;
  sub_140048008(&v15, v14);
  for ( i = 0; ; ++i )
  {
    v6 = i == 55;
    if ( i >= 0x37 )
      break;
    if ( v15 == *((_WORD *)&unk_140018550 + 12 * i)
      && (unsigned __int8)v14[0] == *((_WORD *)&unk_140018550 + 12 * i + 1) )
    {
      _mm_lfence();
      v3 = *((unsigned __int16 *)&unk_140018550 + 12 * i + 4);
      v4 = (_OWORD *)*((_QWORD *)&unk_140018550 + 3 * i + 2);
      v2 = *((_DWORD *)&unk_140018550 + 6 * i + 1);
      v6 = i == 55;
      break;
    }
  }
  if ( v6 || !v3 || !v4 )
    return (unsigned int)-1073741637;
  if ( a1 )
  {
    for ( j = 0; j < v3; ++j )
      v16 = __readmsr(DWORD2(v4[2 * j]));
    Pool2 = ExAllocatePool2(256LL, 32 * v3 + 16, 1919119952LL);
    v10 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(Pool2 + 8) = v3;
    *(_QWORD *)Pool2 = v2;
    v11 = Pool2 - (_QWORD)v4;
    v12 = v3;
    do
    {
      *(_OWORD *)((char *)v4 + v11 + 16) = *v4;
      *(_OWORD *)((char *)v4 + v11 + 32) = v4[1];
      v4 += 2;
      --v12;
    }
    while ( v12 );
    *a1 = v10;
  }
  return 0;
}
