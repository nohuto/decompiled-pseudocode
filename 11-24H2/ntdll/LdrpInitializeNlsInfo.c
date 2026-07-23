/*
 * XREFs of LdrpInitializeNlsInfo @ 0x1800095A8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpInitCodePageTables @ 0x180009640 (RtlpInitCodePageTables.c)
 *     LdrpFusionManifestCodePages @ 0x180009898 (LdrpFusionManifestCodePages.c)
 *     RtlpQueryNlsSystemCodePages @ 0x180009BE0 (RtlpQueryNlsSystemCodePages.c)
 */

__int64 __fastcall LdrpInitializeNlsInfo(__int64 a1)
{
  __int16 v2; // cx
  __int16 v3; // dx
  ULONG Value; // [rsp+30h] [rbp+8h] BYREF
  ULONG v6; // [rsp+38h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL) & 0x8000000) != 0 )
  {
    *(_DWORD *)(a1 + 844) = -34996759;
  }
  else
  {
    Value = 0;
    v6 = 0;
    if ( (unsigned __int8)LdrpFusionManifestCodePages(&Value, &v6) || (int)RtlpQueryNlsSystemCodePages(&Value, &v6) >= 0 )
    {
      v2 = Value;
      v3 = v6;
    }
    else
    {
      v3 = -535;
      v2 = -535;
    }
    *(_WORD *)(a1 + 844) = v2;
    *(_WORD *)(a1 + 846) = v3;
  }
  RtlpInitCodePageTables();
  return RtlpInitUppercaseTables(*(unsigned __int16 *)(a1 + 848));
}
