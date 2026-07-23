/*
 * XREFs of PiDqQueryEnumObject @ 0x1408C9144
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1408B237C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqEnumQueryObjectsCallback @ 0x1408C9120 (PiDqEnumQueryObjectsCallback.c)
 * Callees:
 *     PiDqQueryAppendActionEntry @ 0x1408B26E0 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryEvaluateFilter @ 0x1408C9830 (PiDqQueryEvaluateFilter.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1408CF3D0 (PiPnpRtlApplyMandatoryFilters.c)
 *     PiDqQueryAddObjectToResultSet @ 0x140A3A584 (PiDqQueryAddObjectToResultSet.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqQueryEnumObject(struct _SECURITY_SUBJECT_CONTEXT *a1, __int64 a2)
{
  _DWORD *ProcessAuditId; // r8
  int v5; // r8d
  int v6; // eax
  unsigned int AddObjectToResultSet; // ebx
  char v8; // al
  int v9; // eax
  char v10; // al
  __int64 Pool2; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  ProcessAuditId = a1->ProcessAuditId;
  LOBYTE(v13) = 1;
  if ( !ProcessAuditId[5] )
  {
    v5 = ProcessAuditId[4] - 1;
    if ( !v5 || (unsigned int)(v5 - 1) <= 1 )
    {
      v6 = PiPnpRtlApplyMandatoryFilters(
             PiPnpRtlCtx,
             *(_QWORD *)(a2 + 16),
             *(_DWORD *)(a2 + 28),
             0,
             a1 + 1,
             (__int64)&v13);
      AddObjectToResultSet = v6;
      if ( v6 == -1073741772 || v6 == -1073741275 )
      {
        v8 = 0;
        LOBYTE(v13) = 0;
        AddObjectToResultSet = 0;
      }
      else
      {
        if ( v6 < 0 )
          return AddObjectToResultSet;
        v8 = v13;
      }
      if ( !v8 )
        return AddObjectToResultSet;
    }
  }
  if ( *((_QWORD *)a1->ProcessAuditId + 11) )
  {
    v9 = PiDqQueryEvaluateFilter(a1, *(_QWORD *)(a2 + 16), &v13);
    AddObjectToResultSet = v9;
    if ( v9 == -1073741772 )
    {
      v10 = 0;
      LOBYTE(v13) = 0;
      AddObjectToResultSet = 0;
    }
    else
    {
      if ( v9 < 0 )
        return AddObjectToResultSet;
      v10 = v13;
    }
    if ( !v10 )
      return AddObjectToResultSet;
  }
  if ( (*((_DWORD *)a1->ProcessAuditId + 10) & 1) == 0
    || (AddObjectToResultSet = PiDqQueryAddObjectToResultSet(a1, a2), (AddObjectToResultSet & 0x80000000) == 0) )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x28uLL, 0x58706E50u);
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 32) = 1;
      *(_QWORD *)(Pool2 + 16) = a2;
      if ( a2 )
        _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
      *(_QWORD *)(Pool2 + 24) = 0LL;
      AddObjectToResultSet = 0;
      PiDqQueryAppendActionEntry((__int64)a1, (_QWORD *)Pool2);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return AddObjectToResultSet;
}
