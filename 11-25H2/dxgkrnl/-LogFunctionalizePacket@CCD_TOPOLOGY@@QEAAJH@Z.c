/*
 * XREFs of ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x140376F00
 * Callers:
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1402EBB8C (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x140372558 (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1403757E0 (DxgkWriteDiagEntry.c)
 *     ?FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3@@I@Z @ 0x140376FAC (-FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::LogFunctionalizePacket(CCD_TOPOLOGY *this, int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edi
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *v7; // rax
  struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *v8; // rbx
  __int64 result; // rax

  v6 = (*(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) << 6) + 56;
  v7 = (struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *)operator new[](v6, 0x63644356u, 256LL, a4);
  v8 = v7;
  if ( v7 )
  {
    CCD_TOPOLOGY::FillFunctionalizePacket(this, v7, v6);
    *((_DWORD *)v8 + 13) = a2;
    DxgkWriteDiagEntry(v8);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(6LL, *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL));
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 1050;
  }
  return result;
}
