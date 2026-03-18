/*
 * XREFs of HmgSwapLockedHandleContents @ 0x1400B6AD0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1400848F4 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x1400306B0 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x140035F20 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1400B6DF0 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x1400B6F38 (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 */

__int64 __fastcall HmgSwapLockedHandleContents(
        unsigned int a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned __int16 a4,
        char a5)
{
  unsigned int v8; // ebx
  __int64 v10; // r12
  __int64 v11; // r13
  unsigned int v12; // r15d
  unsigned int v13; // r14d
  __int64 v14; // rsi
  GdiHandleManager *v15; // rdi
  struct OBJECT *EntryObject; // rbx
  struct OBJECT *v17; // rax
  __int64 v18; // rcx
  GdiHandleManager *v19; // rbx
  struct OBJECT *v20; // rdi
  struct OBJECT *v21; // rax
  __int128 v22; // xmm3
  __int64 v23; // xmm2_8
  __int64 v24; // rcx
  __int16 v25; // r8
  __int16 v26; // dx
  __int64 v28; // [rsp+20h] [rbp-30h] BYREF
  int v29; // [rsp+28h] [rbp-28h]
  __int64 v30; // [rsp+38h] [rbp-18h] BYREF
  int v31; // [rsp+40h] [rbp-10h]

  v8 = 0;
  HANDLELOCK::HANDLELOCK((__int64)&v30, a1, 1u);
  if ( v31 )
  {
    HANDLELOCK::HANDLELOCK((__int64)&v28, a3, 1u);
    if ( v29 )
    {
      if ( HANDLELOCK::ShareCount((HANDLELOCK *)&v30) == a2 )
      {
        v10 = v30;
        if ( *(_BYTE *)(v30 + 14) == a5 && HANDLELOCK::ShareCount((HANDLELOCK *)&v28) == a4 )
        {
          v11 = v28;
          if ( *(_BYTE *)(v28 + 14) == a5 )
          {
            v12 = (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000;
            v13 = (unsigned __int16)a3 | (a3 >> 8) & 0xFF0000;
            v14 = *(_QWORD *)(W32GetSessionState(16711680LL) + 88);
            v15 = *(GdiHandleManager **)(v14 + 5672);
            EntryObject = GdiHandleManager::GetEntryObject(v15, v12);
            v17 = GdiHandleManager::GetEntryObject(v15, v13);
            GdiHandleManager::SetEntryObject(v15, v12, v17);
            GdiHandleManager::SetEntryObject(*(GdiHandleManager **)(v14 + 5672), v13, EntryObject);
            v18 = *(_QWORD *)(v10 + 16);
            *(_QWORD *)(v10 + 16) = *(_QWORD *)(v11 + 16);
            *(_QWORD *)(v11 + 16) = v18;
            v19 = *(GdiHandleManager **)(v14 + 5672);
            v20 = GdiHandleManager::GetEntryObject(v19, v12);
            v21 = GdiHandleManager::GetEntryObject(v19, v13);
            v22 = *(_OWORD *)v20;
            v23 = *((_QWORD *)v20 + 2);
            *(_OWORD *)v20 = *(_OWORD *)v21;
            *((_QWORD *)v20 + 2) = *((_QWORD *)v21 + 2);
            *(_OWORD *)v21 = v22;
            *((_QWORD *)v21 + 2) = v23;
            if ( *(_BYTE *)(v10 + 14) == 5 && *(_BYTE *)(v11 + 14) == 5 )
            {
              v24 = *((_QWORD *)v20 + 85);
              *((_QWORD *)v20 + 85) = *((_QWORD *)v21 + 85);
              *((_QWORD *)v21 + 85) = v24;
            }
            v25 = *((_WORD *)v20 + 7);
            v26 = *((_WORD *)v21 + 7);
            v8 = 1;
            *((_WORD *)v20 + 7) = v25 & 0x60 | v26 & 0x80;
            *((_WORD *)v21 + 7) = v25 & 0x80 | v26 & 0x60;
          }
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v28);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v28);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v30);
  return v8;
}
