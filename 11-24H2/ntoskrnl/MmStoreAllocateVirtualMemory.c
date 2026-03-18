/*
 * XREFs of MmStoreAllocateVirtualMemory @ 0x140A5115C
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14037AA90 (SmKmStoreHelperCommandProcess.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x140262864 (MiObtainReferencedSecureVad.c)
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiFreeVadRange @ 0x1403CDBD8 (MiFreeVadRange.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiLockPageTableRange @ 0x14048FA4C (MiLockPageTableRange.c)
 *     MiMakeSecureExclusive @ 0x1404F1BF0 (MiMakeSecureExclusive.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiAllocateVirtualMemory @ 0x1408DF540 (MiAllocateVirtualMemory.c)
 *     MmUnsecureVirtualMemory @ 0x1408E51C0 (MmUnsecureVirtualMemory.c)
 */

unsigned __int64 __fastcall MmStoreAllocateVirtualMemory(__int64 a1, int a2)
{
  __int64 v2; // r14
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 PteAddress; // rax
  __int64 v10; // r10
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  _BYTE v14[8]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v15; // [rsp+48h] [rbp-81h]
  __int64 v16; // [rsp+50h] [rbp-79h]
  __int64 v17; // [rsp+58h] [rbp-71h]
  int v18; // [rsp+68h] [rbp-61h]
  int v19; // [rsp+6Ch] [rbp-5Dh]
  int v20; // [rsp+74h] [rbp-55h]
  char v21; // [rsp+79h] [rbp-50h]
  int v22; // [rsp+80h] [rbp-49h]
  int v23; // [rsp+84h] [rbp-45h]
  HANDLE *p_SecureHandle; // [rsp+88h] [rbp-41h]
  ULONG_PTR v25; // [rsp+98h] [rbp-31h]
  ULONG_PTR Process; // [rsp+A0h] [rbp-29h]
  _OWORD v27[3]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v28; // [rsp+F0h] [rbp+27h]
  unsigned __int64 v29; // [rsp+130h] [rbp+67h] BYREF
  int VirtualMemory; // [rsp+138h] [rbp+6Fh] BYREF
  HANDLE SecureHandle; // [rsp+140h] [rbp+77h] BYREF

  v2 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  SecureHandle = 0LL;
  memset(v27, 0, sizeof(v27));
  CurrentThread = KeGetCurrentThread();
  memset_0(v14, 0, 0x80uLL);
  Process = (ULONG_PTR)CurrentThread->ApcState.Process;
  v25 = Process;
  v16 = 0x10000LL;
  v15 = 0x7FFFFFFEFFFFLL;
  v17 = a1;
  p_SecureHandle = &SecureHandle;
  v18 = 12288;
  v19 = 2;
  v22 = 1;
  v23 = -2147483647;
  v21 = 0;
  v20 = a2;
  VirtualMemory = MiAllocateVirtualMemory((__int64)v14, 0LL, 0LL, 0LL, (__int64 *)&v29);
  if ( VirtualMemory < 0 )
    return v2;
  v6 = MiObtainReferencedSecureVad((unsigned __int64)SecureHandle ^ qword_140E2DA80 ^ Process, &VirtualMemory);
  v7 = v6;
  if ( !v6 )
    return v2;
  if ( (unsigned int)MiMakeSecureExclusive(v6) )
  {
    v8 = ((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12) | 0xFFF;
    MiGetPteAddress(v29);
    PteAddress = MiGetPteAddress(v8);
    MiDecommitPages(v10, ((PteAddress - v10) >> 3) + 1, 0, Process, v7, 1, 0LL, (__int64)v27);
    if ( (int)MiLockPageTableRange(v29, v8) < 0 )
    {
      v12 = *(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32);
      v13 = *(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32);
      LOBYTE(VirtualMemory) = 0;
      MiFreeVadRange((_DWORD *)v7, (int)&VirtualMemory, v12, v13, Process, 0, 0LL);
    }
    else
    {
      MiUnlockAndDereferenceVad((PVOID)v7);
      return v29;
    }
    return v2;
  }
  MiUnlockAndDereferenceVad((PVOID)v7);
  MmUnsecureVirtualMemory(SecureHandle);
  return 0LL;
}
