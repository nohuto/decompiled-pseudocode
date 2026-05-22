/*
 * XREFs of ?RuntimeClassInitialize@MagnifierGestureTarget@@QEAAJV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@V?$ComPtr@VInputSite@@@34@W4GestureType@1@@Z @ 0x1801A74F0
 * Callers:
 *     ??$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@AEAV?$ComPtr@VInputSite@@@45@AEAW4GestureType@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputTarget@@AEAV?$ComPtr@VMagnifierControllerProxy@@@12@AEAV?$ComPtr@VInputSite@@@12@AEAW4GestureType@MagnifierGestureTarget@@@Z @ 0x1801A5604 (--$MakeAndInitialize@VMagnifierGestureTarget@@UIInputTarget@@AEAV-$ComPtr@VMagnifierControllerPr.c)
 * Callees:
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002192C (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetTailButtonLongPressedEventsRequired@BamoPenEventsClientProxy@@UEAA_NXZ @ 0x180130E50 (-GetTailButtonLongPressedEventsRequired@BamoPenEventsClientProxy@@UEAA_NXZ.c)
 *     ??4?$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801A5DC0 (--4-$ComPtr@VMagnifierControllerProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MagnifierGestureTarget::RuntimeClassInitialize(__int64 a1, __int64 *a2, __int64 *a3, int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx

  Microsoft::WRL::ComPtr<MagnifierControllerProxy>::operator=((__int64 *)(a1 + 16), a2);
  *(_DWORD *)(a1 + 32) = a4;
  if ( BamoPenEventsClientProxy::GetTailButtonLongPressedEventsRequired((BamoPenEventsClientProxy *)(*(_QWORD *)(a1 + 16) + 8LL)) )
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(a1 + 24), a3);
  v8 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 16) + 8LL))(v8 + 16);
  }
  v9 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
