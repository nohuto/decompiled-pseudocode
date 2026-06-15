/*
 * XREFs of PbmAllowMediaPlaybackForApp @ 0x18003D890
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180006D70 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180007620 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAPEBG@std@@YA?AV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEAPEBG@Z @ 0x18000D098 (--$make_shared@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAPEBG@std@@YA-AV-.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18000D180 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x180017C44 (--0-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@AEBV01@.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BA28 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall PbmAllowMediaPlaybackForApp(void *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  __int64 result; // rax
  int v6; // eax
  const char *v7; // r9
  unsigned int v8; // ebx
  unsigned int v9; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+28h] [rbp-80h] BYREF
  std::_Ref_count_base *v11; // [rsp+30h] [rbp-78h]
  __int64 v12[4]; // [rsp+38h] [rbp-70h] BYREF
  unsigned int v13; // [rsp+58h] [rbp-50h]
  __int64 *v14; // [rsp+70h] [rbp-38h]
  _QWORD v15[6]; // [rsp+78h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v17; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v18; // [rsp+C8h] [rbp+20h] BYREF

  v17 = a2;
  v9 = 0;
  v18 = 0;
  v4 = RpcClientProcessSessionId(a1, &v9, &v18);
  if ( v4 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0xAC,
             (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
             (const char *)v4);
  try
  {
    std::make_shared<std::wstring,unsigned short const * &>(&v10, (__int64)&v17);
    std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(v15, &v10);
    v12[0] = (__int64)off_180054198;
    v12[1] = v15[0];
    v12[2] = v15[1];
    v12[3] = a3;
    v13 = v18;
    v14 = v12;
    v6 = QueueGenericWorkItem(v12);
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
        (void *)0xB2,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
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
                           (void *)0xB6,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanagerrpc.cpp",
                           v7);
  }
  return result;
}
