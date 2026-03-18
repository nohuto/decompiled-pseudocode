/*
 * XREFs of PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140986080
 * Callers:
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x1404BE63C (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ObReferenceProcessHandleTable @ 0x1408ADC40 (ObReferenceProcessHandleTable.c)
 *     PsGetNextProcess @ 0x1408DF760 (PsGetNextProcess.c)
 *     ExEnumHandleTable @ 0x1409864C0 (ExEnumHandleTable.c)
 */

__int64 __fastcall PnpHandleEnumerateHandlesAgainstDeviceObject(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  struct _EX_RUNDOWN_REF *v6; // rcx
  struct _EX_RUNDOWN_REF *NextProcess; // rax
  struct _EX_RUNDOWN_REF *v9; // rbx
  unsigned __int64 v10; // rax
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
    v10 = ObReferenceProcessHandleTable(NextProcess);
    if ( v10 )
    {
      *(_QWORD *)&v12 = a1;
      *((_QWORD *)&v12 + 1) = v9;
      *(_QWORD *)&v13 = a2;
      *((_QWORD *)&v13 + 1) = a3;
      v3 = (unsigned __int8)ExEnumHandleTable(v10, PnpHandleProcessWalkWorker, &v12, 0LL);
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
