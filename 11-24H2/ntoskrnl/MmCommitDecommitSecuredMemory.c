/*
 * XREFs of MmCommitDecommitSecuredMemory @ 0x1407EE244
 * Callers:
 *     VmpUpdateCommitStateMemoryRange @ 0x140649B80 (VmpUpdateCommitStateMemoryRange.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x140292568 (MiObtainReferencedSecureVad.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiFreeVirtualMemory @ 0x1408D9E68 (MiFreeVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 */

__int64 __fastcall MmCommitDecommitSecuredMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r13d
  _KPROCESS *Process; // r15
  ULONG_PTR v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // r14
  _QWORD v12[5]; // [rsp+60h] [rbp-59h] BYREF
  int v13; // [rsp+88h] [rbp-31h]
  int v14; // [rsp+8Ch] [rbp-2Dh]
  char v15; // [rsp+99h] [rbp-20h]
  _KPROCESS *v16; // [rsp+B8h] [rbp-1h]
  _KPROCESS *v17; // [rsp+C0h] [rbp+7h]
  __int64 v18; // [rsp+120h] [rbp+67h] BYREF
  __int64 v19; // [rsp+138h] [rbp+7Fh] BYREF

  v18 = a1;
  LODWORD(v19) = 0;
  v5 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = a4 ^ qword_140E2DBC0 ^ (unsigned __int64)Process;
  v8 = MiObtainReferencedSecureVad(v7, &v19, a3, a4);
  if ( !v8 )
    return (unsigned int)v19;
  v9 = v18;
  v10 = a2 + v18 - 1;
  v19 = v10;
  if ( !v5 )
    return MiFreeVirtualMemory(Process, v8, &v18, &v19, a2, 0x4000, 0, 0, 0, 0LL, v7);
  memset_0(v12, 0, 0x80uLL);
  v17 = Process;
  v12[2] = 4096LL;
  v13 = 4096;
  v16 = Process;
  v12[0] = v9;
  v12[1] = v10;
  v12[3] = a2;
  v14 = v5;
  v15 = 0;
  return MiAllocateVirtualMemory((unsigned int)v12, 0, v8, v7, (__int64)&v18);
}
