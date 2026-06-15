/*
 * XREFs of ?TsSessionIdGetUserDuckingPreference@@YAKK@Z @ 0x180010DF0
 * Callers:
 *     ?OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z @ 0x180010D60 (-OnStreamCreatedInTsSession@CDuckingManager@@UEAAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180010F70 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x18003ED14 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionIdGetUserDuckingPreference(DWORD a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v3; // rbx
  _QWORD *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // eax
  struct TSSession *v9; // rbx
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct TSSession *v13; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+18h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v14 = v2;
  v3 = 0LL;
  v13 = 0LL;
  EnterCriticalSection(&stru_180064A78);
  v4 = (_QWORD *)(qword_180064AB8
                + 16
                * (qword_180064AD0 & (0x100000001B3LL
                                    * (HIBYTE(a1) ^ (0x100000001B3LL
                                                   * (BYTE2(a1) ^ (0x100000001B3LL
                                                                 * (BYTE1(a1) ^ (0x100000001B3LL
                                                                               * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL))))))))));
  v5 = v4[1];
  if ( v5 != qword_180064AA8 )
  {
    while ( a1 != *(_DWORD *)(v5 + 16) )
    {
      if ( v5 == *v4 )
        goto LABEL_6;
      v5 = *(_QWORD *)(v5 + 8);
    }
    v3 = v5;
  }
LABEL_6:
  v6 = qword_180064AA8;
  if ( v3 )
    v6 = v3;
  if ( v6 == qword_180064AA8 )
  {
    LeaveCriticalSection(&stru_180064A78);
    v7 = TsSessionCreate(a1, &v13);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43A,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v7);
LABEL_11:
      if ( v2 )
        LeaveCriticalSection(v2);
      return 1LL;
    }
    v9 = v13;
  }
  else
  {
    v9 = *(struct TSSession **)(v6 + 24);
    LeaveCriticalSection(&stru_180064A78);
  }
  if ( (int)RpcTryInitializeUserSettings(v9) < 0 )
    goto LABEL_11;
  v10 = *((_DWORD *)v9 + 272);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v10;
}
