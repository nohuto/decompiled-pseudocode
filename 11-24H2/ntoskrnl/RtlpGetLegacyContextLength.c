/*
 * XREFs of RtlpGetLegacyContextLength @ 0x1404E7220
 * Callers:
 *     RtlpWriteExtendedContext @ 0x14092013C (RtlpWriteExtendedContext.c)
 *     PspWow64SetupCpuArea @ 0x1409E0800 (PspWow64SetupCpuArea.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1409E0A10 (RtlWow64GetCpuAreaInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetLegacyContextLength(int a1, int *a2, _DWORD *a3)
{
  int v3; // r9d
  __int64 result; // rax

  v3 = 0;
  result = 0LL;
  if ( (a1 & 0x10000) != 0 )
  {
    result = 4LL;
    v3 = 716;
    goto LABEL_10;
  }
  if ( (a1 & 0x100000) != 0 )
  {
    v3 = 1232;
LABEL_9:
    result = 16LL;
    goto LABEL_10;
  }
  if ( (a1 & 0x200000) != 0 )
  {
    result = 8LL;
    v3 = 416;
    goto LABEL_10;
  }
  if ( (a1 & 0x400000) != 0 )
  {
    v3 = 912;
    goto LABEL_9;
  }
LABEL_10:
  if ( a2 )
    *a2 = v3;
  if ( a3 )
    *a3 = result;
  return result;
}
