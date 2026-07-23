/*
 * XREFs of PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140A80988
 * Callers:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1404B8750 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 *     ExEnumHandleTable @ 0x140861190 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140894BB0 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall PnpHandleEnumerateHandlesAgainstDeviceObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  struct _EX_RUNDOWN_REF *v6; // rcx
  struct _EX_RUNDOWN_REF *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v9; // rbx
  unsigned int *v10; // rax
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int128 v13; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v12 = 0LL;
  v6 = 0LL;
  v13 = 0LL;
  while ( 1 )
  {
    NextProcess = (struct _EX_RUNDOWN_REF *)PsGetNextProcess(v6);
    v9 = NextProcess;
    if ( !NextProcess )
      break;
    v10 = (unsigned int *)ObReferenceProcessHandleTable(NextProcess);
    if ( v10 )
    {
      *(_QWORD *)&v12 = a1;
      *((_QWORD *)&v12 + 1) = v9;
      *(_QWORD *)&v13 = a2;
      *((_QWORD *)&v13 + 1) = a3;
      v3 = (unsigned __int8)ExEnumHandleTable(
                              v10,
                              (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PnpHandleProcessWalkWorker,
                              (__int64)&v12,
                              0LL);
      ExReleaseRundownProtection_0(v9 + 61);
      if ( v3 )
      {
        ObfDereferenceObjectWithTag(v9, 0x6E457350u);
        return v3;
      }
    }
    v6 = v9;
  }
  return v3;
}
