/*
 * XREFs of LdrpLogNewDllLoad @ 0x18006E350
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18006D3E0 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogNewDllLoadInternal @ 0x18006EE20 (LdrpLogNewDllLoadInternal.c)
 */

int __fastcall LdrpLogNewDllLoad(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct _PEB *v9; // rax

  v4 = 2147353476LL;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 554;
  else
    v5 = 2147353476LL;
  if ( *(_BYTE *)v5 )
  {
    v6 = 2147353477LL;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v7 = 2147353477LL;
    if ( (*(_BYTE *)v7 & 0x10) != 0 )
    {
LABEL_7:
      v8 = 0LL;
      if ( a1 )
        v8 = *(_QWORD *)(a1 + 48);
      LODWORD(v9) = LdrpLogNewDllLoadInternal(
                      *(_QWORD *)(a2 + 48),
                      v8,
                      *(unsigned int *)(a2 + 268),
                      *(unsigned __int16 *)(a2 + 72),
                      *(_QWORD *)(a2 + 80));
      return (int)v9;
    }
  }
  else
  {
    v6 = 2147353477LL;
  }
  LODWORD(v9) = RtlGetCurrentServiceSessionId();
  if ( (_DWORD)v9 )
  {
    v9 = NtCurrentPeb();
    v4 = (__int64)v9->SharedData + 554;
  }
  if ( *(_BYTE *)v4 )
  {
    v9 = NtCurrentPeb();
    if ( (v9->TracingFlags & 4) != 0 )
    {
      LODWORD(v9) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v9 )
      {
        v9 = NtCurrentPeb();
        v6 = (__int64)v9->SharedData + 555;
      }
      if ( (*(_BYTE *)v6 & 0x20) != 0 )
        goto LABEL_7;
    }
  }
  return (int)v9;
}
