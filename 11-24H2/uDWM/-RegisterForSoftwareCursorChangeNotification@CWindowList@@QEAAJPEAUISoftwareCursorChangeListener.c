/*
 * XREFs of ?RegisterForSoftwareCursorChangeNotification@CWindowList@@QEAAJPEAUISoftwareCursorChangeListener@@@Z @ 0x1800F1AD0
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18006AD70 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180025C28 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_bd62004ce87943b7476579f2d40f654c___ @ 0x1800ED2F4 (CWindowList--ForEachSoftwareCursorListener__lambda_bd62004ce87943b7476579f2d40f654c___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::RegisterForSoftwareCursorChangeNotification(
        CWindowList *this,
        struct ISoftwareCursorChangeListener *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r8d
  int v5; // edi
  int v6; // r9d
  unsigned int v7; // eax
  _QWORD v9[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct ISoftwareCursorChangeListener *v11; // [rsp+68h] [rbp+28h] BYREF
  char v12; // [rsp+70h] [rbp+30h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+78h] [rbp+38h] BYREF

  v11 = a2;
  v13 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v12 = 0;
  v9[0] = &v11;
  v9[1] = &v12;
  CWindowList::ForEachSoftwareCursorListener__lambda_bd62004ce87943b7476579f2d40f654c___((__int64)this, (__int64)v9);
  if ( !v12 )
  {
    v3 = *((_DWORD *)this + 166);
    v4 = v3 + 1;
    if ( v3 + 1 < v3 )
    {
      v5 = -2147024362;
      v6 = -2147024362;
      v7 = 179;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, v7, 0LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x696,
        (__int64)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v5);
      goto LABEL_7;
    }
    if ( v4 > *((_DWORD *)this + 165) )
    {
      v5 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 640, 8, 1, &v11);
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 190;
        goto LABEL_10;
      }
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 80) + 8LL * *((unsigned int *)this + 166)) = v11;
      *((_DWORD *)this + 166) = v4;
    }
  }
  v5 = 0;
LABEL_7:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v13);
  return (unsigned int)v5;
}
