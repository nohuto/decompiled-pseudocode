/*
 * XREFs of ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C01343C0
 * Callers:
 *     EngpMovePointer @ 0x1C0133548 (EngpMovePointer.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C013371C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C00209B4 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C0026D64 (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z @ 0x1C0084548 (-hspGetNeighborSprite@@YAPEAUHSPRITE__@@PEAU1@_N1@Z.c)
 *     ?AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C008CDF0 (-AltLockSpriteObj@DWMALTSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C00B42B0 (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     GreUpdateSprite @ 0x1C00B7164 (GreUpdateSprite.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00C7D10 (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C00C9A30 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013DC74 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall DwmMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  struct Gre::Base::SESSION_GLOBALS *v8; // rax
  HDEV hdev; // rbx
  struct Gre::Base::SESSION_GLOBALS *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r14
  HSPRITE v14; // rdi
  HSPRITE NeighborSprite; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  Gre::Base *v18; // rdi
  __int64 v19; // r8
  _BYTE *v20; // rcx
  Gre::Base *v21; // rdi
  __int64 v22; // r8
  __int64 *v23; // rax
  __int64 *v24; // rcx
  __int64 **v25; // rdx
  __int64 v26; // rcx
  __int64 **v27; // rdx
  __int64 v28; // rbx
  Gre::Base *v29; // rbx
  __int64 v30; // r8
  __int64 **v31; // rdx
  __int64 v32; // rcx
  __int64 **v33; // rdx
  __int64 v34; // rdx
  HSPRITE v35; // rdi
  struct DWMSPRITE *v36; // rbx
  HDEV v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  struct DWMSPRITE *v40; // [rsp+80h] [rbp-80h] BYREF
  char v41[8]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v42[32]; // [rsp+90h] [rbp-70h] BYREF
  struct DWMSPRITE *v43; // [rsp+B0h] [rbp-50h]
  _BYTE v44[32]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v45; // [rsp+D8h] [rbp-28h]
  _BYTE v46[32]; // [rsp+E0h] [rbp-20h] BYREF
  struct DWMSPRITE *v47; // [rsp+100h] [rbp+0h]
  _BYTE v48[32]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v49; // [rsp+128h] [rbp+28h]
  _BYTE v50[32]; // [rsp+130h] [rbp+30h] BYREF
  struct DWMSPRITE *v51; // [rsp+150h] [rbp+50h]
  struct tagPOINT v52; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL *v53; // [rsp+1B8h] [rbp+B8h] BYREF

  v53 = a4;
  v8 = Gre::Base::Globals((Gre::Base *)a1);
  hdev = a1->hdev;
  v10 = v8;
  v11 = *((_QWORD *)v8 + 38);
  if ( *(_DWORD *)(v11 + 100) && *(_QWORD *)(v11 + 136) )
  {
    GreAcquireSemaphore(*((_QWORD *)v10 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9), 7LL);
    if ( *(_QWORD *)(*((_QWORD *)v10 + 38) + 144LL) != *(_QWORD *)(*((_QWORD *)v10 + 38) + 136LL) )
    {
      v12 = *((_QWORD *)v10 + 38);
      v13 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( (unsigned int)(v13 - *(_DWORD *)(v12 + 164)) >= *(_DWORD *)(v12 + 168) )
      {
        v14 = *(HSPRITE *)(v12 + 136);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v48);
        v49 = 0LL;
        DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v48, v14);
        NeighborSprite = (HSPRITE)hspGetNeighborSprite(*(Gre::Base **)(*((_QWORD *)v10 + 38) + 136LL), 0, 0);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v44);
        v45 = 0LL;
        DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v44, NeighborSprite);
        v16 = v45;
        if ( v49 && v45 )
        {
          if ( *(_DWORD *)(v45 + 56) == *(_DWORD *)(v49 + 56) && *(_DWORD *)(v45 + 60) == *(_DWORD *)(v49 + 60) )
          {
            v17 = *((_QWORD *)v10 + 38);
            v18 = *(Gre::Base **)(v17 + 144);
            while ( v18 != *(Gre::Base **)(v17 + 136) )
            {
              UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v42);
              v43 = 0LL;
              DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v42, (HSPRITE)v18);
              if ( v43 && (*((_DWORD *)v43 + 35) & 1) != 0 )
              {
                vSpDwmUpdateSpriteVisibility(v43, 0LL, v19);
                if ( v43 )
                  _InterlockedDecrement((volatile signed __int32 *)v43 + 3);
                v43 = 0LL;
                v20 = v42;
                goto LABEL_24;
              }
              v18 = (Gre::Base *)hspGetNeighborSprite(v18, 1, 0);
              if ( v43 )
                _InterlockedDecrement((volatile signed __int32 *)v43 + 3);
              v43 = 0LL;
              UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v42);
              v17 = *((_QWORD *)v10 + 38);
            }
          }
          else
          {
            v21 = *(Gre::Base **)(*((_QWORD *)v10 + 38) + 144LL);
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v46);
            v47 = 0LL;
            DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v46, (HSPRITE)v21);
            if ( v47 )
              vSpDwmUpdateSpriteVisibility(v47, 0LL, v22);
            *(_QWORD *)(*((_QWORD *)v10 + 38) + 144LL) = hspGetNeighborSprite(v21, 1, 0);
            vSpDwmZorderSprite((HSPRITE)v21, *(HSPRITE *)(*((_QWORD *)v10 + 38) + 136LL));
            *(_QWORD *)(*((_QWORD *)v10 + 38) + 136LL) = v21;
            if ( v47 )
              _InterlockedDecrement((volatile signed __int32 *)v47 + 3);
            v47 = 0LL;
            v20 = v46;
LABEL_24:
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v20);
          }
          *(_DWORD *)(*((_QWORD *)v10 + 38) + 164LL) = v13;
          v16 = v45;
        }
        if ( v16 )
          _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
        v45 = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v44);
        if ( v49 )
          _InterlockedDecrement((volatile signed __int32 *)(v49 + 12));
        v49 = 0LL;
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v48);
      }
    }
    v23 = (__int64 *)(hdev + 876);
    v24 = (__int64 *)*((_QWORD *)hdev + 438);
    if ( a2 == -1 )
    {
      if ( (__int64 *)v24[1] == v23 )
      {
        v25 = (__int64 **)*((_QWORD *)hdev + 439);
        if ( *v25 == v23 )
        {
          *v25 = v24;
          v24[1] = (__int64)v25;
          v26 = *((_QWORD *)v10 + 38) + 104LL;
          v27 = *(__int64 ***)(*((_QWORD *)v10 + 38) + 112LL);
          if ( *v27 == (__int64 *)v26 )
          {
            *v23 = v26;
            *((_QWORD *)hdev + 439) = v27;
            *v27 = v23;
            *(_QWORD *)(v26 + 8) = v23;
            v28 = *((_QWORD *)v10 + 38);
            if ( *(_QWORD *)(v28 + 120) == v28 + 120 )
            {
              v29 = *(Gre::Base **)(v28 + 144);
              while ( v29 )
              {
                UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v50);
                v51 = 0LL;
                DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v50, (HSPRITE)v29);
                if ( v51 )
                  vSpDwmUpdateSpriteVisibility(v51, 0LL, v30);
                v29 = (Gre::Base *)hspGetNeighborSprite(v29, 1, 0);
                if ( v51 )
                  _InterlockedDecrement((volatile signed __int32 *)v51 + 3);
                v51 = 0LL;
                UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v50);
              }
            }
LABEL_52:
            EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
            GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
            return;
          }
        }
      }
    }
    else if ( (__int64 *)v24[1] == v23 )
    {
      v31 = (__int64 **)*((_QWORD *)hdev + 439);
      if ( *v31 == v23 )
      {
        *v31 = v24;
        v24[1] = (__int64)v31;
        v32 = *((_QWORD *)v10 + 38) + 120LL;
        v33 = *(__int64 ***)(*((_QWORD *)v10 + 38) + 128LL);
        if ( *v33 == (__int64 *)v32 )
        {
          *v23 = v32;
          *((_QWORD *)hdev + 439) = v33;
          *v33 = v23;
          *(_QWORD *)(v32 + 8) = v23;
          v34 = *((_QWORD *)v10 + 38);
          v52.x = a2 + *((_DWORD *)hdev + 640) - *(_DWORD *)(v34 + 152);
          v52.y = a3 + *((_DWORD *)hdev + 641) - *(_DWORD *)(v34 + 156);
          v35 = *(HSPRITE *)(v34 + 136);
          DrvPixelSpaceToUniformSpacePoint(&v52, &v52.y);
          GreUpdateSprite(a1->hdev, 0LL, v35, 0LL, &v52, 0LL, 0LL, 0LL, 0, 0LL, 0x40200000u, 0LL, 0LL, 1, 0, 0);
          v40 = 0LL;
          DWMALTSPRITEREF::AltLockSpriteObj((DWMALTSPRITEREF *)&v40, v35);
          v36 = v40;
          if ( v40 )
          {
            if ( (a5 & 4) != 0 )
            {
              v37 = a1->hdev;
              LODWORD(v53) = 0x1000000;
              GreUpdateSprite(
                v37,
                0LL,
                v35,
                0LL,
                0LL,
                0LL,
                0LL,
                0LL,
                0,
                (struct _BLENDFUNCTION *)&v53,
                0x21200002u,
                0LL,
                0LL,
                1,
                0,
                0);
            }
            PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)v41, (struct DWMSPRITE *)((char *)v36 + 88));
            LOBYTE(v38) = 1;
            vSpDwmUpdateSpriteVisibility(v36, v38, v39);
            PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v41);
            if ( v36 )
              DEC_SHARE_REF_CNT(v36);
          }
          goto LABEL_52;
        }
      }
    }
    __fastfail(3u);
  }
}
