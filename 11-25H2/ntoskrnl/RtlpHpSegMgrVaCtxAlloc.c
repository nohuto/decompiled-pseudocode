/*
 * XREFs of RtlpHpSegMgrVaCtxAlloc @ 0x1402F9630
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x1402F9490 (RtlpHpSegMgrReserve.c)
 * Callees:
 *     RtlpHpSegMgrUnlock @ 0x1402FA950 (RtlpHpSegMgrUnlock.c)
 *     RtlpHpSegMgrLock @ 0x1402FA978 (RtlpHpSegMgrLock.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxAlloc(__int64 a1, __int64 a2, char a3)
{
  _QWORD **v3; // r14
  __int64 v4; // rbx
  _QWORD **v5; // rdi
  int v7; // r12d
  char v10; // al
  __int64 v11; // r8
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  unsigned int v14; // eax
  int v15; // r14d
  int v16; // eax
  __int64 v17; // rdx

  v3 = (_QWORD **)(a1 + 120);
  v4 = 0LL;
  v5 = (_QWORD **)(a1 + 128);
  v7 = a2;
  if ( *(_QWORD *)(a1 + 120) || *v5 )
  {
    v10 = RtlpHpSegMgrLock(a1, a2);
    v12 = *v5;
    LOBYTE(v13) = v10;
    if ( *v5 || (a3 & 2) == 0 && (v12 = *v3, v5 = v3, *v3) )
    {
      v14 = *((unsigned __int16 *)v12 - 3);
      _BitScanForward((unsigned int *)&v15, v14);
      v16 = v14 ^ (1 << v15);
      *((_WORD *)v12 - 3) = v16;
      if ( !(_WORD)v16 )
      {
        if ( *v5 )
          *v5 = (_QWORD *)**v5;
        *v12 = 0LL;
      }
      RtlpHpSegMgrUnlock(a1, v13, v11);
      v17 = qword_140E68920[6 * *((unsigned __int8 *)v12 - 15)];
      return *(_QWORD *)(v17 + 8)
           + (unsigned int)(v7 * v15)
           + (((unsigned __int64)v12 - *(_QWORD *)(v17 + 40) - 16) >> *(_DWORD *)(v17 + 24) << 20);
    }
    else
    {
      RtlpHpSegMgrUnlock(a1, v13, v11);
    }
  }
  return v4;
}
