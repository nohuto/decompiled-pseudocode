/*
 * XREFs of AlpcpSendCloseMessage @ 0x14098BC2C
 * Callers:
 *     AlpcpClosePort @ 0x14098B7C0 (AlpcpClosePort.c)
 *     AlpcpDeletePort @ 0x14098B9F0 (AlpcpDeletePort.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AlpcpUnlockMessage @ 0x1408AA9C0 (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1408B2940 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDispatchCloseMessage @ 0x14098CC44 (AlpcpDispatchCloseMessage.c)
 */

void __fastcall AlpcpSendCloseMessage(__int64 a1)
{
  int v2; // eax
  ULONG_PTR v3; // rbx
  _QWORD v4[6]; // [rsp+20h] [rbp-48h] BYREF
  int v5; // [rsp+50h] [rbp-18h]

  memset_0(v4, 0, 0x40uLL);
  v2 = *(_DWORD *)(a1 + 416);
  if ( (v2 & 6) != 2 && (v2 & 8) == 0 && ((*(_DWORD *)(a1 + 256) & 0x1000) == 0 || (v2 & 6) == 4) )
  {
    v3 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 16) + 72LL), 0LL);
    if ( v3 )
    {
      AlpcpLockForCachedReferenceBlob(v3);
      --*(_WORD *)(v3 - 30);
      *(_DWORD *)(v3 + 264) &= ~0x80000000;
      *(_DWORD *)(v3 + 240) = 3145736;
      *(_BYTE *)(v3 + 244) = 0;
      *(_WORD *)(v3 + 244) |= 5u;
      *(_WORD *)(v3 + 246) = 0;
      *(_QWORD *)(v3 + 280) = KeGetCurrentThread()->ApcState.Process[1].ThreadListHead.Flink;
      *(_QWORD *)(v3 + 248) = 0LL;
      *(_QWORD *)(v3 + 256) = 0LL;
      v4[0] = a1;
      v4[1] = v3;
      v5 = 0x10000;
      if ( (int)AlpcpDispatchCloseMessage(v4) < 0 )
        AlpcpUnlockMessage(v3);
    }
  }
}
