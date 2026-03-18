/*
 * XREFs of KiAbIoBoostOwners @ 0x14024EA60
 * Callers:
 *     KiAbProcessThreadLocks @ 0x1402509C0 (KiAbProcessThreadLocks.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbForceProcessLockEntry @ 0x1404183E4 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14024E3A0 (PsBoostThreadIoQoS.c)
 *     KiAbThreadInsertList @ 0x14024E470 (KiAbThreadInsertList.c)
 *     KiAbSetMinimumThreadPriority @ 0x14024E520 (KiAbSetMinimumThreadPriority.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140251B10 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbQueueAutoBoostDpc @ 0x140253AF0 (KiAbQueueAutoBoostDpc.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceAutoBoostSetFloor @ 0x140478FC8 (EtwTraceAutoBoostSetFloor.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall KiAbIoBoostOwners(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v5; // ebp
  char v6; // al
  __int64 v7; // rdi
  __int64 result; // rax
  _QWORD *i; // rbx
  ULONG_PTR v11; // rbx
  int v12; // esi
  __int64 v13; // rax
  int v14; // eax
  bool v15; // zf
  int v16; // r14d
  char v17; // al
  ULONG_PTR v18; // r15
  unsigned int *v19; // r13
  unsigned int v20; // edx
  __int64 v21; // rcx
  char v22; // al
  _QWORD *v23; // rcx
  _DWORD *v24; // rbp
  int v25; // ecx
  __int64 v26; // rdx
  signed __int32 v27[8]; // [rsp+0h] [rbp-98h] BYREF
  int v28; // [rsp+40h] [rbp-58h]
  int v29; // [rsp+50h] [rbp-48h] BYREF
  int v30; // [rsp+54h] [rbp-44h]
  int v31; // [rsp+58h] [rbp-40h] BYREF
  char v33; // [rsp+A0h] [rbp+8h]
  char v34; // [rsp+A8h] [rbp+10h]
  __int64 v35; // [rsp+B0h] [rbp+18h]

  v35 = a3;
  v5 = 0;
  v29 = 0;
  v6 = 0;
  v7 = a1;
  if ( (a2 & 1) != 0 )
    v6 = 2;
  v31 = 0;
  BYTE1(v29) = v6;
  result = BYTE2(v29);
  i = *(_QWORD **)(a1 + 48);
  if ( (a2 & 2) != 0 )
    result = 1LL;
  BYTE2(v29) = result;
  if ( i )
  {
    do
    {
      KiAbSetMinimumThreadPriority((__int64)(i - 2), (char *)&v29, v35, a4, a5, &v31);
      result = i[1];
      v23 = i;
      if ( result )
      {
        i = (_QWORD *)i[1];
        for ( result = *(_QWORD *)result; result; result = *(_QWORD *)result )
          i = (_QWORD *)result;
      }
      else
      {
        for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL); i; i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( (_QWORD *)*i == v23 )
            break;
          v23 = i;
        }
      }
    }
    while ( i );
    v7 = a1;
  }
  if ( !*(_BYTE *)(v7 + 9) )
  {
    v11 = *(_QWORD *)(v7 - 88LL * (*(_BYTE *)(v7 + 8) & 0x3F) - 16);
    v33 = *(_BYTE *)(v11 + 195);
    v12 = (*(_DWORD *)(v11 + 1440) >> 9) & 7;
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 544) + 672LL);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 1084);
      if ( v12 >= v14 )
        v12 = v14;
    }
    if ( v12 < 2 && *(_DWORD *)(v11 + 1504) )
      LOBYTE(v12) = 2;
    if ( !*(_DWORD *)(v11 + 1512) || (v34 = 0, *(_DWORD *)(v11 + 1508)) )
      v34 = 1;
    v15 = (*(_BYTE *)(v7 + 11) & 1) == 0;
    v16 = 0;
    v30 = 0;
    v31 = 0;
    if ( v15 )
    {
      v17 = *(_BYTE *)(v7 + 40);
    }
    else if ( *(_BYTE *)(v7 + 9) )
    {
      v17 = *(_BYTE *)(*(_QWORD *)(v7 - 88LL * (*(_BYTE *)(v7 + 8) & 0x3F) - 16) + 195LL);
      if ( v17 > 30 )
        v17 = 30;
    }
    else
    {
      v17 = KiAbOwnerComputeCpuPriorityKey(v7, a2, a3);
    }
    v18 = (char)v29;
    v19 = (unsigned int *)(v7 + 80);
    if ( v17 >= (char)v29 )
    {
      LOBYTE(v18) = v30;
    }
    else
    {
      v20 = *v19;
      v21 = (unsigned int)((char)v29 - 1);
      LOBYTE(v30) = v29;
      *v19 = v20 & 0xC0000000 ^ (v20 | (1 << (v29 - 1))) & 0x3FFFFFFF;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21) )
          {
            HvlNotifyLongSpinWait(v5);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v11 + 64) );
      }
      a3 = v18;
      v22 = *(_BYTE *)(v18 + v11 + 824);
      if ( v22 == -1 )
        KeBugCheckEx(0x157u, v11, v18, 1uLL, 0LL);
      *(_BYTE *)(v18 + v11 + 824) = v22 + 1;
      *(_DWORD *)(v11 + 856) |= 1 << v18;
      if ( *(char *)(v11 + 195) < (int)v18 )
      {
        KiSetPriorityThread(v11, v35, v18);
        v16 = 1;
      }
      *(_QWORD *)(v11 + 64) = 0LL;
    }
    v24 = (_DWORD *)(v7 + 80);
    v25 = (*(_DWORD *)(v11 + 1440) >> 9) & 7;
    v26 = *(_QWORD *)(*(_QWORD *)(v11 + 544) + 672LL);
    if ( v26 && v25 >= *(_DWORD *)(v26 + 1084) )
    {
      v25 = *(_DWORD *)(v26 + 1084);
      v24 = (_DWORD *)(v7 + 80);
    }
    if ( v25 < SBYTE1(v29) && (*v19 & 0x40000000) == 0 )
    {
      PsBoostThreadIoEx(v11, 0, 0LL, 0LL);
      _InterlockedOr(v27, 0);
      if ( *(_DWORD *)(v11 + 860) )
      {
LABEL_63:
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 860));
        *v24 |= 0x40000000u;
        v16 = 1;
        BYTE1(v30) = 2;
        goto LABEL_52;
      }
      if ( !a5 )
      {
        v31 = 1;
        goto LABEL_63;
      }
      PsBoostThreadIoEx(v11, 1, 0LL, 0LL);
      if ( (unsigned int)KiAbThreadInsertList(v11, a5, (_QWORD *)(v11 + 816)) )
        KiAbQueueAutoBoostDpc(a5 - 4654);
    }
LABEL_52:
    result = (unsigned int)SBYTE2(v29);
    if ( (*(_DWORD *)(v11 + 1512) == 0) < (int)result && *(int *)(v7 + 80) >= 0 )
    {
      PsBoostThreadIoQoS(v11, 0, a3);
      _InterlockedOr(v27, 0);
      result = *(unsigned int *)(v11 + 864);
      if ( !(_DWORD)result )
      {
        if ( a5 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v11 + 1508));
          result = KiAbThreadInsertList(v11, a5, (_QWORD *)(v11 + 816));
          if ( (_DWORD)result )
            result = KiAbQueueAutoBoostDpc(a5 - 4654);
          goto LABEL_53;
        }
        v31 |= 2u;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 864));
      *(_DWORD *)(v7 + 80) |= 0x80000000;
      v16 = 1;
      BYTE2(v30) = 1;
    }
LABEL_53:
    if ( a4 )
    {
      if ( v16 )
      {
        result = *(unsigned __int8 *)(v11 + 792);
        if ( (_BYTE)result )
          result = KiAbThreadInsertList(v11, a4, (_QWORD *)(v11 + 808));
      }
    }
    if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 && v30 )
      return EtwTraceAutoBoostSetFloor(
               v11,
               *(_DWORD *)v7 & 0xFFFFFFFC,
               (unsigned __int8)v18,
               BYTE1(v30),
               SBYTE2(v30),
               v33,
               v12,
               v34,
               v28,
               v31);
  }
  return result;
}
