/*
 * XREFs of VfIrpLogUnlockDatabase @ 0x140B9DB54
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x140B864E4 (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall VfIrpLogUnlockDatabase(unsigned int a1)
{
  __int64 v1; // rbx
  KIRQL v2; // bp
  _QWORD **v3; // r14
  _QWORD *v4; // rbx
  PVOID *v5; // rsi
  _QWORD *v6; // rdi
  int v7; // ecx
  __int64 v8; // rcx
  _QWORD *v9; // rax

  v1 = 3LL * a1;
  *(_DWORD *)(ViIrpLogDatabase + 24LL * a1) = 0;
  v2 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  v3 = (_QWORD **)(ViIrpLogDatabase + 8 * (v1 + 1));
  v4 = *v3;
  while ( v4 != v3 )
  {
    v5 = (PVOID *)(v4 - 1);
    v6 = v4;
    v7 = *((_DWORD *)v4 + 4);
    v4 = (_QWORD *)*v4;
    if ( (v7 & 4) != 0 )
    {
      ObfDereferenceObject(*v5);
      v8 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v9 = (_QWORD *)v6[1], (_QWORD *)*v9 != v6) )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      ExFreePoolWithTag(v5, 0);
    }
  }
  KeReleaseSpinLock(&ViIrpLogDatabaseLock, v2);
}
