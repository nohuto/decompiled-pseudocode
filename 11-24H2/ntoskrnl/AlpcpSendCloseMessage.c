/*
 * XREFs of AlpcpSendCloseMessage @ 0x14088EBDC
 * Callers:
 *     AlpcpClosePort @ 0x14088E770 (AlpcpClosePort.c)
 *     AlpcpDeletePort @ 0x14088E9A0 (AlpcpDeletePort.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     AlpcpDispatchCloseMessage @ 0x14089016C (AlpcpDispatchCloseMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14089ED30 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1408A1410 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcpSendCloseMessage(__int64 a1)
{
  __int64 result; // rax
  int v3; // edx
  ULONG_PTR v4; // rbx
  _QWORD v5[6]; // [rsp+20h] [rbp-48h] BYREF
  int v6; // [rsp+50h] [rbp-18h]

  memset_0(v5, 0, 0x40uLL);
  result = *(unsigned int *)(a1 + 416);
  v3 = *(_DWORD *)(a1 + 416) & 6;
  if ( v3 != 2 && (result & 8) == 0 && ((*(_DWORD *)(a1 + 256) & 0x1000) == 0 || v3 == 4) )
  {
    result = *(_QWORD *)(a1 + 16);
    v4 = _InterlockedExchange64((volatile __int64 *)(result + 72), 0LL);
    if ( v4 )
    {
      AlpcpLockForCachedReferenceBlob(v4);
      --*(_WORD *)(v4 - 30);
      *(_DWORD *)(v4 + 264) &= ~0x80000000;
      *(_DWORD *)(v4 + 240) = 3145736;
      *(_BYTE *)(v4 + 244) = 0;
      *(_WORD *)(v4 + 244) |= 5u;
      *(_WORD *)(v4 + 246) = 0;
      *(_QWORD *)(v4 + 280) = KeGetCurrentThread()->ApcState.Process[1].ThreadListHead.Flink;
      *(_QWORD *)(v4 + 248) = 0LL;
      *(_QWORD *)(v4 + 256) = 0LL;
      v5[0] = a1;
      v5[1] = v4;
      v6 = 0x10000;
      result = AlpcpDispatchCloseMessage(v5);
      if ( (int)result < 0 )
        return AlpcpUnlockMessage(v4);
    }
  }
  return result;
}
