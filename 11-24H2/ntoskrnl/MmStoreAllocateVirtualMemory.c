/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x1409145E8
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x1402E7B10 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiFreeVadRange @ 0x14026731C (MiFreeVadRange.c)
 *     MiObtainReferencedSecureVad @ 0x140292568 (MiObtainReferencedSecureVad.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiLockPageTableRange @ 0x140489C5C (MiLockPageTableRange.c)
 *     MiMakeSecureExclusive @ 0x1404EF690 (MiMakeSecureExclusive.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmUnsecureVirtualMemory @ 0x140896BF0 (MmUnsecureVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 */

unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(__int64 a1, int a2)
{
  __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 PteAddress; // rax
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  _BYTE v18[8]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v19; // [rsp+48h] [rbp-81h]
  __int64 v20; // [rsp+50h] [rbp-79h]
  __int64 v21; // [rsp+58h] [rbp-71h]
  int v22; // [rsp+68h] [rbp-61h]
  int v23; // [rsp+6Ch] [rbp-5Dh]
  int v24; // [rsp+74h] [rbp-55h]
  char v25; // [rsp+79h] [rbp-50h]
  int v26; // [rsp+80h] [rbp-49h]
  int v27; // [rsp+84h] [rbp-45h]
  HANDLE *p_SecureHandle; // [rsp+88h] [rbp-41h]
  ULONG_PTR v29; // [rsp+98h] [rbp-31h]
  ULONG_PTR Process; // [rsp+A0h] [rbp-29h]
  _OWORD v31[3]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v32; // [rsp+F0h] [rbp+27h]
  unsigned __int64 v33; // [rsp+130h] [rbp+67h] BYREF
  int VirtualMemory; // [rsp+138h] [rbp+6Fh] BYREF
  HANDLE SecureHandle; // [rsp+140h] [rbp+77h] BYREF

  v2 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  SecureHandle = 0LL;
  memset(v31, 0, sizeof(v31));
  CurrentThread = KeGetCurrentThread();
  memset_0(v18, 0, 0x80uLL);
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  v29 = Process;
  v20 = 0x10000LL;
  v19 = 0x7FFFFFFEFFFFLL;
  v21 = a1;
  p_SecureHandle = &SecureHandle;
  v22 = 12288;
  v23 = 2;
  v26 = 1;
  v27 = -2147483647;
  v25 = 0;
  v24 = a2;
  VirtualMemory = MiAllocateVirtualMemory((unsigned int)v18, 0, 0, 0, (__int64)&v33);
  if ( VirtualMemory < 0 )
    return v2;
  v8 = MiObtainReferencedSecureVad((unsigned __int64)SecureHandle ^ qword_140E2DBC0 ^ Process, &VirtualMemory, v6, v7);
  v9 = v8;
  if ( !v8 )
    return v2;
  if ( (unsigned int)MiMakeSecureExclusive(v8) )
  {
    v10 = ((*(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32)) << 12) | 0xFFF;
    MiGetPteAddress(v33);
    PteAddress = MiGetPteAddress(v10);
    MiDecommitPages(v12, ((PteAddress - v12) >> 3) + 1, 0, Process, v9, 1, 0LL, (__int64)v31);
    if ( (int)MiLockPageTableRange(v33, v10, v13, v14) < 0 )
    {
      v16 = *(unsigned int *)(v9 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 32) << 32);
      v17 = *(unsigned int *)(v9 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v9 + 33) << 32);
      LOBYTE(VirtualMemory) = 0;
      MiFreeVadRange((_DWORD *)v9, (int)&VirtualMemory, v16, v17, Process, 0, 0LL);
    }
    else
    {
      MiUnlockAndDereferenceVad((PVOID)v9);
      return v33;
    }
    return v2;
  }
  MiUnlockAndDereferenceVad((PVOID)v9);
  MmUnsecureVirtualMemory(SecureHandle);
  return 0LL;
}
