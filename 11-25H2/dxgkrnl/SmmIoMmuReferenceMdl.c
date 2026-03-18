/*
 * XREFs of SmmIoMmuReferenceMdl @ 0x14003AA6C
 * Callers:
 *     SmmIoMmuUnmapStagingMdl @ 0x14003A8A8 (SmmIoMmuUnmapStagingMdl.c)
 *     SmmIommuMapStagingMdl @ 0x14003A994 (SmmIommuMapStagingMdl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     SmmIoMmuUpdatePfn @ 0x14003ACBC (SmmIoMmuUpdatePfn.c)
 */

__int64 __fastcall SmmIoMmuReferenceMdl(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  unsigned int v6; // r14d
  unsigned int v7; // ebp
  __int64 v9; // r8
  __int64 v10; // r15
  int updated; // eax
  __int64 v12; // rdx
  KIRQL OldIrql; // [rsp+90h] [rbp+8h]

  v3 = *(unsigned int *)(a2 + 24);
  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  OldIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 8));
  if ( (_DWORD)v3 != *(_DWORD *)(a2 + 16) )
  {
    do
    {
      LOBYTE(v9) = a3;
      v10 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v3);
      updated = SmmIoMmuUpdatePfn(a1, v10, v9);
      v6 = updated;
      if ( updated == -1073741801 )
        goto LABEL_7;
      v3 = (unsigned int)(v3 + 1);
      if ( updated == 259 )
      {
        v12 = v7++;
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v12) = v10;
        if ( v7 == *(_DWORD *)(a2 + 20) )
          goto LABEL_11;
      }
    }
    while ( (_DWORD)v3 != *(_DWORD *)(a2 + 16) );
    if ( updated < 0 )
    {
LABEL_7:
      if ( (_DWORD)v3 )
      {
        do
        {
          SmmIoMmuUpdatePfn(a1, *(_QWORD *)(v5 + *(_QWORD *)a2), 0LL);
          v5 += 8LL;
          --v3;
        }
        while ( v3 );
      }
      goto LABEL_8;
    }
LABEL_11:
    if ( (_DWORD)v3 != *(_DWORD *)(a2 + 16) && *(_DWORD *)(a2 + 20) != v7 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 720;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"pArgs->OutputSize == OutputIndex",
        720LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  *(_DWORD *)(a2 + 28) = v7;
  *(_DWORD *)(a2 + 24) = v3;
LABEL_8:
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 8), OldIrql);
  return v6;
}
