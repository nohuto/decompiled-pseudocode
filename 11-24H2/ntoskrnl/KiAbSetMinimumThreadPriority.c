/*
 * XREFs of KiAbSetMinimumThreadPriority @ 0x14027EB30
 * Callers:
 *     KiAbIoBoostOwners @ 0x14027F070 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14027F900 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14027E3A0 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x14027E9B0 (PsBoostThreadIoQoS.c)
 *     KiAbThreadInsertList @ 0x14027EA80 (KiAbThreadInsertList.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x140282120 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbQueueAutoBoostDpc @ 0x140284100 (KiAbQueueAutoBoostDpc.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     EtwTraceAutoBoostSetFloor @ 0x1403C10AC (EtwTraceAutoBoostSetFloor.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
  _DWORD *v18; // r9
  int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // esi
  int v22; // eax
  __int64 v23; // rdx
  char v24; // al
  _DWORD *v25; // rsi
  int v26; // ecx
  __int64 v27; // rdx
  _BOOL8 v28; // rcx
  _QWORD *v30; // r14
  int v31; // r15d
  unsigned int v32; // esi
  __int64 v33; // r9
  signed __int32 v34[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v35; // [rsp+40h] [rbp-68h]
  char v36; // [rsp+50h] [rbp-58h]
  int v37; // [rsp+54h] [rbp-54h]
  _DWORD *v38; // [rsp+58h] [rbp-50h]
  char v40; // [rsp+B8h] [rbp+10h]

  v7 = a1;
  v8 = *(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16);
  v9 = *(_DWORD *)(v8 + 1440);
  v36 = *(_BYTE *)(v8 + 195);
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
  if ( !*(_DWORD *)(v8 + 1512) || (v40 = 0, *(_DWORD *)(v8 + 1508)) )
    v40 = 1;
  v13 = 0;
  v14 = (*(_BYTE *)(a1 + 11) & 1) == 0;
  v15 = 0;
  v37 = 0;
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
  v18 = (_DWORD *)(v7 + 80);
  if ( v16 >= (char)v17 )
  {
    LOBYTE(v17) = v37;
  }
  else
  {
    v19 = *v18;
    v20 = (unsigned int)(v17 - 1);
    v38 = (_DWORD *)(v7 + 80);
    v21 = 0;
    LOBYTE(v37) = v17;
    v22 = (v19 | (1 << (v17 - 1))) & 0x3FFFFFFF;
    v23 = v19 & 0xC0000000;
    *v18 = v23 ^ v22;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
    {
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v20, v23, v7, v18) )
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
    v24 = *(_BYTE *)(v8 + v17 + 824);
    if ( v24 == -1 )
      KeBugCheckEx(0x157u, v8, v17, 1uLL, 0LL);
    *(_BYTE *)(v8 + v17 + 824) = v24 + 1;
    *(_DWORD *)(v8 + 856) |= 1 << v17;
    if ( *(char *)(v8 + 195) < (int)v17 )
    {
      KiSetPriorityThread(v8, a3);
      v15 = 1;
    }
    v7 = a1;
    v18 = v38;
    *(_QWORD *)(v8 + 64) = 0LL;
  }
  v25 = v18;
  v26 = (*(_DWORD *)(v8 + 1440) >> 9) & 7;
  v27 = *(_QWORD *)(*(_QWORD *)(v8 + 544) + 672LL);
  if ( v27 && v26 >= *(_DWORD *)(v27 + 1084) )
  {
    v26 = *(_DWORD *)(v27 + 1084);
    v25 = (_DWORD *)(v7 + 80);
  }
  if ( v26 < a2[1] && (*v18 & 0x40000000) == 0 )
  {
    PsBoostThreadIoEx(v8, 0, 0, 0LL);
    _InterlockedOr(v34, 0);
    if ( *(_DWORD *)(v8 + 860) )
    {
LABEL_57:
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 860));
      *v25 |= 0x40000000u;
      v15 = 1;
      BYTE1(v37) = 2;
      goto LABEL_37;
    }
    if ( !a5 )
    {
      *a6 |= 1u;
      goto LABEL_57;
    }
    PsBoostThreadIoEx(v8, 1, 0, 0LL);
    if ( (unsigned int)KiAbThreadInsertList(v8, a5, (_QWORD *)(v8 + 816), v33) )
      KiAbQueueAutoBoostDpc(a5 - 4654);
  }
LABEL_37:
  v28 = *(_DWORD *)(v8 + 1512) == 0;
  if ( v28 < a2[2] && *(int *)(a1 + 80) >= 0 )
  {
    PsBoostThreadIoQoS(v8, 0);
    _InterlockedOr(v34, 0);
    if ( *(_DWORD *)(v8 + 864) )
    {
LABEL_62:
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 864));
      *(_DWORD *)(a1 + 80) |= 0x80000000;
      v15 = 1;
      BYTE2(v37) = 1;
      goto LABEL_38;
    }
    if ( !a5 )
    {
      *a6 |= 2u;
      goto LABEL_62;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 1508));
    if ( (unsigned int)KiAbThreadInsertList(v8, a5, (_QWORD *)(v8 + 816), (__int64)v18) )
      KiAbQueueAutoBoostDpc(a5 - 4654);
  }
LABEL_38:
  if ( a4 && v15 && *(_BYTE *)(v8 + 792) )
  {
    v30 = (_QWORD *)(v8 + 808);
    v31 = 0;
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
    {
      do
      {
        if ( (++v32 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v28, v27, v7, v18) )
        {
          HvlNotifyLongSpinWait(v32);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v8 + 64) );
    }
    if ( *v30 == 1LL )
    {
      v31 = 1;
      *v30 = *a4;
      *a4 = v30;
    }
    *(_QWORD *)(v8 + 64) = 0LL;
    if ( v31 )
      _InterlockedIncrement16((volatile signed __int16 *)(v8 + 868));
  }
  if ( (WORD2(xmmword_140FC6B50) & 0x1000) != 0 && v37 )
    EtwTraceAutoBoostSetFloor(
      v8,
      *(_DWORD *)a1 & 0xFFFFFFFC,
      (unsigned __int8)v17,
      BYTE1(v37),
      SBYTE2(v37),
      v36,
      v10,
      v40,
      v35,
      *a6);
  LOBYTE(v13) = (_BYTE)v17 != 0;
  return v13;
}
