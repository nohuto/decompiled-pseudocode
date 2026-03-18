/*
 * XREFs of ACPIIoctlEnumChildrenPopulateOutputBuffer @ 0x1400463D4
 * Callers:
 *     ACPIIoctlEnumChildren @ 0x140049858 (ACPIIoctlEnumChildren.c)
 * Callees:
 *     memmove @ 0x140070C40 (memmove.c)
 *     memset @ 0x140070F40 (memset.c)
 */

__int64 __fastcall ACPIIoctlEnumChildrenPopulateOutputBuffer(_DWORD *a1, unsigned int a2, int *a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rbp
  unsigned int v10; // ecx
  __int64 v12; // rax
  _DWORD *v13; // r14
  _BYTE *v14; // r12
  int v15; // esi
  _BYTE *v16; // r13
  __int64 v17; // rdi
  unsigned int v18; // edi
  __int64 v19; // [rsp+60h] [rbp+18h]

  v4 = 0;
  *a3 = 0;
  if ( *(_QWORD *)(a4 + 16) > 0xFFFFFFFFuLL )
  {
    return (unsigned int)-1072431089;
  }
  else
  {
    v9 = *(unsigned int *)(a4 + 16);
    memset(a1, 0, a2);
    *a1 = 1198089537;
    v10 = *(_DWORD *)(a4 + 24) + 8 * (v9 + 1);
    if ( a2 >= v10 )
    {
      v12 = *(_QWORD *)(a4 + 8);
      v13 = a1 + 2;
      v14 = *(_BYTE **)(a4 + 32);
      v15 = 8;
      v16 = *(_BYTE **)(v12 + 32);
      a1[1] = v9;
      if ( (_DWORD)v9 )
      {
        v19 = v9;
        do
        {
          v17 = -1LL;
          do
            ++v17;
          while ( v14[v17] );
          v18 = v17 + 1;
          memmove(v13 + 2, v14, v18);
          v13[1] = v18;
          if ( *v16 == 49 )
            *v13 = 1;
          v15 += v18 + 8;
          v13 = (_DWORD *)((char *)v13 + v18 + 8);
          v14 += v18;
          ++v16;
          --v19;
        }
        while ( v19 );
      }
      *a3 = v15;
    }
    else
    {
      v4 = -2147483643;
      a1[1] = v10;
      *a3 = 20;
    }
  }
  return v4;
}
