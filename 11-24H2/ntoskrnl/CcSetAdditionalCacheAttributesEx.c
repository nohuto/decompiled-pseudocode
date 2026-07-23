/*
 * XREFs of CcSetAdditionalCacheAttributesEx @ 0x1404D8360
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __fastcall CcSetAdditionalCacheAttributesEx(__int64 a1, int a2)
{
  __int64 v3; // rbp
  int v4; // esi
  int v5; // edi
  __int64 v6; // r14
  int v7; // eax
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // edx
  unsigned int v19; // eax
  int v20; // eax
  int v21; // edx
  unsigned int v22; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v24; // [rsp+48h] [rbp-20h] BYREF

  memset(&v24, 0, sizeof(v24));
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !*(_DWORD *)(v3 + 4) )
    KeBugCheckEx(0x34u, 0xC6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = a2 & 4;
  v5 = a2 & 2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL);
  if ( !*(_DWORD *)(v6 + 4) )
    KeBugCheckEx(0x34u, 0x5FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v6 + 536) + 768LL), &LockHandle);
  v7 = *(_DWORD *)(v6 + 152);
  v8 = v7 | 1;
  v9 = v7 & 0xFFFFFFFE;
  if ( !v5 )
    v8 = v9;
  v10 = v8;
  v11 = v8 | 0x202;
  v12 = v10 & 0xFFFFFFFD;
  if ( !v4 )
    v11 = v12;
  *(_DWORD *)(v6 + 152) = v11;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v3 + 536) + 768LL), &v24);
  v13 = *(_DWORD *)(v3 + 152) | 0x800000;
  if ( (a2 & 1) == 0 )
    v13 = *(_DWORD *)(v3 + 152) & 0xFF7FFFFF;
  if ( (a2 & 8) != 0 )
  {
    v14 = v13 | 0x4000000;
  }
  else
  {
    if ( (v13 & 0x4000000) != 0 )
      v13 |= 0x20000u;
    v14 = v13 & 0xFBFFFFFF;
  }
  v15 = v14 & 0xEFFFFFFF;
  v16 = v14 | 0x10000000;
  if ( (a2 & 0x10) == 0 )
    v16 = v15;
  v17 = v16;
  v18 = v16 | 0x8000000;
  v19 = v17 & 0xF7FFFFFF;
  if ( (a2 & 0x20) == 0 )
    v18 = v19;
  v20 = v18;
  v21 = v18 | 0x1000;
  v22 = v20 & 0xFFFFEFFF;
  if ( (a2 & 0x10000000) == 0 )
    v21 = v22;
  *(_DWORD *)(v3 + 152) = v21;
  KeReleaseInStackQueuedSpinLock(&v24);
}
