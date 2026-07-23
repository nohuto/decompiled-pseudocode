/*
 * XREFs of PiDqSerializationAlloc @ 0x140A16C50
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqSerializationAlloc(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  void *v8; // rcx
  unsigned int v9; // eax
  void *Pool2; // rax

  v3 = *(_DWORD *)(a1 + 24);
  if ( *a3 > v3 )
  {
    v8 = *(void **)(a1 + 16);
    v3 = 0;
    if ( v8 )
      ExFreePoolWithTag(v8, 0x58706E50u);
    v9 = *a3;
    if ( *a3 < 0x1000 )
    {
      *a3 = 4096;
      v9 = 4096;
    }
    Pool2 = (void *)ExAllocatePool2(0x100uLL, v9, 0x58706E50u);
    *(_QWORD *)(a1 + 16) = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, *a3);
      v3 = *a3;
    }
    *(_DWORD *)(a1 + 24) = v3;
  }
  *a3 = v3;
  result = *(_QWORD *)(a1 + 16);
  *a2 = result;
  return result;
}
