/*
 * XREFs of ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x140185340
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x140071260 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     _DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO @ 0x1401FEF64 (_DxgDbgTakeSnapshot_--_2_--_AUTO--__AUTO.c)
 */

__int64 __fastcall DxgDbgTakeSnapshot(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rsi
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // r9
  int Snapshot; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // eax
  void *Src[2]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  if ( SeSinglePrivilegeCheck((LUID)11LL, 1) )
  {
    *(_OWORD *)Src = 0LL;
    v7 = TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 1, 0);
    if ( v7 )
    {
      v10 = v7 + 4096;
      Src[0] = (void *)ExAllocatePool2(256LL, (unsigned int)(v7 + 4096), 1380209782LL, v8);
      if ( Src[0] )
      {
        WdLogSingleEntry2(4LL, a1, v4);
        WdLogGlobalForLineNumber = 596;
        v11 = TdrCollectBugcheckSecondaryDumpData((char *)Src[0], v10, 1, 0);
        Snapshot = WdDbgCreateSnapshot(&WdDxgkSecondaryDataGUID, Src[0], v11, &Src[1], a3);
        if ( Snapshot >= 0 )
        {
          if ( (unsigned int)v4 >= *a3 )
          {
            if ( a1 )
              memmove(a1, Src[1], *a3);
            Snapshot = 0;
          }
          else
          {
            Snapshot = 1075707914;
          }
        }
      }
      else
      {
        Snapshot = -1073741801;
      }
    }
    else
    {
      Snapshot = -1073741823;
    }
    DxgDbgTakeSnapshot_::_2_::_AUTO::__AUTO(Src);
    return (unsigned int)Snapshot;
  }
  else
  {
    WdLogSingleEntry2(4LL, a1, (unsigned int)v4);
    result = 3221225506LL;
    WdLogGlobalForLineNumber = 559;
  }
  return result;
}
