/*
 * XREFs of ?bXform@EXFORMOBJ@@QEBA_NPEBU_VECTORL@@PEAU_VECTORFX@@_K_N@Z @ 0x1401C3820
 * Callers:
 *     ?bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x14003CCBC (-bOldPenNominal@DC@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     bCvtVts @ 0x14010AFE8 (bCvtVts.c)
 */

bool __fastcall EXFORMOBJ::bXform(
        EXFORMOBJ *this,
        const struct _VECTORL *a2,
        struct _VECTORFX *a3,
        __int64 a4,
        char a5)
{
  const struct _VECTORL *v9; // r8
  __int64 v10; // rdi
  int v11; // ecx
  int v13; // ebx

  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 8) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( (*(_DWORD *)(*(_QWORD *)this + 32LL) & 2) != 0 )
  {
    v9 = (const struct _VECTORL *)((char *)a2 + 8 * a4);
    if ( a2 >= v9 )
    {
      return 1;
    }
    else
    {
      v10 = a3 - a2;
      while ( 1 )
      {
        v11 = *((_DWORD *)a2 + 1);
        if ( (unsigned int)(*(_DWORD *)a2 + 134217726) > 0xFFFFFFC || (unsigned int)(v11 + 134217726) > 0xFFFFFFC )
          break;
        *(_DWORD *)((char *)a2 + v10) = 16 * *(_DWORD *)a2;
        *(_DWORD *)((char *)a2 + v10 + 4) = 16 * v11;
        a2 = (const struct _VECTORL *)((char *)a2 + 8);
        if ( a2 >= v9 )
          return 1;
      }
      EngSetLastError(0x216u);
      return 0;
    }
  }
  else
  {
    v13 = bCvtVts(*(_QWORD *)this, (int *)a2, (int *)a3, a4, a5);
    if ( !v13 )
      EngSetLastError(0x216u);
    return v13 != 0;
  }
}
