/*
 * XREFs of SmmAllocatePhysicalObject @ 0x140011A14
 * Callers:
 *     ?SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE@@IQEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@_NPEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@PEAPEAU_MDL@@@Z @ 0x14001154C (-SysMmCreateMdlPhysicalObject@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@22W4_MEMORY_CACHING_TYPE.c)
 *     SmmCreatePhysicalObjectInternal @ 0x140011870 (SmmCreatePhysicalObjectInternal.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

_QWORD *__fastcall SmmAllocatePhysicalObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  _QWORD *Pool2; // rbx
  __int64 v7; // rax
  const wchar_t *v8; // r9

  v4 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 104LL, 829651012LL, a4);
  if ( Pool2 )
  {
    if ( (dword_14015E600 & 0x20) == 0 || (v4 = operator new(144LL, 829651012LL, 64LL)) != 0 )
    {
      Pool2[3] = v4;
      return Pool2;
    }
    _InterlockedIncrement(&dword_14015E650);
    WdLogSingleEntry0(6LL);
    v7 = 352LL;
    v8 = L"Failed to allocate SYSMM_PHYSICAL_OBJECT_DEBUG";
  }
  else
  {
    _InterlockedIncrement(&dword_14015E64C);
    WdLogSingleEntry0(6LL);
    v7 = 343LL;
    v8 = L"Failed to allocate (NonPaged) SYSMM_PHYSICAL_OBJECT";
  }
  WdLogGlobalForLineNumber = v7;
  DxgkLogInternalTriageEvent(0, 262145, -1, (_DWORD)v8, v7, 0LL, 0LL, 0LL, 0LL);
  if ( Pool2 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Pool2);
  return 0LL;
}
