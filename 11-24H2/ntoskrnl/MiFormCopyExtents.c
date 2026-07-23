/*
 * XREFs of MiFormCopyExtents @ 0x14067C234
 * Callers:
 *     MiInsertCopyExtents @ 0x14067C4D0 (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14067C8D4 (MiMergeCopyExtents.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 */

__int64 __fastcall MiFormCopyExtents(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  unsigned int *v6; // rdx
  unsigned int v7; // eax
  unsigned int v8; // r10d
  _QWORD *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax

  result = MiAllocatePool(0x40uLL, 48LL * (unsigned int)(*(_DWORD *)(a1 + 4) - 1) + 56, 860252493);
  v5 = 0LL;
  v6 = (unsigned int *)result;
  if ( result )
  {
    v7 = *(_DWORD *)(a1 + 4);
    v8 = 0;
    *v6 = v7;
    if ( v7 )
    {
      v9 = v6 + 12;
      do
      {
        v10 = v8++;
        v10 *= 2LL;
        *(v9 - 1) = *(_QWORD *)(a1 + 8 * v10 + 8);
        v11 = *(_QWORD *)(a1 + 8 * v10 + 16);
        *((_DWORD *)v9 - 4) = v5;
        v5 += v11;
        *v9 = v11;
        v9 += 6;
      }
      while ( v8 < *v6 );
    }
    v6[1] = a2;
    return (__int64)v6;
  }
  return result;
}
