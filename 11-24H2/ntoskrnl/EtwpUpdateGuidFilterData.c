/*
 * XREFs of EtwpUpdateGuidFilterData @ 0x1409E8008
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140837F48 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1409E7D3C (EtwpUpdateGuidEnableInfo.c)
 * Callees:
 *     KeGenericCallDpc @ 0x14048F660 (KeGenericCallDpc.c)
 *     EtwpUpdateEventFilterAndFree @ 0x1406F5BB4 (EtwpUpdateEventFilterAndFree.c)
 *     EtwpFreeEventNameFilter @ 0x1409E8490 (EtwpFreeEventNameFilter.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpUpdateGuidFilterData(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int32 v4; // r14d
  unsigned int v5; // ebx
  __int64 v7; // rdi
  __int64 v8; // rcx
  void *v10; // r13
  void *v11; // r12
  char v12; // cl
  __int64 v14; // rbp
  __int32 v15; // edi
  __int64 *v16; // rdx
  unsigned int v17; // edi
  __int64 Pool2; // rax
  PVOID P; // [rsp+20h] [rbp-48h]
  PVOID v20; // [rsp+28h] [rbp-40h]
  PVOID v21; // [rsp+70h] [rbp+8h]
  PVOID v23; // [rsp+88h] [rbp+20h]

  v4 = *(_DWORD *)a4;
  v5 = 0;
  v7 = a2;
  v8 = *(_QWORD *)(a1 + 640);
  v20 = 0LL;
  v10 = 0LL;
  P = 0LL;
  v11 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  if ( v8 )
    goto LABEL_7;
  v12 = 1;
  if ( v4 )
    v12 = a3;
  if ( v12 )
    return 0LL;
  Pool2 = ExAllocatePool2(0x40uLL, 0x680uLL, 0x46777445u);
  v8 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(a1 + 640) = Pool2;
LABEL_7:
    v14 = 104 * v7;
    v15 = _InterlockedExchange((volatile __int32 *)(v8 + 104 * v7), 0);
    if ( (v15 & 0x80000004) == 0x80000004 || (v4 & 0x80000004) == 0x80000004 )
      EtwpUpdateEventFilterAndFree((volatile __int64 *)(v14 + *(_QWORD *)(a1 + 640) + 8LL), (__int64 *)(a4 + 8));
    if ( (v15 & 0x80000008) == 0x80000008 || (v4 & 0x80000008) == 0x80000008 )
      EtwpUpdateEventFilterAndFree((volatile __int64 *)(v14 + *(_QWORD *)(a1 + 640) + 16LL), (__int64 *)(a4 + 16));
    if ( (v15 & 0x80000010) == 0x80000010 || (v4 & 0x80000010) == 0x80000010 )
      EtwpUpdateEventFilterAndFree((volatile __int64 *)(v14 + *(_QWORD *)(a1 + 640) + 24LL), (__int64 *)(a4 + 24));
    if ( (v15 & 0x80000020) == 0x80000020 || (v4 & 0x80000020) == 0x80000020 )
      EtwpUpdateEventFilterAndFree((volatile __int64 *)(v14 + *(_QWORD *)(a1 + 640) + 32LL), (__int64 *)(a4 + 32));
    if ( (v15 & 0x80008000) == 0x80008000 || (v4 & 0x80008000) == 0x80008000 )
      EtwpUpdateEventFilterAndFree((volatile __int64 *)(v14 + *(_QWORD *)(a1 + 640) + 40LL), (__int64 *)(a4 + 40));
    if ( (v15 & 0x80001000) == 0x80001000 || (v4 & 0x80001000) == 0x80001000 )
    {
      v20 = (PVOID)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 640) + v14 + 48), *(_QWORD *)(a4 + 48));
      *(_QWORD *)(a4 + 48) = 0LL;
    }
    if ( (v15 & 0x80000200) == 0x80000200 || (v4 & 0x80000200) == 0x80000200 )
    {
      P = (PVOID)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 640) + v14 + 72), *(_QWORD *)(a4 + 72));
      *(_QWORD *)(a4 + 72) = 0LL;
    }
    if ( (v15 & 0x80000400) == 0x80000400 || (v4 & 0x80000400) == 0x80000400 )
    {
      v23 = (PVOID)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 640) + v14 + 96), *(_QWORD *)(a4 + 96));
      *(_QWORD *)(a4 + 96) = 0LL;
    }
    if ( (v15 & 0x80002000) == 0x80002000 || (v4 & 0x80002000) == 0x80002000 )
    {
      v10 = (void *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 640) + v14 + 56), *(_QWORD *)(a4 + 56));
      *(_QWORD *)(a4 + 56) = 0LL;
    }
    if ( (v15 & 0x80004000) == 0x80004000 || (v4 & 0x80004000) == 0x80004000 )
    {
      v21 = (PVOID)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 640) + v14 + 64), *(_QWORD *)(a4 + 64));
      *(_QWORD *)(a4 + 64) = 0LL;
    }
    if ( (v15 & 0x80000100) == 0x80000100 || (v4 & 0x80000100) == 0x80000100 )
    {
      v11 = (void *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(a1 + 640) + v14 + 80), *(_QWORD *)(a4 + 80));
      *(_QWORD *)(a4 + 80) = 0LL;
    }
    v16 = (__int64 *)(a4 + 88);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 640) + v14 + 88) || *v16 )
    {
      v17 = a2;
      if ( *v16 )
        *(_QWORD *)(*v16 + 8) = 1LL << a2;
      EtwpUpdateEventFilterAndFree((volatile __int64 *)(*(_QWORD *)(a1 + 640) + 88LL + 104LL * a2), v16);
    }
    else
    {
      v17 = a2;
    }
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 640) + 104LL * v17), v4);
    if ( v20 || P || v23 || v10 || v21 || v11 )
    {
      KeGenericCallDpc((__int64)KeAbCrossThreadDeleteNopDpcRoutine, 0LL);
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v23 )
        EtwpFreeEventNameFilter(v23);
      if ( v10 )
        EtwpFreeEventNameFilter(v10);
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
      if ( v11 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11, 0xFFFFFFFF) == 1 )
          ExFreePoolWithTag(v11, 0);
      }
    }
    return v5;
  }
  return (unsigned int)-1073741801;
}
