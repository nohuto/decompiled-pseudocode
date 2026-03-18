/*
 * XREFs of EtwSetProcessTelemetryCoverage @ 0x1409047E8
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     EtwpCoverageRecordAtHighIrql @ 0x14064F7A0 (EtwpCoverageRecordAtHighIrql.c)
 *     EtwpCoverageCheckCP @ 0x1407AAA94 (EtwpCoverageCheckCP.c)
 *     EtwpCoverageReset @ 0x1407AAE1C (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1407AB024 (EtwpCoverageResetCP.c)
 *     PspIsContextAdmin @ 0x1408E917C (PspIsContextAdmin.c)
 *     EtwpCoverageEnsureContext @ 0x140903F90 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageRecord @ 0x140904574 (EtwpCoverageRecord.c)
 *     EtwpCoverageEnsureUserModeView @ 0x140906720 (EtwpCoverageEnsureUserModeView.c)
 */

__int64 __fastcall EtwSetProcessTelemetryCoverage(_KPROCESS *a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 result; // rax
  int v6; // eax

  if ( a1 != KeGetCurrentThread()->ApcState.Process )
    return 3221225659LL;
  if ( EtwpCoverageContext || (result = EtwpCoverageEnsureContext(), (int)result >= 0) )
  {
    v3 = EtwpCoverageContext;
    if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    {
      *(_DWORD *)(a2 + 12) = -1;
    }
    else
    {
      v4 = *(_DWORD *)(a2 + 12);
      if ( v4 < 0xFFFFFF00 )
      {
        EtwpCoverageRecord((int **)EtwpCoverageContext, a2);
        result = EtwpCoverageEnsureUserModeView(v3);
        if ( (int)result < 0 )
          return result;
        return 0LL;
      }
      switch ( v4 )
      {
        case 0xFFFFFFFE:
          v6 = EtwpCoverageCheckCP(EtwpCoverageContext, a2);
          goto LABEL_16;
        case 0xFFFFFFFD:
          v6 = EtwpCoverageResetCP(EtwpCoverageContext, a2);
LABEL_16:
          if ( !v6 )
            return 3221226021LL;
          return 0LL;
        case 0xFFFFFFFC:
          if ( !PspIsContextAdmin() )
            return 3221225506LL;
          EtwpCoverageReset(v3, 1);
          *(_DWORD *)(a2 + 12) = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 24LL);
          return 0LL;
        case 0xFFFFFFFB:
          EtwpCoverageRecordAtHighIrql((char **)a2);
          return 0LL;
      }
    }
    return 3221225485LL;
  }
  return result;
}
