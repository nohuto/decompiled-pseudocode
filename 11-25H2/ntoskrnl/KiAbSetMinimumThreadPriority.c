/*
 * XREFs of KiAbSetMinimumThreadPriority @ 0x1402E9E70
 * Callers:
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     KiAbIoBoostOwners @ 0x1402E61E0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1402E72F0 (KiAbCpuBoostOwners.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x1402E4A70 (PsBoostThreadIoQoS.c)
 *     KiAbOwnerComputeCpuPriorityKey @ 0x1402E5690 (KiAbOwnerComputeCpuPriorityKey.c)
 *     KiAbThreadInsertList @ 0x1402E5880 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402E5E60 (KiAbQueueAutoBoostDpc.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     PsBoostThreadIoEx @ 0x1402EA7E0 (PsBoostThreadIoEx.c)
 *     EtwTraceAutoBoostSetFloor @ 0x140311D9C (EtwTraceAutoBoostSetFloor.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall KiAbSetMinimumThreadPriority(__int64 a1, char *a2, __int64 a3, _QWORD *a4, _QWORD *a5, _DWORD *a6)
{
  char *v6; // r14
  ULONG_PTR v8; // rbx
  unsigned int v9; // r15d
  int v10; // r15d
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // esi
  bool v14; // zf
  int v15; // ebp
  char v16; // al
  ULONG_PTR v17; // r9
  unsigned int *v18; // r13
  unsigned int v19; // edx
  __int64 v20; // rcx
  ULONG_PTR v21; // r14
  unsigned int v22; // edi
  char v23; // al
  _DWORD *v24; // rdi
  int v25; // ecx
  __int64 v26; // rax
  int v27; // eax
  _BOOL8 v28; // rcx
  unsigned __int8 v29; // di
  _QWORD *v31; // r14
  int v32; // ebp
  unsigned int v33; // edi
  __int64 v34; // rdx
  signed __int32 v35[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v36; // [rsp+40h] [rbp-68h]
  char v37; // [rsp+50h] [rbp-58h]
  char v38; // [rsp+51h] [rbp-57h]
  int v39; // [rsp+54h] [rbp-54h]
  unsigned __int8 v40; // [rsp+B0h] [rbp+8h]

  v6 = a2;
  v8 = *(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16);
  v9 = *(_DWORD *)(v8 + 1440);
  v38 = *(_BYTE *)(v8 + 195);
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
  if ( !*(_DWORD *)(v8 + 1512) || (v14 = *(_DWORD *)(v8 + 1508) == 0, v37 = 0, !v14) )
    v37 = 1;
  v13 = 0;
  v14 = (*(_BYTE *)(a1 + 11) & 1) == 0;
  v15 = 0;
  v39 = 0;
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
    v16 = KiAbOwnerComputeCpuPriorityKey(a1);
  }
  v17 = *v6;
  v18 = (unsigned int *)(a1 + 80);
  v40 = v17;
  if ( v16 >= (char)v17 )
  {
    v40 = v39;
  }
  else
  {
    v19 = *v18;
    v20 = (unsigned int)(v17 - 1);
    LOBYTE(v39) = *v6;
    v21 = v17;
    v22 = 0;
    *v18 = v19 & 0xC0000000 ^ (v19 | (1 << (v17 - 1))) & 0x3FFFFFFF;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
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
      while ( *(_QWORD *)(v8 + 64) );
    }
    v23 = *(_BYTE *)(v21 + v8 + 824);
    if ( v23 == -1 )
      KeBugCheckEx(0x157u, v8, v21, 1uLL, 0LL);
    *(_BYTE *)(v21 + v8 + 824) = v23 + 1;
    *(_DWORD *)(v8 + 856) |= 1 << v21;
    if ( *(char *)(v8 + 195) < (int)v21 )
    {
      KiSetPriorityThread((_BYTE *)v8, a3, v21);
      v15 = 1;
    }
    v6 = a2;
    *(_QWORD *)(v8 + 64) = 0LL;
  }
  v24 = (_DWORD *)(a1 + 80);
  v25 = (*(_DWORD *)(v8 + 1440) >> 9) & 7;
  v26 = *(_QWORD *)(*(_QWORD *)(v8 + 544) + 672LL);
  if ( v26 )
  {
    v27 = *(_DWORD *)(v26 + 1084);
    if ( v25 >= v27 )
    {
      v25 = v27;
      v24 = (_DWORD *)(a1 + 80);
    }
  }
  if ( v25 < v6[1] && (*v18 & 0x40000000) == 0 )
  {
    PsBoostThreadIoEx(v8, 0LL, 0LL, 0LL);
    _InterlockedOr(v35, 0);
    if ( *(_DWORD *)(v8 + 860) )
    {
LABEL_58:
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 860));
      *v24 |= 0x40000000u;
      v15 = 1;
      BYTE1(v39) = 2;
      goto LABEL_37;
    }
    if ( !a5 )
    {
      *a6 |= 1u;
      goto LABEL_58;
    }
    LOBYTE(v34) = 1;
    PsBoostThreadIoEx(v8, v34, 0LL, 0LL);
    if ( (unsigned int)KiAbThreadInsertList(v8, a5, (_QWORD *)(v8 + 816)) )
      KiAbQueueAutoBoostDpc((struct _KDPC *)(a5 - 4654));
  }
LABEL_37:
  v28 = *(_DWORD *)(v8 + 1512) == 0;
  if ( v28 < a2[2] && *(int *)(a1 + 80) >= 0 )
  {
    PsBoostThreadIoQoS(v8, 0);
    _InterlockedOr(v35, 0);
    if ( *(_DWORD *)(v8 + 864) )
    {
LABEL_63:
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 864));
      *(_DWORD *)(a1 + 80) |= 0x80000000;
      v15 = 1;
      BYTE2(v39) = 1;
      goto LABEL_38;
    }
    if ( !a5 )
    {
      *a6 |= 2u;
      goto LABEL_63;
    }
    _InterlockedDecrement((volatile signed __int32 *)(v8 + 1508));
    if ( (unsigned int)KiAbThreadInsertList(v8, a5, (_QWORD *)(v8 + 816)) )
      KiAbQueueAutoBoostDpc((struct _KDPC *)(a5 - 4654));
  }
LABEL_38:
  if ( a4 && v15 && *(_BYTE *)(v8 + 792) )
  {
    v31 = (_QWORD *)(v8 + 808);
    v32 = 0;
    v33 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 64), 0LL) )
    {
      do
      {
        if ( (++v33 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v28) )
        {
          HvlNotifyLongSpinWait(v33);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v8 + 64) );
    }
    if ( *v31 == 1LL )
    {
      v32 = 1;
      *v31 = *a4;
      *a4 = v31;
    }
    *(_QWORD *)(v8 + 64) = 0LL;
    if ( v32 )
      _InterlockedIncrement16((volatile signed __int16 *)(v8 + 868));
  }
  if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 && v39 )
  {
    v29 = v40;
    EtwTraceAutoBoostSetFloor(v8, *(_DWORD *)a1 & 0xFFFFFFFC, v40, BYTE1(v39), SBYTE2(v39), v38, v10, v37, v36, *a6);
  }
  else
  {
    v29 = v40;
  }
  LOBYTE(v13) = v29 != 0;
  return v13;
}
