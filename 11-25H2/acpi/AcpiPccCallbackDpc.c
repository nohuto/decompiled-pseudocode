/*
 * XREFs of AcpiPccCallbackDpc @ 0x140043670
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccUnlockSubspace @ 0x140051A9C (AcpiPccUnlockSubspace.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

LONG __fastcall AcpiPccCallbackDpc(__int64 a1, KSPIN_LOCK *a2, unsigned int a3)
{
  KIRQL v3; // r9
  KSPIN_LOCK *v5; // rbx
  int v6; // ecx
  KSPIN_LOCK v7; // rdi
  __int64 (__fastcall *v8)(_QWORD, KSPIN_LOCK); // rsi
  KSPIN_LOCK v9; // r14
  unsigned int v10; // ecx
  LONG result; // eax
  KSPIN_LOCK *v12; // rax
  KSPIN_LOCK v13; // rcx

  v3 = 0;
  v5 = a2;
  if ( a2 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(a2 + 100);
    v5[101] = (KSPIN_LOCK)KeGetCurrentThread();
  }
  v6 = *((_DWORD *)v5 + 2);
  v7 = 0LL;
  v8 = (__int64 (__fastcall *)(_QWORD, KSPIN_LOCK))v5[47];
  v9 = v5[48];
  v5[47] = 0LL;
  v5[48] = 0LL;
  if ( (v6 & 0x1E) != 0xC )
    goto LABEL_4;
  v12 = v5 + 45;
  a2 = (KSPIN_LOCK *)v5[45];
  if ( a2 != v5 + 45 )
  {
    v7 = v5[45];
    if ( (KSPIN_LOCK *)a2[1] != v12 || (v13 = *a2, *(KSPIN_LOCK **)(*a2 + 8) != a2) )
      __fastfail(3u);
    *v12 = v13;
    *(_QWORD *)(v13 + 8) = v12;
    v6 = *((_DWORD *)v5 + 2);
LABEL_4:
    v10 = v6 & 0xFFFFFFE1 | 0xA;
    goto LABEL_5;
  }
  v10 = v6 & 0xFFFFFFE1 | 6;
LABEL_5:
  *((_DWORD *)v5 + 2) = v10;
  LOBYTE(a2) = v3;
  result = AcpiPccUnlockSubspace(v5, a2);
  if ( v8 )
    result = v8(a3, v9);
  if ( v7 )
  {
    *(_DWORD *)(v7 + 40) = 0;
    return KeSetEvent((PRKEVENT)(v7 + 16), 0, 0);
  }
  return result;
}
