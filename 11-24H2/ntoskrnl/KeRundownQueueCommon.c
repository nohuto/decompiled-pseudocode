/*
 * XREFs of KeRundownQueueCommon @ 0x14040F3F8
 * Callers:
 *     KeRundownQueueEx @ 0x14040F308 (KeRundownQueueEx.c)
 *     KeRundownPriQueue @ 0x1405C6B64 (KeRundownPriQueue.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 */

void __fastcall KeRundownQueueCommon(
        volatile signed __int32 *SystemArgument1,
        volatile signed __int32 **a2,
        _DWORD *a3,
        unsigned int a4,
        char a5)
{
  __int64 v6; // rbp
  struct _KPRCB *CurrentPrcb; // rsi
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  char v13; // cl
  __int64 v14; // r8
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  volatile signed __int32 **v18; // rax
  unsigned int v19; // edi

  _interlockedbittestandset(SystemArgument1, 8u);
  v6 = a4;
  if ( a5 )
  {
    while ( 1 )
    {
      v15 = *a2;
      if ( *a2 == (volatile signed __int32 *)a2 )
        break;
      v17 = *(_QWORD *)v15;
      v18 = (volatile signed __int32 **)*((_QWORD *)v15 + 1);
      if ( *(volatile signed __int32 **)(*(_QWORD *)v15 + 8LL) != v15 || *v18 != v15 )
        __fastfail(3u);
      *v18 = (volatile signed __int32 *)v17;
      v19 = 0;
      *(_QWORD *)(v17 + 8) = v18;
      while ( _interlockedbittestandset64(v15 - 114, 0LL) )
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
        }
        while ( *((_QWORD *)v15 - 57) );
      }
      *((_QWORD *)v15 - 36) = 0LL;
      *((_QWORD *)v15 - 57) = 0LL;
    }
    if ( (_DWORD)v6 )
    {
      v16 = v6;
      do
      {
        *a3++ = 0;
        --v16;
      }
      while ( v16 );
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = SystemArgument1 + 2;
  v11 = (_QWORD *)*((_QWORD *)SystemArgument1 + 1);
  while ( v11 != v10 )
  {
    v12 = (__int64)v11;
    v11 = (_QWORD *)*v11;
    v13 = *(_BYTE *)(v12 + 16);
    switch ( v13 )
    {
      case 1:
        v14 = *(unsigned __int16 *)(v12 + 18);
        goto LABEL_6;
      case 2:
        *(_BYTE *)(v12 + 17) = 5;
        KiInsertQueueInternal(*(_QWORD *)(v12 + 24), (__int64 *)v12);
        break;
      case 4:
        *(_BYTE *)(v12 + 17) = 5;
        *((_DWORD *)SystemArgument1 + 1) = 0;
        KeInsertQueueDpc(*(PRKDPC *)(v12 + 24), (PVOID)SystemArgument1, (PVOID)v12);
        break;
      default:
        v14 = 256LL;
LABEL_6:
        KiTryUnwaitThread((__int64)CurrentPrcb, v12, v14, 0LL);
        break;
    }
  }
  *((_QWORD *)SystemArgument1 + 2) = SystemArgument1 + 2;
  *v10 = v10;
}
