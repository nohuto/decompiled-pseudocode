/*
 * XREFs of PrepareSentPointerMessageForClient @ 0x1400A9130
 * Callers:
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x14007F440 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxPointerCallHook @ 0x1400A7484 (xxxPointerCallHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1400A9368 (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall PrepareSentPointerMessageForClient(unsigned int *a1, void **a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v4; // r14
  void *v5; // rbx
  unsigned int v7; // edi
  __int64 UserSessionState; // rax
  const struct tagPOINTER_INFO *PointerMessage; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // rdx
  __int64 result; // rax
  unsigned __int64 v23; // rcx
  int v24; // [rsp+70h] [rbp-90h] BYREF
  int v25; // [rsp+74h] [rbp-8Ch] BYREF
  int v26; // [rsp+78h] [rbp-88h] BYREF
  struct tagPOINT v27; // [rsp+80h] [rbp-80h] BYREF
  HWND v28; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v29; // [rsp+90h] [rbp-70h] BYREF
  __int64 v30; // [rsp+98h] [rbp-68h] BYREF
  _OWORD v31[5]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v32; // [rsp+F0h] [rbp-10h]
  __int128 v33; // [rsp+100h] [rbp+0h]
  _OWORD v34[10]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int16 v35; // [rsp+1C0h] [rbp+C0h] BYREF
  unsigned int v36; // [rsp+1C8h] [rbp+C8h] BYREF
  int v37; // [rsp+1D0h] [rbp+D0h] BYREF

  v4 = *a3;
  v5 = *a2;
  v7 = *a1;
  v29 = 0LL;
  v30 = 0LL;
  v35 = 0;
  v36 = 0;
  v26 = 0;
  v28 = 0LL;
  v27 = 0LL;
  v25 = 0;
  v24 = 0;
  v37 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  PointerMessage = CTouchProcessor::PrepareMakePointerMessage(
                     *(CTouchProcessor **)(UserSessionState + 3264),
                     v4,
                     &v27,
                     &v25,
                     &v24,
                     &v37);
  if ( !(unsigned int)MakePointerMessageWorker(
                        PointerMessage,
                        v27,
                        v25,
                        v24,
                        v37,
                        v7,
                        v5,
                        &v29,
                        &v30,
                        &v35,
                        &v36,
                        &v26,
                        &v28) )
    return 0LL;
  LOBYTE(v13) = 1;
  v14 = HMValidateHandleNoSecure((__int64)v28, v13);
  memset_0(v31, 0, 0x70uLL);
  if ( v14 )
  {
    LODWORD(v31[0]) = 4;
    *(_QWORD *)&v32 = v14;
    HIDWORD(v32) = 2;
  }
  v17 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 3264);
  v20 = (char *)PtiCurrent(v19, v18) + 1208;
  v34[0] = v31[0];
  v34[1] = v31[1];
  v34[2] = v31[2];
  v34[3] = v31[3];
  v34[4] = v31[4];
  v34[5] = v32;
  v34[6] = v33;
  if ( !(a4
       ? CTouchProcessor::AddThreadPointerHookData(v17, v20, v35, v36, v4, v7, v34)
       : (unsigned int)CTouchProcessor::AddThreadPointerData(v17, v20, v35, v36, v4, v7, v34, 0)) )
    return 0LL;
  v23 = v29;
  result = 1LL;
  *a1 = v7;
  *a2 = (void *)v23;
  *a3 = v30;
  return result;
}
