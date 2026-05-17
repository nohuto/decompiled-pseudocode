/*
 * XREFs of RtlGetSystemGlobalData @ 0x1800DB540
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 */

__int64 __fastcall RtlGetSystemGlobalData(int a1, _QWORD *a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 i; // [rsp+48h] [rbp+20h]

  if ( a1 != 1 )
  {
    switch ( a1 )
    {
      case 2:
        if ( a3 != 8 )
          return 3221225990LL;
        for ( i = MEMORY[0x7FFE0008]; MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010]; i = MEMORY[0x7FFE0008] )
          _mm_pause();
        goto LABEL_15;
      case 3:
        if ( a3 != 8 )
          return 3221225990LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v6 = (__int64)NtCurrentPeb()->SharedData + 592;
        else
          v6 = 2147352608LL;
        i = *(_QWORD *)v6;
        if ( HIDWORD(*(_QWORD *)v6) == *(_DWORD *)(v6 + 8) )
        {
LABEL_15:
          *a2 = i;
        }
        else
        {
          do
            _mm_pause();
          while ( HIDWORD(*(_QWORD *)v6) != *(_DWORD *)(v6 + 8) );
          *a2 = *(_QWORD *)v6;
        }
        return 0LL;
      case 4:
        if ( a3 != 2 )
          return 3221225990LL;
        *(_WORD *)a2 = MEMORY[0x7FFE002C];
        return 0LL;
      case 5:
        if ( a3 != 2 )
          return 3221225990LL;
        *(_WORD *)a2 = MEMORY[0x7FFE002E];
        return 0LL;
      case 6:
        if ( a3 != 4 )
          return 3221225990LL;
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v5 = (__int64)NtCurrentPeb()->SharedData + 584;
        else
          v5 = 2147353152LL;
        *(_DWORD *)a2 = *(_DWORD *)v5;
        return 0LL;
      case 7:
        if ( a3 != 4 )
          return 3221225990LL;
        *(_DWORD *)a2 = MEMORY[0x7FFE026C];
        return 0LL;
      case 8:
        if ( a3 != 4 )
          return 3221225990LL;
        *(_DWORD *)a2 = MEMORY[0x7FFE0270];
        return 0LL;
      case 9:
        if ( a3 != 8 )
          return 3221225990LL;
        *a2 = MEMORY[0x7FFE02C8];
        return 0LL;
      case 10:
        if ( a3 != 1 )
          return 3221225990LL;
        *(_BYTE *)a2 = MEMORY[0x7FFE02D4];
        return 0LL;
      case 11:
        if ( a3 != 2 )
          return 3221225990LL;
        *(_WORD *)a2 = MEMORY[0x7FFE02D6];
        return 0LL;
      case 12:
        if ( a3 != 1 )
          return 3221225990LL;
        *(_BYTE *)a2 = MEMORY[0x7FFE02EC];
        return 0LL;
      case 13:
        if ( a3 != 4 )
          return 3221225990LL;
        *(_DWORD *)a2 = MEMORY[0x7FFE02E4];
        return 0LL;
      case 14:
        if ( a3 != 4 )
          return 3221225990LL;
        *(_DWORD *)a2 = MEMORY[0x7FFE02F0];
        return 0LL;
      case 16:
        if ( a3 != 1 )
          return 3221225990LL;
        *(_BYTE *)a2 = MEMORY[0x7FFE03C6];
        return 0LL;
      case 17:
        if ( a3 != 2 )
          return 3221225990LL;
        *(_WORD *)a2 = MEMORY[0x7FFE03C6];
        return 0LL;
      case 18:
        if ( a3 != 8 )
          return 3221225990LL;
        *a2 = MEMORY[0x7FFE03B8];
        return 0LL;
      default:
        return 3221225485LL;
    }
  }
  if ( a3 != 8 )
    return 3221225990LL;
  *a2 = MEMORY[0x7FFE0250];
  return 0LL;
}
