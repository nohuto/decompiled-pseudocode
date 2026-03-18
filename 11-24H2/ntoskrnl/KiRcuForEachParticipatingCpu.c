/*
 * XREFs of KiRcuForEachParticipatingCpu @ 0x1404C70FC
 * Callers:
 *     KiRcuStartGracePeriod @ 0x1405BBF44 (KiRcuStartGracePeriod.c)
 * Callees:
 *     KiRcuStartGracePeriodEnumCallback @ 0x1404C6B9C (KiRcuStartGracePeriodEnumCallback.c)
 */

__int64 __fastcall KiRcuForEachParticipatingCpu(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  char *v3; // rbp
  __int64 v4; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  unsigned int i; // esi

  result = (unsigned __int8)byte_140F20C23;
  v3 = (char *)&KiRcuData;
  v4 = qword_140F20C30;
  v6 = (unsigned __int8)byte_140F20C21;
  v7 = qword_140F20C30 + 72LL * (unsigned __int8)byte_140F20C23;
  while ( v4 != v7 )
  {
    v8 = *(_QWORD *)(v4 + 16) & ~*(_QWORD *)(v4 + 24);
    if ( v8 )
    {
      for ( i = 0; i < (unsigned int)v6; ++i )
      {
        if ( (v8 & 1) != 0 )
        {
          result = KiRcuStartGracePeriodEnumCallback((__int64)&v3[32 * i], a2);
          if ( !(_DWORD)result )
            return result;
        }
        v8 >>= 1;
      }
    }
    v4 += 72LL;
    result = 32 * v6;
    v3 += 32 * v6;
  }
  return result;
}
