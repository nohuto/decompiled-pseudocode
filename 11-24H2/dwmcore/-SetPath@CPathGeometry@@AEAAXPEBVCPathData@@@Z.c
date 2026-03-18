/*
 * XREFs of ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x180181408
 * Callers:
 *     ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1801807C4 (-ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z.c)
 *     ?SetProperty@CPathGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180181250 (-SetProperty@CPathGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18000D9B0 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801821D0 (-NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x180182390 (--8CPathData@@QEBA_NAEBV0@@Z.c)
 */

void __fastcall CPathGeometry::SetPath(CPathGeometry *this, const struct CPathData *a2, __int64 a3)
{
  CPathData **v3; // rsi
  char v6; // al

  v3 = (CPathData **)((char *)this + 136);
  if ( *((_QWORD *)this + 17) && a2 )
    v6 = CPathData::operator==(*v3, a2, a3);
  else
    v6 = *v3 == a2;
  if ( !v6 )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=(v3, a2);
    CGeometry::NotifyOnChanged(this, 0LL, 0LL);
  }
}
