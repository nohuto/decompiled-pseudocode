/*
 * XREFs of ??$make_tuple@AEBUnullopt_t@std@@AEAY00$$CBG@std@@YA?AV?$tuple@Unullopt_t@std@@PEBG@0@AEBUnullopt_t@0@AEAY00$$CBG@Z @ 0x180141ACC
 * Callers:
 *     ?FindDCompTargetIdForPoint@GestureServices@@AEAA?AV?$tuple@V?$optional@UtagCOMPOSITION_TARGET_ID@@@std@@PEBG@std@@UtagPOINT@@IPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x18014232C (-FindDCompTargetIdForPoint@GestureServices@@AEAA-AV-$tuple@V-$optional@UtagCOMPOSITION_TARGET_ID.c)
 * Callees:
 *     ??$?0Unullopt_t@std@@$0A@@?$tuple@Unullopt_t@std@@PEBG@std@@QEAA@AEBUnullopt_t@1@AEBQEBG@Z @ 0x180141474 (--$-0Unullopt_t@std@@$0A@@-$tuple@Unullopt_t@std@@PEBG@std@@QEAA@AEBUnullopt_t@1@AEBQEBG@Z.c)
 */

__int64 __fastcall std::make_tuple<std::nullopt_t const &,unsigned short const (&)[1]>(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rcx
  const WCHAR *v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = &WindowName;
  std::tuple<std::nullopt_t,unsigned short const *>::tuple<std::nullopt_t,unsigned short const *>(a1, a2, &v4);
  return v2;
}
