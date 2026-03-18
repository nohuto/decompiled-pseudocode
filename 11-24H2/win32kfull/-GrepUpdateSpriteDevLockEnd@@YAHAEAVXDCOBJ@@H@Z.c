/*
 * XREFs of ?GrepUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x140020CB0
 * Callers:
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ @ 0x140020204 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1400221AC (-vFlushSpriteUpdates@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x140009EBC (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14000C23C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140018F7C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??$GrepReleaseLockValidate@$05@@YAXXZ @ 0x140020C00 (--$GrepReleaseLockValidate@$05@@YAXXZ.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x140021EE0 (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400A315C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400CBAB4 (-GrepUpdateSprite@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1400CDFD8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DF75C (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall GrepUpdateSpriteDevLockEnd(struct tagSIZE **a1, LONG a2)
{
  LONG x; // ebx
  unsigned int updated; // r15d
  __int64 HDEV; // rax
  struct tagSIZE *v6; // r12
  HDEV v7; // r13
  Gre::Base *v8; // rcx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v10; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 *v12; // rbx
  __int64 v13; // rdx
  struct tagSIZE v14; // rbx
  struct tagSIZE *v16; // rcx
  struct tagSIZE v17; // rdx
  struct tagRECT v18; // xmm0
  int v19; // esi
  LONG v20; // r12d
  unsigned int i; // r14d
  LONG *v22; // rbx
  unsigned int left; // eax
  __int64 v24; // r9
  LONG v25; // r10d
  LONG top; // eax
  LONG v27; // r8d
  LONG right; // eax
  LONG v29; // edx
  LONG bottom; // eax
  int CurrentWin32kSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  int v33; // r8d
  int v34; // eax
  struct tagPOINT v35; // [rsp+88h] [rbp-80h] BYREF
  struct tagSIZE v36; // [rsp+90h] [rbp-78h] BYREF
  struct REGION *v37; // [rsp+98h] [rbp-70h] BYREF
  struct tagPOINT v38; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-60h] BYREF
  struct tagSIZE v40; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v41[128]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v42[128]; // [rsp+138h] [rbp+30h] BYREF
  struct tagRECT v43; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE v44[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  struct tagRECT v45; // [rsp+1CCh] [rbp+C4h]
  char v46; // [rsp+1DCh] [rbp+D4h]
  unsigned int v47; // [rsp+268h] [rbp+160h] BYREF
  _OWORD v48[20]; // [rsp+26Ch] [rbp+164h] BYREF

  x = a2;
  v35.x = a2;
  updated = 0;
  HDEV = UserGetHDEV();
  v6 = a1[2];
  v7 = (HDEV)HDEV;
  v39 = HDEV;
  v38 = (struct tagPOINT)v6;
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v39) )
  {
    EtwTraceGreLockAcquireSemaphoreShared(L"Sprite", *(_QWORD *)v6 + 1040LL);
    GreAcquireSemaphoreSharedInternal((HSEMAPHORE)(*(_QWORD *)v6 + 1040LL));
    CurrentThread = KeGetCurrentThread();
    v10 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess()
      || (CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(),
          CurrentThreadProcess = PsGetCurrentThreadProcess(),
          CurrentWin32kSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v10 = *ThreadWin32Thread;
    }
    v12 = (__int64 *)((v10 + 8) & -(__int64)(v10 != 0));
    if ( v12 )
    {
      v13 = *v12;
      if ( (*v12 & 0xFFFFFFFFFFFFFFC0uLL) != 0 && (v13 & 0x40) == 0 )
      {
        v8 = 0LL;
        v33 = 37;
        do
        {
          v34 = (int)v8;
          if ( !_bittest64(&v13, (unsigned __int64)v8) )
            v34 = v33;
          v8 = (Gre::Base *)((char *)v8 + 1);
          v33 = v34;
        }
        while ( (unsigned __int64)v8 < 0x40 );
        if ( v34 > 6 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v13, (unsigned int)v34);
      }
      LOBYTE(v8) = *(_BYTE *)(((v10 + 8) & -(__int64)(v10 != 0)) + 0xE);
      *(_BYTE *)(((v10 + 8) & -(__int64)(v10 != 0)) + 0xE) = (_BYTE)v8 + 1;
      if ( !(_BYTE)v8 )
        *v12 |= 0x40uLL;
    }
    x = v35.x;
  }
  if ( !*((_QWORD *)Gre::Base::Globals(v8) + 17) )
  {
    GdiUpdateSpriteDevLockEnd((struct XDCOBJ *)a1);
    goto LABEL_12;
  }
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GreGetBounds)(**a1, &v43, 4LL) )
  {
    v16 = *a1;
    v17 = (*a1)[64];
    v36 = v17;
    v37 = (struct REGION *)v16[148];
    if ( !v37 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD))EtwDevLockEndUpdate)(
        *(_QWORD *)&v16[59],
        v17,
        (unsigned int)v36.cy,
        (unsigned int)v43.left,
        v43.top,
        v43.right,
        v43.bottom);
      v38 = 0LL;
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v41, 0LL);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v42, (struct XDCOBJ *)a1);
      updated = GrepUpdateSprite(
                  v7,
                  *(HWND *)&(*a1)[59],
                  0LL,
                  (struct OPTAPIDCOBJ *)v41,
                  0LL,
                  &v36,
                  (struct OPTAPIDCOBJ *)v42,
                  &v38,
                  0,
                  0LL,
                  0x40200000u,
                  &v43,
                  0LL,
                  1,
                  x,
                  0);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v42);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v41);
      goto LABEL_16;
    }
    if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v37) == 1 )
      goto LABEL_16;
    RGNOBJ::bOffset((RGNOBJ *)&v37, (const struct _POINTL *)&(*a1)[((*a1)[5].cx & 1) + 127]);
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v44);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v44, v37, (const struct ERECTL *)&v43, 1);
    memset_0(&v47, 0, 0x144uLL);
    if ( v46 )
    {
      if ( v46 != 1 )
      {
        if ( v46 != 3 )
          goto LABEL_16;
        v19 = 1;
        XCLIPOBJ::cEnumStart((XCLIPOBJ *)v44, 0, 0, 4u, 0x14u);
LABEL_24:
        v20 = v35.x;
        updated = 1;
        if ( v19 )
          goto LABEL_37;
        while ( 1 )
        {
          for ( i = 0; i < v47; ++i )
          {
            v22 = (LONG *)&v48[i];
            left = v43.left;
            v24 = (unsigned int)*v22;
            if ( (int)v24 < v43.left )
            {
              *v22 = v43.left;
              v24 = left;
            }
            v25 = v22[1];
            top = v43.top;
            if ( v25 < v43.top )
            {
              v22[1] = v43.top;
              v25 = top;
            }
            v27 = v22[2];
            right = v43.right;
            if ( v27 > v43.right )
            {
              v22[2] = v43.right;
              v27 = right;
            }
            v29 = v22[3];
            bottom = v43.bottom;
            if ( v29 > v43.bottom )
            {
              v22[3] = v43.bottom;
              v29 = bottom;
            }
            EtwDevLockEndTightUpdate(
              *(_QWORD *)&(*a1)[59],
              (unsigned int)v36.cx,
              (unsigned int)v36.cy,
              v24,
              v25,
              v27,
              v29);
            v35 = 0LL;
            OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v42, 0LL);
            OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v41, (struct XDCOBJ *)a1);
            updated &= -((unsigned int)GrepUpdateSprite(
                                         v7,
                                         *(HWND *)&(*a1)[59],
                                         0LL,
                                         (struct OPTAPIDCOBJ *)v42,
                                         0LL,
                                         &v36,
                                         (struct OPTAPIDCOBJ *)v41,
                                         &v35,
                                         0,
                                         0LL,
                                         0x40200000u,
                                         (struct tagRECT *)&v48[i],
                                         0LL,
                                         1,
                                         v20,
                                         0) != 0);
            OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v41);
            OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v42);
          }
          if ( !v19 )
            break;
LABEL_37:
          v19 = XCLIPOBJ::bEnum((XCLIPOBJ *)v44, 0x144u, (char *)&v47, 0LL);
        }
        v6 = (struct tagSIZE *)v38;
        goto LABEL_16;
      }
      v18 = v45;
    }
    else
    {
      v18 = v43;
    }
    v48[0] = v18;
    v47 = 1;
    v19 = 0;
    goto LABEL_24;
  }
LABEL_16:
  v40 = (*a1)[148];
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v40);
  (*a1)[148] = 0LL;
LABEL_12:
  if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v39) )
  {
    v14 = *v6;
    EtwTraceGreLockReleaseSemaphore(L"Sprite", *(_QWORD *)v6 + 1040LL);
    GrepReleaseLockValidate<6>();
    GreReleaseSemaphoreSharedInternal((HSEMAPHORE)(*(_QWORD *)&v14 + 1040LL));
  }
  return updated;
}
