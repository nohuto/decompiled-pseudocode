/*
 * XREFs of RtlpHpSegMgrVaCtxAlloc @ 0x18009C428
 * Callers:
 *     RtlpHpSegMgrReserve @ 0x18009C2B0 (RtlpHpSegMgrReserve.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegMgrLock @ 0x18009A674 (RtlpHpSegMgrLock.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxAlloc(_RTL_SRWLOCK *a1, int a2, char a3)
{
  _RTL_SRWLOCK *v3; // r14
  __int64 v4; // rbx
  _RTL_SRWLOCK *v5; // rdi
  _QWORD *Value; // rsi
  unsigned int v11; // eax
  int v12; // r14d
  int v13; // eax
  __int64 v14; // rdx

  v3 = a1 + 15;
  v4 = 0LL;
  v5 = a1 + 16;
  if ( a1[15].Value || v5->Value )
  {
    RtlpHpSegMgrLock(a1);
    Value = (_QWORD *)v5->Value;
    if ( v5->Value || (a3 & 2) == 0 && (Value = (_QWORD *)v3->Value, v5 = v3, v3->Value) )
    {
      v11 = *((unsigned __int16 *)Value - 3);
      _BitScanForward((unsigned int *)&v12, v11);
      v13 = v11 ^ (1 << v12);
      *((_WORD *)Value - 3) = v13;
      if ( !(_WORD)v13 )
      {
        if ( v5->Value )
          v5->0 = *($2F38BEDF952D5DA5F266621B11247D04 *)v5->Value;
        *Value = 0LL;
      }
      RtlReleaseSRWLockExclusive(a1 + 14);
      v14 = qword_1801CE1F0[6 * *((unsigned __int8 *)Value - 15)];
      return *(_QWORD *)(v14 + 8)
           + (unsigned int)(a2 * v12)
           + (((unsigned __int64)Value - *(_QWORD *)(v14 + 40) - 16) >> *(_DWORD *)(v14 + 24) << 20);
    }
    else
    {
      RtlReleaseSRWLockExclusive(a1 + 14);
    }
  }
  return v4;
}
