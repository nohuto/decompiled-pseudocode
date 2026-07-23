/*
 * XREFs of HalpDmaForceAllocation @ 0x14054CD6C
 * Callers:
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x14054C818 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaForceAllocation(__int64 a1, __int64 *a2, __int64 **a3, int a4, char a5, _DWORD *a6)
{
  __int64 *v6; // r10
  unsigned int *v7; // r11
  __int64 v10; // r9
  int v11; // edx
  unsigned int v12; // edi
  __int64 result; // rax
  unsigned int v14; // esi
  char i; // r14
  __int64 v16; // rbp
  unsigned int v17; // r12d
  __int64 v18; // rcx

  v6 = *a3;
  v7 = (unsigned int *)(a3 + 1);
  if ( !*a3 )
  {
    if ( *v7 == -1 )
    {
      v10 = 0LL;
      v11 = 0;
      v12 = 0;
      goto LABEL_4;
    }
    *v7 = 0;
    v6 = a2;
    *a3 = a2;
  }
  v14 = *v7;
  v12 = 0;
  for ( i = 1; ; i = 0 )
  {
    v16 = 0LL;
    v10 = 0LL;
    v11 = 0;
    while ( v6 )
    {
      v17 = *((_DWORD *)v6 + 2);
      v12 = v14;
      v18 = v6[2] + 72LL * v14;
      while ( v12 < v17 )
      {
        if ( (*(_QWORD *)(v18 + 48) & 0xFFFFFFFFFFFFF000uLL) != 0 )
        {
          if ( v10 )
            *(_QWORD *)(v16 + 8) = v18;
          else
            v10 = v18;
          ++v11;
          v16 = v18;
          if ( v11 == a4 )
            goto LABEL_4;
        }
        else if ( a5 )
        {
          v10 = 0LL;
          v11 = 0;
        }
        v18 += 72LL;
        ++v12;
      }
      v6 = (__int64 *)*v6;
      v14 = 0;
    }
    if ( !a5 )
      break;
    if ( !i || *a3 == a2 && !*v7 )
    {
      *((_DWORD *)a3 + 2) = 0;
      result = 0LL;
      *a3 = a2;
      return result;
    }
    v14 = 0;
    v6 = a2;
  }
LABEL_4:
  *a3 = v6;
  *((_DWORD *)a3 + 2) = v12;
  if ( !a5 )
  {
    if ( !v6 )
      *((_DWORD *)a3 + 2) = -1;
    *a6 = v11;
  }
  return v10;
}
