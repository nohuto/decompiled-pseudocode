/*
 * XREFs of PspSetupUserFiberShadowStack @ 0x140914A90
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     MmFreeVirtualMemory @ 0x1408D9AD0 (MmFreeVirtualMemory.c)
 *     PspReserveAndCommitUserShadowStack @ 0x140914D48 (PspReserveAndCommitUserShadowStack.c)
 */

__int64 __fastcall PspSetupUserFiberShadowStack(int a1, int a2, int a3, _QWORD *a4)
{
  int v4; // ebx
  unsigned __int64 v10; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v11[0] = 0LL;
  v10 = 0LL;
  v4 = PspReserveAndCommitUserShadowStack(a1, a2, a3, (unsigned int)&v10, (__int64)v11);
  if ( v4 >= 0 )
  {
    _RCX = v11[0] - 8LL;
    _RAX = qword_140FC74C8;
    __asm { wrussq  qword ptr [rcx], rax }
    _RDX = v11[0] - 16LL;
    *a4 = v11[0] - 16LL;
    _RCX = _RCX & 0xFFFFFFFFFFFFFFFCuLL | 1;
    __asm { wrussq  qword ptr [rdx], rcx }
    v10 = 0LL;
  }
  if ( v10 )
  {
    v11[0] = 0LL;
    MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &v10, v11, 0x8000u, 0, 0x40000000);
    *a4 = 0LL;
  }
  return (unsigned int)v4;
}
