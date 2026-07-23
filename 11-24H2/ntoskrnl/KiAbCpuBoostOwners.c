/*
 * XREFs of KiAbCpuBoostOwners @ 0x14027F900
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
  int *v18; // r13
  int v19; // edx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  char v23; // al
  unsigned __int64 v24; // rcx
  _QWORD **v25; // rax
  _QWORD *i; // rax
  _DWORD *v27; // rbp
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // r9
  signed __int32 v31[8]; // [rsp+0h] [rbp-98h] BYREF
  int v32; // [rsp+40h] [rbp-58h]
  int v33; // [rsp+50h] [rbp-48h]
  int v34; // [rsp+54h] [rbp-44h] BYREF
  char v35[8]; // [rsp+58h] [rbp-40h] BYREF
  char v37; // [rsp+A0h] [rbp+8h]
  char v38; // [rsp+A8h] [rbp+10h]

  j = *(_QWORD *)(a1 + 48);
  v6 = 0;
  *(_DWORD *)v35 = (unsigned __int8)a2;
  v8 = a2;
  v34 = 0;
  v9 = a1;
  if ( j )
  {
    do
    {
      if ( *(char *)(j + 24) >= v8 )
        break;
      KiAbSetMinimumThreadPriority(j - 16, v35, a3, a4, a5, &v34);
      *(_BYTE *)(j + 24) = v8;
      v24 = j;
      v25 = *(_QWORD ***)(j + 8);
      if ( v25 )
      {
        j = *(_QWORD *)(j + 8);
        for ( i = *v25; i; i = (_QWORD *)*i )
          j = (unsigned __int64)i;
      }
      else
      {
        for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)j == v24 )
            break;
          v24 = j;
        }
      }
    }
    while ( j );
    v9 = a1;
  }
  if ( !*(_BYTE *)(v9 + 9) )
  {
    v10 = *(_QWORD *)(v9 - 88LL * (*(_BYTE *)(v9 + 8) & 0x3F) - 16);
    v37 = *(_BYTE *)(v10 + 195);
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
    if ( !*(_DWORD *)(v10 + 1512) || (v38 = 0, *(_DWORD *)(v10 + 1508)) )
      v38 = 1;
    v14 = (*(_BYTE *)(v9 + 11) & 1) == 0;
    v15 = 0;
    v33 = 0;
    v34 = 0;
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
    v17 = v35[0];
    v18 = (int *)(v9 + 80);
    if ( v16 >= v35[0] )
    {
      LOBYTE(v17) = v33;
    }
    else
    {
      v19 = *v18;
      v20 = (unsigned int)(v35[0] - 1);
      LOBYTE(v33) = v35[0];
      v21 = v19 | (1 << (v35[0] - 1));
      v22 = v19 & 0xC0000000;
      *v18 = v22 ^ v21 & 0x3FFFFFFF;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 64), 0LL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20, v22, a3, a4) )
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
      v23 = *(_BYTE *)(v17 + v10 + 824);
      if ( v23 == -1 )
        KeBugCheckEx(0x157u, v10, v17, 1uLL, 0LL);
      *(_BYTE *)(v17 + v10 + 824) = v23 + 1;
      v15 = 0;
      *(_DWORD *)(v10 + 856) |= 1 << v17;
      if ( *(char *)(v10 + 195) < (int)v17 )
      {
        KiSetPriorityThread(v10, a3);
        v15 = 1;
      }
      *(_QWORD *)(v10 + 64) = 0LL;
    }
    v27 = (_DWORD *)(v9 + 80);
    v28 = (*(_DWORD *)(v10 + 1440) >> 9) & 7;
    v29 = *(_QWORD *)(*(_QWORD *)(v10 + 544) + 672LL);
    if ( v29 && v28 >= *(_DWORD *)(v29 + 1084) )
    {
      v28 = *(_DWORD *)(v29 + 1084);
      v27 = (_DWORD *)(v9 + 80);
    }
    if ( v28 < v35[1] && (*v18 & 0x40000000) == 0 )
    {
      PsBoostThreadIoEx(v10, 0, 0, 0LL);
      _InterlockedOr(v31, 0);
      if ( *(_DWORD *)(v10 + 860) )
      {
LABEL_60:
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 860));
        *v27 |= 0x40000000u;
        v15 = 1;
        BYTE1(v33) = 2;
        goto LABEL_49;
      }
      if ( !a5 )
      {
        v34 = 1;
        goto LABEL_60;
      }
      PsBoostThreadIoEx(v10, 1, 0, 0LL);
      if ( (unsigned int)KiAbThreadInsertList(v10, a5, (_QWORD *)(v10 + 816), v30) )
        KiAbQueueAutoBoostDpc(a5 - 4654);
    }
LABEL_49:
    if ( (*(_DWORD *)(v10 + 1512) == 0) < v35[2] && *(int *)(v9 + 80) >= 0 )
    {
      PsBoostThreadIoQoS(v10, 0);
      _InterlockedOr(v31, 0);
      if ( !*(_DWORD *)(v10 + 864) )
      {
        if ( a5 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v10 + 1508));
          if ( (unsigned int)KiAbThreadInsertList(v10, a5, (_QWORD *)(v10 + 816), (__int64)a4) )
            KiAbQueueAutoBoostDpc(a5 - 4654);
          goto LABEL_50;
        }
        v34 |= 2u;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 864));
      *(_DWORD *)(v9 + 80) |= 0x80000000;
      v15 = 1;
      BYTE2(v33) = 1;
    }
LABEL_50:
    if ( a4 && v15 && *(_BYTE *)(v10 + 792) )
      KiAbThreadInsertList(v10, a4, (_QWORD *)(v10 + 808), (__int64)a4);
    if ( (WORD2(xmmword_140FC6B50) & 0x1000) != 0 && v33 )
      EtwTraceAutoBoostSetFloor(
        v10,
        *(_DWORD *)v9 & 0xFFFFFFFC,
        (unsigned __int8)v17,
        BYTE1(v33),
        SBYTE2(v33),
        v37,
        v11,
        v38,
        v32,
        v34);
  }
}
