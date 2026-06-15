/*
 * XREFs of ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180047340
 * Callers:
 *     AudioServerGetAudioSession @ 0x180082140 (AudioServerGetAudioSession.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AddClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x18004788C (-AddClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x1800478BC (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVADServer::get_AudioSession(
        struct _RTL_CRITICAL_SECTION *this,
        struct CServerAudioSessionControl **a2)
{
  unsigned int v2; // ebx
  CServerAudioSessionControl **p_OwningThread; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbp
  __int64 v7; // r8

  v2 = 0;
  if ( LODWORD(this[4].DebugInfo) )
  {
    p_OwningThread = (CServerAudioSessionControl **)&this[3].OwningThread;
    if ( !this[3].OwningThread )
    {
      v6 = this + 5;
      EnterCriticalSection(this + 5);
      if ( !*p_OwningThread )
      {
        LOBYTE(v7) = 1;
        v2 = (***(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64, HANDLE, CServerAudioSessionControl **))&this[3].LockCount)(
               *(_QWORD *)&this[3].LockCount,
               LODWORD(this[1].DebugInfo),
               v7,
               this[3].LockSemaphore,
               p_OwningThread);
      }
      if ( v6 )
        LeaveCriticalSection(v6);
      if ( v2 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_74ab4d28651a3ef962dcd31efa958cf9_Traceguids, v2);
        }
        goto LABEL_12;
      }
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          14LL,
          &WPP_74ab4d28651a3ef962dcd31efa958cf9_Traceguids,
          *p_OwningThread);
      }
    }
    if ( HasTooManyReferences((struct IUnknown *)(((unsigned __int64)*p_OwningThread + 8) & -(__int64)(*p_OwningThread != 0LL))) )
    {
      v2 = -2147024882;
      goto LABEL_26;
    }
    *a2 = *p_OwningThread;
    CServerAudioSessionControl::AddClientReference(*p_OwningThread);
LABEL_12:
    if ( (v2 & 0x80000000) == 0 )
      return v2;
LABEL_26:
    AudSrvTraceLoggingErrorHelper("CVADServer::get_AudioSession", 1313, v2);
    return v2;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_74ab4d28651a3ef962dcd31efa958cf9_Traceguids);
  }
  return 2290679809LL;
}
