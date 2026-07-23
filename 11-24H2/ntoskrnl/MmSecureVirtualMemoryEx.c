/*
 * XREFs of MmSecureVirtualMemoryEx @ 0x1409E5080
 * Callers:
 *     VmpSecureMemoryForPin @ 0x14079F814 (VmpSecureMemoryForPin.c)
 *     MmSecureVirtualMemory @ 0x1409E5050 (MmSecureVirtualMemory.c)
 *     VmSecureBackingMemory @ 0x140A96320 (VmSecureBackingMemory.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiSecureVad @ 0x1409E51EC (MiSecureVad.c)
 */

__int64 __fastcall MmSecureVirtualMemoryEx(unsigned __int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  char v4; // r15
  int v6; // esi
  int v7; // edi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  void *v12; // rbx
  unsigned int v13; // r9d
  __int64 v15[5]; // [rsp+30h] [rbp-28h] BYREF
  int v16; // [rsp+78h] [rbp+20h] BYREF

  v16 = 0;
  v4 = a4;
  v15[0] = 0LL;
  v6 = a2;
  v7 = a1;
  if ( (a4 & 0xFFFFFFF0) == 0 )
  {
    v8 = a1 + a2 - 1;
    v9 = v8;
    if ( !a2 )
      v9 = a1;
    if ( v9 >= a1 )
    {
      v10 = a2 + a1 - 1;
      if ( !a2 )
        v10 = a1;
      if ( v10 <= 0x7FFFFFFEFFFFLL && ((a3 - 1) & 0xFFFFFFFC) == 0 && a3 != 3 )
      {
        v11 = MiObtainReferencedVadEx(a1 & 0xFFFFFFFFFFFFF000uLL, 0LL, &v16, a4);
        v12 = (void *)v11;
        if ( v11 )
        {
          if ( (v8 | 0xFFF) > (((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) << 12) | 0xFFF)
            || (*(_BYTE *)(v11 + 48) & 0x70) == 0x30 )
          {
            MiUnlockAndDereferenceVad((PVOID)v11);
          }
          else
          {
            v13 = a3 | 0x80000000;
            if ( (v4 & 2) == 0 )
              v13 = a3;
            v16 = MiSecureVad(v11, v7, v6, v13, v4, (__int64)v15);
            MiUnlockAndDereferenceVad(v12);
            if ( v16 >= 0 )
              return v15[0] ^ qword_140E2DBC0 ^ (__int64)KeGetCurrentThread()->ApcState.Process;
          }
        }
      }
    }
  }
  return 0LL;
}
