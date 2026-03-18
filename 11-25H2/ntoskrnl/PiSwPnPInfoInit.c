/*
 * XREFs of PiSwPnPInfoInit @ 0x1409A4A1C
 * Callers:
 *     PiSwQueuedCreateInfoCreate @ 0x140724C70 (PiSwQueuedCreateInfoCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1409A4180 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x140839154 (PnpAllocatePWSTR.c)
 *     PnpAllocateMultiSZ @ 0x14083AD78 (PnpAllocateMultiSZ.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwPnPInfoInit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // r8
  _OWORD *Pool2; // rax

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 64);
  result = PnpAllocateMultiSZ(*(void **)(a2 + 32), *(unsigned int *)(a2 + 24), a3, (_QWORD *)a1);
  if ( (int)result >= 0 )
  {
    result = PnpAllocateMultiSZ(*(void **)(a2 + 48), *(unsigned int *)(a2 + 40), v6, (_QWORD *)(a1 + 8));
    if ( (int)result >= 0 )
    {
      if ( *(_QWORD *)(a2 + 56) )
      {
        Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL);
        *(_QWORD *)(a1 + 16) = Pool2;
        if ( !Pool2 )
          return 3221225626LL;
        *Pool2 = *(_OWORD *)*(_QWORD *)(a2 + 56);
      }
      result = PnpAllocatePWSTR(*(_WORD **)(a2 + 72), 0x7FFFuLL, 0x57706E50u, (PVOID *)(a1 + 24));
      if ( (int)result >= 0 )
        return PnpAllocatePWSTR(*(_WORD **)(a2 + 80), 0x7FFFuLL, 0x57706E50u, (PVOID *)(a1 + 32));
    }
  }
  return result;
}
