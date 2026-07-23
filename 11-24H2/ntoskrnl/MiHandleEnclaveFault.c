/*
 * XREFs of MiHandleEnclaveFault @ 0x1406F71E8
 * Callers:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140362A70 (MiUnlockAndDereferenceVadShared.c)
 */

__int64 __fastcall MiHandleEnclaveFault(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  _DWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 result; // rax
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  v5 = (_DWORD *)MiObtainReferencedVadEx(a1, 2LL, (int *)&v9, a4);
  result = 3221225477LL;
  v9 = -1073741819;
  if ( v5 )
  {
    if ( (v5[12] & 0xC200000) == 0x8200000 && (v5[16] & 1) != 0 && (v5[18] & 1) != 0 )
      v9 = -1073740638;
    MiUnlockAndDereferenceVadShared((__int64)v5, v4, v6, v7);
    return v9;
  }
  return result;
}
