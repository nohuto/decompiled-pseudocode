/*
 * XREFs of HaliRunPlatformDebugTriggers @ 0x140566CC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HaliRunPlatformDebugTriggers(char a1)
{
  __int64 result; // rax
  __int64 v2; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // r14
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v2 = PdttTable;
  if ( PdttTable )
  {
    v4 = 0;
    if ( *(_BYTE *)(PdttTable + 36) )
    {
      do
      {
        v5 = 136LL * v4;
        v6 = v5 + qword_140E114C0 + 8;
        if ( (*(_BYTE *)(*(_QWORD *)(v5 + qword_140E114C0) + 1LL) & 1) != 0 && !a1 && v6 )
        {
          v7 = *(_QWORD *)(v6 + 56);
          result = guard_dispatch_icall_no_overrides(v7);
          if ( (int)result < 0 )
            return result;
          guard_dispatch_icall_no_overrides(v7);
        }
        result = *(unsigned __int8 *)(v2 + 36);
        ++v4;
      }
      while ( v4 < (unsigned int)result );
    }
  }
  return result;
}
