/*
 * XREFs of MiCheckLockUnlockByVa @ 0x14066FC3C
 * Callers:
 *     MmLockPhysicalPagesByVa @ 0x1407EAF70 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiObtainReferencedSecureVad @ 0x140292568 (MiObtainReferencedSecureVad.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiTransformVadSecure @ 0x140A0D4C4 (MiTransformVadSecure.c)
 */

_BOOL8 __fastcall MiCheckLockUnlockByVa(__int64 a1, __int64 a2, __int64 a3)
{
  BOOL v3; // ebx
  ULONG_PTR v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rax
  int v8; // ecx
  int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v11 = HIDWORD(a2);
  v3 = 0;
  v10 = 0;
  v4 = MiTransformVadSecure(KeGetCurrentThread()->ApcState.Process, a3);
  v7 = (_DWORD *)MiObtainReferencedSecureVad(v4, &v10, v5, v6);
  v8 = v7[12] & 0x70;
  if ( v8 != 16 )
    v3 = ((v8 - 48) & 0xFFFFFFEF) != 0;
  MiUnlockAndDereferenceVad(v7);
  return v3;
}
