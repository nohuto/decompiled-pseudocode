/*
 * XREFs of MiHandleEnclaveFault @ 0x1406ED838
 * Callers:
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x1402A7A60 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140320840 (MiUnlockAndDereferenceVadShared.c)
 */

__int64 __fastcall MiHandleEnclaveFault(unsigned __int64 a1)
{
  _DWORD *v1; // rcx
  __int64 result; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v1 = (_DWORD *)MiObtainReferencedVadEx(a1, 2, (int *)&v3);
  result = 3221225477LL;
  v3 = -1073741819;
  if ( v1 )
  {
    if ( (v1[12] & 0xC200000) == 0x8200000 && (v1[16] & 1) != 0 && (v1[18] & 1) != 0 )
      v3 = -1073740638;
    MiUnlockAndDereferenceVadShared(v1);
    return v3;
  }
  return result;
}
