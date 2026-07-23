/*
 * XREFs of EtwpCovSampCheckForSegments @ 0x1409F8664
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x140923930 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     towlower @ 0x1404FD4D0 (towlower.c)
 */

__int64 __fastcall EtwpCovSampCheckForSegments(wint_t **a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // eax
  unsigned int i; // esi
  wint_t *v6; // rax
  unsigned __int64 *v7; // rbx
  unsigned __int64 v8; // rcx
  wint_t *v9; // r14
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  __int16 *v12; // rdi
  wint_t *v13; // r15
  bool v14; // zf
  __int16 v15; // r12
  __int64 v17; // [rsp+68h] [rbp+10h]
  unsigned __int64 v19; // [rsp+78h] [rbp+20h]

  v17 = a2;
  v3 = a3;
  for ( i = 0; ; ++i )
  {
    if ( i >= v3 )
      return 0LL;
    v6 = a1[1];
    v7 = (unsigned __int64 *)(a2 + 16LL * i);
    v8 = v7[1];
    if ( (unsigned __int64)v6 >= v8 )
      break;
LABEL_15:
    v3 = a3;
  }
  v9 = *a1;
  v10 = (unsigned __int64)&(*a1)[(_QWORD)v6 - v8];
  v19 = v10;
  v11 = *v7 + 2 * v8;
  while ( 1 )
  {
    if ( (unsigned __int64)v9 > v10 )
    {
      a2 = v17;
      goto LABEL_15;
    }
    v12 = (__int16 *)*v7;
    v13 = v9;
    v14 = *v7 == v11;
    if ( *v7 < v11 )
    {
      do
      {
        if ( *v13 != *v12 )
        {
          v15 = *v12;
          if ( towlower(*v13) != v15 )
            break;
        }
        ++v12;
        ++v13;
      }
      while ( (unsigned __int64)v12 < v11 );
      v10 = v19;
      v14 = v12 == (__int16 *)v11;
    }
    if ( v14 )
      return 1LL;
    ++v9;
  }
}
