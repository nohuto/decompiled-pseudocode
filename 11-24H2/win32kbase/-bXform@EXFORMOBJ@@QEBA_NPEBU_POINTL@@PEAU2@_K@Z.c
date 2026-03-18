/*
 * XREFs of ?bXform@EXFORMOBJ@@QEBA_NPEBU_POINTL@@PEAU2@_K@Z @ 0x140106950
 * Callers:
 *     GreIntersectClipRect @ 0x14001DA50 (GreIntersectClipRect.c)
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x140039BC0 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x140039DF0 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     bCvtPts1 @ 0x14001C6E4 (bCvtPts1.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

bool __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, const struct _POINTL *a2, struct _POINTL *a3, __int64 a4)
{
  int v8; // r10d
  int v9; // ebx

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v8 = *(_DWORD *)(*(_QWORD *)this + 32LL) & 0x38;
  if ( ((v8 - 8) & 0xFFFFFFE7) != 0 || v8 == 24 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( a2 != a3 )
    memmove(a3, a2, 8 * a4);
  if ( (*(_BYTE *)(*(_QWORD *)this + 32LL) & 0x43) == 0x43 )
    return 1;
  v9 = bCvtPts1(*(_QWORD *)this, (__int64)a3, a4);
  if ( !v9 )
    EngSetLastError(0x216u);
  return v9 != 0;
}
