/*
 * XREFs of ?vForceClientRgnUpdate@@YAXXZ @ 0x1403007A8
 * Callers:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1401C1F8C (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z @ 0x1403275F8 (-iWndObjSetupExtEscape@@YAHAEAVXDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSetPixelFormat @ 0x14033CA10 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     GreClientRgnUpdated @ 0x140060F88 (GreClientRgnUpdated.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140062DFC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14015763C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401D399C (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140264FB0 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     UserGetClientRgn @ 0x140285A48 (UserGetClientRgn.c)
 *     ??0?$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z @ 0x14030058C (--0-$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x140300CCC (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x140300FAC (-vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x140300FD0 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x14032E774 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall vForceClientRgnUpdate(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rax
  __int64 v2; // rdx
  int v3; // ecx
  __int64 i; // rsi
  int v5; // eax
  __int64 j; // rdi
  int v7; // eax
  __int64 v8; // rcx
  _DWORD *v9; // r14
  HRGN ClientRgn; // rax
  HRGN v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  int v15; // ecx
  BOOL v16; // ebx
  __int64 v17; // rdx
  HSEMAPHORE v18; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v20; // rax
  bool v21; // zf
  HSEMAPHORE v22; // rbx
  const wchar_t *v23; // rax
  struct _GRETHREAD *v24; // rax
  HSEMAPHORE v25; // rbx
  const wchar_t *v26; // rax
  struct _GRETHREAD *v27; // rax
  HSEMAPHORE v28; // [rsp+28h] [rbp-49h] BYREF
  __int64 v29; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v30[2]; // [rsp+38h] [rbp-39h] BYREF
  struct _POINTL v31[2]; // [rsp+48h] [rbp-29h] BYREF
  HSEMAPHORE v32; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v33[7]; // [rsp+60h] [rbp-11h] BYREF
  __int128 v34; // [rsp+98h] [rbp+27h] BYREF

  v1 = Gre::Base::Globals(a1);
  SEMOBJ<33>::SEMOBJ<33>(&v32, v1);
  for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v3, v2) + 96) + 4824LL); i; i = *(_QWORD *)(i + 8) )
  {
    v5 = *(_DWORD *)(i + 48);
    if ( (v5 & 0x40000000) != 0 )
    {
      *(_DWORD *)(i + 48) = v5 & 0x3FFFFFFF | 0x80000000;
      for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
      {
        v7 = *(_DWORD *)(j + 184);
        if ( (v7 & 0x40000000) != 0 )
        {
          *(_DWORD *)(j + 184) = v7 & 0x3FFFFFFF | 0x80000000;
          v8 = *(_QWORD *)(j + 176);
          if ( v8 )
          {
            v9 = (_DWORD *)(j + 184);
            ClientRgn = UserGetClientRgn(v8, (__int64)&v34, *(_DWORD *)(j + 184) & 0x20);
          }
          else
          {
            v34 = *(_OWORD *)(i + 52);
            ClientRgn = (HRGN)GreCreateRectRgnIndirect(&v34, 0x3FFFFFFFLL, 0x80000000LL);
            v9 = (_DWORD *)(j + 184);
          }
          v11 = ClientRgn;
          if ( !ClientRgn )
            goto LABEL_47;
          GreSetRegionOwner(ClientRgn, 0LL);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v33, v11, 0, 0);
          if ( v33[0] )
          {
            if ( (*v9 & 0x100) == 0 )
            {
              v12 = *(_QWORD *)(*(_QWORD *)(j + 168) + 32LL);
              v13 = *(_QWORD *)(v12 + 48);
              if ( v13 )
              {
                if ( v12 == *(_QWORD *)(v13 + 2544) )
                {
                  v14 = *(_DWORD *)(v13 + 2576);
                  v31[0].x = -v14;
                  v15 = *(_DWORD *)(v13 + 2580);
                  v31[0].y = -v15;
                  if ( v14 || v15 )
                  {
                    RGNOBJ::bOffset((RGNOBJ *)v33, v31);
                    ERECTL::bOffsetAdd((ERECTL *)&v34, v31, 0);
                  }
                }
              }
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
              RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v28);
              if ( v29 )
              {
                if ( v28 )
                {
                  RGNOBJ::vSet((RGNOBJ *)&v28, (const struct _RECTL *const)(i + 52));
                  RGNOBJ::bCopy((RGNOBJ *)&v29, (struct RGNOBJ *)v33);
                  RGNOBJAPI::iCombine((RGNOBJAPI *)v33, (struct RGNOBJ *)&v29, (struct RGNOBJ *)&v28, 1);
                  if ( RGNOBJ::iCombine((RGNOBJ *)&v29, (struct RGNOBJ *)v33, (struct RGNOBJ *)&v28, 1) )
                    RGNOBJAPI::bSwap((RGNOBJAPI *)v33, (struct RGNOBJ *)&v29);
                }
              }
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v28);
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v29);
            }
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v30);
            v16 = 0;
            if ( (*v9 & 0x200) != 0 && v30[0] )
              v16 = RGNOBJ::bCopy((RGNOBJ *)v30, (struct RGNOBJ *)v33) != 0;
            SEMOBJ<34>::SEMOBJ<34>(&v28, j);
            if ( v16 )
            {
              v31[0] = *(struct _POINTL *)(j + 192);
              if ( v31[0] )
              {
                RGNOBJ::vSwap((RGNOBJ *)v30, (struct RGNOBJ *)v31);
                *(struct _POINTL *)(j + 192) = v31[0];
              }
            }
            RGNOBJAPI::bSwap(
              (RGNOBJAPI *)v33,
              (struct RGNOBJ *)((j + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)j >> 64)));
            REGION::vStamp(*(REGION **)(j + 56));
            v17 = *(_QWORD *)(j + 56);
            *(_OWORD *)&v31[0].x = v34;
            EWNDOBJ::vSetClip(j, v17, v31);
            RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v33);
            if ( (*(_DWORD *)(i + 48) & 1) != 0 )
              TRACKOBJ::vUpdateDrvDelta((TRACKOBJ *)i, (struct EWNDOBJ *)j, 1u);
            if ( (*(_DWORD *)(i + 48) & 2) != 0 )
              TRACKOBJ::vUpdateDrv((TRACKOBJ *)i, (struct EWNDOBJ *)j, 2u);
            vSpWndobjChange(*(HDEV *)(*(_QWORD *)(i + 32) + 48LL), (struct EWNDOBJ *)j);
            v18 = v28;
            if ( v28 )
            {
              GlobalLockName = GrepGetGlobalLockName(34);
              EtwTraceGreLockReleaseSemaphore(GlobalLockName, v18);
              v20 = GreGetCurrentThreadCrossSessionCheck();
              if ( v20 )
              {
                v21 = (*(_QWORD *)v20 & 0xFFFFFFFBFFFFFFFFuLL) == 0;
                *(_QWORD *)v20 &= ~0x400000000uLL;
                if ( v21 )
                  GrepOnAllLocksReleased();
              }
              GreReleaseSemaphoreExclusiveInternal(v18);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v30);
          }
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v33);
          v22 = v32;
          if ( v32 )
          {
            v23 = GrepGetGlobalLockName(33);
            EtwTraceGreLockReleaseSemaphore(v23, v22);
            v24 = GreGetCurrentThreadCrossSessionCheck();
            if ( v24 )
            {
              v21 = (*(_QWORD *)v24 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
              *(_QWORD *)v24 &= ~0x200000000uLL;
              if ( v21 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v22);
          }
          GreClientRgnUpdated((Gre::Base *)1);
          return;
        }
      }
      break;
    }
  }
LABEL_47:
  v25 = v32;
  if ( v32 )
  {
    v26 = GrepGetGlobalLockName(33);
    EtwTraceGreLockReleaseSemaphore(v26, v25);
    v27 = GreGetCurrentThreadCrossSessionCheck();
    if ( v27 )
    {
      v21 = (*(_QWORD *)v27 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
      *(_QWORD *)v27 &= ~0x200000000uLL;
      if ( v21 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v25);
  }
}
