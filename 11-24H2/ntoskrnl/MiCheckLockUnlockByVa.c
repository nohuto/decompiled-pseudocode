/*
 * XREFs of MiCheckLockUnlockByVa @ 0x14066EA6C
 * Callers:
 *     MmLockPhysicalPagesByVa @ 0x1407EA9A0 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x140262864 (MiObtainReferencedSecureVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiTransformVadSecure @ 0x140A145E4 (MiTransformVadSecure.c)
 */

_BOOL8 __fastcall MiCheckLockUnlockByVa(__int64 a1, __int64 a2, __int64 a3)
{
  BOOL v3; // ebx
  ULONG_PTR v4; // rax
  _DWORD *v5; // rax
  int v6; // ecx
  int v8; // [rsp+38h] [rbp+10h] BYREF
  int v9; // [rsp+3Ch] [rbp+14h]

  v9 = HIDWORD(a2);
  v3 = 0;
  v8 = 0;
  v4 = MiTransformVadSecure(KeGetCurrentThread()->ApcState.Process, a3);
  v5 = (_DWORD *)MiObtainReferencedSecureVad(v4, &v8);
  v6 = v5[12] & 0x70;
  if ( v6 != 16 )
    v3 = ((v6 - 48) & 0xFFFFFFEF) != 0;
  MiUnlockAndDereferenceVad(v5);
  return v3;
}
