/*
 * XREFs of PspUpdateCalloutParameters @ 0x1404EEDCC
 * Callers:
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     KeUserModeCallback @ 0x1408BF150 (KeUserModeCallback.c)
 *     PfpQueryGpuUtilization @ 0x140934A2C (PfpQueryGpuUtilization.c)
 *     ExpWin32CloseProcedure @ 0x140934B50 (ExpWin32CloseProcedure.c)
 *     ExpWin32OkayToCloseProcedure @ 0x140934C50 (ExpWin32OkayToCloseProcedure.c)
 *     ExpWin32DeleteProcedure @ 0x140934D90 (ExpWin32DeleteProcedure.c)
 *     ExpWin32OpenProcedure @ 0x140934E80 (ExpWin32OpenProcedure.c)
 *     ExpWin32ParseProcedure @ 0x140934FB0 (ExpWin32ParseProcedure.c)
 *     NtDeleteAtom @ 0x140935070 (NtDeleteAtom.c)
 *     PsConvertToGuiThread @ 0x140935290 (PsConvertToGuiThread.c)
 *     NtAddAtomEx @ 0x140935520 (NtAddAtomEx.c)
 *     NtQueryInformationAtom @ 0x1409356D0 (NtQueryInformationAtom.c)
 *     PspExitLastThread @ 0x1409374F0 (PspExitLastThread.c)
 *     NtFindAtom @ 0x140992B70 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1409BADD0 (PsInvokeWin32Callout.c)
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

  if ( a1 <= 24 )
  {
    if ( a1 == 24 )
      goto LABEL_32;
    if ( a1 <= 10 )
    {
      if ( a1 == 10 )
        goto LABEL_32;
      if ( a1 <= 5 )
      {
        if ( a1 == 5 )
          goto LABEL_32;
        v4 = a1 == 0;
        goto LABEL_26;
      }
      v6 = a1 - 6;
      v5 = v6 == 0;
LABEL_28:
      if ( !v5 )
      {
LABEL_29:
        v12 = v6 - 1;
        if ( v12 && (unsigned int)(v12 - 1) >= 2 )
          return 0LL;
        goto LABEL_32;
      }
      goto LABEL_32;
    }
    if ( a1 > 16 )
    {
      v6 = a1 - 18;
      v5 = v6 == 0;
      goto LABEL_28;
    }
    if ( a1 == 16 )
      goto LABEL_32;
    a1 -= 11;
    v4 = a1 == 0;
LABEL_26:
    if ( v4 )
      goto LABEL_32;
    v6 = a1 - 1;
    v5 = v6 == 0;
    goto LABEL_28;
  }
  if ( a1 > 35 )
  {
    v8 = a1 - 36;
    if ( !v8 )
      goto LABEL_32;
    v9 = v8 - 1;
    if ( !v9 )
      goto LABEL_32;
    v10 = v9 - 1;
    if ( !v10 )
      goto LABEL_32;
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_32;
    a1 = v11 - 1;
    v4 = a1 == 0;
    goto LABEL_26;
  }
  if ( a1 == 35 )
    goto LABEL_32;
  if ( a1 > 30 )
  {
    v6 = a1 - 31;
    v5 = v6 == 0;
    goto LABEL_28;
  }
  if ( a1 != 30 )
  {
    v7 = a1 - 25;
    if ( v7 )
    {
      v6 = v7 - 1;
      if ( !v6 )
        return 1LL;
      goto LABEL_29;
    }
  }
LABEL_32:
  *(_DWORD *)a2 = a3;
  *(_QWORD *)(a2 + 8) = a4;
  return 1LL;
}
