/*
 * XREFs of ParseIntObj @ 0x140006630
 * Callers:
 *     ParsePackage @ 0x140001230 (ParsePackage.c)
 *     ParseArg @ 0x14000DB50 (ParseArg.c)
 *     ParseFieldConnection @ 0x140054520 (ParseFieldConnection.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     IsCompatableDSDTRevision @ 0x140008AC0 (IsCompatableDSDTRevision.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseIntObj(__int64 a1, _DWORD **a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // r10d
  bool v9; // zf
  char v11; // al
  __int64 v12; // rcx

  v4 = 0;
  v8 = *(unsigned __int8 *)*a2;
  *a2 = (_DWORD *)((char *)*a2 + 1);
  *(_WORD *)(a3 + 2) = 1;
  *(_QWORD *)(a3 + 16) = 0LL;
  if ( v8 == 10 )
  {
    *(_BYTE *)(a3 + 16) = *(_BYTE *)*a2;
    *a2 = (_DWORD *)((char *)*a2 + 1);
    v9 = (gDebugger & 0xD0) == 0;
    goto LABEL_3;
  }
  if ( v8 == 12 )
  {
    *(_DWORD *)(a3 + 16) = *(*a2)++;
    v9 = (gDebugger & 0xD0) == 0;
    goto LABEL_3;
  }
  if ( v8 <= 0xC )
  {
    if ( !(_BYTE)v8 )
    {
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("Zero");
      return v4;
    }
    if ( v8 == 1 )
    {
      *(_QWORD *)(a3 + 16) = 1LL;
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("One");
      return v4;
    }
    if ( v8 == 11 )
    {
      *(_WORD *)(a3 + 16) = *(_WORD *)*a2;
      *a2 = (_DWORD *)((char *)*a2 + 2);
      v9 = (gDebugger & 0xD0) == 0;
      goto LABEL_3;
    }
    goto LABEL_20;
  }
  if ( v8 != 255 )
  {
    if ( v8 != 14 )
    {
LABEL_20:
      *a2 = (_DWORD *)((char *)*a2 - 1);
      if ( !a4 )
      {
        LogError(3222536193LL);
        AcpiDiagTraceAmlError(a1, 3222536193LL);
        PrintDebugMessage(128, *(unsigned __int8 *)*a2, (unsigned int)*a2, 0, 0LL);
      }
      return (unsigned int)-1072431103;
    }
    *(_QWORD *)(a3 + 16) = *(_QWORD *)*a2;
    *a2 += 2;
    v9 = (gDebugger & 0xD0) == 0;
LABEL_3:
    if ( !v9 )
      ConPrintf("0x%I64x");
    return v4;
  }
  v11 = IsCompatableDSDTRevision();
  v12 = -1LL;
  if ( !v11 )
    v12 = 0xFFFFFFFFLL;
  *(_QWORD *)(a3 + 16) = v12;
  if ( (gDebugger & 0xD0) != 0 )
    ConPrintf("Ones");
  return v4;
}
