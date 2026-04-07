/*
 * XREFs of ?OnMagnifierDestroy@CMagnifierControl@@AEAAJPEAUHWND__@@@Z @ 0x1800CB5FC
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800CAE58 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x18006D11E (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHPEAVMagnifierTableElement@CMagnifierControl@@@Z @ 0x1800CB99C (-RemoveElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAHP.c)
 *     CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___ @ 0x180108434 (CWindowList--ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___.c)
 */

__int64 __fastcall CMagnifierControl::OnMagnifierDestroy(CMagnifierControl *this, __int64 a2)
{
  unsigned int v4; // esi
  struct _RTL_GENERIC_TABLE *v5; // rbp
  CBaseObject **Element; // rax
  CMagnifierControl::MagnifierTableElement *v7; // rbx
  CBaseObject *v8; // rcx
  unsigned __int64 *v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]
  unsigned __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v11 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
  v10 = &v12;
  v12 = ((unsigned __int64)this + 16) & -(__int64)(this != 0LL);
  CWindowList::ForEachSoftwareCursorListener__lambda_e7ecf37d3f646281150205d781ba1fb4___(v11, &v10);
  v5 = (struct _RTL_GENERIC_TABLE *)((char *)this + 56);
  Element = (CBaseObject **)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
                              (struct _RTL_GENERIC_TABLE *)((char *)this + 56),
                              a2);
  v7 = (CMagnifierControl::MagnifierTableElement *)Element;
  if ( Element )
  {
    v8 = Element[1];
    if ( v8 )
    {
      CBaseObject::Release(v8);
      *((_QWORD *)v7 + 1) = 0LL;
    }
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::RemoveElement(v5, v7);
  }
  else
  {
    v4 = -2147023728;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180129198, 1LL, -2147023728, 0x290u);
  }
  return v4;
}
