/*
 * XREFs of KiRemoveEntryTimer @ 0x1403FC130
 * Callers:
 *     KiInsertTimerTable @ 0x140316F50 (KiInsertTimerTable.c)
 *     KiAdjustTimerDueTimes @ 0x1404E0430 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

signed __int64 __fastcall KiRemoveEntryTimer(__int64 a1, __int64 a2, unsigned int a3, volatile signed __int64 **a4)
{
  unsigned int v4; // r10d
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  unsigned __int64 v10; // r14
  volatile signed __int64 result; // rax
  __int64 v12; // r12
  volatile signed __int64 *v13; // rbx
  unsigned int v14; // edi
  __int64 v15; // rcx
  unsigned int v16; // r8d
  volatile signed __int32 *v17; // rcx
  unsigned int v18; // edi
  unsigned int v19; // esi
  volatile signed __int32 *v20; // rsi
  char v21; // [rsp+60h] [rbp+18h]

  v21 = a3;
  v4 = *(unsigned __int16 *)(a2 + 58);
  v6 = *(_QWORD *)(a2 + 32);
  v7 = a2 + 32;
  v8 = a3;
  v10 = 32 * (((unsigned __int64)v4 << 8) + a3 + 16LL);
  result = *(_QWORD *)(v7 + 8);
  v12 = 32 * (((v4 ^ 1LL) << 8) + a3 + 16LL);
  if ( *(_QWORD *)(v6 + 8) != v7 || *(_QWORD *)result != v7 )
    __fastfail(3u);
  *(_QWORD *)result = v6;
  *(_QWORD *)(v6 + 8) = result;
  if ( result == v6 )
  {
    *(_DWORD *)(v10 + a1 + 28) = -1;
    if ( (_WORD)v4 )
    {
      v13 = (volatile signed __int64 *)(a1 + 32 * (a3 + 16LL));
      if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      {
        _mm_pause();
      }
      else if ( v13 )
      {
LABEL_14:
        if ( *(_DWORD *)(v10 + a1 + 28) == -1 && *(_DWORD *)(v12 + a1 + 28) == -1 )
        {
          v15 = qword_140FC8568[2 * *(unsigned __int8 *)(a1 - 16432)];
          if ( KiSerializeTimerExpiration )
          {
            v16 = a3 & 0x3F;
            v17 = (volatile signed __int32 *)(v15 + 8 * (v8 >> 6));
          }
          else
          {
            v16 = *(unsigned __int8 *)(a1 - 16431);
            v17 = (volatile signed __int32 *)((v8 << 6) + v15);
          }
          result = v16;
          _interlockedbittestandreset64(v17, v16);
        }
        _InterlockedAnd64(v13, 0LL);
        return result;
      }
      result = (volatile signed __int64)*a4;
      _InterlockedAnd64(*a4, 0LL);
      v13 = (volatile signed __int64 *)(a1 + 32 * (a3 + 16LL));
      v18 = 0;
      v19 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      {
        do
        {
          if ( (++v19 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v19);
          }
          else
          {
            _mm_pause();
          }
          result = *v13;
        }
        while ( *v13 );
      }
      v20 = (volatile signed __int32 *)(a1 + 32 * (v8 + 272));
      while ( _interlockedbittestandset64(v20, 0LL) )
      {
        do
        {
          if ( (++v18 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v18);
          }
          else
          {
            _mm_pause();
          }
          result = *(_QWORD *)v20;
        }
        while ( *(_QWORD *)v20 );
      }
      *a4 = (volatile signed __int64 *)v20;
    }
    else
    {
      v13 = (volatile signed __int64 *)(a1 + 32 * (a3 + 272LL));
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v14);
          }
          else
          {
            _mm_pause();
          }
          result = *v13;
        }
        while ( *v13 );
      }
    }
    LOBYTE(a3) = v21;
    goto LABEL_14;
  }
  return result;
}
