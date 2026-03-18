/*
 * XREFs of ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801821D0
 * Callers:
 *     ?ProcessSetGeometry@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETGEOMETRY@@@Z @ 0x1801812C0 (-ProcessSetGeometry@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETGEOM.c)
 *     ?SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801813A8 (-SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x180181408 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180181480 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z @ 0x180182F30 (-ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMBINEDGEOMETRY@@@Z.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1802948EC (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWBOX@@@Z @ 0x1802A271C (-ProcessSetViewBox@CProxyGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROXYGEOMETRY_SETVIEWB.c)
 * Callees:
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007EFE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801348B0 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180136550 (-NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@.c)
 *     ?NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180182370 (-NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnkno.c)
 *     ?OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801823D0 (-OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::NotifyOnChanged(_DWORD *a1, __int64 a2, CMaskBrush *a3)
{
  unsigned int v4; // esi
  int v6; // eax
  unsigned int (__fastcall *v7)(_DWORD *); // rax
  int v8; // eax
  __int64 result; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 *v15; // rdx
  unsigned __int64 v16; // rax
  void (__fastcall *v17)(_QWORD, _QWORD, _QWORD, _QWORD); // rax

  v4 = a2;
  v6 = (a1[10] | 1) ^ (((unsigned __int8)a1[10] | 1) ^ (unsigned __int8)(a1[10] + 2)) & 6;
  a1[10] = v6;
  if ( (v6 & 6) == 2 )
  {
    v7 = *(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 176LL);
    if ( (char *)v7 == (char *)CVisual::OnChanged )
    {
      v8 = CVisual::OnChanged((__int64)a1, a2, a3);
    }
    else if ( (char *)v7 == (char *)CTransform3D::OnChanged )
    {
      v8 = CTransform3D::OnChanged((__int64)a1);
    }
    else
    {
      v8 = (char *)v7 == (char *)CVectorShape::OnChanged ? CVectorShape::OnChanged(a1, a2, a3) : v7(a1);
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
          v17 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 88LL);
          if ( (char *)v17 == (char *)CContent::NotifyListenerOfChange )
          {
            CContent::NotifyListenerOfChange((__int64)a1, v15, v4, (__int64)a3);
          }
          else if ( (char *)v17 == (char *)CBrush::NotifyListenerOfChange )
          {
            CBrush::NotifyListenerOfChange((__int64)a1, v15, v4, a3);
          }
          else if ( (char *)v17 == (char *)CGeometry::NotifyListenerOfChange )
          {
            CGeometry::NotifyListenerOfChange(a1, v15, v4, a3);
          }
          else
          {
            v17(a1, v15, v4, a3);
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
