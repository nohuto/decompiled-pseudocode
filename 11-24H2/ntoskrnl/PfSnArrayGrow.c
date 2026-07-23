/*
 * XREFs of PfSnArrayGrow @ 0x140A03F58
 * Callers:
 *     PfSnVolumeKeyQuery @ 0x140A03E90 (PfSnVolumeKeyQuery.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnArrayGrow(unsigned int a1, __int64 a2, __int64 a3, unsigned int *a4, const void **a5)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // rax
  unsigned int v8; // ebx
  void *Pool2; // rbp
  unsigned int v10; // eax

  if ( a1 < *a4 )
    return 1;
  v6 = (3 * *a4) >> 1;
  if ( v6 < 4 )
    v6 = 4;
  if ( a1 >= v6 )
  {
    v6 = a1 + 4;
    if ( a1 + 4 < a1 )
      return 0;
  }
  v7 = 8LL * v6;
  if ( v7 > 0xFFFFFFFF )
    return 0;
  v8 = 0;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v7, 0x56506343u);
  if ( Pool2 )
  {
    v10 = 8 * *a4;
    if ( v10 )
      memmove(Pool2, *a5, v10);
    if ( *a5 )
      ExFreePoolWithTag((PVOID)*a5, 0);
    *a5 = Pool2;
    *a4 = v6;
    return 1;
  }
  return v8;
}
