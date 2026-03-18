/*
 * XREFs of FreeFileView @ 0x14019F3FC
 * Callers:
 *     ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x14019F11C (-vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z.c)
 * Callees:
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14019F58C (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?Remove@?$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x14019F660 (-Remove@-$CSortedVector@IPEAUFONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     ?vUnmapRemoteFonts@@YAXPEAUFONTFILEVIEW@@@Z @ 0x14019F718 (-vUnmapRemoteFonts@@YAXPEAUFONTFILEVIEW@@@Z.c)
 */

void __fastcall FreeFileView(struct FONTFILEVIEW **a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // r15
  __int64 v5; // rdx
  int v6; // ecx
  __int64 SessionState; // rax
  struct W32_PUSH_LOCK *v8; // rbx
  struct FONTFILEVIEW **v9; // rsi
  struct FONTFILEVIEW **i; // rbx
  struct FONTFILEVIEW *v11; // rcx
  char *v12; // rbp
  char *v13; // rsi

  v2 = (unsigned int)a2;
  v4 = *(_QWORD *)(W32GetSessionState((_DWORD)a1, a2) + 96);
  SessionState = W32GetSessionState(v6, v5);
  v8 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(SessionState + 96) + 24248LL);
  if ( *(_QWORD *)(SessionState + 96) != -24248LL )
    GreAcquirePushLockExclusive(v8);
  if ( *(_QWORD *)(v4 + 24168) )
  {
    v12 = (char *)&a1[v2];
    v13 = (char *)a1;
    if ( a1 < (struct FONTFILEVIEW **)v12 )
    {
      do
      {
        NSInstrumentation::CSortedVector<unsigned int,FONTFILEVIEW *>::Remove(*(struct W32_PUSH_LOCK **)(v4 + 24168));
        v13 += 8;
      }
      while ( v13 < v12 );
    }
  }
  if ( v8 )
    GreReleasePushLockExclusive(v8);
  v9 = &a1[v2];
  for ( i = a1; i < v9; ++i )
  {
    v11 = *i;
    if ( *((_QWORD *)*i + 11) )
      vUnmapRemoteFonts(v11);
    else
      vUnreferenceFileviewSection(v11);
  }
  Win32FreePool(a1);
}
