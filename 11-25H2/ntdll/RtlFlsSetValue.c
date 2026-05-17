/*
 * XREFs of RtlFlsSetValue @ 0x18000A450
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFlsHeapAlloc @ 0x18000A748 (RtlpFlsHeapAlloc.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlFlsSetValue(int a1, __int64 a2)
{
  struct _TEB *v2; // rdi
  __int64 FlsData; // rbx
  unsigned int v5; // ebp
  unsigned int v6; // esi
  unsigned int v7; // ecx
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r12
  _OWORD *v12; // rbp
  unsigned int v14; // r15d
  _OWORD *v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rax

  v2 = NtCurrentTeb();
  if ( (unsigned int)(a1 - 1) > 0xFEE )
    return (unsigned int)-1073741811;
  FlsData = (__int64)v2->FlsData;
  v5 = a1 + 16;
  v6 = 0;
  if ( FlsData )
  {
LABEL_3:
    _BitScanReverse(&v7, v5);
    v8 = 1 << v7;
    v9 = v7 - 4;
    v10 = v5 ^ v8;
    v11 = FlsData + 8 * v9;
    v12 = *(_OWORD **)(v11 + 16);
    if ( !v12 )
    {
      v14 = 1 << (v9 + 4);
      v15 = (_OWORD *)RtlpFlsHeapAlloc(8 * v14 + 8);
      v12 = v15;
      if ( !v15 )
        return (unsigned int)-1073741801;
      *v15 = 0LL;
      if ( v14 )
        memset_thunk_772440563353939046((char *)v15 + 8, 0, 8LL * v14);
      *(_QWORD *)(v11 + 16) = v12;
    }
    *((_QWORD *)v12 + v10 + 1) = a2;
    *(_DWORD *)(FlsData + 80) |= 1u;
    return v6;
  }
  v16 = RtlpFlsHeapAlloc(88LL);
  FlsData = v16;
  if ( v16 )
  {
    *(_OWORD *)v16 = 0LL;
    *(_QWORD *)(v16 + 80) = 0LL;
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_QWORD *)(v16 + 24) = 0LL;
    *(_QWORD *)(v16 + 32) = 0LL;
    *(_QWORD *)(v16 + 40) = 0LL;
    *(_QWORD *)(v16 + 48) = 0LL;
    *(_QWORD *)(v16 + 56) = 0LL;
    *(_QWORD *)(v16 + 64) = 0LL;
    *(_QWORD *)(v16 + 72) = 0LL;
    v2->FlsData = (void *)v16;
    RtlAcquireSRWLockExclusive(&RtlpFlsContext);
    v17 = (__int64 *)qword_1801CFE80;
    if ( *(__int64 **)qword_1801CFE80 != &qword_1801CFE78 )
      __fastfail(3u);
    *(_QWORD *)FlsData = &qword_1801CFE78;
    *(_QWORD *)(FlsData + 8) = v17;
    *v17 = FlsData;
    qword_1801CFE80 = FlsData;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
    goto LABEL_3;
  }
  return 3221225495LL;
}
