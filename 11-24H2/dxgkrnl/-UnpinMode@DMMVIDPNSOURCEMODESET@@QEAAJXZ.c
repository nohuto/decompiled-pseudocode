/*
 * XREFs of ?UnpinMode@DMMVIDPNSOURCEMODESET@@QEAAJXZ @ 0x140058BD8
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x14025B514 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x140264A14 (-UnpinPathModalityFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z @ 0x1402DCF3C (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@I_N@Z.c)
 *     ?UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N@Z @ 0x1403D70E0 (-UnpinMode@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@_N.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNSOURCEMODESET::UnpinMode(DMMVIDPNSOURCEMODESET *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 136) )
  {
    if ( *((_QWORD *)this + 18) )
    {
      *((_QWORD *)this + 18) = 0LL;
    }
    else
    {
      WdLogNewEntry5_WdTrace(this, a2, a3, a4);
      result = 1075708679LL;
      WdLogGlobalForLineNumber = 536;
    }
  }
  else
  {
    WdLogSingleEntry1(7LL, this);
    result = 3223192352LL;
    WdLogGlobalForLineNumber = 529;
  }
  return result;
}
