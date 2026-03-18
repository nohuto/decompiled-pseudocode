/*
 * XREFs of ?TdrUpdateDbgBuffer@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1401D06CC
 * Callers:
 *     TdrBugcheckOnTimeout @ 0x140186C5C (TdrBugcheckOnTimeout.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1401D0730 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

void __fastcall TdrUpdateDbgBuffer(struct _TDR_RECOVERY_CONTEXT *a1)
{
  _DWORD *v2; // rcx

  if ( *((_QWORD *)a1 + 357) )
  {
    if ( *((_QWORD *)a1 + 358) )
    {
      v2 = (_DWORD *)*((_QWORD *)a1 + 361);
      if ( v2 )
      {
        if ( *v2 == 1380209782 && v2[682] == 1380209782 )
          memmove(v2, (char *)a1 + 112, 0xAB0uLL);
      }
    }
  }
}
