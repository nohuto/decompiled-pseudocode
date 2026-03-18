/*
 * XREFs of EtwTraceGetAsyncKeyState @ 0x1400C6694
 * Callers:
 *     NtUserGetAsyncKeyState @ 0x14016C610 (NtUserGetAsyncKeyState.c)
 * Callees:
 *     EtwInitializeAsyncKeyMonitor @ 0x1400C67DC (EtwInitializeAsyncKeyMonitor.c)
 */

void __fastcall EtwTraceGetAsyncKeyState(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rbx
  int v5; // esi
  __int64 v6; // rax
  int v7; // ecx

  if ( (*(_WORD *)(&WPP_MAIN_CB.Reserved + 1) & 0x400) != 0
    && (unsigned __int8)(byte_14029ADC8 - 1) > 2u
    && (qword_14029ADB0 & 0x400) != 0
    && (qword_14029ADB8 & 0x400) == qword_14029ADB8 )
  {
    v3 = 0;
    if ( *(_QWORD *)(W32GetUserSessionState(a1) + 14496) || (int)EtwInitializeAsyncKeyMonitor() >= 0 )
    {
      v4 = *(_QWORD *)(W32GetUserSessionState(v2) + 14496);
      v5 = *(_DWORD *)(*(_QWORD *)(a1 + 464) + 56LL);
      ExAcquirePushLockExclusiveEx(v4 + 96, 0LL);
      v6 = *(unsigned int *)(v4 + 4);
      *(_BYTE *)(v4 + 88) = 1;
      if ( *(_DWORD *)(v4 + 8 * v6 + 8) != v5 )
      {
        if ( !*(_DWORD *)v4 )
          *(_DWORD *)v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        while ( 1 )
        {
          if ( v3 >= 0xA )
            goto LABEL_8;
          v7 = *(_DWORD *)(v4 + 8LL * v3 + 8);
          if ( v7 == v5 )
            break;
          if ( v7 == -1 )
          {
            *(_DWORD *)(v4 + 8LL * v3 + 8) = v5;
            *(_DWORD *)(v4 + 8LL * v3 + 12) = 1;
            goto LABEL_17;
          }
          ++v3;
        }
        ++*(_DWORD *)(v4 + 8LL * v3 + 12);
LABEL_17:
        *(_DWORD *)(v4 + 4) = v3;
        goto LABEL_8;
      }
      ++*(_DWORD *)(v4 + 8 * v6 + 12);
LABEL_8:
      ExReleasePushLockExclusiveEx(v4 + 96, 0LL);
    }
  }
}
