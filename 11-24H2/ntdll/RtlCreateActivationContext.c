/*
 * XREFs of RtlCreateActivationContext @ 0x180080BB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     DbgPrintEx @ 0x18005EA90 (DbgPrintEx.c)
 *     RtlpValidateActivationContextData @ 0x180080D44 (RtlpValidateActivationContextData.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x1800813A4 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x18011D010 (RtlpPlaceActivationContextOnLiveList.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateActivationContext(int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // rdi
  int v9; // ebx
  _QWORD *Heap; // rax
  unsigned __int64 v11; // r14
  _QWORD *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rax

  v6 = a3;
  if ( (char *)a2 == "Actx " )
  {
    DbgPrintEx(51, 0, "SXS: %s() passed the empty activation context data\n", "RtlCreateActivationContext");
    return (unsigned int)-1073741811;
  }
  if ( a6 )
    *a6 = 0LL;
  if ( a1 || !a2 || a3 > 0x10000 || !a6 )
    return (unsigned int)-1073741811;
  v9 = RtlpValidateActivationContextData();
  if ( v9 >= 0 )
  {
    Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6 + 528);
    v11 = (unsigned __int64)Heap;
    if ( Heap )
    {
      v12 = Heap + 1;
      *Heap = 1733124929LL;
      v13 = Heap + 15;
      v14 = 0LL;
      v15 = *(unsigned int *)(*(unsigned int *)(a2 + 24) + a2 + 8);
      v16 = Heap + 17;
      if ( (unsigned int)v15 <= 0x20 )
        v14 = v16;
      v9 = RtlpInitializeAssemblyStorageMap(v13, v15, v14);
      if ( v9 < 0 )
      {
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11);
      }
      else
      {
        *((_DWORD *)v12 + 1) = 0;
        v12[5] = a5;
        *(_DWORD *)v12 = 1;
        v12[3] = a2;
        v12[4] = a4;
        *((_OWORD *)v12 + 3) = 0LL;
        *((_OWORD *)v12 + 4) = 0LL;
        *((_OWORD *)v12 + 5) = 0LL;
        *((_OWORD *)v12 + 6) = 0LL;
        memset_thunk_772440563353939046(v12 + 49, 0, 0x80uLL);
        *((_DWORD *)v12 + 96) = 0;
        if ( g_SxsKeepActivationContextsAlive )
          RtlpPlaceActivationContextOnLiveList(v12);
        *a6 = v12;
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v9;
}
