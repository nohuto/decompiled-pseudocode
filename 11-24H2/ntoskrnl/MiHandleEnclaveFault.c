/*
 * XREFs of MiHandleEnclaveFault @ 0x1406F95A8
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x1402BB330 (MiUnlockAndDereferenceVadShared.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 */

__int64 __fastcall MiHandleEnclaveFault(unsigned __int64 a1)
{
  __int64 v1; // rdx
  _DWORD *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v2 = (_DWORD *)MiObtainReferencedVadEx(a1, 2LL, (int *)&v6);
  result = 3221225477LL;
  v6 = -1073741819;
  if ( v2 )
  {
    if ( (v2[12] & 0xC200000) == 0x8200000 && (v2[16] & 1) != 0 && (v2[18] & 1) != 0 )
      v6 = -1073740638;
    MiUnlockAndDereferenceVadShared((__int64)v2, v1, v3, v4);
    return v6;
  }
  return result;
}
