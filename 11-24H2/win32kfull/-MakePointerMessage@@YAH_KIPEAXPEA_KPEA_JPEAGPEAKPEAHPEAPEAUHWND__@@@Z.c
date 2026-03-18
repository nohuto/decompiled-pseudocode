/*
 * XREFs of ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1400A903C
 * Callers:
 *     _QuerySendMessage @ 0x1402B182C (_QuerySendMessage.c)
 * Callees:
 *     ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1400A9368 (-MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAP.c)
 */

__int64 __fastcall MakePointerMessage(
        unsigned __int64 a1,
        __int64 a2,
        void *a3,
        unsigned __int64 *a4,
        __int64 *a5,
        unsigned __int16 *a6,
        unsigned int *a7,
        int *a8,
        HWND *a9)
{
  unsigned int v11; // r14d
  __int64 UserSessionState; // rax
  const struct tagPOINTER_INFO *PointerMessage; // rax
  int v16; // [rsp+78h] [rbp+Fh] BYREF
  int v17; // [rsp+7Ch] [rbp+13h] BYREF
  int v18; // [rsp+80h] [rbp+17h] BYREF
  struct tagPOINT v19; // [rsp+88h] [rbp+1Fh] BYREF

  v19 = 0LL;
  v18 = 0;
  v11 = a2;
  v17 = 0;
  v16 = 0;
  UserSessionState = W32GetUserSessionState(a1, a2);
  PointerMessage = CTouchProcessor::PrepareMakePointerMessage(
                     *(CTouchProcessor **)(UserSessionState + 3264),
                     a1,
                     &v19,
                     &v18,
                     &v17,
                     &v16);
  return MakePointerMessageWorker(PointerMessage, v19, v18, v17, v16, v11, a3, a4, a5, a6, a7, a8, a9);
}
