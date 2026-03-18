/*
 * XREFs of EtwpGetPsmKeyExtendedHeaderItem @ 0x1409260EC
 * Callers:
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     SeSecurityAttributePresent @ 0x1402940F0 (SeSecurityAttributePresent.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     EtwpQueryPsmKey @ 0x14079B058 (EtwpQueryPsmKey.c)
 */

void *__fastcall EtwpGetPsmKeyExtendedHeaderItem(__int64 a1)
{
  _KPROCESS *Process; // r15
  __int64 v3; // r14
  ULONG_PTR v4; // rsi
  char v5; // bl
  int v6; // eax
  size_t v7; // rbx
  size_t v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = 8LL;
  v4 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
  v5 = SeSecurityAttributePresent(v4, (const UNICODE_STRING *)&PspSysAppIdClaim);
  SeSecurityAttributePresent(v4, (const UNICODE_STRING *)&PspPackagedAppClaim);
  if ( v5 )
  {
    v9 = 466LL;
    v6 = EtwpQueryPsmKey(v4, (wchar_t *)(a1 + 8), &v9);
    v7 = v9;
    if ( v6 < 0 )
      v7 = 0LL;
    v3 = v7 + 8;
  }
  else
  {
    LOWORD(v7) = v9;
  }
  ObFastDereferenceObject((__int64 *)&Process[1].ActiveProcessors, v4, 1953261124LL);
  *(_DWORD *)(a1 + 2) = 9;
  *(_WORD *)(a1 + 6) = v7;
  *(_WORD *)a1 = (v3 + 7) & 0xFFF8;
  return memset_0((void *)(v3 + a1), 0, (((_DWORD)v3 + 7) & 0xFFFFFFF8) - v3);
}
