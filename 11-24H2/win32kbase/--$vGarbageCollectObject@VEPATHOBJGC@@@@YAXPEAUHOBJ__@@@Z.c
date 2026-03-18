/*
 * XREFs of ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CE0E8
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140015300 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002EB90 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x1400306B0 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1401C0A70 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ??1EPATHOBJGC@@QEAA@XZ @ 0x1401CE384 (--1EPATHOBJGC@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<EPATHOBJGC>(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax
  bool v3; // cc
  __int64 v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-19h] BYREF
  int v6; // [rsp+28h] [rbp-11h]
  char v7; // [rsp+2Dh] [rbp-Ch]
  _DWORD v8[2]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v9; // [rsp+48h] [rbp+Fh]
  __int128 v10; // [rsp+50h] [rbp+17h]
  __int128 v11; // [rsp+60h] [rbp+27h]
  __int64 v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]
  __int64 v15; // [rsp+80h] [rbp+47h]
  __int64 v16; // [rsp+88h] [rbp+4Fh]

  v16 = 0LL;
  v14 = 0;
  v13 = 0;
  v15 = 0LL;
  v12 = 0LL;
  v1 = a1;
  v10 = 0LL;
  v11 = 0LL;
  v2 = HmgShareLockEx(a1, 7, 0);
  v9 = v2;
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8) <= 1u;
    v8[1] = *(_DWORD *)(v2 + 96);
    v8[0] = *(_DWORD *)(v2 + 92);
    if ( v3 && (*(_BYTE *)(v2 + 14) & 0x40) != 0 )
    {
      HANDLELOCK::HANDLELOCK((__int64)&v5, v1, 1u);
      if ( v6 )
      {
        if ( (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE) == 0x80000012 )
        {
          HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
          if ( EPATHOBJGC::bGarbageCollect((EPATHOBJGC *)v8) )
            _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(v4) + 88) + 1756LL));
          goto LABEL_10;
        }
        HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
      }
      v7 = 1;
LABEL_10:
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v5);
    }
  }
  EPATHOBJGC::~EPATHOBJGC((EPATHOBJGC *)v8);
}
