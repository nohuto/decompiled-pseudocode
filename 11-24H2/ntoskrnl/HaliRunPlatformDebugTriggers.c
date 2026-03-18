/*
 * XREFs of HaliRunPlatformDebugTriggers @ 0x140569890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HaliRunPlatformDebugTriggers(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // r9
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = PdttTable;
  if ( PdttTable )
  {
    v7 = 0;
    if ( *(_BYTE *)(PdttTable + 36) )
    {
      do
      {
        v8 = 136LL * v7;
        v9 = v8 + qword_140E116E0 + 8;
        if ( (*(_BYTE *)(*(_QWORD *)(v8 + qword_140E116E0) + 1LL) & 1) != 0 && !a1 && v9 )
        {
          v10 = *(_QWORD *)(v9 + 56);
          result = guard_dispatch_icall_no_overrides(v10, a2, a3, a4);
          if ( (int)result < 0 )
            return result;
          guard_dispatch_icall_no_overrides(v10, 0LL, v11, v12);
        }
        result = *(unsigned __int8 *)(v5 + 36);
        ++v7;
      }
      while ( v7 < (unsigned int)result );
    }
  }
  return result;
}
