/*
 * XREFs of ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1400D9C78
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x140187B70 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14020DD9C (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1400D9E50 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1400DA2C4 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1400DA524 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1400DA5F0 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 */

void __fastcall CPTPProcessor::CacheInertia(CPTPProcessor *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  struct tagHID_POINTER_DEVICE_INFO *v4; // rbp
  __int64 UserSessionState; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 *Inertia; // rax
  __int64 v9; // rcx
  unsigned __int64 *v10; // rsi
  __int64 v11; // rcx
  struct tagPOINT *v12; // rax
  struct tagPOINT v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax

  v2 = HMValidateHandleNoSecure(*((_QWORD *)this + 66), 19);
  if ( v2 )
  {
    v4 = *(struct tagHID_POINTER_DEVICE_INFO **)(v2 + 456);
    UserSessionState = W32GetUserSessionState(v3);
    v7 = W32GetUserSessionState(v6);
    Inertia = (unsigned __int64 *)CInertiaManager::QueryInertia(UserSessionState + 16920, *(_QWORD *)(v7 + 19240), 15LL);
    v10 = Inertia;
    if ( Inertia )
    {
      *((_OWORD *)this + 11) = *(_OWORD *)Inertia;
      *((_OWORD *)this + 12) = *((_OWORD *)Inertia + 1);
      *((_OWORD *)this + 13) = *((_OWORD *)Inertia + 2);
      *((_OWORD *)this + 14) = *((_OWORD *)Inertia + 3);
      *((_OWORD *)this + 15) = *((_OWORD *)Inertia + 4);
      *((_OWORD *)this + 16) = *((_OWORD *)Inertia + 5);
      *((_OWORD *)this + 17) = *((_OWORD *)Inertia + 6);
      *((_OWORD *)this + 18) = *((_OWORD *)Inertia + 7);
      *((_OWORD *)this + 19) = *((_OWORD *)Inertia + 8);
      *((_OWORD *)this + 20) = *((_OWORD *)Inertia + 9);
      *((_OWORD *)this + 21) = *((_OWORD *)Inertia + 10);
      *((_OWORD *)this + 22) = *((_OWORD *)Inertia + 11);
      *((_QWORD *)this + 46) = *(_QWORD *)(W32GetUserSessionState(v9) + 19240);
      v12 = (struct tagPOINT *)W32GetUserSessionState(v11);
      v13 = CPTPProcessor::TransformTPScreenToHimetric(v4, v12[2405]);
      *((_DWORD *)this + 97) |= 1u;
      *((struct tagPOINT *)this + 47) = v13;
      v15 = W32GetUserSessionState(v14);
      CHidInput::HandlePTPInertiaTimer(*(CHidInput **)(v15 + 16840), 0, 0x32u, *((void **)this + 66));
      *((_BYTE *)this + 392) = 1;
      CInertiaManager::InvalidateInertiaInfo((CInertiaManager *)(UserSessionState + 16920), *v10, v10[1]);
    }
  }
}
