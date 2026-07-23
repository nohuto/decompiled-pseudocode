/*
 * XREFs of PfTAllocateBuffers @ 0x14074475C
 * Callers:
 *     PfTStart @ 0x140744DFC (PfTStart.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PfTGetFreeBuffer @ 0x140972910 (PfTGetFreeBuffer.c)
 *     PfTLbInitialize @ 0x140A521E4 (PfTLbInitialize.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PfTAllocateBuffers(__int64 a1, unsigned int a2, unsigned int a3, ULONG a4)
{
  ULONG_PTR v4; // r15
  unsigned int v5; // esi
  unsigned int i; // ebp
  _QWORD *Pool2; // rdi
  _QWORD *v11; // rax
  __int64 *v12; // rbx
  __int64 v13; // rcx

  v4 = a2;
  v5 = 0;
  *(_DWORD *)a1 = (16 * a2) | *(_DWORD *)a1 & 0xF;
  for ( i = 0; i < a3; ++i )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, v4, a4);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    if ( (*(_DWORD *)a1 & 0xF) != 0 )
    {
      memset_0(Pool2, 0, v4);
      Pool2[1] = Pool2;
      *Pool2 = Pool2;
      *((_DWORD *)Pool2 + 8) = 2048;
    }
    else
    {
      PfTLbInitialize(Pool2, (unsigned int)v4, 0LL);
    }
    *Pool2 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 16) = Pool2;
    ++*(_WORD *)(a1 + 10);
    ++*(_DWORD *)(a1 + 4);
  }
  v11 = (_QWORD *)PfTGetFreeBuffer(a1);
  v12 = (__int64 *)(a1 + 24);
  v13 = *v12;
  if ( *(__int64 **)(*v12 + 8) != v12 )
    __fastfail(3u);
  *v11 = v13;
  v11[1] = v12;
  *(_QWORD *)(v13 + 8) = v11;
  *v12 = (__int64)v11;
  return v5;
}
