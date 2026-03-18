/*
 * XREFs of KiAbCpuBoostOwners @ 0x14024F2F0
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

void __fastcall KiAbCpuBoostOwners(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned __int64 j; // rbx
  unsigned int v6; // ebp
  char v8; // si
  __int64 v9; // rdi
  ULONG_PTR v10; // rbx
  int v11; // esi
  __int64 v12; // rax
  int v13; // eax
  bool v14; // zf
  int v15; // r14d
  char v16; // al
  ULONG_PTR v17; // r12
  unsigned int *v18; // r13
  unsigned int v19; // edx
  __int64 v20; // rcx
  char v21; // al
  unsigned __int64 v22; // rcx
  _QWORD **v23; // rax
  _QWORD *i; // rax
  _DWORD *v25; // rbp
  int v26; // ecx
  __int64 v27; // rdx
  signed __int32 v28[8]; // [rsp+0h] [rbp-98h] BYREF
  int v29; // [rsp+40h] [rbp-58h]
  int v30; // [rsp+50h] [rbp-48h]
  int v31; // [rsp+54h] [rbp-44h] BYREF
  int v32; // [rsp+58h] [rbp-40h] BYREF
  char v34; // [rsp+A0h] [rbp+8h]
  char v35; // [rsp+A8h] [rbp+10h]
  __int64 v36; // [rsp+B0h] [rbp+18h]

  v36 = a3;
  j = *(_QWORD *)(a1 + 48);
  v6 = 0;
  v32 = (unsigned __int8)a2;
  v8 = a2;
  v31 = 0;
  v9 = a1;
  if ( j )
  {
    do
    {
      if ( *(char *)(j + 24) >= v8 )
        break;
      KiAbSetMinimumThreadPriority(j - 16, (char *)&v32, v36, a4, a5, &v31);
      *(_BYTE *)(j + 24) = v8;
      v22 = j;
      v23 = *(_QWORD ***)(j + 8);
      if ( v23 )
      {
        j = *(_QWORD *)(j + 8);
        for ( i = *v23; i; i = (_QWORD *)*i )
          j = (unsigned __int64)i;
      }
      else
      {
        for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)j == v22 )
            break;
          v22 = j;
        }
      }
    }
    while ( j );
    v9 = a1;
  }
  if ( !*(_BYTE *)(v9 + 9) )
  {
    v10 = *(_QWORD *)(v9 - 88LL * (*(_BYTE *)(v9 + 8) & 0x3F) - 16);
    v34 = *(_BYTE *)(v10 + 195);
    v11 = (*(_DWORD *)(v10 + 1440) >> 9) & 7;
    v12 = *(_QWORD *)(*(_QWORD *)(v10 + 544) + 672LL);
    if ( v12 )
    {
      v13 = *(_DWORD *)(v12 + 1084);
      if ( v11 >= v13 )
        v11 = v13;
    }
    if ( v11 < 2 && *(_DWORD *)(v10 + 1504) )
      LOBYTE(v11) = 2;
    if ( !*(_DWORD *)(v10 + 1512) || (v35 = 0, *(_DWORD *)(v10 + 1508)) )
      v35 = 1;
    v14 = (*(_BYTE *)(v9 + 11) & 1) == 0;
    v15 = 0;
    v30 = 0;
    v31 = 0;
    if ( v14 )
    {
      v16 = *(_BYTE *)(v9 + 40);
    }
    else if ( *(_BYTE *)(v9 + 9) )
    {
      v16 = *(_BYTE *)(*(_QWORD *)(v9 - 88LL * (*(_BYTE *)(v9 + 8) & 0x3F) - 16) + 195LL);
      if ( v16 > 30 )
        v16 = 30;
    }
    else
    {
      v16 = KiAbOwnerComputeCpuPriorityKey(v9, a2, a3);
    }
    v17 = (char)v32;
    v18 = (unsigned int *)(v9 + 80);
    if ( v16 >= (char)v32 )
    {
      LOBYTE(v17) = v30;
    }
    else
    {
      v19 = *v18;
      v20 = (unsigned int)((char)v32 - 1);
      LOBYTE(v30) = v32;
      *v18 = v19 & 0xC0000000 ^ (v19 | (1 << (v32 - 1))) & 0x3FFFFFFF;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 64), 0LL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20) )
          {
            HvlNotifyLongSpinWait(v6);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v10 + 64) );
      }
      a3 = v17;
      v21 = *(_BYTE *)(v17 + v10 + 824);
      if ( v21 == -1 )
        KeBugCheckEx(0x157u, v10, v17, 1uLL, 0LL);
      *(_BYTE *)(v17 + v10 + 824) = v21 + 1;
      v15 = 0;
      *(_DWORD *)(v10 + 856) |= 1 << v17;
      if ( *(char *)(v10 + 195) < (int)v17 )
      {
        KiSetPriorityThread(v10, v36, v17);
        v15 = 1;
      }
      *(_QWORD *)(v10 + 64) = 0LL;
    }
    v25 = (_DWORD *)(v9 + 80);
    v26 = (*(_DWORD *)(v10 + 1440) >> 9) & 7;
    v27 = *(_QWORD *)(*(_QWORD *)(v10 + 544) + 672LL);
    if ( v27 && v26 >= *(_DWORD *)(v27 + 1084) )
    {
      v26 = *(_DWORD *)(v27 + 1084);
      v25 = (_DWORD *)(v9 + 80);
    }
    if ( v26 < SBYTE1(v32) && (*v18 & 0x40000000) == 0 )
    {
      PsBoostThreadIoEx(v10, 0, 0LL, 0LL);
      _InterlockedOr(v28, 0);
      if ( *(_DWORD *)(v10 + 860) )
      {
LABEL_60:
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 860));
        *v25 |= 0x40000000u;
        v15 = 1;
        BYTE1(v30) = 2;
        goto LABEL_49;
      }
      if ( !a5 )
      {
        v31 = 1;
        goto LABEL_60;
      }
      PsBoostThreadIoEx(v10, 1, 0LL, 0LL);
      if ( (unsigned int)KiAbThreadInsertList(v10, a5, (_QWORD *)(v10 + 816)) )
        KiAbQueueAutoBoostDpc(a5 - 4654);
    }
LABEL_49:
    if ( (*(_DWORD *)(v10 + 1512) == 0) < SBYTE2(v32) && *(int *)(v9 + 80) >= 0 )
    {
      PsBoostThreadIoQoS(v10, 0, a3);
      _InterlockedOr(v28, 0);
      if ( !*(_DWORD *)(v10 + 864) )
      {
        if ( a5 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v10 + 1508));
          if ( (unsigned int)KiAbThreadInsertList(v10, a5, (_QWORD *)(v10 + 816)) )
            KiAbQueueAutoBoostDpc(a5 - 4654);
          goto LABEL_50;
        }
        v31 |= 2u;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 864));
      *(_DWORD *)(v9 + 80) |= 0x80000000;
      v15 = 1;
      BYTE2(v30) = 1;
    }
LABEL_50:
    if ( a4 && v15 && *(_BYTE *)(v10 + 792) )
      KiAbThreadInsertList(v10, a4, (_QWORD *)(v10 + 808));
    if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 && v30 )
      EtwTraceAutoBoostSetFloor(
        v10,
        *(_DWORD *)v9 & 0xFFFFFFFC,
        (unsigned __int8)v17,
        BYTE1(v30),
        SBYTE2(v30),
        v34,
        v11,
        v35,
        v29,
        v31);
  }
}
