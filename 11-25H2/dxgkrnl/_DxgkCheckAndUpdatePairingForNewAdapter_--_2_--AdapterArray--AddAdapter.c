/*
 * XREFs of _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter @ 0x1401A859C
 * Callers:
 *     _lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_ @ 0x1401A82B0 (_lambda_85aa73a68ff66b421643f8c78198376d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140033640 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x14006AC40 (--_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter(
        unsigned int *a1,
        struct DXGADAPTER *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v7; // r14d
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  bool v10; // cf
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned int i; // r8d
  __int64 v15; // rcx
  __int64 v16; // rdx
  DXGADAPTER_REFERENCE *v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // eax
  DXGADAPTER_REFERENCE *v20; // rcx

  v4 = a1[1];
  if ( *a1 < v4 )
  {
LABEL_14:
    v18 = *a1;
    v19 = v18 + 1;
    v20 = (DXGADAPTER_REFERENCE *)(*((_QWORD *)a1 + 1) + 16 * v18);
    *a1 = v19;
    DXGADAPTER_REFERENCE::Assign(v20, a2);
    return 0LL;
  }
  v7 = v4 + 16;
  v8 = v4 + 16;
  v9 = 16 * v8;
  if ( !is_mul_ok(v8, 0x10uLL) )
    v9 = -1LL;
  v10 = __CFADD__(v9, 8LL);
  v11 = v9 + 8;
  if ( v10 )
    v11 = -1LL;
  v12 = operator new[](v11, 0x4B677844u, 256LL, a4);
  if ( v12 )
  {
    v13 = v12 + 8;
    *(_QWORD *)v12 = v8;
    `vector constructor iterator'(
      (char *)(v12 + 8),
      16LL,
      (unsigned int)v8,
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
    if ( v13 )
    {
      if ( *((_QWORD *)a1 + 1) )
      {
        for ( i = 0; i < *a1; *(_QWORD *)(v15 + 8 * v16 + 8) = 0LL )
        {
          v15 = *((_QWORD *)a1 + 1);
          v16 = i++;
          v16 *= 2LL;
          *(_QWORD *)(v13 + 8 * v16) = *(_QWORD *)(v15 + 8 * v16);
          *(_QWORD *)(v13 + 8 * v16 + 8) = *(_QWORD *)(v15 + 8 * v16 + 8);
          *(_QWORD *)(v15 + 8 * v16) = 0LL;
        }
        v17 = (DXGADAPTER_REFERENCE *)*((_QWORD *)a1 + 1);
        if ( v17 )
          DXGADAPTER_REFERENCE::`vector deleting destructor'(v17);
      }
      a1[1] = v7;
      *((_QWORD *)a1 + 1) = v13;
      goto LABEL_14;
    }
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 12659;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    0xFFFFFFFFLL,
    L"Failed to allocate DXGADAPTER_REFERENCE array.",
    12659LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
