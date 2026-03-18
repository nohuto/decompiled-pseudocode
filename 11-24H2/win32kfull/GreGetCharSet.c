/*
 * XREFs of GreGetCharSet @ 0x1400BB178
 * Callers:
 *     NtGdiGetCharSet @ 0x1400BB160 (NtGdiGetCharSet.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400A4334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB398 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z @ 0x1400BB50C (-GrepGetCharSet@@YAKAEAVUDCOBJ@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1401541FC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetCharSet(HDC a1)
{
  __int64 v1; // rax
  unsigned int CharSet; // ebx
  _QWORD v4[11]; // [rsp+20h] [rbp-58h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v1 = v4[0];
  if ( !v4[0] )
    goto LABEL_6;
  if ( *(_WORD *)(v4[0] + 12LL) != 1 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v1 = v4[0];
    if ( *(_WORD *)(v4[0] + 12LL) != 1 )
    {
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v4);
      v1 = 0LL;
      v4[0] = 0LL;
    }
  }
  if ( v1 )
  {
    CharSet = GrepGetCharSet((struct UDCOBJ *)v4);
  }
  else
  {
LABEL_6:
    EngSetLastError(6u);
    CharSet = 0x10000;
  }
  DCOBJ::~DCOBJ((DCOBJ *)v4);
  return CharSet;
}
