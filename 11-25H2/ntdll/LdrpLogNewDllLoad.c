/*
 * XREFs of LdrpLogNewDllLoad @ 0x18006E350
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18006D3E0 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogNewDllLoadInternal @ 0x18006EE20 (LdrpLogNewDllLoadInternal.c)
 */

unsigned int *__fastcall LdrpLogNewDllLoad(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int *result; // rax

  v4 = 2147353476LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v5 = 2147353476LL;
  if ( *(_BYTE *)v5 )
  {
    v6 = 2147353477LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v7 = 2147353477LL;
    if ( (*(_BYTE *)v7 & 0x10) != 0 )
    {
LABEL_7:
      v8 = 0LL;
      if ( a1 )
        v8 = *(_QWORD *)(a1 + 48);
      return (unsigned int *)LdrpLogNewDllLoadInternal(
                               *(_QWORD *)(a2 + 48),
                               v8,
                               *(unsigned int *)(a2 + 268),
                               *(unsigned __int16 *)(a2 + 72),
                               *(_QWORD *)(a2 + 80));
    }
  }
  else
  {
    v6 = 2147353477LL;
  }
  result = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v4 = *((_QWORD *)result + 18) + 554LL;
  }
  if ( *(_BYTE *)v4 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 4) != 0 )
    {
      result = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)result )
      {
        result = (unsigned int *)NtCurrentPeb();
        v6 = *((_QWORD *)result + 18) + 555LL;
      }
      if ( (*(_BYTE *)v6 & 0x20) != 0 )
        goto LABEL_7;
    }
  }
  return result;
}
