/*
 * XREFs of DbgkpDereferenceErrorPort @ 0x14057E5A8
 * Callers:
 *     DbgkpRemoveErrorPort @ 0x140707938 (DbgkpRemoveErrorPort.c)
 *     DbgkFlushErrorPort @ 0x140939888 (DbgkFlushErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x14093A900 (DbgkpSendErrorMessage.c)
 *     DbgkRegisterErrorPort @ 0x140A852C4 (DbgkRegisterErrorPort.c)
 * Callees:
 *     DbgkpDeleteErrorPort @ 0x14070790C (DbgkpDeleteErrorPort.c)
 */

__int64 __fastcall DbgkpDereferenceErrorPort(volatile signed __int32 *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return DbgkpDeleteErrorPort((PVOID)a1);
  return result;
}
