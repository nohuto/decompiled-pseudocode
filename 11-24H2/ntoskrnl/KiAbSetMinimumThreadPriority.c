/*
 * XREFs of KiAbSetMinimumThreadPriority @ 0x14024E520
 * Callers:
 *     KiAbIoBoostOwners @ 0x14024EA60 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14024F2F0 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x1402509C0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140253050 (KiAbDeferredProcessingWorker.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14024DD90 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14024E3A0 (PsBoostThreadIoQoS.c)
 *     KiAbThreadInsertList @ 0x14024E470 (KiAbThreadInsertList.c)
 *     KiSetPriorityThread @ 0x14024FBBC (KiSetPriorityThread.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140251B10 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbQueueAutoBoostDpc @ 0x140253AF0 (KiAbQueueAutoBoostDpc.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceAutoBoostSetFloor @ 0x140478FC8 (EtwTraceAutoBoostSetFloor.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

__int64 __fastcall KiAbSetMinimumThreadPriority(__int64 a1, char *a2, __int64 a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  __int64 v7; // r8
  ULONG_PTR v8; // rbx
  unsigned int v9; // ebp
  int v10; // ebp
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // edi
  bool v14; // zf
  int v15; // r15d
  char v16; // al
  ULONG_PTR v17; // r13
  unsigned int *v18; // r9
  unsigned int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // esi
  char v22; // al
  unsigned int *v23; // rsi
  int v24; // ecx
  __int64 v25; // rdx
  _BOOL8 v26; // rcx
  _QWORD *v28; // r14
  int v29; // r15d
  unsigned int v30; // esi
  signed __int32 v31[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v32; // [rsp+40h] [rbp-68h]
  char v33; // [rsp+50h] [rbp-58h]
  int v34; // [rsp+54h] [rbp-54h]
  unsigned int *v35; // [rsp+58h] [rbp-50h]
  char v37; // [rsp+B8h] [rbp+10h]

  v7 = a1;
  v8 = *(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16);
  v9 = *(_DWORD *)(v8 + 1440);
  v33 = *(_BYTE *)(v8 + 195);
  v10 = (v9 >> 9) & 7;
  v11 = *(_QWORD *)(*(_QWORD *)(v8 + 544) + 672LL);
  if ( v11 )
  {
    v12 = *(_DWORD *)(v11 + 1084);
    if ( v10 >= v12 )
      v10 = v12;
  }
  if ( v10 < 2 && *(_DWORD *)(v8 + 1504) )
    LOBYTE(v10) = 2;
  if ( !*(_DWORD *)(v8 + 1512) || (v37 = 0, *(_DWORD *)(v8 + 1508)) )
    v37 = 1;
  v13 = 0;
  v14 = (*(_BYTE *)(a1 + 11) & 1) == 0;
  v15 = 0;
  v34 = 0;
  *a6 = 0;
  if ( v14 )
  {
    v16 = *(_BYTE *)(a1 + 40);
  }
  else if ( *(_BYTE *)(a1 + 9) )
  {
    v16 = *(_BYTE *)(*(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16) + 195LL);
    if ( v16 > 30 )
      v16 = 30;
  }
  else
  {
    v16 = KiAbOwnerComputeCpuPriorityKey(a1, a2, a1);
    v7 = a1;
  }
  v17 = *a2;
  v18 = (unsigned int *)(v7 + 80);
  if ( v16 >= (char)v17 )
  {
    LOBYTE(v17) = v34;
  }
  else
  {
    v19 = *v18;
    v20 = (unsigned int)(v17 - 1);
    v35 = (unsigned int *)(v7 + 80);
    v21 = 0;
    LOBYTE(v34) = v17;
    *v18 = v19 & 0xC0000000 ^ (v19 | (1 << (v17 - 1))) & 0x3FFFFFFF;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
    {
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20) )
        {
          HvlNotifyLongSpinWait(v21);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v8 + 64) );
    }
    v22 = *(_BYTE *)(v8 + v17 + 824);
    if ( v22 == -1 )
      KeBugCheckEx(0x157u, v8, v17, 1uLL, 0LL);
    *(_BYTE *)(v8 + v17 + 824) = v22 + 1;
    *(_DWORD *)(v8 + 856) |= 1 << v17;
    if ( *(char *)(v8 + 195) < (int)v17 )
    {
      KiSetPriorityThread(v8, a3, v17);
      v15 = 1;
    }
    v7 = a1;
    v18 = v35;
    *(_QWORD *)(v8 + 64) = 0LL;
  }
  v23 = v18;
  v24 = (*(_DWORD *)(v8 + 1440) >> 9) & 7;
  v25 = *(_QWORD *)(*(_QWORD *)(v8 + 544) + 672LL);
  if ( v25 && v24 >= *(_DWORD *)(v25 + 1084) )
  {
    v24 = *(_DWORD *)(v25 + 1084);
    v23 = (unsigned int *)(v7 + 80);
  }
  if ( v24 < a2[1] && (*v18 & 0x40000000) == 0 )
  {
    PsBoostThreadIoEx(v8, 0, 0LL, 0LL);
    _InterlockedOr(v31, 0);
    if ( *(_DWORD *)(v8 + 860) )
    {
LABEL_57:
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 860));
      *v23 |= 0x40000000u;
      v15 = 1;
      BYTE1(v34) = 2;
      goto LABEL_37;
    }
    if ( !a5 )
    {
      *a6 |= 1u;
      goto LABEL_57;
    }
    PsBoostThreadIoEx(v8, 1, 0LL, 0LL);
    if ( (unsigned int)KiAbThreadInsertList(v8, a5, (_QWORD *)(v8 + 816)) )
      KiAbQueueAutoBoostDpc(a5 - 4654);
  }
LABEL_37:
  v26 = *(_DWORD *)(v8 + 1512) == 0;
  if ( v26 < a2[2] && *(int *)(a1 + 80) >= 0 )
  {
    PsBoostThreadIoQoS(v8, 0, v7);
    _InterlockedOr(v31, 0);
    if ( *(_DWORD *)(v8 + 864) )
    {
LABEL_62:
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 864));
      *(_DWORD *)(a1 + 80) |= 0x80000000;
      v15 = 1;
      BYTE2(v34) = 1;
      goto LABEL_38;
    }
    if ( !a5 )
    {
      *a6 |= 2u;
      goto LABEL_62;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 1508));
    if ( (unsigned int)KiAbThreadInsertList(v8, a5, (_QWORD *)(v8 + 816)) )
      KiAbQueueAutoBoostDpc(a5 - 4654);
  }
LABEL_38:
  if ( a4 && v15 && *(_BYTE *)(v8 + 792) )
  {
    v28 = (_QWORD *)(v8 + 808);
    v29 = 0;
    v30 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
    {
      do
      {
        if ( (++v30 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26) )
        {
          HvlNotifyLongSpinWait(v30);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v8 + 64) );
    }
    if ( *v28 == 1LL )
    {
      v29 = 1;
      *v28 = *a4;
      *a4 = v28;
    }
    *(_QWORD *)(v8 + 64) = 0LL;
    if ( v29 )
      _InterlockedIncrement16((volatile signed __int16 *)(v8 + 868));
  }
  if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 && v34 )
    EtwTraceAutoBoostSetFloor(
      v8,
      *(_DWORD *)a1 & 0xFFFFFFFC,
      (unsigned __int8)v17,
      BYTE1(v34),
      SBYTE2(v34),
      v33,
      v10,
      v37,
      v32,
      *a6);
  LOBYTE(v13) = (_BYTE)v17 != 0;
  return v13;
}
