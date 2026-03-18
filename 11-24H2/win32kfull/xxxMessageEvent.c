/*
 * XREFs of xxxMessageEvent @ 0x1402DBE70
 * Callers:
 *     xxxDDETrackPostHook @ 0x14024E980 (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x14024EC24 (xxxDDETrackSendHook.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x14003E6B0 (PopAndFreeW32ThreadLock.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     xxxCsEvent @ 0x1402DBB18 (xxxCsEvent.c)
 */

_DWORD *__fastcall xxxMessageEvent(__int64 *a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  _DWORD *result; // rax
  _DWORD *v11; // rbx
  __int64 v12; // rax
  __int64 ThreadId; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct tagTHREADINFO *v20; // rax
  __int64 v21; // rdx
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF

  result = (_DWORD *)Win32AllocPoolWithQuotaZInit(120LL, 946107221LL);
  v11 = result;
  if ( result )
  {
    *result = a5;
    result[1] = 7340033;
    result[2] = 112;
    if ( a1 )
      v12 = *a1;
    else
      v12 = 0LL;
    *((_QWORD *)v11 + 2) = v12;
    v11[6] = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    ThreadId = HMValidateHandleNoSecure(a3, 1LL);
    if ( ThreadId )
      ThreadId = (__int64)PsGetThreadId(**(PETHREAD **)(ThreadId + 16));
    *((_QWORD *)v11 + 4) = ThreadId;
    v11[10] = a2;
    *((_QWORD *)v11 + 6) = a3;
    *((_QWORD *)v11 + 7) = a4;
    if ( a6 )
    {
      v16 = *(_OWORD *)(a6 + 16);
      *((_OWORD *)v11 + 4) = *(_OWORD *)a6;
      v17 = *(_OWORD *)(a6 + 32);
      *((_OWORD *)v11 + 5) = v16;
      *(_QWORD *)&v16 = *(_QWORD *)(a6 + 48);
      *((_OWORD *)v11 + 6) = v17;
      *((_QWORD *)v11 + 14) = v16;
    }
    PtiCurrent(v15, v14);
    v20 = PtiCurrent(v19, v18);
    v22[0] = *((_QWORD *)v20 + 48);
    *((_QWORD *)v20 + 48) = v22;
    v22[2] = Win32FreePool;
    v22[1] = v11;
    xxxCsEvent(v11, 112LL);
    return (_DWORD *)PopAndFreeW32ThreadLock((__int64)v22, v21);
  }
  return result;
}
