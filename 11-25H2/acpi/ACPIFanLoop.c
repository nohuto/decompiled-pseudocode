/*
 * XREFs of ACPIFanLoop @ 0x14002C64C
 * Callers:
 *     ACPIFanDeviceControl @ 0x14002BA40 (ACPIFanDeviceControl.c)
 *     ACPIFanEvent @ 0x14002BF40 (ACPIFanEvent.c)
 *     ACPIFanFSTCallback @ 0x14002C010 (ACPIFanFSTCallback.c)
 *     ACPIFanPowerCallback @ 0x1400520C0 (ACPIFanPowerCallback.c)
 *     ACPIFanStopDevice @ 0x1400603C0 (ACPIFanStopDevice.c)
 *     ACPIFanStartDevice @ 0x140096820 (ACPIFanStartDevice.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     ACPIFanFSTCallback @ 0x14002C010 (ACPIFanFSTCallback.c)
 *     ACPIFanCompletePendingIrps @ 0x14002C90C (ACPIFanCompletePendingIrps.c)
 *     ACPISetDeviceWorker @ 0x140038938 (ACPISetDeviceWorker.c)
 */

void __fastcall ACPIFanLoop(__int64 a1, int a2, int a3)
{
  KSPIN_LOCK *v3; // r14
  KIRQL v7; // al
  int v8; // ebp
  KIRQL v9; // si
  int v10; // ecx
  char v11; // bl
  int v12; // eax
  KIRQL v13; // al
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  bool v16; // zf
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r9
  _QWORD *v21; // r8

  v3 = (KSPIN_LOCK *)(a1 + 184);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v8 = ~a2 & (*(_DWORD *)(a1 + 192) | a3);
  v9 = v7;
  *(_DWORD *)(a1 + 192) = v8;
  if ( v8 < 0 )
    goto LABEL_25;
  *(_DWORD *)(a1 + 192) = v8 | 0x80000000;
  while ( 1 )
  {
    v10 = *(_DWORD *)(a1 + 192);
    v11 = 1;
    if ( (v10 & 0x40000000) != 0 )
      break;
    v12 = *(_DWORD *)(a1 + 192);
    if ( (v10 & 0x20000000) == 0 )
    {
      v12 = v10 | 0x10000000;
      *(_DWORD *)(a1 + 192) = v10 | 0x10000000;
      if ( (v10 & 0x10000000) == 0 )
      {
        v18 = *(_QWORD *)(a1 + 248);
        if ( v18 )
        {
          AMLIDereferenceHandleEx(v18);
          *(_QWORD *)(a1 + 248) = 0LL;
        }
        ACPISetDeviceWorker(a1, 512LL);
        KeReleaseSpinLock(v3, v9);
        v11 = 0;
        if ( (*(_DWORD *)(a1 + 192) & 4) != 0 )
        {
          v9 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
          v20 = *(_QWORD *)(a1 + 200);
          if ( *(_QWORD *)(v20 + 8) != a1 + 200 || (v21 = *(_QWORD **)(a1 + 208), *v21 != a1 + 200) )
LABEL_27:
            __fastfail(3u);
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          KeReleaseSpinLock(&AcpiFanLock, v9);
        }
        LOBYTE(v19) = 1;
        ACPIFanCompletePendingIrps(a1, v19);
        break;
      }
    }
    if ( (v12 & 4) != 0 )
    {
      if ( (v12 & 1) != 0 || (v12 |= 1u, v16 = *(_QWORD *)(a1 + 248) == 0LL, *(_DWORD *)(a1 + 192) = v12, v16) )
      {
        if ( (v12 & 2) == 0 )
        {
          ++*(_DWORD *)(a1 + 308);
          *(_DWORD *)(a1 + 192) = v12 | 2;
        }
        KeReleaseSpinLock(v3, v9);
        v11 = 0;
        if ( !(unsigned __int8)ACPIFanCompletePendingIrps(a1, 0LL) )
          break;
      }
      else
      {
        *(_DWORD *)(a1 + 192) = v12 | 0x40000000;
        KeReleaseSpinLock(v3, v9);
        *(_OWORD *)(a1 + 256) = 0LL;
        *(_OWORD *)(a1 + 272) = 0LL;
        *(_QWORD *)(a1 + 288) = 0LL;
        v17 = AMLIAsyncEvalObject(*(__int64 **)(a1 + 248), a1 + 256, 0, 0LL, ACPIFanFSTCallback, a1);
        if ( v17 != 259 )
          ACPIFanFSTCallback(*(_QWORD *)(a1 + 248), v17, a1 + 256, a1);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 192) = v12 | 4;
      KeReleaseSpinLock(v3, v9);
      v13 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
      v14 = (_QWORD *)qword_14008AEE8;
      v15 = (_QWORD *)(a1 + 200);
      if ( *(__int64 **)qword_14008AEE8 != &AcpiFanList )
        goto LABEL_27;
      *(_QWORD *)(a1 + 208) = qword_14008AEE8;
      *v15 = &AcpiFanList;
      *v14 = v15;
      qword_14008AEE8 = a1 + 200;
      KeReleaseSpinLock(&AcpiFanLock, v13);
    }
    v9 = KeAcquireSpinLockRaiseToDpc(v3);
  }
  *(_DWORD *)(a1 + 192) &= ~0x80000000;
  if ( v11 )
LABEL_25:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 184), v9);
}
