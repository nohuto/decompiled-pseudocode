/*
 * XREFs of GreSetClientRgn @ 0x1403018D8
 * Callers:
 *     InvalidateGDIWindows @ 0x14026C3C4 (InvalidateGDIWindows.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000A534 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x140062DFC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1400CE0C4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x14015763C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401D399C (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140264FB0 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z @ 0x14030058C (--0-$SEMOBJ@$0CC@@@QEAA@PEAVEWNDOBJ@@@Z.c)
 *     ?bValid@EWNDOBJ@@QEBAHXZ @ 0x140300714 (-bValid@EWNDOBJ@@QEBAHXZ.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x140300CCC (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x140300FAC (-vUpdateDrv@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x140300FD0 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void __fastcall GreSetClientRgn(struct EWNDOBJ *a1, HRGN a2, unsigned int *a3)
{
  __int64 v6; // rdx
  bool v7; // zf
  REGION **v8; // r14
  unsigned int v9; // edi
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  Gre::Base *v17; // rcx
  BOOL v18; // edi
  struct Gre::Base::SESSION_GLOBALS *v19; // rax
  __int128 v20; // xmm6
  struct REGION *v21; // rdx
  struct REGION *v22; // rdx
  __int64 v23; // rax
  HSEMAPHORE v24; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v26; // rax
  HSEMAPHORE v27; // rbx
  const wchar_t *v28; // rax
  struct _GRETHREAD *v29; // rax
  struct _POINTL v30; // [rsp+20h] [rbp-49h] BYREF
  __int64 v31; // [rsp+28h] [rbp-41h] BYREF
  __int128 v32; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v33[8]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v34; // [rsp+D0h] [rbp+67h] BYREF
  HSEMAPHORE v35; // [rsp+D8h] [rbp+6Fh] BYREF
  __int64 v36; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( a2 )
  {
    if ( EWNDOBJ::bValid(a1) )
    {
      GreSetRegionOwner(v6, 0LL);
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v33, a2, 0, 0);
      if ( v33[0] )
      {
        v7 = (*((_DWORD *)a1 + 46) & 0x100) == 0;
        v8 = (REGION **)((char *)a1 + 56);
        v9 = *a3;
        v10 = a3[1];
        v11 = a3[2];
        v12 = a3[3];
        v31 = *((_QWORD *)a1 + 7);
        *(_QWORD *)&v32 = __PAIR64__(v10, v9);
        *((_QWORD *)&v32 + 1) = __PAIR64__(v12, v11);
        if ( v7 )
        {
          v13 = *(_QWORD *)(*((_QWORD *)a1 + 21) + 32LL);
          v14 = *(_QWORD *)(v13 + 48);
          if ( v14 )
          {
            if ( v13 == *(_QWORD *)(v14 + 2544) )
            {
              v15 = *(_DWORD *)(v14 + 2576);
              v30.x = -v15;
              v16 = *(_DWORD *)(v14 + 2580);
              v30.y = -v16;
              if ( v15 || v16 )
              {
                RGNOBJ::bOffset((RGNOBJ *)v33, &v30);
                ERECTL::bOffsetAdd((ERECTL *)&v32, &v30, 0);
                v12 = HIDWORD(v32);
                v11 = DWORD2(v32);
                v10 = DWORD1(v32);
                v9 = v32;
              }
            }
          }
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v35);
          if ( v34 )
          {
            if ( v35 )
            {
              RGNOBJ::vSet((RGNOBJ *)&v35, (const struct _RECTL *const)(*((_QWORD *)a1 + 21) + 52LL));
              RGNOBJ::bCopy((RGNOBJ *)&v34, (struct RGNOBJ *)v33);
              RGNOBJAPI::iCombine((RGNOBJAPI *)v33, (struct RGNOBJ *)&v34, (struct RGNOBJ *)&v35, 1);
              if ( RGNOBJ::iCombine((RGNOBJ *)&v34, (struct RGNOBJ *)v33, (struct RGNOBJ *)&v35, 1) )
                RGNOBJAPI::bSwap((RGNOBJAPI *)v33, (struct RGNOBJ *)&v34);
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v35);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
        }
        if ( RGNOBJ::bEqual((RGNOBJ *)&v31, (struct RGNOBJ *)v33)
          && *((_DWORD *)a1 + 8) == v9
          && *((_DWORD *)a1 + 10) == v11
          && *((_DWORD *)a1 + 9) == v10
          && *((_DWORD *)a1 + 11) == v12 )
        {
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v33);
        }
        else
        {
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v36);
          v18 = 0;
          if ( (*((_DWORD *)a1 + 46) & 0x200) != 0 && v36 )
            v18 = RGNOBJ::bCopy((RGNOBJ *)&v36, (struct RGNOBJ *)v33) != 0;
          v19 = Gre::Base::Globals(v17);
          SEMOBJ<33>::SEMOBJ<33>((HSEMAPHORE *)&v30, v19);
          SEMOBJ<34>::SEMOBJ<34>(&v35, (__int64)a1);
          if ( v18 )
          {
            v34 = *((_QWORD *)a1 + 24);
            if ( v34 )
            {
              RGNOBJ::vSwap((RGNOBJ *)&v36, (struct RGNOBJ *)&v34);
              *((_QWORD *)a1 + 24) = v34;
            }
          }
          v20 = v32;
          if ( (*((_DWORD *)a1 + 46) & 1) != 0 )
          {
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
            if ( v34 && RGNOBJ::iCombine((RGNOBJ *)&v34, (struct RGNOBJ *)v33, (struct RGNOBJ *)&v31, 4) )
            {
              RGNOBJ::vSwap((struct EWNDOBJ *)((char *)a1 + 56), (struct RGNOBJ *)&v34);
              REGION::vStamp(*v8);
              v21 = *v8;
              v32 = v20;
              EWNDOBJ::vSetClip((__int64)a1, v21, &v32);
              TRACKOBJ::vUpdateDrvDelta(*((TRACKOBJ **)a1 + 21), a1);
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v34);
          }
          RGNOBJAPI::bSwap(
            (RGNOBJAPI *)v33,
            (struct RGNOBJ *)((unsigned __int64)v8 & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64)));
          REGION::vStamp(*v8);
          v22 = *v8;
          v32 = v20;
          EWNDOBJ::vSetClip((__int64)a1, v22, &v32);
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v33);
          if ( (*((_DWORD *)a1 + 46) & 2) != 0 )
            TRACKOBJ::vUpdateDrv(*((TRACKOBJ **)a1 + 21), a1, 2u);
          v23 = *((_QWORD *)a1 + 21);
          *((_DWORD *)a1 + 46) |= 0x80000000;
          v24 = v35;
          *(_DWORD *)(v23 + 48) |= 0x80000000;
          if ( v24 )
          {
            GlobalLockName = GrepGetGlobalLockName(34);
            EtwTraceGreLockReleaseSemaphore(GlobalLockName, v24);
            v26 = GreGetCurrentThreadCrossSessionCheck();
            if ( v26 )
            {
              v7 = (*(_QWORD *)v26 & 0xFFFFFFFBFFFFFFFFuLL) == 0;
              *(_QWORD *)v26 &= ~0x400000000uLL;
              if ( v7 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v24);
          }
          v27 = (HSEMAPHORE)v30;
          if ( v30 )
          {
            v28 = GrepGetGlobalLockName(33);
            EtwTraceGreLockReleaseSemaphore(v28, v27);
            v29 = GreGetCurrentThreadCrossSessionCheck();
            if ( v29 )
            {
              v7 = (*(_QWORD *)v29 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
              *(_QWORD *)v29 &= ~0x200000000uLL;
              if ( v7 )
                GrepOnAllLocksReleased();
            }
            GreReleaseSemaphoreExclusiveInternal(v27);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v36);
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v33);
    }
    else
    {
      bDeleteRegion(v6);
    }
  }
}
