/*
 * XREFs of ??$vGarbageCollectObject@VBRUSHSELOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1401CDF18
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x140015300 (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     bDeleteBrush @ 0x140014820 (bDeleteBrush.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z @ 0x14002EB90 (-HmgShareLockEx@@YAPEAU_BASEOBJECT@@PEAUHOBJ__@@EW4HandleLockOptions@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x1400306B0 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x140035800 (--1EPALOBJ@@QEAA@XZ.c)
 */

void __fastcall vGarbageCollectObject<BRUSHSELOBJGC>(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v2; // rax
  struct HOBJ__ **v3; // rbx
  __int64 v4; // rcx
  struct _BASEOBJECT *v5; // [rsp+20h] [rbp-30h] BYREF
  int v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  int v8; // [rsp+38h] [rbp-18h]
  char v9; // [rsp+3Dh] [rbp-13h]

  v6 = 0;
  v1 = a1;
  v2 = HmgShareLockEx(a1, 16, 0);
  v5 = (struct _BASEOBJECT *)v2;
  v3 = (struct HOBJ__ **)v2;
  if ( v2 && *(_DWORD *)(v2 + 8) <= 1u && (*(_BYTE *)(v2 + 14) & 0x40) != 0 )
  {
    HANDLELOCK::HANDLELOCK((__int64)&v7, v1, 1u);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v7 + 8) & 0xFFFFFFFE) == 0x80000012 )
      {
        HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
        if ( (unsigned int)bDeleteBrush(*v3, 1, 1) )
        {
          v5 = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(W32GetSessionState(v4) + 88) + 1756LL));
        }
        goto LABEL_10;
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v7);
    }
    v9 = 1;
LABEL_10:
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v7);
  }
  EPALOBJ::~EPALOBJ(&v5);
}
