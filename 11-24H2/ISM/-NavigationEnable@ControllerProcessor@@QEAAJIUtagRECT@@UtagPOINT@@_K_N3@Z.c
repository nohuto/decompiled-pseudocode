/*
 * XREFs of ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_K_N3@Z @ 0x18017B294
 * Callers:
 *     ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x180084D28 (-EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x180176674 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ @ 0x18017B35C (-NavigationEnableGlobally@ControllerProcessor@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180036308 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?MapPointByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagPOINT@@1@Z @ 0x18017B164 (-MapPointByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagPOINT@@1@Z.c)
 *     ?MapRectByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagRECT@@1@Z @ 0x18017B1EC (-MapRectByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagRECT@@1@Z.c)
 */

__int64 __fastcall ControllerProcessor::NavigationEnable(
        ControllerProcessor *this,
        int a2,
        struct tagRECT *a3,
        struct tagPOINT a4,
        unsigned __int64 a5,
        bool a6,
        bool a7)
{
  struct tagRECT v7; // xmm0
  ControllerProcessor *v9; // rcx
  struct _LUID *v10; // rbx
  ControllerProcessor *v11; // rcx
  struct _LUID *v12; // r8
  struct tagPOINT *v13; // r9
  struct tagPOINT v15; // [rsp+30h] [rbp-40h] BYREF
  struct tagPOINT v16; // [rsp+38h] [rbp-38h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v18; // [rsp+50h] [rbp-20h] BYREF

  v7 = *a3;
  *((_DWORD *)this + 82) = a2;
  v9 = (ControllerProcessor *)((char *)this + 336);
  v17 = v7;
  *(struct tagRECT *)((char *)this + 344) = v7;
  v16 = a4;
  *(_QWORD *)v9 = a5;
  v15 = 0LL;
  v10 = (struct _LUID *)((unsigned __int64)v9 & -(__int64)(a5 != 0));
  v18 = 0LL;
  ControllerProcessor::MapPointByVisualIdentifier(v9, v10, 0LL, &v16, &v15);
  ControllerProcessor::MapRectByVisualIdentifier(v11, v10, v12, &v17, &v18);
  if ( !a6 || a7 )
    v13 = &v15;
  else
    v13 = 0LL;
  ControllerProcessor::UpdateNavigationState((__int64)this, 0, &v18, v13);
  return 0LL;
}
