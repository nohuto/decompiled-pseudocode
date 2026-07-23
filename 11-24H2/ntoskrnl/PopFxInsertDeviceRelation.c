/*
 * XREFs of PopFxInsertDeviceRelation @ 0x1405CEC60
 * Callers:
 *     PoFxAddDeviceRelation @ 0x1405CD770 (PoFxAddDeviceRelation.c)
 *     PopFxRegisterDevice @ 0x14074CC80 (PopFxRegisterDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopFxInsertDeviceRelation(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  KSPIN_LOCK *v6; // r14
  int v9; // eax
  char v10; // r8
  KIRQL v11; // al
  __int64 v12; // rbx
  _QWORD *v13; // rdx
  KIRQL v14; // al
  _QWORD *v15; // r8

  *(_DWORD *)a4 = 0;
  v4 = (_QWORD *)(a4 + 32);
  *(_QWORD *)(a4 + 8) = 0LL;
  v5 = (_QWORD *)(a4 + 56);
  *(_QWORD *)(a4 + 40) = a4 + 32;
  v6 = (KSPIN_LOCK *)(a2 + 1280);
  *(_QWORD *)(a4 + 32) = a4 + 32;
  *(_QWORD *)(a4 + 64) = a4 + 56;
  *(_QWORD *)(a4 + 56) = a4 + 56;
  v9 = *(_DWORD *)(a4 + 16) | 0xE;
  v10 = (*(_BYTE *)(a4 + 16) | 0xE) ^ (16 * a3);
  *(_QWORD *)(a4 + 24) = a1;
  *(_QWORD *)(a4 + 48) = a2 + 1280;
  *(_DWORD *)(a4 + 16) = v9 ^ v10 & 0x30;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 1280));
  v12 = a2 + 1304;
  v13 = *(_QWORD **)(v12 + 8);
  if ( *v13 != v12
    || (v5[1] = v13,
        *v5 = v12,
        *v13 = v5,
        *(_QWORD *)(v12 + 8) = v5,
        KeReleaseSpinLock(v6, v11),
        v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128)),
        v15 = *(_QWORD **)(a1 + 448),
        *v15 != a1 + 440) )
  {
    __fastfail(3u);
  }
  *v4 = a1 + 440;
  v4[1] = v15;
  *v15 = v4;
  *(_QWORD *)(a1 + 448) = v4;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 128), v14);
}
