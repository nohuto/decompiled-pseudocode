/*
 * XREFs of ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1401AAC34
 * Callers:
 *     DpiAddDevice @ 0x1402393B0 (DpiAddDevice.c)
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x140416310 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgAllocateDiagnosticInfoArgs(int a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v2 = operator new(0xE8uLL, 0x4B677844u, 256LL);
  if ( !v2 )
    goto LABEL_9;
  if ( a1 == 1 || a1 == 2 || (v3 = 0x100000, a1 != 3) )
    v3 = 0x80000;
  v4 = operator new[](v3, 0x4B677844u, 256LL);
  *(_QWORD *)(v2 + 224) = v4;
  if ( !v4 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v2);
    v2 = 0LL;
LABEL_9:
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 11741;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Out of memory allocating DxgAllocateDiagnosticInfoArgs",
      11741LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v2;
  }
  *(_DWORD *)(v2 + 220) = 0;
  *(_DWORD *)(v2 + 216) = v3;
  *(_DWORD *)(v2 + 8) = a1;
  return v2;
}
