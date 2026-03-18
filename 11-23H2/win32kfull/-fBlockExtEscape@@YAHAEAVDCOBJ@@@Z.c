/*
 * XREFs of ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C027612C
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1C0275074 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0276B68 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fBlockExtEscape(struct DCOBJ *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !*(_QWORD *)a1
    || (*(_DWORD *)(*(_QWORD *)a1 + 76LL) & 0x400) == 0
    || !(unsigned int)UserIsRemoteAndNotDisconnectConnection() )
  {
    return *(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000;
  }
  return v1;
}
