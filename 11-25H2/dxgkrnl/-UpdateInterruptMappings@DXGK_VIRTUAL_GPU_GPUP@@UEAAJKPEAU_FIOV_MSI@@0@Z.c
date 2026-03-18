/*
 * XREFs of ?UpdateInterruptMappings@DXGK_VIRTUAL_GPU_GPUP@@UEAAJKPEAU_FIOV_MSI@@0@Z @ 0x1402143E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::UpdateInterruptMappings(
        DXGK_VIRTUAL_GPU_GPUP *this,
        unsigned int a2,
        struct _FIOV_MSI *a3,
        struct _FIOV_MSI *a4)
{
  unsigned __int64 v5; // rsi
  void *v6; // rcx
  unsigned int v7; // ebx
  unsigned int *v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx

  v5 = a2;
  v6 = (void *)*((_QWORD *)this + 43);
  v7 = 0;
  v10 = (unsigned int *)((char *)this + 336);
  if ( v6 )
  {
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
    *((_QWORD *)this + 43) = 0LL;
    *v10 = 0;
  }
  if ( (_DWORD)v5 )
  {
    v11 = 32 * v5;
    if ( !is_mul_ok(v5, 0x20uLL) )
      v11 = -1LL;
    v12 = operator new[](v11, 0x4B677844u, 256LL, (__int64)a4);
    *((_QWORD *)this + 43) = v12;
    if ( !v12 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 941;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate MSI-X Table Mappings",
        941LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *v10 = v5;
    do
    {
      v14 = 2LL * v7;
      v15 = 32LL * v7++;
      v16 = *((_QWORD *)this + 43) + v15;
      *(_QWORD *)v16 = *((_QWORD *)a3 + v14);
      *(_DWORD *)(v16 + 8) = *((_DWORD *)a3 + 2 * v14 + 2);
      *(_QWORD *)(v16 + 16) = *((_QWORD *)a4 + v14);
      *(_DWORD *)(v16 + 24) = *((_DWORD *)a4 + 2 * v14 + 2);
    }
    while ( v7 < *v10 );
  }
  return 0LL;
}
