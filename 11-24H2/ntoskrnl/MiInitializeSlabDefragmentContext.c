/*
 * XREFs of MiInitializeSlabDefragmentContext @ 0x14068937C
 * Callers:
 *     MiDefragmentAllSlabsHelper @ 0x140687DB0 (MiDefragmentAllSlabsHelper.c)
 *     MiDefragmentSlabAllocator @ 0x140687F00 (MiDefragmentSlabAllocator.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiInitializeSlabDefragmentContext(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rsi
  int v8; // ecx
  __int64 result; // rax

  v5 = a4;
  memset_0(a1, 0, 0x268uLL);
  if ( a3 )
  {
    *((_DWORD *)a1 + 17) = *(_DWORD *)(a3 + 132);
    v8 = MiPageSizes[(*(_DWORD *)(a3 + 136) >> 4) & 3];
  }
  else
  {
    *((_DWORD *)a1 + 17) = -1;
    v8 = MiPageSizes[(*(_DWORD *)(232 * v5 + *(_QWORD *)(a2 + 16) + 15832) >> 4) & 3];
  }
  *a1 = a2;
  a1[1] = (unsigned __int64)(a1 + 1) | 1;
  *((_DWORD *)a1 + 18) = v5;
  result = (unsigned __int64)(a1 + 2) | 1;
  a1[2] = result;
  *((_DWORD *)a1 + 19) = v8;
  *((_BYTE *)a1 + 80) = 17;
  return result;
}
