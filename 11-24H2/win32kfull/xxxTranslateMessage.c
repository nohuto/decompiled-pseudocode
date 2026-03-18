/*
 * XREFs of xxxTranslateMessage @ 0x14006742C
 * Callers:
 *     NtUserTranslateMessage @ 0x140067380 (NtUserTranslateMessage.c)
 *     xxxHandleMenuMessages @ 0x14006D0F0 (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x14009B5E0 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E2314 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1402E98E4 (xxxHelpLoop.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _PostMessageExtended @ 0x14006649C (_PostMessageExtended.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxTranslateMessage(__int64 a1, __int64 a2)
{
  int v3; // ecx
  int v4; // esi
  int v5; // r15d
  __int64 v6; // rcx
  struct tagTHREADINFO *v7; // rax
  unsigned int v8; // ebx
  struct tagTHREADINFO *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // rdx
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rbp
  int v21; // r15d
  unsigned int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct tagWND *v25; // r15
  _WORD *v26; // r14
  __int64 v27; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rax
  __int64 v32; // rax
  int v33; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v34[32]; // [rsp+48h] [rbp-60h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2;
  v33 = 0;
  v5 = 0;
  v6 = (unsigned int)(v3 - 256);
  if ( (_DWORD)v6 )
  {
    v6 = (unsigned int)(v6 - 1);
    if ( (_DWORD)v6 )
    {
      v6 = (unsigned int)(v6 - 3);
      if ( (_DWORD)v6 )
      {
        if ( (_DWORD)v6 != 1 )
          return 0LL;
      }
      else
      {
        v5 = 1;
      }
    }
  }
  v7 = PtiCurrent(v6, a2);
  v8 = *(_DWORD *)(a1 + 8);
  v9 = v7;
  LOBYTE(v12) = *((_BYTE *)PtiCurrent(v11, v10) + 1456);
  EtwTraceBeginTranslateMessage(v12, v8);
  v13 = *((_QWORD *)v9 + 81);
  if ( v13 && ((v31 = *(__int64 **)(*(_QWORD *)v13 + 16LL)) != 0LL ? (v32 = *v31) : (v32 = 0LL), v32 == *(_QWORD *)a1) )
    v14 = v4 | 1;
  else
    v14 = v4 & 0xFFFFFFFE;
  v15 = *(_QWORD *)(a1 + 24);
  v16 = xxxInternalToUnicode(
          *(unsigned __int16 *)(a1 + 16),
          WORD1(v15),
          *((_QWORD *)v9 + 59) + 280LL,
          v34,
          16,
          v14,
          &v33,
          0LL);
  v18 = v16;
  v19 = v33 & 0x4000000;
  v20 = v19 | v15;
  if ( v16 )
  {
    v21 = 4 * v5;
    if ( v16 <= 0 )
      v18 = -v16;
    v22 = v21 + (v16 <= 0) + 258;
    if ( (v33 & 0x8000) != 0 )
      v20 |= 0x80000000uLL;
    else
      LODWORD(v20) = v20 & 0x7FFFFFFF;
    v25 = (struct tagWND *)ValidateHwnd(*(_QWORD *)a1);
    if ( v25 )
    {
      v26 = v34;
      while ( v18 > 0 )
      {
        PostMessageExtended(v25, v22, (unsigned __int16)*v26, v20 | ((unsigned int)v18 > 1 ? 0x2000000 : 0), 0LL);
        *v26 = 0;
        --v18;
        ++v26;
      }
      LOBYTE(v27) = *((_BYTE *)PtiCurrent(v24, v23) + 1456);
      EtwTraceEndTranslateMessage(v27, v8);
      return 1LL;
    }
    LOBYTE(v30) = *((_BYTE *)PtiCurrent(v24, v23) + 1456);
    EtwTraceEndTranslateMessage(v30, v8);
  }
  else
  {
    LOBYTE(v29) = *((_BYTE *)PtiCurrent(v19, v17) + 1456);
    EtwTraceEndTranslateMessage(v29, v8);
    if ( (v14 & 2) == 0 )
      return 1LL;
  }
  return 0LL;
}
