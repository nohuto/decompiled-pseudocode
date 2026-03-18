/*
 * XREFs of GreHLsurfSetUpdateId @ 0x1C02673B4
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C00C42D0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C24 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00C2C70 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C00C42A0 (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00C7D10 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00C9A30 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013D794 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreHLsurfSetUpdateId(Gre::Base *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // edi
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rbp
  Gre::Base *v8; // rcx
  __int64 v9; // rdx
  SFMLOGICALSURFACE *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  _OWORD v14[2]; // [rsp+20h] [rbp-48h] BYREF
  SFMLOGICALSURFACE *v15; // [rsp+40h] [rbp-28h]
  Gre::Base *v16; // [rsp+70h] [rbp+8h] BYREF

  v16 = a1;
  v5 = -1071775733;
  if ( IsDwmActive(a1) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
    v7 = Gre::Base::Globals(v6);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v7 + 9));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v7 + 9));
    if ( IsDwmActive(v8) )
    {
      if ( (unsigned int)UserIsCurrentProcessDwm() )
      {
        v5 = -1073741811;
        UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v14);
        v10 = 0LL;
        v15 = 0LL;
        if ( a2 )
        {
          LOBYTE(v9) = 18;
          v11 = HmgShareLockCheck(a2, v9);
          v15 = (SFMLOGICALSURFACE *)v11;
          v10 = (SFMLOGICALSURFACE *)v11;
          if ( v11 )
          {
            PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v16, (struct _EX_PUSH_LOCK *)(v11 + 256));
            if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v12) + 32) + 8692LL)
              && *((_QWORD *)v10 + 23)
              && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(v10) )
            {
              *((_QWORD *)v10 + 35) = a3;
              v5 = 0;
            }
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v16);
            v10 = v15;
          }
        }
        if ( v10 )
          DEC_SHARE_REF_CNT(v10);
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v14);
      }
      else
      {
        v5 = -1073741790;
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v7 + 9));
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v16);
  }
  return v5;
}
