/*
 * XREFs of MmAdjustSecuredVirtualMemorySize @ 0x1407EDB58
 * Callers:
 *     VmpUnsecureMemoryForPin @ 0x14079F88C (VmpUnsecureMemoryForPin.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x140262864 (MiObtainReferencedSecureVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 */

__int64 __fastcall MmAdjustSecuredVirtualMemorySize(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  ULONG_PTR v6; // rdi
  void *v7; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v11 = 0;
  v6 = a1 ^ qword_140E2DA80 ^ (__int64)KeGetCurrentThread()->ApcState.Process;
  v7 = (void *)MiObtainReferencedSecureVad(v6, &v11);
  if ( !v7 )
    return v11;
  v9 = *(_QWORD *)(v6 + 8);
  if ( a2 < (v9 & 0xFFFFFFFFFFFFF000uLL)
    || (v10 = a2 + ((a3 + (a2 & 0xFFF) + 4095) & 0xFFFFFFFFFFFFF000uLL) - 1, v10 > *(_QWORD *)(v6 + 16)) )
  {
    v4 = -1073741637;
  }
  else
  {
    *(_QWORD *)(v6 + 16) = v10;
    *(_QWORD *)(v6 + 8) = a2 | v9 & 0xFFF;
  }
  MiUnlockAndDereferenceVad(v7);
  return v4;
}
