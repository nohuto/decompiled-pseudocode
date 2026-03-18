/*
 * XREFs of GreSetPointer @ 0x1400285BC
 * Callers:
 *     GreHidePointer @ 0x14002A43C (GreHidePointer.c)
 *     GreOnCURSINFODestroy @ 0x14002CB50 (GreOnCURSINFODestroy.c)
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140093C68 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1401317DC (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140015800 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1400230C4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140028C7C (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140029210 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bDontShowPointer@@YAHXZ @ 0x1400292FC (-bDontShowPointer@@YAHXZ.c)
 *     ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x140029368 (-vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 */

__int64 __fastcall GreSetPointer(struct _CURSINFO *a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int v8; // r14d
  struct _GRETHREAD *CurrentThread; // rsi
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  __int64 HDEV; // rax
  HDEV v13; // rbx
  unsigned __int8 v14; // al
  HSEMAPHORE v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // r8d
  int v21; // edx
  __int64 ***v23; // rcx
  __int64 **v24; // r14
  int v25; // r15d
  __int64 *v26; // rax
  HSEMAPHORE v27; // rbx
  __int64 SessionState; // rax
  unsigned __int8 v29; // [rsp+30h] [rbp-68h]
  unsigned int v30; // [rsp+34h] [rbp-64h]
  __int64 v31; // [rsp+38h] [rbp-60h] BYREF
  __int64 v32; // [rsp+40h] [rbp-58h] BYREF
  HSEMAPHORE v33; // [rsp+48h] [rbp-50h]
  struct _GRETHREAD *v34; // [rsp+50h] [rbp-48h]
  _BYTE v35[64]; // [rsp+58h] [rbp-40h] BYREF

  v8 = 0;
  CurrentThread = GreGetCurrentThread();
  v34 = CurrentThread;
  v29 = 0;
  v11 = Gre::Base::Globals(v10);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v32, v11);
  HDEV = UserGetHDEV();
  v13 = (HDEV)HDEV;
  if ( HDEV )
  {
    v31 = HDEV;
    if ( CurrentThread )
    {
      v14 = *((_BYTE *)CurrentThread + 344);
      *((_DWORD *)CurrentThread + 86) &= ~1u;
      v29 = v14;
    }
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v35, (struct PDEVOBJ *)&v31);
    v15 = *(HSEMAPHORE *)(v31 + 56);
    v33 = v15;
    GreAcquireSemaphoreInternal(v15);
    GrepAcquireLockValidate<4>();
    v16 = *(_QWORD *)(((__int64 (*)(void))W32GetSessionState)() + 96);
    *(_QWORD *)(v16 + 24) = (unsigned __int64)a1 & -(__int64)(a1 != 0LL);
    *(_BYTE *)(v16 + 44) = a1 != 0LL;
    *(_DWORD *)(v16 + 32) = a2;
    *(_DWORD *)(v16 + 36) = a3;
    *(_DWORD *)(v16 + 40) = a4;
    v17 = 0LL;
    v30 = bDontShowPointer();
    v20 = v30;
    if ( v30 )
    {
      SessionState = W32GetSessionState(v19, v18, v30);
      v20 = v30;
      *(_DWORD *)(*(_QWORD *)(SessionState + 96) + 76LL) = 1;
      if ( (a2 & 0x20) != 0 )
      {
        v8 = 1;
        a2 |= 0x40u;
        v17 = 1LL;
      }
    }
    v21 = *(_DWORD *)(v31 + 40);
    if ( (v21 & 0x20000) != 0 )
    {
      v23 = *(__int64 ****)(v31 + 1784);
      v24 = *v23;
      v25 = *((_DWORD *)v23 + 4);
      do
      {
        v26 = v24[6];
        if ( !v20 || (v26[264] & 0x2000) != 0 || (v26[5] & 4) != 0 || v17 )
        {
          v27 = (HSEMAPHORE)v26[7];
          GreAcquireSemaphoreInternal(v27);
          GrepAcquireLockValidate<4>();
          vSetPointer((HDEV)v24[6], a1, a2, a3, a4);
          if ( v27 )
            GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v27);
          v20 = v30;
        }
        v24 = (__int64 **)*v24;
        --v25;
      }
      while ( v25 );
      v15 = v33;
      CurrentThread = v34;
    }
    else if ( !v20 || (*(_DWORD *)(v31 + 2112) & 0x2000) != 0 || (v21 & 4) != 0 || v8 )
    {
      vSetPointer(v13, a1, a2, a3, a4);
    }
    if ( v15 )
      GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v15);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v35);
    if ( CurrentThread )
      *((_DWORD *)CurrentThread + 86) ^= ((unsigned __int8)*((_DWORD *)CurrentThread + 86) ^ v29) & 1;
  }
  return GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
           (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
           v32);
}
