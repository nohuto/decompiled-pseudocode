/*
 * XREFs of ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x14010AF10
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     bCvtVts @ 0x14010AFE8 (bCvtVts.c)
 */

char __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, const struct _VECTORFX *a2, struct _VECTORL *a3, __int64 a4)
{
  char v4; // di
  const struct _VECTORFX *v9; // rcx
  __int64 v10; // rsi

  v4 = 0;
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 0x10) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 2) != 0 )
  {
    v9 = (const struct _VECTORFX *)((char *)a2 + 8 * a4);
    if ( a2 < v9 )
    {
      v10 = a3 - a2;
      do
      {
        *(_DWORD *)((char *)a2 + v10) = *(int *)a2 >> 4;
        *(_DWORD *)((char *)a2 + v10 + 4) = *((int *)a2 + 1) >> 4;
        a2 = (const struct _VECTORFX *)((char *)a2 + 8);
      }
      while ( a2 < v9 );
    }
    return 1;
  }
  else
  {
    if ( (unsigned int)bCvtVts(*(_QWORD *)this, (_DWORD)a2, (_DWORD)a3, a4, 0) )
      return 1;
    EngSetLastError(0x216u);
    return v4;
  }
}
