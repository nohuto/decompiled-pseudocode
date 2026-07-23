/*
 * XREFs of MmAdjustSecuredVirtualMemorySize @ 0x1407EE128
 * Callers:
 *     VmpUnsecureMemoryForPin @ 0x14079F99C (VmpUnsecureMemoryForPin.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x140292568 (MiObtainReferencedSecureVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 */

__int64 __fastcall MmAdjustSecuredVirtualMemorySize(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  ULONG_PTR v7; // rdi
  void *v8; // r8
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  v12 = 0;
  v7 = a1 ^ qword_140E2DBC0 ^ (__int64)KeGetCurrentThread()->ApcState.Process;
  v8 = (void *)MiObtainReferencedSecureVad(v7, &v12, a3, a4);
  if ( !v8 )
    return v12;
  v10 = *(_QWORD *)(v7 + 8);
  if ( a2 < (v10 & 0xFFFFFFFFFFFFF000uLL)
    || (v11 = a2 + ((a3 + (a2 & 0xFFF) + 4095) & 0xFFFFFFFFFFFFF000uLL) - 1, v11 > *(_QWORD *)(v7 + 16)) )
  {
    v5 = -1073741637;
  }
  else
  {
    *(_QWORD *)(v7 + 16) = v11;
    *(_QWORD *)(v7 + 8) = a2 | v10 & 0xFFF;
  }
  MiUnlockAndDereferenceVad(v8);
  return v5;
}
