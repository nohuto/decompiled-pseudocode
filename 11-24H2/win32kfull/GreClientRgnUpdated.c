/*
 * XREFs of GreClientRgnUpdated @ 0x140060F88
 * Callers:
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     zzzUpdateLayeredWindow @ 0x140035DCC (zzzUpdateLayeredWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1400D5F30 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1403007A8 (-vForceClientRgnUpdate@@YAXXZ.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??$GrepAcquireLockValidate@$0O@@@YAXXZ @ 0x14016E5C4 (--$GrepAcquireLockValidate@$0O@@@YAXXZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401D399C (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140264FB0 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z @ 0x14030058C (--0-$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x140300CCC (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x140300FAC (-vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x140300FD0 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void __fastcall GreClientRgnUpdated(Gre::Base *a1)
{
  char v1; // r14
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  HSEMAPHORE v3; // rbx
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  struct _GRETHREAD *v6; // rax
  bool v7; // zf
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 i; // rdi
  int v12; // eax
  int v13; // eax
  __int64 j; // rsi
  int v15; // eax
  HSEMAPHORE v16; // rbx
  __int64 GlobalLockName; // rax
  struct _GRETHREAD *v18; // rax
  struct _RECTL *v19; // rsi
  __int64 k; // rbx
  REGION **p_right; // rbx
  REGION *v22; // rdx
  __int64 v23; // rdx
  int v24; // eax
  HSEMAPHORE v25; // rbx
  __int64 v26; // rax
  struct _GRETHREAD *v27; // rax
  __int64 v28; // [rsp+20h] [rbp-20h] BYREF
  HSEMAPHORE v29; // [rsp+28h] [rbp-18h] BYREF
  struct _RECTL v30; // [rsp+30h] [rbp-10h] BYREF
  __int64 v31; // [rsp+78h] [rbp+38h] BYREF
  __int64 v32; // [rsp+80h] [rbp+40h] BYREF
  HSEMAPHORE v33; // [rsp+88h] [rbp+48h] BYREF

  v1 = (char)a1;
  v2 = Gre::Base::Globals(a1);
  v3 = (HSEMAPHORE)(*(_QWORD *)v2 + 832LL);
  GreAcquireSemaphoreInternal(v3);
  GrepAcquireLockValidate<14>();
  v5 = Gre::Base::Globals(v4);
  ++*((_DWORD *)v5 + 1070);
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore(L"VisRgnUniqueness", v3);
    v6 = GreGetCurrentThreadCrossSessionCheck();
    if ( v6 )
    {
      v7 = (*((_BYTE *)v6 + 22))-- == 1;
      if ( v7 )
        *(_QWORD *)v6 &= ~0x4000uLL;
      if ( !*(_QWORD *)v6 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v3);
  }
  if ( (v1 & 1) != 0 )
  {
    SEMOBJ<33>::SEMOBJ<33>(&v29, v2);
    for ( i = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v9, v8, v10) + 96) + 4824LL); i; i = *(_QWORD *)(i + 8) )
    {
      v12 = *(_DWORD *)(i + 48);
      if ( v12 < 0 )
      {
        v13 = v12 & 0x7FFFFFFF;
        *(_DWORD *)(i + 48) = v13;
        if ( (v13 & 0x12) == 0x12 )
        {
          for ( j = *(_QWORD *)(i + 24); j; j = *(_QWORD *)(j + 160) )
          {
            v15 = *(_DWORD *)(j + 184);
            if ( v15 >= 0 )
            {
              SEMOBJ<34>::SEMOBJ<34>(&v33, j);
              TRACKOBJ::vUpdateDrv((TRACKOBJ *)i, (struct EWNDOBJ *)j, 2u);
              v16 = v33;
              if ( v33 )
              {
                GlobalLockName = GrepGetGlobalLockName(34LL);
                EtwTraceGreLockReleaseSemaphore(GlobalLockName, v16);
                v18 = GreGetCurrentThreadCrossSessionCheck();
                if ( v18 )
                {
                  v7 = (*(_QWORD *)v18 & 0xFFFFFFFBFFFFFFFFuLL) == 0;
                  *(_QWORD *)v18 &= ~0x400000000uLL;
                  if ( v7 )
                    GrepOnAllLocksReleased();
                }
                GreReleaseSemaphoreExclusiveInternal(v16);
                v33 = 0LL;
              }
            }
            else
            {
              *(_DWORD *)(j + 184) = v15 & 0x7FFFFFFF;
            }
          }
        }
        if ( (*(_DWORD *)(i + 48) & 0xC) != 0 )
        {
          v19 = *(struct _RECTL **)(i + 16);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v32);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
          if ( v32 && v31 )
          {
            RGNOBJ::vSet((RGNOBJ *)&v31, v19 + 2);
            for ( k = *(_QWORD *)(i + 24); k; k = *(_QWORD *)(k + 160) )
            {
              v28 = *(_QWORD *)(k + 56);
              if ( RGNOBJ::iCombine((RGNOBJ *)&v32, (struct RGNOBJ *)&v31, (struct RGNOBJ *)&v28, 4) )
                RGNOBJ::vSwap((RGNOBJ *)&v31, (struct RGNOBJ *)&v32);
            }
            if ( (*(_DWORD *)(i + 48) & 4) != 0 )
            {
              p_right = (REGION **)&v19[3].right;
              v28 = *(_QWORD *)&v19[3].right;
              if ( RGNOBJ::iCombine((RGNOBJ *)&v32, (struct RGNOBJ *)&v31, (struct RGNOBJ *)&v28, 4) )
              {
                RGNOBJ::vSwap((RGNOBJ *)&v19[3].right, (struct RGNOBJ *)&v32);
                REGION::vStamp(*p_right);
                v22 = *p_right;
                v30 = v19[2];
                EWNDOBJ::vSetClip(v19, v22, &v30);
                TRACKOBJ::vUpdateDrvDelta((TRACKOBJ *)i, (struct EWNDOBJ *)v19, 4u);
              }
            }
            RGNOBJ::vSwap((RGNOBJ *)&v19[3].right, (struct RGNOBJ *)&v31);
            REGION::vStamp(*(REGION **)&v19[3].right);
            v23 = *(_QWORD *)&v19[3].right;
            v30 = v19[2];
            EWNDOBJ::vSetClip(v19, v23, &v30);
            if ( (*(_DWORD *)(i + 48) & 8) != 0 )
              TRACKOBJ::vUpdateDrv((TRACKOBJ *)i, (struct EWNDOBJ *)v19, 8u);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v32);
        }
        TRACKOBJ::vUpdateDrv((TRACKOBJ *)i, 0LL, 0x10u);
        v24 = *(_DWORD *)(i + 48);
        if ( (v24 & 0x40) != 0 )
        {
          if ( (v1 & 2) != 0 )
          {
            *(_DWORD *)(i + 48) = v24 | 0x4000000;
          }
          else
          {
            TRACKOBJ::vUpdateDrv((TRACKOBJ *)i, 0LL, 0x40u);
            *(_DWORD *)(i + 48) &= ~0x4000000u;
          }
        }
      }
    }
    v25 = v29;
    if ( v29 )
    {
      v26 = GrepGetGlobalLockName(33LL);
      EtwTraceGreLockReleaseSemaphore(v26, v25);
      v27 = GreGetCurrentThreadCrossSessionCheck();
      if ( v27 )
      {
        v7 = (*(_QWORD *)v27 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
        *(_QWORD *)v27 &= ~0x200000000uLL;
        if ( v7 )
          GrepOnAllLocksReleased();
      }
      GreReleaseSemaphoreExclusiveInternal(v25);
    }
  }
}
