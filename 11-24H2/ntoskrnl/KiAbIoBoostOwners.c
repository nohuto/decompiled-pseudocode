/*
 * XREFs of KiAbIoBoostOwners @ 0x14027F070
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbForceProcessLockEntry @ 0x140408194 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14027E9B0 (PsBoostThreadIoQoS.c)
 *     KiAbThreadInsertList @ 0x14027EA80 (KiAbThreadInsertList.c)
 *     KiAbSetMinimumThreadPriority @ 0x14027EB30 (KiAbSetMinimumThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140282120 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbQueueAutoBoostDpc @ 0x140284100 (KiAbQueueAutoBoostDpc.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1403C10AC (EtwTraceAutoBoostSetFloor.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  int *v19; // r13
  int v20; // edx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rdx
  char v24; // al
  _QWORD *v25; // rcx
  _DWORD *v26; // rbp
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // r9
  signed __int32 v30[8]; // [rsp+0h] [rbp-98h] BYREF
  int v31; // [rsp+40h] [rbp-58h]
  int v32; // [rsp+50h] [rbp-48h] BYREF
  int v33; // [rsp+54h] [rbp-44h]
  int v34; // [rsp+58h] [rbp-40h] BYREF
  char v36; // [rsp+A0h] [rbp+8h]
  char v37; // [rsp+A8h] [rbp+10h]

  v5 = 0;
  v32 = 0;
  v6 = 0;
  v7 = a1;
  if ( (a2 & 1) != 0 )
    v6 = 2;
  v34 = 0;
  BYTE1(v32) = v6;
  result = BYTE2(v32);
  i = *(_QWORD **)(a1 + 48);
  if ( (a2 & 2) != 0 )
    result = 1LL;
  BYTE2(v32) = result;
  if ( i )
  {
    do
    {
      KiAbSetMinimumThreadPriority((__int64)(i - 2), (char *)&v32, a3, a4, a5, &v34);
      result = i[1];
      v25 = i;
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
          if ( (_QWORD *)*i == v25 )
            break;
          v25 = i;
        }
      }
    }
    while ( i );
    v7 = a1;
  }
  if ( !*(_BYTE *)(v7 + 9) )
  {
    v11 = *(_QWORD *)(v7 - 88LL * (*(_BYTE *)(v7 + 8) & 0x3F) - 16);
    v36 = *(_BYTE *)(v11 + 195);
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
    if ( !*(_DWORD *)(v11 + 1512) || (v37 = 0, *(_DWORD *)(v11 + 1508)) )
      v37 = 1;
    v15 = (*(_BYTE *)(v7 + 11) & 1) == 0;
    v16 = 0;
    v33 = 0;
    v34 = 0;
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
    v18 = (char)v32;
    v19 = (int *)(v7 + 80);
    if ( v17 >= (char)v32 )
    {
      LOBYTE(v18) = v33;
    }
    else
    {
      v20 = *v19;
      v21 = (unsigned int)((char)v32 - 1);
      LOBYTE(v33) = v32;
      v22 = v20 | (1 << (v32 - 1));
      v23 = v20 & 0xC0000000;
      *v19 = v23 ^ v22 & 0x3FFFFFFF;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21, v23, a3, a4) )
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
      v24 = *(_BYTE *)(v18 + v11 + 824);
      if ( v24 == -1 )
        KeBugCheckEx(0x157u, v11, v18, 1uLL, 0LL);
      *(_BYTE *)(v18 + v11 + 824) = v24 + 1;
      *(_DWORD *)(v11 + 856) |= 1 << v18;
      if ( *(char *)(v11 + 195) < (int)v18 )
      {
        KiSetPriorityThread(v11, a3);
        v16 = 1;
      }
      *(_QWORD *)(v11 + 64) = 0LL;
    }
    v26 = (_DWORD *)(v7 + 80);
    v27 = (*(_DWORD *)(v11 + 1440) >> 9) & 7;
    v28 = *(_QWORD *)(*(_QWORD *)(v11 + 544) + 672LL);
    if ( v28 && v27 >= *(_DWORD *)(v28 + 1084) )
    {
      v27 = *(_DWORD *)(v28 + 1084);
      v26 = (_DWORD *)(v7 + 80);
    }
    if ( v27 < SBYTE1(v32) && (*v19 & 0x40000000) == 0 )
    {
      PsBoostThreadIoEx(v11, 0, 0, 0LL);
      _InterlockedOr(v30, 0);
      if ( *(_DWORD *)(v11 + 860) )
      {
LABEL_63:
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 860));
        *v26 |= 0x40000000u;
        v16 = 1;
        BYTE1(v33) = 2;
        goto LABEL_52;
      }
      if ( !a5 )
      {
        v34 = 1;
        goto LABEL_63;
      }
      PsBoostThreadIoEx(v11, 1, 0, 0LL);
      if ( (unsigned int)KiAbThreadInsertList(v11, a5, (_QWORD *)(v11 + 816), v29) )
        KiAbQueueAutoBoostDpc(a5 - 4654);
    }
LABEL_52:
    result = (unsigned int)SBYTE2(v32);
    if ( (*(_DWORD *)(v11 + 1512) == 0) < (int)result && *(int *)(v7 + 80) >= 0 )
    {
      PsBoostThreadIoQoS(v11, 0);
      _InterlockedOr(v30, 0);
      result = *(unsigned int *)(v11 + 864);
      if ( !(_DWORD)result )
      {
        if ( a5 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v11 + 1508));
          result = KiAbThreadInsertList(v11, a5, (_QWORD *)(v11 + 816), (__int64)a4);
          if ( (_DWORD)result )
            result = KiAbQueueAutoBoostDpc(a5 - 4654);
          goto LABEL_53;
        }
        v34 |= 2u;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 864));
      *(_DWORD *)(v7 + 80) |= 0x80000000;
      v16 = 1;
      BYTE2(v33) = 1;
    }
LABEL_53:
    if ( a4 )
    {
      if ( v16 )
      {
        result = *(unsigned __int8 *)(v11 + 792);
        if ( (_BYTE)result )
          result = KiAbThreadInsertList(v11, a4, (_QWORD *)(v11 + 808), (__int64)a4);
      }
    }
    if ( (WORD2(xmmword_140FC6B50) & 0x1000) != 0 && v33 )
      return EtwTraceAutoBoostSetFloor(
               v11,
               *(_DWORD *)v7 & 0xFFFFFFFC,
               (unsigned __int8)v18,
               BYTE1(v33),
               SBYTE2(v33),
               v36,
               v12,
               v37,
               v31,
               v34);
  }
  return result;
}
