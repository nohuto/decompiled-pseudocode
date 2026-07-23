/*
 * XREFs of KiSignalThread @ 0x1402CCDD0
 * Callers:
 *     KiWakePriQueueWaiter @ 0x1402CD480 (KiWakePriQueueWaiter.c)
 *     KiResumeThread @ 0x1402DD2DC (KiResumeThread.c)
 *     KiSignalThreadForApc @ 0x1402DD8B0 (KiSignalThreadForApc.c)
 *     KiSuspendThread @ 0x1402DE060 (KiSuspendThread.c)
 *     KeInsertQueueApc @ 0x1402DF360 (KeInsertQueueApc.c)
 *     KeAlertThread @ 0x140475190 (KeAlertThread.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall KiSignalThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r10
  char result; // al
  int v7; // edx
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned int v12; // esi
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  char v15; // al
  __int64 v16; // rcx
  __int64 v17; // rax

  v4 = *(_BYTE *)(a2 + 112);
  result = 0;
  v7 = v4 & 7;
  if ( v7 == 1 || v7 == 4 )
  {
    v10 = *(_QWORD *)(a2 + 232);
    if ( v10 )
    {
      if ( (*(_BYTE *)v10 & 0x7F) == 0x15 )
      {
        v17 = (unsigned __int8)*(_DWORD *)(a2 + 540);
        *(_DWORD *)(a2 + 540) = v17;
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 4 * v17 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 40));
      }
    }
    v11 = *(_QWORD *)(a2 + 712);
    if ( v11 )
    {
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 33744), 0LL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v11 + 33744) );
      }
      if ( *(_QWORD *)(a2 + 712) )
      {
        v13 = *(_QWORD *)(a2 + 216);
        v14 = *(_QWORD **)(a2 + 224);
        if ( *(_QWORD *)(v13 + 8) != a2 + 216 || *v14 != a2 + 216 )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        *(_QWORD *)(a2 + 712) = 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 33744), 0LL);
    }
    v15 = *(_BYTE *)(a2 + 388);
    if ( v15 == 1 )
    {
      *(_DWORD *)(a2 + 116) |= 2u;
    }
    else if ( v15 == 5 )
    {
      v16 = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(a2 + 436));
      if ( *(_BYTE *)(a2 + 391) )
        *(_QWORD *)(a2 + 1000) += v16;
      else
        *(_QWORD *)(a2 + 992) += v16;
    }
    *(_BYTE *)(a2 + 388) = 7;
    *(_QWORD *)(a2 + 216) = *(_QWORD *)(a1 + 11528);
    *(_QWORD *)(a1 + 11528) = a2 + 216;
    *(_QWORD *)(a2 + 200) = a3;
    *(_QWORD *)(a2 + 976) = 0LL;
    return 1;
  }
  if ( a4 )
  {
    if ( (v4 & 7) == 0 )
    {
      *(_BYTE *)(a2 + 112) = v4 & 0xF8 | 2;
      *(_QWORD *)(a2 + 200) = a3;
      *(_QWORD *)(a2 + 976) = 0LL;
      *(_BYTE *)(a4 + 17) = 0;
      return 1;
    }
    if ( v7 == 5 )
    {
      *(_BYTE *)(a2 + 112) = v4 & 0xF8 | 6;
    }
    else if ( v7 == 3 )
    {
      *(_BYTE *)(a4 + 17) = 2;
    }
  }
  return result;
}
