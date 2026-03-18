/*
 * XREFs of ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14020DD9C
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x140187B70 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1400D9C78 (-CacheInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?QueryInertiaStatus@CInertiaManager@@QEBA_NXZ @ 0x1400D9E04 (-QueryInertiaStatus@CInertiaManager@@QEBA_NXZ.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1400DA2C4 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x14014D108 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

void __fastcall CPTPProcessor::EndInertia(CPTPProcessor *this)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rax
  CInertiaManager *v4; // rcx

  if ( *((_BYTE *)this + 392) )
  {
    UserSessionState = W32GetUserSessionState(this);
    CHidInput::HandlePTPInertiaTimer(*(CHidInput **)(UserSessionState + 16840), 1, 0, *((void **)this + 66));
    *((_BYTE *)this + 392) = 0;
  }
  if ( (*((_DWORD *)this + 97) & 1) == 0 )
  {
    v3 = W32GetUserSessionState(this);
    if ( CInertiaManager::QueryInertiaStatus((CInertiaManager *)(v3 + 16920)) )
      CPTPProcessor::CacheInertia(this);
  }
  if ( (*((_DWORD *)this + 97) & 1) != 0 )
  {
    W32GetUserSessionState(this);
    CInertiaManager::PostInertiaMessage(
      v4,
      0x23Cu,
      (CPTPProcessor *)((char *)this + 176),
      *(struct tagPOINT *)((char *)this + 368),
      *(struct tagPOINT *)((char *)this + 376));
    *((_DWORD *)this + 97) &= ~1u;
  }
}
