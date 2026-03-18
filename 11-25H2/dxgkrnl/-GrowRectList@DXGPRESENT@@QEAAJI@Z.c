/*
 * XREFs of ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x140389E64
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1403886A4 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGPRESENT::GrowRectList(DXGPRESENT *this, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  __int64 i; // rdi
  unsigned int v5; // r8d
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rax

  v2 = a2;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = 1;
    if ( *((_DWORD *)this + 17) )
      v5 = *((_DWORD *)this + 17);
    if ( (unsigned int)i >= v5 )
      return 0LL;
    if ( *((_DWORD *)this + i + 40) < (unsigned int)v2 )
      break;
LABEL_6:
    ;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + i + 28));
  v8 = 16 * v2;
  if ( !is_mul_ok(v2, 0x10uLL) )
    v8 = -1LL;
  v9 = operator new[](v8, 0x4B677844u, 256LL, v7);
  *((_QWORD *)this + i + 28) = v9;
  if ( v9 )
  {
    *((_DWORD *)this + i + 40) = v2;
    goto LABEL_6;
  }
  *((_DWORD *)this + i + 40) = 0;
  WdLogSingleEntry2(6LL, this, v2);
  WdLogGlobalForLineNumber = 10453;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"0x%I64x fails to allocate array of 0x%I64d RECTs",
    (__int64)this,
    v2,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
