/*
 * XREFs of PspUpdateCalloutParameters @ 0x1404E64C0
 * Callers:
 *     KeUserModeCallback @ 0x1408BCB10 (KeUserModeCallback.c)
 *     PspExitLastThread @ 0x1408F27B8 (PspExitLastThread.c)
 *     ExpWin32CloseProcedure @ 0x1408F3DD0 (ExpWin32CloseProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x1408F3ED0 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x1408F4010 (ExpWin32DeleteProcedure.c)
 *     ExpWin32OpenProcedure @ 0x1408F4100 (ExpWin32OpenProcedure.c)
 *     ExpWin32ParseProcedure @ 0x1408F4230 (ExpWin32ParseProcedure.c)
 *     NtDeleteAtom @ 0x1408F43C0 (NtDeleteAtom.c)
 *     NtAddAtomEx @ 0x1408F4440 (NtAddAtomEx.c)
 *     NtQueryInformationAtom @ 0x1408F45F0 (NtQueryInformationAtom.c)
 *     PfpQueryGpuUtilization @ 0x1408F4FC8 (PfpQueryGpuUtilization.c)
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 *     NtFindAtom @ 0x14097DBB0 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1409A1420 (PsInvokeWin32Callout.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspUpdateCalloutParameters(int a1, __int64 a2, int a3, __int64 a4)
{
  bool v4; // zf
  bool v5; // zf
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx

  if ( a1 <= 24 )
  {
    if ( a1 == 24 )
      goto LABEL_34;
    if ( a1 > 11 )
    {
      v7 = a1 - 12;
      if ( !v7 )
        goto LABEL_34;
      v8 = v7 - 1;
      if ( !v8 )
        goto LABEL_34;
      v9 = v8 - 1;
      if ( !v9 )
        goto LABEL_34;
      v10 = v9 - 1;
      if ( !v10 )
        goto LABEL_34;
      v11 = v10 - 1;
      if ( !v11 )
        goto LABEL_34;
      v6 = v11 - 2;
      v5 = v6 == 0;
    }
    else
    {
      if ( a1 == 11 )
        goto LABEL_34;
      if ( a1 <= 5 )
      {
        if ( a1 == 5 )
          goto LABEL_34;
        v4 = a1 == 0;
        goto LABEL_28;
      }
      v6 = a1 - 7;
      v5 = v6 == 0;
    }
LABEL_30:
    if ( !v5 )
    {
LABEL_31:
      v17 = v6 - 1;
      if ( v17 && (unsigned int)(v17 - 1) >= 2 )
        return 0LL;
      goto LABEL_34;
    }
    goto LABEL_34;
  }
  if ( a1 > 35 )
  {
    v13 = a1 - 36;
    if ( !v13 )
      goto LABEL_34;
    v14 = v13 - 1;
    if ( !v14 )
      goto LABEL_34;
    v15 = v14 - 1;
    if ( !v15 )
      goto LABEL_34;
    v16 = v15 - 1;
    if ( !v16 )
      goto LABEL_34;
    a1 = v16 - 1;
    v4 = a1 == 0;
LABEL_28:
    if ( v4 )
      goto LABEL_34;
    v6 = a1 - 1;
    v5 = v6 == 0;
    goto LABEL_30;
  }
  if ( a1 == 35 )
    goto LABEL_34;
  if ( a1 > 30 )
  {
    v6 = a1 - 31;
    v5 = v6 == 0;
    goto LABEL_30;
  }
  if ( a1 != 30 )
  {
    v12 = a1 - 25;
    if ( v12 )
    {
      v6 = v12 - 1;
      if ( !v6 )
        return 1LL;
      goto LABEL_31;
    }
  }
LABEL_34:
  *(_DWORD *)a2 = a3;
  *(_QWORD *)(a2 + 8) = a4;
  return 1LL;
}
