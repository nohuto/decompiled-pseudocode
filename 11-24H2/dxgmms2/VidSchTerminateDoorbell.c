/*
 * XREFs of VidSchTerminateDoorbell @ 0x140052350
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1400316A0 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 */

void __fastcall VidSchTerminateDoorbell(__int64 a1)
{
  void *v2; // rcx
  _BYTE v3[56]; // [rsp+20h] [rbp-38h] BYREF

  AcquireSpinLock::AcquireSpinLock(
    (AcquireSpinLock *)v3,
    (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) + 24LL) + 1984LL),
    1,
    0);
  v2 = *(void **)(a1 + 264);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 264) = 0LL;
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v3);
}
