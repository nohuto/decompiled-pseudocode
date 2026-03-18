/*
 * XREFs of GreSetRedirectionSurfaceSignaling @ 0x1C00CCB94
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
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetRedirectionSurfaceSignaling(Gre::Base *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  Gre::Base *v9; // rcx
  struct Gre::Base::SESSION_GLOBALS *v10; // r14
  Gre::Base *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // ebx
  _BYTE v18[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v20[32]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+60h] [rbp-28h]

  if ( IsDwmActive(a1) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v18);
    v10 = Gre::Base::Globals(v9);
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v10 + 9));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9));
    if ( IsDwmActive(v11) )
    {
      if ( (unsigned int)UserIsCurrentProcessDwm() )
      {
        if ( *((_QWORD *)a1 + 429) )
        {
          UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v20);
          v13 = 0LL;
          v21 = 0LL;
          if ( a2 && (LOBYTE(v12) = 18, v14 = HmgShareLockCheck(a2, v12), v21 = v14, (v13 = v14) != 0) )
          {
            PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v19, (struct _EX_PUSH_LOCK *)(v14 + 256));
            v15 = *(_QWORD *)(v13 + 184);
            if ( v15 && (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap((SFMLOGICALSURFACE *)v13) )
            {
              if ( (*((unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))a1 + 429))(
                     v15,
                     a3,
                     a2,
                     *(_QWORD *)(v15 + 32)) )
              {
                *(_DWORD *)(v13 + 244) ^= (*(_DWORD *)(v13 + 244) ^ (2 * a5)) & 2;
                EtwLogicalSurfEnableDirtyNotificationEvent(a2, a3);
              }
              *(_QWORD *)(v13 + 192) = *(_QWORD *)(v15 + 544);
              *(_QWORD *)(v13 + 200) = *(_QWORD *)(v15 + 552);
              *(_DWORD *)(v13 + 208) = *(_DWORD *)(v15 + 100);
              if ( (*(_DWORD *)(v15 + 92) & 0x400) != 0 )
                *(_DWORD *)(v13 + 244) |= 0x100u;
            }
            else
            {
              *(_QWORD *)(v13 + 192) = a3;
              *(_QWORD *)(v13 + 200) = a4;
            }
            v16 = 0;
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v19);
            v13 = v21;
          }
          else
          {
            v16 = -1073741811;
          }
          if ( v13 )
            DEC_SHARE_REF_CNT(v13);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v20);
        }
        else
        {
          v16 = -1073741822;
        }
      }
      else
      {
        v16 = -1073741790;
      }
    }
    else
    {
      v16 = -1071775733;
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v18);
  }
  else
  {
    return (unsigned int)-1071775733;
  }
  return v16;
}
