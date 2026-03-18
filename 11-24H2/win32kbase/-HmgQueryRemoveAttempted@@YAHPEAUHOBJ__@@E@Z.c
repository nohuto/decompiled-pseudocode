/*
 * XREFs of ?HmgQueryRemoveAttempted@@YAHPEAUHOBJ__@@E@Z @ 0x14019C180
 * Callers:
 *     GrepDeleteDC @ 0x140034C20 (GrepDeleteDC.c)
 *     ?GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z @ 0x14003605C (-GrepDeleteDCOBJ@@YAHAEAVXDCOBJ@@KPEAH@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14002DFB0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14002E8D0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x1400306B0 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 */

__int64 __fastcall HmgQueryRemoveAttempted(struct HOBJ__ *a1)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  HSEMAPHORE v6; // [rsp+60h] [rbp+18h] BYREF

  v1 = (unsigned int)a1;
  v2 = 0;
  SEMOBJ<20>::SEMOBJ<20>(&v6);
  HANDLELOCK::HANDLELOCK((__int64)&v4, v1, 0);
  if ( v5 )
  {
    if ( *(_BYTE *)(v4 + 14) == 1 && *(_WORD *)(v4 + 12) == HIWORD(v1) )
      v2 = (*(unsigned __int8 *)(v4 + 15) >> 3) & 1;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
  SEMOBJ<20>::vUnlock(&v6);
  return v2;
}
