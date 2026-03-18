/*
 * XREFs of RtlpHpSegMgrVaCtxAlloc @ 0x1402C1364
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x1402C11C4 (RtlpHpSegMgrReserve.c)
 * Callees:
 *     RtlpHpSegMgrLock @ 0x1402C0D1C (RtlpHpSegMgrLock.c)
 *     RtlpHpSegMgrUnlock @ 0x1402C0D40 (RtlpHpSegMgrUnlock.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxAlloc(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v3; // r14
  __int64 v4; // rbx
  _QWORD **v5; // rdi
  char v6; // r15
  int v7; // r12d
  char v10; // al
  _QWORD *v11; // rsi
  unsigned __int8 v12; // dl
  unsigned int v13; // eax
  int v14; // r14d
  int v15; // eax
  __int64 v16; // rdx

  v3 = (_QWORD **)(a1 + 120);
  v4 = 0LL;
  v5 = (_QWORD **)(a1 + 128);
  v6 = a3;
  v7 = a2;
  if ( *(_QWORD *)(a1 + 120) || *v5 )
  {
    v10 = RtlpHpSegMgrLock(a1, a2, a3);
    v11 = *v5;
    v12 = v10;
    if ( *v5 || (v6 & 2) == 0 && (v11 = *v3, v5 = v3, *v3) )
    {
      v13 = *((unsigned __int16 *)v11 - 3);
      _BitScanForward((unsigned int *)&v14, v13);
      v15 = v13 ^ (1 << v14);
      *((_WORD *)v11 - 3) = v15;
      if ( !(_WORD)v15 )
      {
        if ( *v5 )
          *v5 = (_QWORD *)**v5;
        *v11 = 0LL;
      }
      RtlpHpSegMgrUnlock(a1, v12);
      v16 = qword_140E68BE0[6 * *((unsigned __int8 *)v11 - 15)];
      return *(_QWORD *)(v16 + 8)
           + (unsigned int)(v7 * v14)
           + (((unsigned __int64)v11 - *(_QWORD *)(v16 + 40) - 16) >> *(_DWORD *)(v16 + 24) << 20);
    }
    else
    {
      RtlpHpSegMgrUnlock(a1, v10);
    }
  }
  return v4;
}
