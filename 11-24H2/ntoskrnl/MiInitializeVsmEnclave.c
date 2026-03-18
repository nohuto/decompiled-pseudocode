/*
 * XREFs of MiInitializeVsmEnclave @ 0x1407F777C
 * Callers:
 *     MiInitializeEnclave @ 0x1407F7674 (MiInitializeEnclave.c)
 * Callees:
 *     MiLockVad @ 0x1402629EC (MiLockVad.c)
 *     MiUnlockVad @ 0x140264968 (MiUnlockVad.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     PsInitializeVsmEnclave @ 0x14077B32C (PsInitializeVsmEnclave.c)
 *     MiMapImageForEnclaveUse @ 0x1408DB088 (MiMapImageForEnclaveUse.c)
 *     PsDereferenceVsmEnclave @ 0x140A2C23C (PsDereferenceVsmEnclave.c)
 *     MiUnmapImageForEnclaveUse @ 0x140AA1BA4 (MiUnmapImageForEnclaveUse.c)
 */

__int64 __fastcall MiInitializeVsmEnclave(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v9; // r15
  struct _KTHREAD *CurrentThread; // rbp
  int v11; // esi
  __int64 v12; // rbx
  __int64 v13; // rsi
  ULONG_PTR v14; // rax
  int v15; // r8d
  void *v16; // rbx
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 72);
  v18 = 0LL;
  v19 = 0LL;
  v9 = 0LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 16)) <= 1 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  MiUnlockVad((__int64)CurrentThread, a2);
  if ( *(_BYTE *)(v4 + 76) )
  {
    if ( a4 < 0x38 )
    {
      v11 = -1073741820;
LABEL_6:
      v12 = v19;
      goto LABEL_11;
    }
    v13 = *(_QWORD *)(a3 + 48);
    if ( v13 )
    {
      v14 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
      LOBYTE(v15) = CurrentThread->PreviousMode;
      v16 = (void *)v14;
      v11 = MiMapImageForEnclaveUse(v13, v14, v15, (unsigned int)&v19, (__int64)&v18);
      ObfDereferenceObject(v16);
      if ( v11 < 0 )
        goto LABEL_6;
      v9 = *(_QWORD *)((*(_QWORD *)(v18 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 64);
    }
  }
  v12 = v19;
  v11 = PsInitializeVsmEnclave(v4, a3, a4, v9, v19);
LABEL_11:
  PsDereferenceVsmEnclave((PVOID)v4);
  if ( v12 )
    MiUnmapImageForEnclaveUse(v12);
  MiLockVad((__int64)CurrentThread, a2);
  return (unsigned int)v11;
}
