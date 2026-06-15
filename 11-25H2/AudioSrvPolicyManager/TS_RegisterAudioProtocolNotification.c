/*
 * XREFs of TS_RegisterAudioProtocolNotification @ 0x1800070B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180007620 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18000CB6C (-TsSessionIdAddNotify@@YAJKKPEAPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 */

__int64 __fastcall TS_RegisterAudioProtocolNotification(void *a1, struct AUDIOPROTOCOLNOTIFY **a2)
{
  int v2; // edi
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // edi
  int v9; // [rsp+20h] [rbp-18h]
  int v10; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+18h] BYREF
  struct AUDIOPROTOCOLNOTIFY *v14; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 )
  {
    v10 = v2;
    *a2 = 0LL;
    v12 = 0;
    v13 = 0;
    v5 = RpcClientProcessSessionId(a1, &v12, &v13);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v14 = 0LL;
      v7 = TsSessionIdAddNotify(v13, v12, &v14);
      v8 = v7;
      if ( v7 >= 0 )
      {
        *a2 = v14;
        return 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9B1,
          (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v7,
          v10);
        return v8;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9AE,
        (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v5,
        v10);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9A7,
      (unsigned int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
      (const char *)0x80070057LL,
      v9);
    return 2147942487LL;
  }
}
