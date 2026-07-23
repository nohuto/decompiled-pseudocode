/*
 * XREFs of PnpDoPolicyCheck @ 0x140BE0638
 * Callers:
 *     PipInitializeDriverDependentDLLs @ 0x140C65954 (PipInitializeDriverDependentDLLs.c)
 *     PnpInitializeBootStartDriver @ 0x140C68294 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     PnpDiagnosticTraceElamDecision @ 0x1404C19DC (PnpDiagnosticTraceElamDecision.c)
 */

char __fastcall PnpDoPolicyCheck(int a1, char a2)
{
  bool v2; // bl
  __int64 v5; // rcx
  bool v6; // zf

  v2 = 0;
  if ( PnpBootDriverCallbackObject )
  {
    if ( !a1 )
    {
      v5 = 1LL;
      v2 = (PnpDriverImageLoadPolicy & 1) != 0;
      goto LABEL_13;
    }
    v5 = (unsigned int)(a1 - 1);
    if ( (_DWORD)v5 )
    {
      v5 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 )
      {
        if ( (_DWORD)v5 != 1 )
        {
LABEL_13:
          PnpDiagnosticTraceElamDecision(v5, a1, PnpDriverImageLoadPolicy, v2);
          return v2;
        }
        v6 = (PnpDriverImageLoadPolicy & 2) == 0;
      }
      else
      {
        v6 = (PnpDriverImageLoadPolicy & 4) == 0;
      }
      if ( v6 || !a2 )
        goto LABEL_13;
    }
    v2 = 1;
    goto LABEL_13;
  }
  return 1;
}
