/*
 * XREFs of ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800231F0
 * Callers:
 *     ?ProcessSetGeometry@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETGEOMETRY@@@Z @ 0x1801312EC (-ProcessSetGeometry@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETGEOM.c)
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801A48A0 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1801A6F90 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 *     ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z @ 0x1801F7C08 (-ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z.c)
 *     ?SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18020C018 (-SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1802A023C (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWBOX@@@Z @ 0x1802AC23C (-ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWB.c)
 * Callees:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800217B0 (-NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@.c)
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021DE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
 *     ?OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801DC2B0 (-OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F75B0 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F8C30 (-NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnkno.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::NotifyOnChanged(_DWORD *a1, unsigned int a2, CMaskBrush *a3)
{
  int v6; // eax
  __int64 (__fastcall *v7)(__int64, unsigned int, CMaskBrush *); // rax
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 *v15; // rdx
  unsigned __int64 v16; // rax
  void (__fastcall *v17)(__int64, __int64 *, __int64, CMaskBrush *); // rax

  v6 = (a1[10] | 1) ^ (((unsigned __int8)a1[10] | 1) ^ (unsigned __int8)(a1[10] + 2)) & 6;
  a1[10] = v6;
  if ( (v6 & 6) == 2 )
  {
    v7 = *(__int64 (__fastcall **)(__int64, unsigned int, CMaskBrush *))(*(_QWORD *)a1 + 176LL);
    if ( v7 == CVisual::OnChanged )
    {
      v8 = CVisual::OnChanged((__int64)a1, a2, a3);
    }
    else if ( (char *)v7 == (char *)CTransform3D::OnChanged )
    {
      v8 = CTransform3D::OnChanged(a1);
    }
    else
    {
      v8 = (char *)v7 == (char *)CVectorShape::OnChanged
         ? CVectorShape::OnChanged(a1)
         : ((__int64 (__fastcall *)(_DWORD *))v7)(a1);
    }
    if ( v8 )
    {
      v10 = *((_QWORD *)a1 + 4);
      if ( (v10 & 2) != 0 )
        v10 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v10) = v10 & 1;
      if ( (_DWORD)v10 )
      {
        v11 = 0LL;
        v12 = (unsigned int)v10;
        v13 = 2LL;
        do
        {
          v14 = *((_QWORD *)a1 + 4);
          if ( (v14 & 2) != 0 )
          {
            v15 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
            v16 = *v15;
          }
          else
          {
            v16 = *((_QWORD *)a1 + 4) & 1LL;
            v15 = (__int64 *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
          }
          if ( v11 >= v16 )
          {
            v15 = 0LL;
          }
          else if ( v16 != 1 )
          {
            v15 = (__int64 *)v15[v13];
          }
          v17 = *(void (__fastcall **)(__int64, __int64 *, __int64, CMaskBrush *))(*(_QWORD *)a1 + 88LL);
          if ( v17 == CContent::NotifyListenerOfChange )
          {
            CContent::NotifyListenerOfChange((__int64)a1, v15, a2, a3);
          }
          else if ( v17 == CBrush::NotifyListenerOfChange )
          {
            CBrush::NotifyListenerOfChange((__int64)a1, v15, a2, a3);
          }
          else if ( (char *)v17 == (char *)CGeometry::NotifyListenerOfChange )
          {
            CGeometry::NotifyListenerOfChange(a1, v15, a2, a3);
          }
          else
          {
            v17((__int64)a1, v15, a2, a3);
          }
          ++v11;
          ++v13;
          --v12;
        }
        while ( v12 );
      }
    }
  }
  result = (a1[10] ^ (2 * (a1[10] >> 1) - 2)) & 6;
  a1[10] ^= result;
  return result;
}
