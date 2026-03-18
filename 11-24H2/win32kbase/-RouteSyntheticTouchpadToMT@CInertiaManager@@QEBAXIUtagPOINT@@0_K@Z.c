/*
 * XREFs of ?RouteSyntheticTouchpadToMT@CInertiaManager@@QEBAXIUtagPOINT@@0_K@Z @ 0x14015971C
 * Callers:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14014D108 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ?ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z @ 0x14019C9C0 (-ForwardInertiaFrameToManipulationThread@CTouchProcessor@@SAXPEBUCPointerInputFrame@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CInertiaManager::RouteSyntheticTouchpadToMT(
        CInertiaManager *this,
        int a2,
        struct tagPOINT a3,
        struct tagPOINT a4,
        unsigned __int64 a5)
{
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  __int64 v10; // rcx
  _QWORD v11[34]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v12; // [rsp+130h] [rbp+30h] BYREF
  __int64 v13; // [rsp+140h] [rbp+40h]
  _BYTE v14[112]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v15; // [rsp+1B8h] [rbp+B8h]
  _QWORD v16[26]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v17[112]; // [rsp+290h] [rbp+190h] BYREF
  __int64 v18; // [rsp+300h] [rbp+200h]
  __int64 v19; // [rsp+308h] [rbp+208h]

  memset(v11, 0, 0x108uLL);
  v13 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  memset(v14, 0, sizeof(v14));
  memset(v16, 0, sizeof(v16));
  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  v19 = 0LL;
  UserSessionState = W32GetUserSessionState(v8);
  LODWORD(v11[6]) = 1;
  v10 = *(_QWORD *)(UserSessionState + 3264);
  DWORD1(v12) |= 0x180u;
  v11[30] = &v12;
  v11[0] = v10;
  LODWORD(v16[3]) = 5;
  LODWORD(v12) = v12 & 0xFFFFF3FF | 0x400;
  HIDWORD(v16[25]) = a5;
  HIDWORD(v16[4]) = 0x800000;
  v16[9] = a3;
  v16[7] = a3;
  v16[10] = a4;
  v16[8] = a4;
  LODWORD(v16[12]) = a2;
  CTouchProcessor::ForwardInertiaFrameToManipulationThread((const struct CPointerInputFrame *)v11);
  CInputDest::~CInputDest((CInputDest *)v17);
  CInputDest::~CInputDest((CInputDest *)v14);
}
