/*
 * XREFs of PsTransferProcessQuotaToSharedQuota @ 0x1404B91CC
 * Callers:
 *     AlpcpTransferQuotaMessage @ 0x140A2C884 (AlpcpTransferQuotaMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsTransferProcessQuotaToSharedQuota(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (PEPROCESS)a1 == PsInitialSystemProcess )
    return 1LL;
  result = *(_QWORD *)(a1 + 760);
  if ( a2 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 520), -a2);
  _InterlockedIncrement((volatile signed __int32 *)(result + 512));
  return result;
}
