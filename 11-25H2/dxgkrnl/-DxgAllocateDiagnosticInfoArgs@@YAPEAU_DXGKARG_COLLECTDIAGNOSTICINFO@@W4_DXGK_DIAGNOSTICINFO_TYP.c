/*
 * XREFs of ?DxgAllocateDiagnosticInfoArgs@@YAPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@W4_DXGK_DIAGNOSTICINFO_TYPE@@@Z @ 0x1401A8714
 * Callers:
 *     DpiAddDevice @ 0x1402329D0 (DpiAddDevice.c)
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgAllocateDiagnosticInfoArgs(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v8; // rax

  v5 = operator new(0xE8uLL, 0x4B677844u, 256LL, a4);
  if ( !v5 )
    goto LABEL_9;
  if ( a1 == 1 || a1 == 2 || (v7 = 0x100000, a1 != 3) )
    v7 = 0x80000;
  v8 = operator new[](v7, 0x4B677844u, 256LL, v6);
  *(_QWORD *)(v5 + 224) = v8;
  if ( !v8 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)v5);
    v5 = 0LL;
LABEL_9:
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 11680;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Out of memory allocating DxgAllocateDiagnosticInfoArgs",
      11680LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v5;
  }
  *(_DWORD *)(v5 + 220) = 0;
  *(_DWORD *)(v5 + 216) = v7;
  *(_DWORD *)(v5 + 8) = a1;
  return v5;
}
