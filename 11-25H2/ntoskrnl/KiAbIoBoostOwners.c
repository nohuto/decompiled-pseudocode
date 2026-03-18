/*
 * XREFs of KiAbIoBoostOwners @ 0x1402E61E0
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

char __fastcall KiAbIoBoostOwners(__int64 a1, char a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *j; // rbx
  int v6; // esi
  char v7; // al
  _QWORD *i; // rax
  int v9; // r10d
  __int64 v10; // r14
  ULONG_PTR v11; // rbx
  unsigned int v12; // r15d
  int v13; // r15d
  __int64 v14; // rax
  int v15; // eax
  bool v16; // zf
  int v17; // ebp
  char v18; // al
  unsigned int *v19; // r12
  unsigned int v20; // edx
  __int64 v21; // rcx
  ULONG_PTR v22; // r13
  unsigned int v23; // edi
  char v24; // al
  _DWORD *v25; // rdi
  int v26; // ecx
  __int64 v27; // rax
  int v28; // eax
  _QWORD *v29; // rdi
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  signed __int32 v33[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v34; // [rsp+40h] [rbp-68h]
  char v35; // [rsp+50h] [rbp-58h]
  int v36; // [rsp+54h] [rbp-54h] BYREF
  int v37; // [rsp+58h] [rbp-50h]
  int v38[3]; // [rsp+5Ch] [rbp-4Ch] BYREF
  char v40; // [rsp+B8h] [rbp+10h]

  j = *(_QWORD **)(a1 + 48);
  v6 = 0;
  v36 = 0;
  v7 = 0;
  if ( (a2 & 1) != 0 )
    v7 = 2;
  v38[0] = 0;
  BYTE1(v36) = v7;
  LOBYTE(i) = BYTE2(v36);
  v9 = 1;
  if ( (a2 & 2) != 0 )
    LOBYTE(i) = 1;
  v10 = a1;
  BYTE2(v36) = (_BYTE)i;
  if ( j )
  {
    do
    {
      KiAbSetMinimumThreadPriority((_DWORD)j - 16, (unsigned int)&v36, a3, (_DWORD)a4, (__int64)a5, (__int64)v38);
      i = (_QWORD *)j[1];
      v31 = j;
      if ( i )
      {
        j = (_QWORD *)j[1];
        for ( i = (_QWORD *)*i; i; i = (_QWORD *)*i )
          j = i;
      }
      else
      {
        for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
        {
          if ( (_QWORD *)*j == v31 )
            break;
          v31 = j;
        }
      }
    }
    while ( j );
    v10 = a1;
    v9 = 1;
    v6 = 0;
  }
  if ( !*(_BYTE *)(v10 + 9) )
  {
    v11 = *(_QWORD *)(v10 - 88LL * (*(_BYTE *)(v10 + 8) & 0x3F) - 16);
    v12 = *(_DWORD *)(v11 + 1440);
    v35 = *(_BYTE *)(v11 + 195);
    v13 = (v12 >> 9) & 7;
    v14 = *(_QWORD *)(*(_QWORD *)(v11 + 544) + 672LL);
    if ( v14 )
    {
      v15 = *(_DWORD *)(v14 + 1084);
      if ( v13 >= v15 )
        v13 = v15;
    }
    if ( v13 < 2 && *(_DWORD *)(v11 + 1504) )
      LOBYTE(v13) = 2;
    if ( !*(_DWORD *)(v11 + 1512) || (v40 = 0, *(_DWORD *)(v11 + 1508)) )
      v40 = 1;
    v16 = (*(_BYTE *)(v10 + 11) & 1) == 0;
    v17 = 0;
    v37 = 0;
    v38[0] = 0;
    if ( v16 )
    {
      v18 = *(_BYTE *)(v10 + 40);
    }
    else if ( *(_BYTE *)(v10 + 9) )
    {
      v18 = *(_BYTE *)(*(_QWORD *)(v10 - 88LL * (*(_BYTE *)(v10 + 8) & 0x3F) - 16) + 195LL);
      if ( v18 > 30 )
        v18 = 30;
    }
    else
    {
      v18 = KiAbOwnerComputeCpuPriorityKey(v10);
    }
    v19 = (unsigned int *)(v10 + 80);
    if ( v18 >= (char)v36 )
    {
      LOBYTE(v22) = v37;
    }
    else
    {
      v20 = *v19;
      v21 = (unsigned int)((char)v36 - 1);
      LOBYTE(v37) = v36;
      v22 = (char)v36;
      v23 = 0;
      *v19 = v20 & 0xC0000000 ^ (v20 | (v9 << (v36 - 1))) & 0x3FFFFFFF;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 64), 0LL) )
      {
        do
        {
          if ( (++v23 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v21) )
          {
            HvlNotifyLongSpinWait(v23);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v11 + 64) );
      }
      v24 = *(_BYTE *)(v11 + v22 + 824);
      if ( v24 == -1 )
        KeBugCheckEx(0x157u, v11, v22, 1uLL, 0LL);
      *(_BYTE *)(v11 + v22 + 824) = v24 + 1;
      *(_DWORD *)(v11 + 856) |= 1 << v22;
      if ( *(char *)(v11 + 195) < (int)v22 )
      {
        KiSetPriorityThread(v11, a3, v22);
        v17 = 1;
      }
      *(_QWORD *)(v11 + 64) = 0LL;
    }
    v25 = (_DWORD *)(v10 + 80);
    v26 = (*(_DWORD *)(v11 + 1440) >> 9) & 7;
    v27 = *(_QWORD *)(*(_QWORD *)(v11 + 544) + 672LL);
    if ( v27 )
    {
      v28 = *(_DWORD *)(v27 + 1084);
      if ( v26 >= v28 )
      {
        v26 = v28;
        v25 = (_DWORD *)(v10 + 80);
      }
    }
    if ( v26 < SBYTE1(v36) && (*v19 & 0x40000000) == 0 )
    {
      PsBoostThreadIoEx(v11, 0LL, 0LL, 0LL);
      _InterlockedOr(v33, 0);
      if ( !*(_DWORD *)(v11 + 860) )
      {
        if ( a5 )
        {
          LOBYTE(v30) = 1;
          PsBoostThreadIoEx(v11, v30, 0LL, 0LL);
          v29 = a5;
          if ( (unsigned int)KiAbThreadInsertList(v11, a5, (_QWORD *)(v11 + 816)) )
            KiAbQueueAutoBoostDpc((struct _KDPC *)(a5 - 4654));
LABEL_44:
          LOBYTE(i) = BYTE2(v36);
          LOBYTE(v6) = *(_DWORD *)(v11 + 1512) == 0;
          if ( v6 < SBYTE2(v36) && *(int *)(v10 + 80) >= 0 )
          {
            PsBoostThreadIoQoS(v11, 0);
            _InterlockedOr(v33, 0);
            LODWORD(i) = *(_DWORD *)(v11 + 864);
            if ( !(_DWORD)i )
            {
              if ( v29 )
              {
                _InterlockedDecrement((volatile signed __int32 *)(v11 + 1508));
                LODWORD(i) = KiAbThreadInsertList(v11, v29, (_QWORD *)(v11 + 816));
                if ( (_DWORD)i )
                  LOBYTE(i) = KiAbQueueAutoBoostDpc((struct _KDPC *)(v29 - 4654));
                goto LABEL_45;
              }
              v38[0] |= 2u;
            }
            _InterlockedIncrement((volatile signed __int32 *)(v11 + 864));
            *(_DWORD *)(v10 + 80) |= 0x80000000;
            v17 = 1;
            BYTE2(v37) = 1;
          }
LABEL_45:
          if ( a4 )
          {
            if ( v17 )
            {
              LOBYTE(i) = *(_BYTE *)(v11 + 792);
              if ( (_BYTE)i )
                LOBYTE(i) = KiAbThreadInsertList(v11, a4, (_QWORD *)(v11 + 808));
            }
          }
          if ( (WORD2(xmmword_140FC5B10) & 0x1000) != 0 && v37 )
            LOBYTE(i) = EtwTraceAutoBoostSetFloor(
                          v11,
                          *(_DWORD *)v10 & 0xFFFFFFFC,
                          (unsigned __int8)v22,
                          BYTE1(v37),
                          SBYTE2(v37),
                          v35,
                          v13,
                          v40,
                          v34,
                          v38[0]);
          return (char)i;
        }
        v38[0] = 1;
      }
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 860));
      *v25 |= 0x40000000u;
      v17 = 1;
      BYTE1(v37) = 2;
    }
    v29 = a5;
    goto LABEL_44;
  }
  return (char)i;
}
