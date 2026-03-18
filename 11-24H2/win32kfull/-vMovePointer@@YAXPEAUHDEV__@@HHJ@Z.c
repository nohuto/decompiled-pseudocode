/*
 * XREFs of ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x140022D88
 * Callers:
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1402073C4 (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     IsDwmActive @ 0x140022F80 (IsDwmActive.c)
 *     ??$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140022FAC (--$GreAcquireSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x1400230C4 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ?vUnlock@?$SEMOBJ@$03@@QEAAXXZ @ 0x1400231A0 (-vUnlock@-$SEMOBJ@$03@@QEAAXXZ.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x140023218 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x140023754 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140029210 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14002A350 (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall vMovePointer(_DWORD *a1, __int64 a2, __int64 a3, char a4)
{
  int v5; // ebp
  int v6; // r15d
  int v8; // eax
  __int64 v9; // r14
  struct _SURFOBJ *v10; // r14
  void (__fastcall *v11)(struct _SURFOBJ *); // rax
  HDEV hdev; // rbx
  Gre::Base *v13; // rcx
  struct _RECTL *v14; // r9
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  HSEMAPHORE v16; // rbx
  struct Gre::Base::SESSION_GLOBALS *v17; // rdi
  __int64 v18; // rdi
  struct _RECTL *v19; // r9
  LONG cy; // ecx
  void (__fastcall *v21)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v22)(struct _SURFOBJ *, __int64, __int64, _QWORD); // rax
  HSEMAPHORE v23; // [rsp+60h] [rbp+8h] BYREF

  v5 = a3;
  v6 = a2;
  if ( a1[16] != (_DWORD)a2 || a1[17] != (_DWORD)a3 || (a1[10] & 0x100000) != 0 )
  {
    v8 = a1[10];
    a1[16] = a2;
    a1[17] = a3;
    if ( (v8 & 0x400) == 0 )
    {
      v9 = *((_QWORD *)a1 + 318);
      if ( v9 )
      {
        v10 = (struct _SURFOBJ *)(v9 + 24);
        if ( (v8 & 2) != 0 )
        {
          v11 = (void (__fastcall *)(struct _SURFOBJ *))*((_QWORD *)a1 + 427);
          if ( v11 )
          {
            v11(v10);
          }
          else
          {
            v22 = (void (__fastcall *)(struct _SURFOBJ *, __int64, __int64, _QWORD))*((_QWORD *)a1 + 365);
            if ( v22 )
              v22(v10, a2, a3, 0LL);
          }
        }
        if ( (a1[10] & 4) == 0 )
          goto LABEL_13;
        hdev = v10->hdev;
        if ( *((_QWORD *)Gre::Base::Globals((Gre::Base *)a1) + 17) )
        {
          v15 = Gre::Base::Globals(v13);
          v16 = (HSEMAPHORE)*((_QWORD *)hdev + 7);
          v17 = v15;
          v23 = v16;
          GreAcquireSemaphoreInternal(v16);
          GrepAcquireLockValidate<4>();
          v18 = *(_QWORD *)v17 + 1040LL;
          EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"Sprite", v18);
          GreAcquireSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreSharedStarveExclusiveInternal, v18);
          if ( (unsigned int)IsDwmActive() )
          {
            DwmMovePointer(v10, v6, v5, v19, a4 & 0xF4);
            GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v18);
            SEMOBJ<4>::vUnlock(&v23);
LABEL_13:
            if ( (a1[452] & 0x10000) != 0 && v5 != -1 && v6 < v10->sizlBitmap.cx )
            {
              cy = v10->sizlBitmap.cy;
              if ( v5 < cy )
              {
                v21 = (void (__fastcall *)(struct _SURFOBJ *, _QWORD, _QWORD, _QWORD))*((_QWORD *)a1 + 365);
                if ( v21 )
                  v21(v10, (unsigned int)v6, (unsigned int)(v5 - cy), 0LL);
              }
            }
            return;
          }
          GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v18);
          if ( v16 )
            GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreExclusiveInternal, v16);
        }
        GdiMovePointer(v10, v6, v5, v14, 0);
        goto LABEL_13;
      }
    }
  }
}
