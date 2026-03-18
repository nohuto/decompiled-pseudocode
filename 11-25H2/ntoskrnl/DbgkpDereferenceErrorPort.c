/*
 * XREFs of DbgkpDereferenceErrorPort @ 0x14057B288
 * Callers:
 *     DbgkpRemoveErrorPort @ 0x1406FBA58 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1408B6DA4 (DbgkpSendErrorMessage.c)
 *     DbgkFlushErrorPort @ 0x14091D610 (DbgkFlushErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140A80BEC (DbgkRegisterErrorPort.c)
 * Callees:
 *     DbgkpDeleteErrorPort @ 0x1406FBA2C (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkpDereferenceErrorPort(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return DbgkpDeleteErrorPort((PVOID)a1);
  return result;
}
