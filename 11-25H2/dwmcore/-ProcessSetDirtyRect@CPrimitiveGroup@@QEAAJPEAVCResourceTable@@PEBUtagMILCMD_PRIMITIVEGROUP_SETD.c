/*
 * XREFs of ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x180191CA0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800AABD0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180191DC0 (-BuildFromRectFs@CRectanglesShape@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessSetDirtyRect(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT *a3,
        const void *a4,
        unsigned int a5)
{
  unsigned int v6; // r8d
  char v7; // di
  __int64 (__fastcall *v8)(CPrimitiveGroup *, unsigned int, __int64); // rax
  _QWORD v10[5]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v11[16]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp-18h] BYREF

  v10[1] = 0LL;
  v12 = 0LL;
  v6 = *((_DWORD *)a3 + 2);
  v7 = 1;
  v10[0] = &CRectanglesShape::`vftable';
  v10[2] = v11;
  v10[3] = v11;
  v10[4] = &v12;
  if ( v6 && a5 == 16LL * v6 )
  {
    CRectanglesShape::BuildFromRectFs(v10, a4);
    *((_QWORD *)this + 69) = v10;
    v8 = *(__int64 (__fastcall **)(CPrimitiveGroup *, unsigned int, __int64))(*(_QWORD *)this + 80LL);
    if ( (char *)v8 == (char *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 1u, (__int64)this);
    else
      v8(this, 1u, (__int64)this);
    v7 = 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003303421, 0x1C4u, 0LL);
  }
  *((_QWORD *)this + 69) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(CPrimitiveGroup *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v10);
  return 0LL;
}
