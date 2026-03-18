/*
 * XREFs of GetPciAddress @ 0x140015038
 * Callers:
 *     PciConfigSpaceHandlerWorker @ 0x140014A50 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1400150D0 (GetPciAddressWorker.c)
 * Callees:
 *     GetPciAddressWorker @ 0x1400150D0 (GetPciAddressWorker.c)
 *     AMLIReferenceHandleEx @ 0x140015FC0 (AMLIReferenceHandleEx.c)
 */

__int64 __fastcall GetPciAddress(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *Pool2; // rax
  __int64 v10; // r9
  __int64 v11; // rcx

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 72LL, 1181770561LL);
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = a1;
  AMLIReferenceHandleEx(a1);
  *(_DWORD *)(v10 + 48) = -1;
  *(_QWORD *)(v10 + 16) = a5;
  *(_QWORD *)(v10 + 56) = a2;
  *(_QWORD *)(v10 + 64) = a3;
  *(_QWORD *)(v10 + 8) = a4;
  return GetPciAddressWorker(v11, 0LL, 0LL);
}
