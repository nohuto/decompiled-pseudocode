/*
 * XREFs of ?OnAppClosed@CPlaybackManager@@QEAAJPEBG_KK@Z @ 0x18003A6BC
 * Callers:
 *     PbmReportAppClosing @ 0x18003B660 (PbmReportAppClosing.c)
 * Callees:
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x18000348C (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180004B70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180012ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180017D74 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 */

__int64 __fastcall CPlaybackManager::OnAppClosed(
        CPlaybackManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4)
{
  int v6; // eax
  const char *v7; // r9
  unsigned int v8; // ebx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-78h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-70h]
  _QWORD v12[4]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13[4]; // [rsp+50h] [rbp-48h] BYREF
  int v14; // [rsp+70h] [rbp-28h]
  __int64 *v15; // [rsp+88h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  const unsigned __int16 *v17; // [rsp+A8h] [rbp+10h] BYREF

  v17 = a2;
  try
  {
    std::make_shared<std::wstring,unsigned short const * &>(&v10, (__int64)&v17);
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v12, &v10);
    v13[0] = (__int64)off_180051088;
    v13[1] = v12[0];
    v13[2] = v12[1];
    v13[3] = a3;
    v14 = a4;
    v15 = v13;
    v6 = QueueGenericWorkItem(v13);
    v8 = v6;
    if ( v6 >= 0 )
    {
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
        (const char *)(unsigned int)v6);
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
      result = v8;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x81,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
                           v7);
  }
  return result;
}
