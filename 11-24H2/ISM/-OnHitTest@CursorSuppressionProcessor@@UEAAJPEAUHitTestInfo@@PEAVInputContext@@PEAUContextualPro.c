/*
 * XREFs of ?OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180147430
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSiteForContainer@@YA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180054E6C (-GetInputSiteForContainer@@YA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV-$vector@V-$ComPtr@VInp.c)
 *     ??$StateChange@AEAY0BB@$$CBG@TestCursorTraceLogging@@SAXAEAY0BB@$$CBG@Z @ 0x1801470F0 (--$StateChange@AEAY0BB@$$CBG@TestCursorTraceLogging@@SAXAEAY0BB@$$CBG@Z.c)
 *     ??$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z @ 0x180147134 (--$StateChange@AEAY0L@$$CBG@TestCursorTraceLogging@@SAXAEAY0L@$$CBG@Z.c)
 *     ??$StateChange@AEAY0O@$$CBG@TestCursorTraceLogging@@SAXAEAY0O@$$CBG@Z @ 0x180147178 (--$StateChange@AEAY0O@$$CBG@TestCursorTraceLogging@@SAXAEAY0O@$$CBG@Z.c)
 *     ?GetCursorSuppressionPolicyFromInputSites@CursorSuppressionProcessor@@QEAA?AW4SuppressionPolicy@Input@Internal@UI@Windows@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1801472D0 (-GetCursorSuppressionPolicyFromInputSites@CursorSuppressionProcessor@@QEAA-AW4SuppressionPolicy@.c)
 *     ?SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z @ 0x180147720 (-SetSuppressionState@Cursor@InputTraceLogging@@SAX_KW4CursorSuppressionState@@@Z.c)
 *     ?SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z @ 0x1801477C8 (-SuppressCursor@CursorSuppressionProcessor@@AEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorSuppressionProcessor::OnHitTest(
        const WCHAR *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  const WCHAR *v6; // rbx
  const WCHAR *v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r14
  const WCHAR *v10; // rcx
  CursorSuppressionProcessor *pvParam; // [rsp+48h] [rbp+10h] BYREF

  v6 = this;
  *(_DWORD *)a4 = 0;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    pvParam = 0LL;
    GetCursorPos((LPPOINT)&pvParam);
    if ( *((_DWORD *)v6 + 20) != 1 )
    {
LABEL_5:
      *(_QWORD *)(v6 + 42) = pvParam;
      return 0LL;
    }
    if ( *(CursorSuppressionProcessor **)(v6 + 42) != pvParam )
    {
      CursorSuppressionProcessor::SuppressCursor((CursorSuppressionProcessor *)(v6 - 4), 0);
      *((_DWORD *)v6 + 20) = 2;
      TestCursorTraceLogging::StateChange<unsigned short const (&)[14]>(v7);
      InputTraceLogging::Cursor::SetSuppressionState(*((unsigned int *)a2 + 1), *((unsigned int *)v6 + 20));
      goto LABEL_5;
    }
  }
  else if ( (*(_BYTE *)a2 & 0x18) != 0 )
  {
    if ( (*((_BYTE *)a2 + 32) & 6) != 0 )
    {
      v8 = *((_QWORD *)a3 + 22);
      if ( (*(_BYTE *)a2 & 0x10) == 0 )
        goto LABEL_27;
      v9 = *GetInputSiteForContainer((__int64 *)&pvParam, (__int64 **)(*(_QWORD *)(v8 + 104) - 24LL));
      this = (const WCHAR *)pvParam;
      if ( pvParam )
      {
        pvParam = 0LL;
        (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)this + 16LL))(this);
      }
      if ( v9
        && (LODWORD(pvParam) = 0, SystemParametersInfoW(0x201Eu, 0, &pvParam, 0))
        && ((unsigned __int8)pvParam & 0x20) != 0 )
      {
        *(_DWORD *)a4 = 3;
        if ( *((_DWORD *)v6 + 20) != 3 )
        {
          if ( *((_DWORD *)v6 + 20) != 2 )
            CursorSuppressionProcessor::SuppressCursor((CursorSuppressionProcessor *)(v6 - 4), 0);
          *((_DWORD *)v6 + 20) = 3;
          TestCursorTraceLogging::StateChange<unsigned short const (&)[17]>(this);
          InputTraceLogging::Cursor::SetSuppressionState(*((unsigned int *)a2 + 1), *((unsigned int *)v6 + 20));
        }
      }
      else
      {
LABEL_27:
        if ( !(unsigned int)CursorSuppressionProcessor::GetCursorSuppressionPolicyFromInputSites(
                              (__int64)this,
                              (__int64 **)(*(_QWORD *)(v8 + 104) - 24LL)) )
        {
          if ( (*(_BYTE *)a2 & 0x10) != 0 && *((_DWORD *)v6 + 20) == 3 )
          {
            CursorSuppressionProcessor::SuppressCursor((CursorSuppressionProcessor *)(v6 - 4), 1);
            *((_DWORD *)v6 + 20) = 0;
            TestCursorTraceLogging::StateChange<unsigned short const (&)[11]>(v10);
            InputTraceLogging::Cursor::SetSuppressionState(*((unsigned int *)a2 + 1), *((unsigned int *)v6 + 20));
          }
          *(_DWORD *)a4 = 3;
        }
      }
    }
    else
    {
      *(_DWORD *)a4 = 3;
    }
  }
  return 0LL;
}
