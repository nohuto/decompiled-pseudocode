/*
 * XREFs of ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x14020DE58
 * Callers:
 *     ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x14020F420 (-OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1400D9E50 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1400DA5F0 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14014D108 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

void __fastcall CPTPProcessor::EndInertiaForContainer(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  struct tagHID_POINTER_DEVICE_INFO *v5; // rbx
  __int64 UserSessionState; // rdi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  const struct INERTIA_INFO_INTERNAL *Inertia; // rsi
  struct tagPOINT *v11; // rax
  struct tagPOINT v12; // rbx
  __int64 v13; // rcx
  struct tagPOINT *v14; // rax
  CInertiaManager *v15; // rcx

  v3 = HMValidateHandleNoSecure(a1, 19);
  if ( v3 )
  {
    v5 = *(struct tagHID_POINTER_DEVICE_INFO **)(v3 + 456);
    if ( v5 )
    {
      UserSessionState = W32GetUserSessionState(v4);
      v8 = W32GetUserSessionState(v7);
      Inertia = (const struct INERTIA_INFO_INTERNAL *)CInertiaManager::QueryInertia(
                                                        UserSessionState + 16920,
                                                        *(_QWORD *)(v8 + 19240),
                                                        15);
      if ( Inertia )
      {
        v11 = (struct tagPOINT *)W32GetUserSessionState(v9);
        v12 = CPTPProcessor::TransformTPScreenToHimetric(v5, v11[2405]);
        v14 = (struct tagPOINT *)W32GetUserSessionState(v13);
        CInertiaManager::PostInertiaMessage(v15, 0x23Cu, Inertia, v14[2405], v12);
        *(_QWORD *)(UserSessionState + 16920) = a2;
      }
    }
  }
}
