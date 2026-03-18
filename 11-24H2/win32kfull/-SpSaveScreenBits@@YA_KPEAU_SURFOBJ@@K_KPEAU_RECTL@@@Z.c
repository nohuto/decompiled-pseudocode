/*
 * XREFs of ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x140329880
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z @ 0x1401D399C (-GrepGetGlobalLockName@@YAPEBGW4GreLockClass@@@Z.c)
 *     ??0?$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140264FB0 (--0-$SEMOBJ@$0CB@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x140325D54 (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x140328878 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x14032892C (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z @ 0x14032940C (-GreTearDownSprites@@YAHPEAUHDEV__@@PEAU_RECTL@@H@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SpSaveScreenBits(struct _SURFOBJ *a1, __int64 a2, __int64 a3, struct _RECTL *a4)
{
  HDEV hdev; // r13
  __int64 v5; // rbx
  int v6; // esi
  unsigned int v8; // r15d
  __int64 SessionState; // rax
  __int64 v11; // rdx
  Gre::Base *v12; // rcx
  __int64 v13; // rdi
  struct Gre::Base::SESSION_GLOBALS *v14; // rax
  __int64 v15; // rdi
  __int64 i; // rbx
  __int64 v17; // r8
  HSEMAPHORE v18; // rbx
  const wchar_t *GlobalLockName; // rax
  struct _GRETHREAD *v20; // rax
  bool v21; // zf
  struct _RECTL v22; // xmm0
  __int64 v23; // rbx
  __int64 v24; // rdx
  HSEMAPHORE v26; // rbx
  const wchar_t *v27; // rax
  struct _GRETHREAD *v28; // rax
  HSEMAPHORE v29; // [rsp+30h] [rbp-39h] BYREF
  __int64 v30; // [rsp+38h] [rbp-31h]
  _BYTE v31[16]; // [rsp+40h] [rbp-29h] BYREF
  int v32; // [rsp+50h] [rbp-19h] BYREF
  HDEV v33; // [rsp+58h] [rbp-11h]
  struct _RECTL v34; // [rsp+60h] [rbp-9h]
  __int64 v35; // [rsp+70h] [rbp+7h]

  hdev = a1->hdev;
  v5 = a3;
  v6 = 0;
  v30 = a3;
  v35 = 0LL;
  v32 = 0;
  v8 = a2;
  SessionState = W32GetSessionState((_DWORD)a1, a2);
  if ( *((_QWORD *)hdev + 173) )
  {
    v13 = *(_QWORD *)(SessionState + 96);
    if ( *(_QWORD *)(v13 + 4824) )
    {
      if ( v8 )
      {
        if ( v8 == 2 )
          goto LABEL_22;
        goto LABEL_21;
      }
      v14 = Gre::Base::Globals(v12);
      SEMOBJ<33>::SEMOBJ<33>(&v29, v14);
      v15 = *(_QWORD *)(v13 + 4824);
      if ( v15 )
      {
        while ( !v6 )
        {
          for ( i = *(_QWORD *)(v15 + 24); i; i = *(_QWORD *)(i + 160) )
          {
            UNDODESKTOPCOORD::UNDODESKTOPCOORD(
              (UNDODESKTOPCOORD *)v31,
              (struct EWNDOBJ *)i,
              (struct _SPRITESTATE *)(hdev + 20));
            if ( (*(_DWORD *)(i + 184) & 0x1000000) != 0
              && (unsigned int)bIntersect(i + 4, a4, v17)
              && RGNOBJ::bInside((RGNOBJ *)(i + 56), a4) == 2 )
            {
              v6 = 1;
              UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v31);
              break;
            }
            UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v31);
          }
          v15 = *(_QWORD *)(v15 + 8);
          if ( !v15 )
          {
            if ( !v6 )
              goto LABEL_23;
            break;
          }
        }
        v18 = v29;
        if ( v29 )
        {
          GlobalLockName = GrepGetGlobalLockName(33);
          EtwTraceGreLockReleaseSemaphore(GlobalLockName, v18);
          v20 = GreGetCurrentThreadCrossSessionCheck();
          if ( v20 )
          {
            v21 = (*(_QWORD *)v20 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
            *(_QWORD *)v20 &= ~0x200000000uLL;
            if ( v21 )
              GrepOnAllLocksReleased();
          }
          GreReleaseSemaphoreExclusiveInternal(v18);
        }
        v5 = v30;
LABEL_21:
        v22 = *a4;
        v33 = a1->hdev;
        v34 = v22;
        v32 = GreTearDownSprites(v33, a4);
LABEL_22:
        v23 = (*((__int64 (__fastcall **)(struct _SURFOBJ *, _QWORD, __int64, struct _RECTL *))hdev + 173))(
                a1,
                v8,
                v5,
                a4);
        DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)&v32, v24);
        return v23;
      }
LABEL_23:
      v26 = v29;
      if ( v29 )
      {
        v27 = GrepGetGlobalLockName(33);
        EtwTraceGreLockReleaseSemaphore(v27, v26);
        v28 = GreGetCurrentThreadCrossSessionCheck();
        if ( v28 )
        {
          v21 = (*(_QWORD *)v28 & 0xFFFFFFFDFFFFFFFFuLL) == 0;
          *(_QWORD *)v28 &= ~0x200000000uLL;
          if ( v21 )
            GrepOnAllLocksReleased();
        }
        GreReleaseSemaphoreExclusiveInternal(v26);
      }
    }
  }
  DEVEXCLUDERECT::~DEVEXCLUDERECT((DEVEXCLUDERECT *)&v32, v11);
  return 0LL;
}
