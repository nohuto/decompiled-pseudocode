/*
 * XREFs of DifPushThreadContextData @ 0x140615D10
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DifPushThreadContextData(int a1, const void *a2, unsigned int a3)
{
  char v4; // si
  unsigned int v5; // edi
  ULONG_PTR v6; // rbp
  _QWORD *v8; // rbx
  _DWORD *Pool2; // rax
  size_t v10; // r13
  void *v11; // rbp
  __int64 v12; // r14

  v4 = 0;
  v5 = 0;
  v6 = a3;
  if ( !DifPluginStates[a1] || !a2 || !a3 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD **)&KeGetCurrentThread()[1].WaitBlockFill11[64];
  if ( !v8 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x40uLL, 0x10uLL, 0x74436644u);
    v8 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    *Pool2 = 0;
    v4 = 1;
    *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[64] = Pool2;
  }
  v10 = v6;
  v11 = (void *)ExAllocatePool2(0x40uLL, v6, 0x64506644u);
  if ( v11 )
  {
    v12 = ExAllocatePool2(0x40uLL, 0x18uLL, 0x74436644u);
    if ( v12 )
    {
      memmove(v11, a2, v10);
      *(_QWORD *)(v12 + 8) = v11;
      *(_DWORD *)v12 = a1;
      *(_QWORD *)(v12 + 16) = v8[1];
      v8[1] = v12 + 16;
      ++*(_DWORD *)v8;
      return v5;
    }
    v5 = -1073741801;
    ExFreePoolWithTag(v11, 0x4E666944u);
  }
  else
  {
    v5 = -1073741801;
  }
  if ( v8 && v4 )
  {
    ExFreePoolWithTag(v8, 0x4E666944u);
    *(_QWORD *)&KeGetCurrentThread()[1].WaitBlockFill11[64] = 0LL;
  }
  return v5;
}
