/*
 * XREFs of KiIntSteerDisable @ 0x14037432C
 * Callers:
 *     KeDisconnectInterrupt @ 0x140373B88 (KeDisconnectInterrupt.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeGetPrcb @ 0x1402B0A10 (KeGetPrcb.c)
 *     KiIntSteerLogState @ 0x1402B2FE4 (KiIntSteerLogState.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiIntSteerDisable(__int64 *a1, unsigned int a2)
{
  __int64 *v2; // rdi
  _QWORD *v4; // rbx
  KIRQL v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // rsi
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  __int64 Prcb; // rax

  v2 = a1;
  v4 = *(_QWORD **)(*a1 + 168);
  if ( v4 )
  {
    KiIntSteerLogState(*(_QWORD *)(*a1 + 168), (const EVENT_DESCRIPTOR *)PPM_ETW_INTERRUPT_STEERING_STATE_DISCONNECT);
    v5 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
    if ( a2 )
    {
      v6 = a2;
      do
      {
        v7 = *v2;
        _InterlockedAnd((volatile signed __int32 *)(*v2 + 104), 0xFFFFFFFB);
        *(_QWORD *)(v7 + 168) = 0LL;
        ++v2;
        --v6;
      }
      while ( v6 );
    }
    v8 = *v4;
    v9 = (_QWORD *)v4[2];
    if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v10 = (_QWORD *)v4[1], (_QWORD *)*v10 != v4) )
LABEL_7:
      __fastfail(3u);
    *v10 = v8;
    *(_QWORD *)(v8 + 8) = v10;
    ExFreePoolWithTag(v4, 0x6B725449u);
    if ( (_QWORD *)v9[2] == v9 + 2 )
    {
      --KiIntTrackRootCount;
      v12 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_7;
      v13 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v13 != v9 )
        goto LABEL_7;
      *v13 = v12;
      *(_QWORD *)(v12 + 8) = v13;
      LOWORD(v14) = *((_WORD *)v9 + 84);
      v15 = v9[20];
LABEL_15:
      v16 = (unsigned __int16)v14 + 1;
      while ( 1 )
      {
        if ( v15 )
        {
          _BitScanForward64(&v17, v15);
          v15 &= ~(1LL << v17);
          Prcb = KeGetPrcb(*((_DWORD *)qword_140F22998 + 64 * (unsigned __int16)v14 + (unsigned __int8)v17));
          if ( (*(_DWORD *)(Prcb + 11672))-- == 1 )
            _interlockedbittestandset64(
              (volatile signed __int32 *)(*(_QWORD *)(Prcb + 192) + 112LL),
              *(unsigned __int8 *)(Prcb + 209));
          goto LABEL_15;
        }
        v14 = (unsigned __int16)(v14 + 1);
        if ( (unsigned int)v14 >= v16 )
          break;
        v15 = *(_QWORD *)(8 * v14 + 8);
      }
      ExFreePoolWithTag(v9, 0x6B725449u);
    }
    KeReleaseSpinLock(&KiIntTrackSpinlock, v5);
  }
  return 0LL;
}
