/*
 * XREFs of PfTFreeBufferList @ 0x14097198C
 * Callers:
 *     PfTCreateTraceDump @ 0x140971190 (PfTCreateTraceDump.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall PfTFreeBufferList(unsigned int *a1)
{
  _QWORD *v1; // rsi
  _DWORD *v2; // rdi
  _QWORD *v4; // rbx
  __int64 v5; // rbp
  _QWORD *v6; // rax
  __int64 v7; // r15
  __int64 result; // rax

  v1 = a1 + 6;
  v2 = (_DWORD *)*((_QWORD *)a1 + 3);
  v4 = (_QWORD *)*((_QWORD *)a1 + 4);
  v5 = *a1 >> 4;
  if ( v2 == (_DWORD *)v4 )
  {
    v7 = (unsigned int)v5;
  }
  else
  {
    do
    {
      if ( (_QWORD *)*v4 != v1 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      v1[1] = v6;
      *v6 = v1;
      v7 = (unsigned int)v5;
      if ( (*a1 & 0xF) != 0 )
      {
        memset_0(v4, 0, (unsigned int)v5);
        v4[1] = v4;
        *v4 = v4;
        *((_DWORD *)v4 + 8) = 2048;
      }
      else
      {
        memset_0(v4 + 3, 0, v5 - 24);
        *((_DWORD *)v4 + 4) = 0;
        *((_DWORD *)v4 + 5) = (unsigned int)(v5 - 24) >> 4;
      }
      *v4 = *((_QWORD *)a1 + 2);
      *((_QWORD *)a1 + 2) = v4;
      ++*((_WORD *)a1 + 5);
      v2 = (_DWORD *)*v1;
      v4 = (_QWORD *)v1[1];
    }
    while ( (_QWORD *)*v1 != v4 );
  }
  result = *a1;
  if ( (result & 0xF) == 0 )
  {
    memset_0(v2 + 6, 0, v7 - 24);
    v2[4] = 0;
    result = (unsigned int)(v5 - 24) >> 4;
    v2[5] = result;
  }
  return result;
}
