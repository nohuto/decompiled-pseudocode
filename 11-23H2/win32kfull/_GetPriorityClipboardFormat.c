/*
 * XREFs of _GetPriorityClipboardFormat @ 0x1C01FD278
 * Callers:
 *     NtUserGetPriorityClipboardFormat @ 0x1C01D2B20 (NtUserGetPriorityClipboardFormat.c)
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0068408 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C0155B9C (-CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z.c)
 *     ?IsFmtBlocked@@YAHI@Z @ 0x1C01FBA74 (-IsFmtBlocked@@YAHI@Z.c)
 */

__int64 __fastcall GetPriorityClipboardFormat(unsigned int *a1, int a2)
{
  struct tagWINDOWSTATION *v4; // rax
  __int64 v5; // rcx
  struct tagWINDOWSTATION *v6; // rsi
  unsigned int v8; // edi
  __int64 v9; // rbx
  int v10; // eax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rax

  v4 = CheckClipboardAccess();
  v6 = v4;
  if ( !v4 || !*((_DWORD *)v4 + 34) || !*((_QWORD *)v4 + 16) )
    return 0LL;
  while ( a2 > 0 )
  {
    v8 = *a1;
    --a2;
    if ( *a1 )
    {
      v9 = *((_QWORD *)v6 + 16);
      v10 = *((_DWORD *)v6 + 34);
      while ( v10 )
      {
        --v10;
        if ( *(_DWORD *)v9 == v8 )
        {
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
          if ( CurrentProcessWin32Process )
            CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
          if ( (unsigned int)CheckClipboardAccessForIntegrityLevel(
                               *(_QWORD *)(v9 + 20),
                               *(_QWORD *)(CurrentProcessWin32Process + 896))
            || !(unsigned int)IsFmtBlocked(v8) )
          {
            return v8;
          }
          v13 = *(_QWORD *)(v9 + 20);
          v14 = PsGetCurrentProcessWin32Process(v12);
          if ( v14 )
            v14 &= -(__int64)(*(_QWORD *)v14 != 0LL);
          EtwTraceUIPIClipboardError(0LL, v14, v8, v13);
          break;
        }
        v9 += 32LL;
      }
    }
    ++a1;
  }
  return 0xFFFFFFFFLL;
}
