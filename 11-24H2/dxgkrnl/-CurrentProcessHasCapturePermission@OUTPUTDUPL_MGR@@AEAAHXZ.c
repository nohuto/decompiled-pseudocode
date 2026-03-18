/*
 * XREFs of ?CurrentProcessHasCapturePermission@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1401E4CE4
 * Callers:
 *     ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1401E54B8 (-IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z @ 0x1403CB428 (-GetFrameInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO@@@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CurrentProcessHasCapturePermission(OUTPUTDUPL_MGR *this)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rbx
  __int64 Win32kImportTable; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this);
  v2 = CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process
    || !*(_QWORD *)CurrentProcessWin32Process
    || (*(_DWORD *)(CurrentProcessWin32Process + 288) & 1) == 0 )
  {
    return 0LL;
  }
  Win32kImportTable = DxgkGetWin32kImportTable();
  (*(void (__fastcall **)(__int64, __int64))(Win32kImportTable + 24))(v2, 1LL);
  return 1LL;
}
