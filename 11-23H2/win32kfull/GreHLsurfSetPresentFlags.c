/*
 * XREFs of GreHLsurfSetPresentFlags @ 0x1C026724C
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C00C42D0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C70 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00C7D10 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00C9A30 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013D794 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreHLsurfSetPresentFlags(Gre::Base *a1, __int64 a2, int a3)
{
  unsigned int v5; // edi
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rsi
  Gre::Base *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  _OWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+40h] [rbp-28h]
  Gre::Base *v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = a1;
  v5 = -1071775733;
  if ( IsDwmActive(a1) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
    v7 = Gre::Base::Globals(v6);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v7 + 9));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v7 + 9));
    if ( IsDwmActive(v8) )
    {
      if ( (unsigned int)UserIsCurrentProcessDwm() )
      {
        v5 = -1073741811;
        UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v13);
        v10 = 0LL;
        v14 = 0LL;
        if ( a2 )
        {
          LOBYTE(v9) = 18;
          v11 = HmgShareLockCheck(a2, v9);
          v14 = v11;
          v10 = v11;
          if ( v11 )
          {
            PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v15, (struct _EX_PUSH_LOCK *)(v11 + 256));
            *(_DWORD *)(v10 + 212) = a3;
            v5 = 0;
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v15);
            v10 = v14;
          }
        }
        if ( v10 )
          DEC_SHARE_REF_CNT(v10);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v13);
      }
      else
      {
        v5 = -1073741790;
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v7 + 9));
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
  }
  return v5;
}
