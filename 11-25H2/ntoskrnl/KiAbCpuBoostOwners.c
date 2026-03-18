/*
 * XREFs of KiAbCpuBoostOwners @ 0x1402E72F0
 * Callers:
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14041A848 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x1402E4A70 (PsBoostThreadIoQoS.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402E5690 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbThreadInsertList @ 0x1402E5880 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402E5E60 (KiAbQueueAutoBoostDpc.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402E9E70 (KiAbSetMinimumThreadPriority.c)
 *     PsBoostThreadIoEx @ 0x1402EA7E0 (PsBoostThreadIoEx.c)
 *     EtwTraceAutoBoostSetFloor @ 0x140311D9C (EtwTraceAutoBoostSetFloor.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

void __fastcall KiAbCpuBoostOwners(__int64 a1, unsigned __int8 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned __int64 j; // rbx
  int v6; // esi
  _QWORD *v7; // r13
  ULONG_PTR v10; // rbx
  unsigned int v11; // r15d
  int v12; // r15d
  __int64 v13; // rax
  int v14; // eax
  bool v15; // zf
  int v16; // ebp
  char v17; // al
  unsigned int *v18; // r12
  unsigned int v19; // edx
  __int64 v20; // rcx
  ULONG_PTR v21; // r13
  unsigned int v22; // edi
  char v23; // al
  unsigned __int64 v24; // rcx
  _QWORD **v25; // rax
  _QWORD *i; // rax
  _DWORD *v27; // rdi
  int v28; // ecx
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  signed __int32 v32[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v33; // [rsp+40h] [rbp-68h]
  char v34; // [rsp+50h] [rbp-58h]
  int v35; // [rsp+54h] [rbp-54h]
  int v36; // [rsp+58h] [rbp-50h] BYREF
  int v37; // [rsp+5Ch] [rbp-4Ch] BYREF
  unsigned __int8 v38; // [rsp+B0h] [rbp+8h]
  char v39; // [rsp+B8h] [rbp+10h]

  j = *(_QWORD *)(a1 + 48);
  v6 = 0;
  v7 = a4;
  v37 = a2;
  v36 = 0;
  if ( j )
  {
    do
    {
      if ( *(_BYTE *)(j + 24) >= a2 )
        break;
      KiAbSetMinimumThreadPriority(j - 16, (unsigned int)&v37, a3, (_DWORD)v7, (__int64)a5, (__int64)&v36);
      *(_BYTE *)(j + 24) = a2;
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
    v6 = 0;
  }
  if ( !*(_BYTE *)(a1 + 9) )
  {
    v10 = *(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16);
    v11 = *(_DWORD *)(v10 + 1440);
    v34 = *(_BYTE *)(v10 + 195);
    v12 = (v11 >> 9) & 7;
    v13 = *(_QWORD *)(*(_QWORD *)(v10 + 544) + 672LL);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 1084);
      if ( v12 >= v14 )
        v12 = v14;
    }
    if ( v12 < 2 && *(_DWORD *)(v10 + 1504) )
      LOBYTE(v12) = 2;
    if ( !*(_DWORD *)(v10 + 1512) || (v39 = 0, *(_DWORD *)(v10 + 1508)) )
      v39 = 1;
    v15 = (*(_BYTE *)(a1 + 11) & 1) == 0;
    v16 = 0;
    v35 = 0;
    v36 = 0;
    if ( v15 )
    {
      v17 = *(_BYTE *)(a1 + 40);
    }
    else if ( *(_BYTE *)(a1 + 9) )
    {
      v17 = *(_BYTE *)(*(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16) + 195LL);
      if ( v17 > 30 )
        v17 = 30;
    }
    else
    {
      v17 = KiAbOwnerComputeCpuPriorityKey(a1);
    }
    v18 = (unsigned int *)(a1 + 80);
    v38 = v37;
    if ( v17 >= (char)v37 )
    {
      v38 = v35;
    }
    else
    {
      v19 = *v18;
      v20 = (unsigned int)((char)v37 - 1);
      LOBYTE(v35) = v37;
      v21 = (char)v37;
      v22 = 0;
      *v18 = v19 & 0xC0000000 ^ (v19 | (1 << (v37 - 1))) & 0x3FFFFFFF;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 64), 0LL) )
      {
        do
        {
          if ( (++v22 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20) )
          {
            HvlNotifyLongSpinWait(v22);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v10 + 64) );
      }
      v23 = *(_BYTE *)(v10 + v21 + 824);
      if ( v23 == -1 )
        KeBugCheckEx(0x157u, v10, v21, 1uLL, 0LL);
      *(_BYTE *)(v10 + v21 + 824) = v23 + 1;
      *(_DWORD *)(v10 + 856) |= 1 << v21;
      if ( *(char *)(v10 + 195) < (int)v21 )
      {
        KiSetPriorityThread(v10, a3, v21);
        v16 = 1;
      }
      v7 = a4;
      *(_QWORD *)(v10 + 64) = 0LL;
    }
    v27 = (_DWORD *)(a1 + 80);
    v28 = (*(_DWORD *)(v10 + 1440) >> 9) & 7;
    v29 = *(_QWORD *)(*(_QWORD *)(v10 + 544) + 672LL);
    if ( v29 )
    {
      v30 = *(_DWORD *)(v29 + 1084);
      if ( v28 >= v30 )
      {
        v28 = v30;
        v27 = (_DWORD *)(a1 + 80);
      }
    }
    if ( v28 < SBYTE1(v37) && (*v18 & 0x40000000) == 0 )
    {
      PsBoostThreadIoEx(v10, 0LL, 0LL, 0LL);
      _InterlockedOr(v32, 0);
      if ( *(_DWORD *)(v10 + 860) )
      {
LABEL_60:
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 860));
        *v27 |= 0x40000000u;
        v16 = 1;
        BYTE1(v35) = 2;
        goto LABEL_49;
      }
      if ( !a5 )
      {
        v36 = 1;
        goto LABEL_60;
      }
      LOBYTE(v31) = 1;
      PsBoostThreadIoEx(v10, v31, 0LL, 0LL);
      if ( (unsigned int)KiAbThreadInsertList(v10, a5, (_QWORD *)(v10 + 816)) )
        KiAbQueueAutoBoostDpc((struct _KDPC *)(a5 - 4654));
    }
LABEL_49:
    LOBYTE(v6) = *(_DWORD *)(v10 + 1512) == 0;
    if ( v6 < SBYTE2(v37) && *(int *)(a1 + 80) >= 0 )
    {
      PsBoostThreadIoQoS(v10, 0);
      _InterlockedOr(v32, 0);
      if ( !*(_DWORD *)(v10 + 864) )
      {
        if ( a5 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(v10 + 1508));
          if ( (unsigned int)KiAbThreadInsertList(v10, a5, (_QWORD *)(v10 + 816)) )
            KiAbQueueAutoBoostDpc((struct _KDPC *)(a5 - 4654));
          goto LABEL_50;
        }
        v36 |= 2u;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 864));
      *(_DWORD *)(a1 + 80) |= 0x80000000;
      v16 = 1;
      BYTE2(v35) = 1;
    }
LABEL_50:
    if ( v7 && v16 && *(_BYTE *)(v10 + 792) )
      KiAbThreadInsertList(v10, v7, (_QWORD *)(v10 + 808));
    if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 && v35 )
      EtwTraceAutoBoostSetFloor(v10, *(_DWORD *)a1 & 0xFFFFFFFC, v38, BYTE1(v35), SBYTE2(v35), v34, v12, v39, v33, v36);
  }
}
