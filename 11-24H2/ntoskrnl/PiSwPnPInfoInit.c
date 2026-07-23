/*
 * XREFs of PiSwPnPInfoInit @ 0x1409F2AF4
 * Callers:
 *     PiSwQueuedCreateInfoCreate @ 0x14072EE9C (PiSwQueuedCreateInfoCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1409F13D4 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     PnpAllocatePWSTR @ 0x1408D1794 (PnpAllocatePWSTR.c)
 *     PnpAllocateMultiSZ @ 0x1409F3874 (PnpAllocateMultiSZ.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwPnPInfoInit(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _OWORD *Pool2; // rax

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 64);
  result = PnpAllocateMultiSZ(*(void **)(a2 + 32));
  if ( (int)result >= 0 )
  {
    result = PnpAllocateMultiSZ(*(void **)(a2 + 48));
    if ( (int)result >= 0 )
    {
      if ( *(_QWORD *)(a2 + 56) )
      {
        Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL, 0x10uLL, 0x57706E50u);
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
