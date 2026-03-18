/*
 * XREFs of EtwTracePool @ 0x1402FE3D8
 * Callers:
 *     ExAllocateHeapPool @ 0x1402DAB20 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402DECE0 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1402F7C14 (ExpFreeHeapSpecialPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1402F7F74 (ExAllocateContiguousHeapPool.c)
 *     ExInsertPoolTag @ 0x1402FD6B4 (ExInsertPoolTag.c)
 *     ExpInsertPoolTracker @ 0x1402FD7BC (ExpInsertPoolTracker.c)
 *     ExRemovePoolTag @ 0x14038B5E8 (ExRemovePoolTag.c)
 *     ExPoolCleanupExpansionTable @ 0x1406482CC (ExPoolCleanupExpansionTable.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 *     EtwpCheckPoolTagFilters @ 0x1406406B8 (EtwpCheckPoolTagFilters.c)
 *     MmIsNonPagedPoolNx @ 0x1406715DC (MmIsNonPagedPoolNx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

int __fastcall EtwTracePool(unsigned __int16 a1, __int16 a2, unsigned int a3, __int64 a4, unsigned __int64 a5)
{
  int v5; // ebx
  unsigned __int16 v7; // r14
  __int64 v8; // rax
  unsigned int v9; // r12d
  unsigned int v10; // edi
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // rbx
  int SessionId; // eax
  int v17; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-4Ch]
  _DWORD v19[2]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-40h]
  __int64 v21; // [rsp+48h] [rbp-38h]
  _QWORD v22[4]; // [rsp+50h] [rbp-30h] BYREF

  v5 = a2 & 0x26D;
  v18 = a3;
  v17 = 0;
  v7 = a1;
  if ( a5 > 0xFE0 )
  {
    v5 |= 0x10000000u;
  }
  else
  {
    LODWORD(v8) = DWORD1(PerfGlobalGroupMask);
    if ( (BYTE4(PerfGlobalGroupMask) & 0x40) == 0 )
      return v8;
  }
  if ( a1 == 3618 && (v5 & 1) == 0 && (unsigned int)MmIsNonPagedPoolNx(a4) )
    v5 |= 0x200u;
  v9 = 1;
  if ( (v5 & 0x20) != 0 )
  {
    SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    a3 = v18;
    v9 = 2;
    v17 = SessionId;
    ++v7;
    v22[3] = 4LL;
    v22[2] = &v17;
  }
  v19[0] = v5;
  v22[0] = v19;
  LODWORD(v8) = EtwpHostSiloState;
  v19[1] = a3;
  v20 = a5;
  v21 = a4;
  v22[1] = 24LL;
  v10 = *(_DWORD *)(EtwpHostSiloState + 4248);
  while ( _BitScanForward((unsigned int *)&v12, v10) )
  {
    v13 = EtwpHostSiloState;
    v10 &= v10 - 1;
    v8 = 32LL * (unsigned int)v12;
    v14 = v8 + EtwpHostSiloState + 4284;
    if ( v14
      && (LODWORD(v8) = *(_DWORD *)(v14 + 4), (v8 & 0x40) != 0)
      && (LODWORD(v8) = EtwpCheckPoolTagFilters((unsigned int)v12, a3), (_BYTE)v8)
      || v14 && (LODWORD(v8) = *(_DWORD *)(v14 + 4), (v8 & 1) != 0) && a5 > 0xFE0 )
    {
      LODWORD(v8) = EtwpLogKernelEvent(
                      (struct _KTHREAD *)v22,
                      v13,
                      *(unsigned __int8 *)(v13 + 2 * v12 + 4232),
                      v9,
                      v7,
                      0x1501B02u);
    }
    a3 = v18;
  }
  return v8;
}
