/*
 * XREFs of KiTimer2Expiration @ 0x140372250
 * Callers:
 *     KiRetireDpcList @ 0x1403192F0 (KiRetireDpcList.c)
 *     KiTimerExpirationDpc @ 0x1405C2D90 (KiTimerExpirationDpc.c)
 * Callees:
 *     KiAcquireSpinLockInstrumented @ 0x140253620 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1402536F0 (KxWaitForSpinLockAndAcquire.c)
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1402777C0 (KiSendClockInterruptToTargetProcessor.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiProcessThreadWaitList @ 0x1402874A0 (KiProcessThreadWaitList.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402EAAD0 (KiReleaseSpinLockInstrumented.c)
 *     KiUpdateTimer2Flags @ 0x14036FAB0 (KiUpdateTimer2Flags.c)
 *     KiInsertTimer2 @ 0x14036FD44 (KiInsertTimer2.c)
 *     KiExpireTimer2 @ 0x140370160 (KiExpireTimer2.c)
 *     KiCheckAndRearmForceIdle @ 0x140372628 (KiCheckAndRearmForceIdle.c)
 *     KiRemoveTimer2 @ 0x140372730 (KiRemoveTimer2.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall KiTimer2Expiration(
        __int64 *a1,
        unsigned __int64 a2,
        char a3,
        char a4,
        unsigned __int64 *a5)
{
  unsigned __int64 result; // rax
  char v10; // r12
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  char v13; // al
  volatile signed __int32 *v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rbx
  unsigned __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  _QWORD *v22; // rsi
  signed __int32 v23; // edx
  signed __int32 v24; // eax
  signed __int32 v25; // edx
  _QWORD *v26; // rax
  __int64 v27; // rax
  int v28; // edx
  char v29; // r8
  char inserted; // al
  _BYTE v31[8]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v32; // [rsp+38h] [rbp-80h] BYREF
  _QWORD **v33; // [rsp+40h] [rbp-78h]
  __int128 v34; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v35[2]; // [rsp+60h] [rbp-58h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  result = KiNextTimer2DueTime;
  v31[0] = 0;
  v34 = 0LL;
  if ( a2 >= KiNextTimer2DueTime )
  {
    v10 = 0;
    v33 = &v32;
    v32 = &v32;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiTimer2CollectionLock);
    }
    v16 = 7LL;
    v17 = 0LL;
    if ( !a4 )
    {
      if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      {
        BYTE8(v34) = 1;
        v35[0] = &v34;
        *(_QWORD *)&v34 = a2;
        v35[1] = 16LL;
        EtwTraceKernelEvent((int)v35, 1, 0x40020000u, 3920, 1538);
      }
      v17 = 1LL;
      if ( a3 )
        v16 = 4LL;
      else
        v16 = 3LL;
    }
    v18 = (unsigned __int64)&KiTimer2Collections + 24 * v17;
    do
    {
      v19 = *(_QWORD *)(v18 + 8);
      if ( (v19 & 1) != 0 )
      {
        if ( v19 == 1 )
          v20 = 0LL;
        else
          v20 = v19 ^ (v18 | 1);
      }
      else
      {
        v20 = *(_QWORD *)(v18 + 8);
      }
      while ( v20 )
      {
        v21 = 0LL;
        if ( v17 >= 3 )
          v21 = 24LL;
        v22 = (_QWORD *)(v20 - v21);
        if ( a2 < v22[6] )
          break;
        KiRemoveTimer2(v22 - 3);
        v23 = *((_DWORD *)v22 - 6);
        v24 = _InterlockedCompareExchange((volatile signed __int32 *)v22 - 6, v23 & 0xFFFFF0FF | 0x200, v23);
        if ( v23 != v24 )
        {
          do
          {
            v25 = v24;
            v24 = _InterlockedCompareExchange((volatile signed __int32 *)v22 - 6, v24 & 0xFFFFF0FF | 0x200, v24);
          }
          while ( v25 != v24 );
        }
        v26 = v33;
        if ( *v33 != &v32 )
          __fastfail(3u);
        v22[1] = v33;
        *v22 = &v32;
        *v26 = v22;
        v27 = *(_QWORD *)(v18 + 8);
        v33 = (_QWORD **)v22;
        if ( (v27 & 1) != 0 )
        {
          if ( v27 == 1 )
            v20 = 0LL;
          else
            v20 = v27 ^ (v18 | 1);
        }
        else
        {
          v20 = v27;
        }
      }
      ++v17;
      v18 += 24LL;
    }
    while ( v17 < v16 );
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      _InterlockedAnd64((volatile signed __int64 *)&KiTimer2CollectionLock, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&KiTimer2CollectionLock, retaddr);
    v12 = v32;
    if ( v32 != &v32 )
    {
      while ( 1 )
      {
        v11 = (__int64)(v12 - 3);
        v12 = (_QWORD *)*v12;
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v11);
        v13 = *(_BYTE *)(v11 + 1);
        v14 = (volatile signed __int32 *)v11;
        if ( (v13 & 2) != 0 )
          break;
        v28 = 0;
        if ( (v13 & 8) != 0 )
        {
          inserted = KiInsertTimer2(v11, 0, (__int64)v31);
          v14 = (volatile signed __int32 *)v11;
          if ( !inserted )
            break;
          v29 = 0;
          v28 = 1;
        }
        else
        {
          v29 = 4;
        }
        KiUpdateTimer2Flags(v14, v28, v29);
LABEL_9:
        if ( v12 == &v32 )
        {
          if ( v10 )
            KiCheckAndRearmForceIdle();
          goto LABEL_12;
        }
      }
      if ( (*(_BYTE *)(v11 + 129) & 2) != 0 )
        v10 = 1;
      KiExpireTimer2((__int64)v14, (__int64)a1, (LARGE_INTEGER)a2, a5);
      goto LABEL_9;
    }
LABEL_12:
    if ( a1[1441] )
      KiProcessThreadWaitList(a1, 1u, 0, 2u);
    v15 = qword_140F21748;
    if ( qword_140F21760 < (unsigned __int64)qword_140F21748 )
      v15 = qword_140F21760;
    result = MEMORY[0xFFFFF78000000008] + KeMaximumIncrement;
    if ( v15 < result )
    {
      if ( !KiClockOwnerOneShotRequest )
        return KiSendClockInterruptToTargetProcessor(KiClockTimerOwner);
      if ( v15 < KiClockOwnerOneShotRequest )
      {
        result = (unsigned int)KeMinimumIncrement;
        if ( KiClockOwnerOneShotRequest - v15 > (unsigned int)KeMinimumIncrement )
          return KiSendClockInterruptToTargetProcessor(KiClockTimerOwner);
      }
    }
  }
  return result;
}
