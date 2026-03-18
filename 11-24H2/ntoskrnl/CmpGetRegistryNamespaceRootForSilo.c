/*
 * XREFs of CmpGetRegistryNamespaceRootForSilo @ 0x1409B2680
 * Callers:
 *     CmpParseKey @ 0x14089F150 (CmpParseKey.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x1403F0070 (PsGetPermanentSiloContext.c)
 *     PspGetJobSilo @ 0x14040EFB0 (PspGetJobSilo.c)
 */

__int64 __fastcall CmpGetRegistryNamespaceRootForSilo(__int64 JobSilo)
{
  __int64 result; // rax
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v3 = 0LL;
    PsGetPermanentSiloContext(JobSilo, CmpSiloContextSlot, &v3);
    if ( v3 )
    {
      result = *(_QWORD *)(v3 + 32);
      if ( result )
        break;
    }
    if ( JobSilo )
      JobSilo = PspGetJobSilo(*(_QWORD *)(JobSilo + 1304));
    else
      JobSilo = 0LL;
  }
  return result;
}
