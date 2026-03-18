/*
 * XREFs of Interrupter_Initialize @ 0x140034B34
 * Callers:
 *     Interrupter_D0Entry @ 0x140032140 (Interrupter_D0Entry.c)
 *     Controller_InternalReset @ 0x140040D9C (Controller_InternalReset.c)
 * Callees:
 *     memset @ 0x140059AC0 (memset.c)
 */

_UNKNOWN **__fastcall Interrupter_Initialize(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 i; // rdi
  _QWORD *v4; // rbx
  __int64 *v5; // r14
  __int64 *j; // rsi
  __int64 v7; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 92); i = (unsigned int)(i + 1) )
  {
    result = *(_UNKNOWN ***)(a1 + 32);
    v4 = result[i];
    if ( v4 )
    {
      v5 = v4 + 22;
      for ( j = (__int64 *)v4[22]; j != v5; j = (__int64 *)*j )
        memset((void *)j[2], 0, *((unsigned int *)j + 10));
      v7 = *v5;
      v4[20] = *v5;
      result = *(_UNKNOWN ***)(v7 + 16);
      *((_DWORD *)v4 + 35) = 0;
      *((_DWORD *)v4 + 36) = 0;
      v4[19] = result;
      *((_DWORD *)v4 + 34) = 1;
    }
  }
  return result;
}
