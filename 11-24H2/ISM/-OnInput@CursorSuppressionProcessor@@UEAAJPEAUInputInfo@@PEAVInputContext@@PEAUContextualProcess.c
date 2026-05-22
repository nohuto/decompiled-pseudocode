/*
 * XREFs of ?OnInput@CursorSuppressionProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801475E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180057D70 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ??$StateChange@AEAY07$$CBG@TestCursorTraceLogging@@SAXAEAY07$$CBG@Z @ 0x1801470AC (--$StateChange@AEAY07$$CBG@TestCursorTraceLogging@@SAXAEAY07$$CBG@Z.c)
 *     ??$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z @ 0x180147134 (--$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z.c)
 *     ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x180147720 (-SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z.c)
 *     ?SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z @ 0x1801477C8 (-SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z.c)
 */

__int64 __fastcall CursorSuppressionProcessor::OnInput(
        CursorSuppressionProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  char *v4; // rdi
  const WCHAR *v8; // rcx
  char *v9; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)a4 + 2) = 0;
  v4 = (char *)a2 + 320;
  gsl::details::extent_type<-1>::extent_type<-1>(v11, *((unsigned int *)a2 + 79));
  if ( v11[0] == -1LL || !v4 && v11[0] )
  {
    _o_terminate(v8);
    __debugbreak();
    JUMPOUT(0x1801476D5LL);
  }
  v9 = &v4[144 * v11[0]];
  while ( v4 != v9 )
  {
    if ( (v4[12] & 6) != 0 )
    {
      *((_DWORD *)a4 + 2) = 4;
      if ( *((_DWORD *)this + 20) != 1 )
      {
        if ( *((_DWORD *)this + 20) != 2 )
          return 0LL;
        CursorSuppressionProcessor::SuppressCursor((CursorSuppressionProcessor *)((char *)this - 8), 1);
      }
      *((_DWORD *)this + 20) = 0;
      TestCursorTraceLogging::StateChange<unsigned short const (&)[11]>(v8);
      goto LABEL_17;
    }
    v4 += 144;
  }
  if ( !*((_DWORD *)this + 20) )
  {
LABEL_16:
    *((_DWORD *)this + 20) = 1;
    TestCursorTraceLogging::StateChange<unsigned short const (&)[8]>(v8);
LABEL_17:
    InputTraceLogging::Cursor::SetSuppressionState(*((unsigned int *)a2 + 1), *((unsigned int *)this + 20));
    return 0LL;
  }
  if ( *((_DWORD *)this + 20) == 3 && (*(_BYTE *)a2 & 0x10) != 0 )
  {
    CursorSuppressionProcessor::SuppressCursor((CursorSuppressionProcessor *)((char *)this - 8), 1);
    goto LABEL_16;
  }
  return 0LL;
}
