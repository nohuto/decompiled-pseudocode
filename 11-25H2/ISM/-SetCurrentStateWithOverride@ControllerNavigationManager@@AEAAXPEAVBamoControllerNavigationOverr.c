/*
 * XREFs of ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180175CC8
 * Callers:
 *     ?OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180175014 (-OverrideStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationOverrideProx.c)
 *     ?RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180175B40 (-RegisterOverride@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x1800284CC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180039878 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     ?NavigationPaused@ControllerNavigationManager@InputETW@@SAXXZ @ 0x180174D64 (-NavigationPaused@ControllerNavigationManager@InputETW@@SAXXZ.c)
 *     ?ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x180175BEC (-ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ControllerNavigationManager::SetCurrentStateWithOverride(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationOverrideProxy *a2)
{
  struct BamoControllerNavigationOverrideProxy *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  __int64 (__fastcall ***v9)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  v4 = (struct BamoControllerNavigationOverrideProxy *)*((_QWORD *)this + 24);
  if ( v4 != a2 )
  {
    v9 = (__int64 (__fastcall ***)(_QWORD))a2;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v9);
    v5 = *((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = a2;
    v4 = a2;
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v4 = (struct BamoControllerNavigationOverrideProxy *)*((_QWORD *)this + 24);
    }
  }
  if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)v4 + 1) + 32LL))((__int64)v4 + 8) )
  {
    LOBYTE(v6) = 1;
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, v6);
    InputETW::ControllerNavigationManager::NavigationPaused();
    v7 = (_QWORD *)*((_QWORD *)this + 9);
    for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
      ControllerProcessor::UpdateNavigationState(i[3], 1, 0LL, 0LL);
  }
  else
  {
    ControllerNavigationManager::ResumeNavigation(this, *((struct BamoControllerNavigationOverrideProxy **)this + 24));
  }
}
