/*
 * XREFs of NtProcessStartup_AfterSecurityCookieInitialized @ 0x140001030
 * Callers:
 *     NtProcessStartup @ 0x140001010 (NtProcessStartup.c)
 * Callees:
 *     main @ 0x140001698 (main.c)
 */

NTSTATUS __fastcall NtProcessStartup_AfterSecurityCookieInitialized(__int64 a1)
{
  _RTL_USER_PROCESS_PARAMETERS *v2; // rcx
  PRTL_USER_PROCESS_PARAMETERS v3; // rax
  int v4; // ecx
  PRTL_USER_PROCESS_PARAMETERS v5; // r13
  __int64 v6; // r12
  char *Buffer; // r14
  int Length; // r15d
  unsigned int v9; // esi
  const UNICODE_STRING *p_CommandLine; // rdx
  unsigned int DebugFlags; // ebp
  _WORD *Environment; // rcx
  int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rbx
  SIZE_T v16; // r12
  char **Heap; // rax
  char **v18; // rdi
  int v19; // r12d
  const char **v20; // rdi
  const char *v21; // rax
  const char **v22; // rdx
  NTSTATUS v23; // r14d
  __int16 v25; // cx
  char *v26; // rbx
  char *v28; // rbx
  char *v29; // rsi
  char *v30; // rbp
  char **argv; // [rsp+20h] [rbp-68h]
  _STRING AnsiString; // [rsp+28h] [rbp-60h] BYREF
  unsigned int v33; // [rsp+98h] [rbp+10h]
  int ExitStatus; // [rsp+A0h] [rbp+18h]
  __int64 v35; // [rsp+A8h] [rbp+20h] BYREF

  v2 = *(_RTL_USER_PROCESS_PARAMETERS **)(a1 + 32);
  v35 = 0LL;
  AnsiString = 0LL;
  v3 = RtlNormalizeProcessParams(v2);
  v4 = 1;
  v33 = 0;
  v5 = v3;
  ExitStatus = 0;
  argv = (char **)&v35;
  v6 = 0LL;
  Buffer = 0LL;
  Length = 0;
  v9 = 1;
  if ( v3 )
  {
    p_CommandLine = &v3->CommandLine;
    DebugFlags = v3->DebugFlags;
    v33 = DebugFlags;
    if ( v3->CommandLine.Buffer && p_CommandLine->Length
      || (p_CommandLine = &v3->ImagePathName, v3->ImagePathName.Buffer) )
    {
      ExitStatus = RtlUnicodeStringToAnsiString(&AnsiString, p_CommandLine, 1u);
      v23 = ExitStatus;
      if ( ExitStatus < 0 )
      {
        v19 = 0;
        goto LABEL_20;
      }
      Length = AnsiString.Length;
      Buffer = AnsiString.Buffer;
      if ( AnsiString.Length )
      {
        do
        {
          if ( !*Buffer || !Length )
            break;
          while ( *Buffer )
          {
            if ( isspace(*Buffer) )
            {
              ++Buffer;
              if ( --Length )
                continue;
            }
            if ( !Length )
              goto LABEL_4;
            break;
          }
          if ( *Buffer )
          {
            ++v9;
            v26 = Buffer;
            do
            {
              ++Buffer;
              --Length;
            }
            while ( Length && !isspace(*Buffer) );
            v6 += Buffer - v26 + 1;
          }
        }
        while ( Length );
      }
    }
LABEL_4:
    Environment = v5->Environment;
    v13 = 0;
    if ( Environment && *Environment )
    {
      do
      {
        ++Environment;
        ++v13;
        while ( *Environment++ )
          ;
      }
      while ( *Environment );
    }
    v4 = v13 + 1;
  }
  else
  {
    DebugFlags = 0;
  }
  v14 = v4 + v9;
  if ( (unsigned int)v14 <= 2 )
  {
    v23 = ExitStatus;
    v19 = 0;
LABEL_20:
    v20 = (const char **)&v35;
    goto LABEL_14;
  }
  if ( v9 > 1 )
  {
    Buffer = AnsiString.Buffer;
    Length = AnsiString.Length;
  }
  v15 = v14;
  v16 = 8 * v14 + v6;
  Heap = (char **)RtlAllocateHeap(*(PVOID *)(a1 + 48), 0, v16);
  v18 = Heap;
  if ( Heap )
  {
    argv = Heap;
    if ( v9 > 1 )
    {
      v28 = (char *)&Heap[v15];
      v29 = (char *)Heap + v16;
      v19 = 0;
      while ( Length )
      {
        if ( !*Buffer || v28 >= v29 )
          break;
        while ( *Buffer )
        {
          if ( isspace(*Buffer) )
          {
            ++Buffer;
            if ( --Length )
              continue;
          }
          if ( !Length )
            goto LABEL_12;
          break;
        }
        if ( *Buffer )
        {
          *v18++ = v28;
          ++v19;
          do
          {
            v30 = v28;
            *v28++ = *Buffer++;
            if ( !--Length )
              break;
            if ( v28 >= v29 )
              goto LABEL_63;
          }
          while ( !isspace(*Buffer) );
          if ( v28 < v29 )
          {
            *v28++ = 0;
            continue;
          }
LABEL_63:
          v28 = v30;
          *v30 = 0;
        }
      }
    }
    else
    {
      v19 = 0;
    }
LABEL_12:
    *v18 = 0LL;
    v20 = (const char **)(v18 + 1);
    v21 = (const char *)v5->Environment;
    v22 = v20;
    if ( v21 && *(_WORD *)v21 )
    {
      do
      {
        *v22++ = v21;
        v21 += 2;
        do
        {
          v25 = *(_WORD *)v21;
          v21 += 2;
        }
        while ( v25 );
      }
      while ( *(_WORD *)v21 );
    }
    v23 = ExitStatus;
    DebugFlags = v33;
    *v22 = 0LL;
  }
  else
  {
    v19 = 0;
    v20 = (const char **)&v35;
    v23 = -1073741801;
  }
LABEL_14:
  RtlFreeAnsiString(&AnsiString);
  if ( DebugFlags )
    __debugbreak();
  if ( v23 >= 0 )
    v23 = main(v19, (const char **)argv, v20);
  return NtTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v23);
}
