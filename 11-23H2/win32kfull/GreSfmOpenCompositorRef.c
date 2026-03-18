/*
 * XREFs of GreSfmOpenCompositorRef @ 0x1C00C4554
 * Callers:
 *     NtGdiHLSurfSetInformation @ 0x1C00C42D0 (NtGdiHLSurfSetInformation.c)
 * Callees:
 *     IsDwmActive @ 0x1C00B3EF0 (IsDwmActive.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00B4A08 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00C5CF0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00C7D10 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00C9A30 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013DC74 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreSfmOpenCompositorRef(Gre::Base *a1, HLSURF a2)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rsi
  Gre::Base *v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  int v7; // eax
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]
  Gre::Base *v12; // [rsp+60h] [rbp+8h] BYREF

  v12 = a1;
  v3 = Gre::Base::Globals(a1);
  GreAcquireSemaphore(*((_QWORD *)v3 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v3 + 9), 7LL);
  v5 = 0;
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    if ( IsDwmActive(v4) )
    {
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v9);
      v10 = 0LL;
      v11 = 0;
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v9, a2);
      v6 = v10;
      if ( v10 )
      {
        PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v12, (struct _EX_PUSH_LOCK *)(v10 + 256));
        v7 = *(_DWORD *)(v6 + 244);
        if ( (v7 & 8) != 0 )
        {
          if ( (v7 & 0x10) != 0 )
            *(_DWORD *)(v6 + 244) = v7 & 0xFFFFFFEF;
          ++*(_DWORD *)(v6 + 248);
        }
        else
        {
          v5 = -2147020579;
        }
        PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v12);
      }
      else
      {
        v5 = -1073741816;
      }
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v9);
    }
    else
    {
      v5 = -1071775733;
    }
  }
  else
  {
    v5 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v3 + 9));
  return v5;
}
