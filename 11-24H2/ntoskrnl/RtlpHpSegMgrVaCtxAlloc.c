/*
 * XREFs of RtlpHpSegMgrVaCtxAlloc @ 0x14035D7A8
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x14035D608 (RtlpHpSegMgrReserve.c)
 * Callees:
 *     RtlpHpSegMgrLock @ 0x14035CE14 (RtlpHpSegMgrLock.c)
 *     RtlpHpSegMgrUnlock @ 0x14035CE38 (RtlpHpSegMgrUnlock.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxAlloc(__int64 a1, int a2, char a3)
{
  _QWORD **v3; // r14
  __int64 v4; // rbx
  _QWORD **v5; // rdi
  _QWORD *v10; // rsi
  unsigned int v11; // eax
  int v12; // r14d
  int v13; // eax
  __int64 v14; // rdx

  v3 = (_QWORD **)(a1 + 120);
  v4 = 0LL;
  v5 = (_QWORD **)(a1 + 128);
  if ( *(_QWORD *)(a1 + 120) || *v5 )
  {
    RtlpHpSegMgrLock(a1);
    v10 = *v5;
    if ( *v5 || (a3 & 2) == 0 && (v10 = *v3, v5 = v3, *v3) )
    {
      v11 = *((unsigned __int16 *)v10 - 3);
      _BitScanForward((unsigned int *)&v12, v11);
      v13 = v11 ^ (1 << v12);
      *((_WORD *)v10 - 3) = v13;
      if ( !(_WORD)v13 )
      {
        if ( *v5 )
          *v5 = (_QWORD *)**v5;
        *v10 = 0LL;
      }
      RtlpHpSegMgrUnlock(a1);
      v14 = qword_140E68DE0[6 * *((unsigned __int8 *)v10 - 15)];
      return *(_QWORD *)(v14 + 8)
           + (unsigned int)(a2 * v12)
           + (((unsigned __int64)v10 - *(_QWORD *)(v14 + 40) - 16) >> *(_DWORD *)(v14 + 24) << 20);
    }
    else
    {
      RtlpHpSegMgrUnlock(a1);
    }
  }
  return v4;
}
