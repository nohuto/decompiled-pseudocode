/*
 * XREFs of RtlpGetLegacyContextLength @ 0x140420F50
 * Callers:
 *     RtlpWriteExtendedContext @ 0x140909C2C (RtlpWriteExtendedContext.c)
 *     PspWow64SetupCpuArea @ 0x1409EB8A0 (PspWow64SetupCpuArea.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1409EBEDC (RtlWow64GetCpuAreaInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetLegacyContextLength(int a1, _DWORD *a2, int *a3)
{
  __int64 result; // rax
  int v4; // r9d

  result = 0LL;
  v4 = 0;
  if ( (a1 & 0x10000) != 0 )
  {
    result = 716LL;
    v4 = 4;
  }
  else
  {
    if ( (a1 & 0x100000) != 0 )
    {
      result = 1232LL;
LABEL_4:
      v4 = 16;
      goto LABEL_5;
    }
    if ( (a1 & 0x200000) != 0 )
    {
      result = 416LL;
      v4 = 8;
    }
    else if ( (a1 & 0x400000) != 0 )
    {
      result = 912LL;
      goto LABEL_4;
    }
  }
LABEL_5:
  if ( a2 )
    *a2 = result;
  if ( a3 )
    *a3 = v4;
  return result;
}
