/*
 * XREFs of TpUnreserveTaskPost @ 0x1800EE35C
 * Callers:
 *     RtlQueueWorkItem @ 0x18006D9E0 (RtlQueueWorkItem.c)
 * Callees:
 *     TppPoolpDereferenceGlobalPool @ 0x18006D7D0 (TppPoolpDereferenceGlobalPool.c)
 */

__int64 __fastcall TpUnreserveTaskPost(volatile signed __int32 *a1, __int64 a2)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rdx
  __int64 *v4; // rcx

  if ( !a1 )
  {
    if ( !a2 || (a1 = (volatile signed __int32 *)TppPoolpSerializedPool, (*(_BYTE *)(a2 + 56) & 2) == 0) )
      a1 = (volatile signed __int32 *)TppPoolpGlobalPool;
  }
  if ( a1 == (volatile signed __int32 *)TppPoolpGlobalPool )
  {
    v3 = (volatile signed __int32 *)&TppPoolpGlobalPoolLock;
    v4 = &TppPoolpGlobalPool;
    return TppPoolpDereferenceGlobalPool((const void **)v4, v3);
  }
  if ( a1 == (volatile signed __int32 *)TppPoolpSerializedPool )
  {
    v3 = (volatile signed __int32 *)&TppPoolpSerializedPoolLock;
    v4 = &TppPoolpSerializedPool;
    return TppPoolpDereferenceGlobalPool((const void **)v4, v3);
  }
  result = (unsigned int)_InterlockedExchangeAdd(a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return TppPoolpFree((unsigned __int64)a1);
  return result;
}
