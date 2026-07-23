/*
 * XREFs of DbgkpDereferenceErrorPort @ 0x14057BA38
 * Callers:
 *     DbgkpRemoveErrorPort @ 0x1407054F8 (DbgkpRemoveErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1409E93F0 (DbgkpSendErrorMessage.c)
 *     DbgkFlushErrorPort @ 0x140A527EC (DbgkFlushErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x140A7FE04 (DbgkRegisterErrorPort.c)
 * Callees:
 *     DbgkpDeleteErrorPort @ 0x1407054CC (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkpDereferenceErrorPort(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return DbgkpDeleteErrorPort((PVOID)a1);
  return result;
}
