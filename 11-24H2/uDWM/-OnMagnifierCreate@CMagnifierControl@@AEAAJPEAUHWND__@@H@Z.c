/*
 * XREFs of ?OnMagnifierCreate@CMagnifierControl@@AEAAJPEAUHWND__@@H@Z @ 0x1800C8B70
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18006AD70 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAVMagnifierTableElement@CMagnifierControl@@PEAUHWND__@@@Z @ 0x18006B6A0 (-FindElement@-$CGenericTableMap@PEAUHWND__@@VMagnifierTableElement@CMagnifierControl@@@@QEAAPEAV.c)
 *     ??1MagnifierTableElement@CMagnifierControl@@QEAA@XZ @ 0x180078B9C (--1MagnifierTableElement@CMagnifierControl@@QEAA@XZ.c)
 *     ?Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z @ 0x1800C823C (-Create@CMagnifier@@SAJPEAUHWND__@@HPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?FindWindowByHandle@CMagnifierControl@@CAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800C8B2C (-FindWindowByHandle@CMagnifierControl@@CAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x1800EC558 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMagnifierControl::OnMagnifierCreate(struct CVisual **this, HWND a2, unsigned int a3)
{
  CMILRefCountBase *v6; // rbx
  struct _RTL_GENERIC_TABLE *v7; // r14
  int IsMagnifier; // eax
  unsigned int v9; // edi
  HWND Ancestor; // rax
  struct CWindowData *WindowByHandle; // rax
  bool v12; // dl
  CVisual *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-38h]
  _QWORD Buffer[5]; // [rsp+30h] [rbp-28h] BYREF
  CMILRefCountBase *v17; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  v17 = 0LL;
  v7 = (struct _RTL_GENERIC_TABLE *)(this + 7);
  if ( CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::FindElement(
         (struct _RTL_GENERIC_TABLE *)(this + 7),
         (__int64)a2) )
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180105630, 1LL, -2147024809, 0x245u, 0LL);
  }
  else
  {
    IsMagnifier = CMagnifier::Create(a2, a3, this[5], &v17);
    v9 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v15 = 552;
      goto LABEL_16;
    }
    Ancestor = GetAncestor(a2, 2u);
    WindowByHandle = CMagnifierControl::FindWindowByHandle(Ancestor);
    if ( !WindowByHandle )
    {
      v9 = -2147023728;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180105630, 1LL, -2147023728, 0x23Au, 0LL);
LABEL_17:
      v6 = v17;
      goto LABEL_19;
    }
    v13 = (CVisual *)*((_QWORD *)WindowByHandle + 55);
    if ( v13 )
    {
      IsMagnifier = CVisual::SetIsMagnifier(v13, v12);
      v9 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v15 = 563;
LABEL_16:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180105630, 1LL, IsMagnifier, v15, 0LL);
        goto LABEL_17;
      }
    }
    else
    {
      *((_BYTE *)WindowByHandle + 739) |= 2u;
    }
    Buffer[0] = a2;
    v6 = v17;
    Buffer[1] = v17;
    if ( v17 )
      CMILRefCountBase::AddRef(v17);
    if ( RtlInsertElementGenericTable(v7, Buffer, 0x10u, 0LL) )
    {
      CMILRefCountBase::AddRef(v6);
    }
    else
    {
      v9 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180105630, 1LL, -2147024882, 0x23Fu, 0LL);
    }
    CMagnifierControl::MagnifierTableElement::~MagnifierTableElement((CMagnifierControl::MagnifierTableElement *)Buffer);
  }
LABEL_19:
  if ( v6 )
    CBaseObject::Release(v6);
  return v9;
}
