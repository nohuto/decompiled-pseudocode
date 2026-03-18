/*
 * XREFs of ?NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180136550
 * Callers:
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180134C70 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801821D0 (-NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x18007EFA0 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007F390 (-IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EnterResource@CResource@@QEAA_NXZ @ 0x18007F3B0 (-EnterResource@CResource@@QEAA_NXZ.c)
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801348B0 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801368D0 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180136900 (-IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180182370 (-NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnkno.c)
 *     ?OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801823D0 (-OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CBrush::NotifyListenerOfChange(__int64 a1, __int64 *a2, unsigned int a3, CMaskBrush *a4)
{
  unsigned __int64 v4; // rsi
  unsigned int v6; // edi
  bool (__fastcall *v8)(__int64, int); // rax
  void (__fastcall *v9)(__int64 *, _QWORD, CMaskBrush *); // rax
  __int64 (__fastcall *v10)(__int64 *, _QWORD, CMaskBrush *); // rax
  int v11; // eax
  void (__fastcall *v12)(__int64 *, __int64); // rax
  __int64 (__fastcall *v13)(__int64 *, __int64, _QWORD); // rax
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r14
  unsigned __int64 *v17; // rax
  unsigned int Count; // eax
  unsigned __int64 v19; // r14
  __int64 v20; // r15
  unsigned __int64 *v21; // rax
  __int64 (__fastcall *v22)(__int64 *, __int64); // rax
  char v24; // al

  v4 = 0LL;
  v6 = a3;
  if ( a3 == 14 )
  {
    v22 = *(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 64);
    if ( !((char *)v22 == (char *)CSpriteVisual::IsOfType
         ? CSpriteVisual::IsOfType(a2, 17LL)
         : (unsigned __int8)v22(a2, 17LL)) )
      v6 = 0;
  }
  v8 = *(bool (__fastcall **)(__int64, int))(*a2 + 64);
  if ( v8 == CSurfaceBrush::IsOfType )
  {
    if ( !CBrush::IsOfType((__int64)a2, 184) )
      goto LABEL_4;
  }
  else if ( (char *)v8 == (char *)CSpriteVisual::IsOfType )
  {
    if ( !CVisual::IsOfType((__int64)a2, 184) )
      goto LABEL_4;
  }
  else
  {
    if ( (char *)v8 == (char *)CSpriteVectorShape::IsOfType )
      v24 = CSpriteVectorShape::IsOfType(a2, 184LL);
    else
      v24 = v8((__int64)a2, 184);
    if ( !v24 )
      goto LABEL_4;
  }
  if ( !v6 )
  {
    v12 = *(void (__fastcall **)(__int64 *, __int64))(*a2 + 80);
    if ( (char *)v12 == (char *)CResource::NotifyOnChanged )
    {
      if ( CResource::EnterResource((CResource *)a2) )
      {
        v13 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*a2 + 176);
        if ( (char *)v13 == (char *)CVisual::OnChanged )
        {
          v14 = CVisual::OnChanged((__int64)a2, 5u, 0LL);
        }
        else if ( (char *)v13 == (char *)CTransform3D::OnChanged )
        {
          v14 = CTransform3D::OnChanged((__int64)a2);
        }
        else
        {
          v14 = (char *)v13 == (char *)CVectorShape::OnChanged
              ? CVectorShape::OnChanged(a2, 5LL, 0LL)
              : v13(a2, 5LL, 0LL);
        }
        if ( v14 )
        {
          Count = CPtrArray<CVisual>::GetCount(a2 + 4);
          if ( Count )
          {
            v19 = 0LL;
            v20 = Count;
            do
            {
              v21 = __A__CPtrArray___CBX__QEBAPEBX_K_Z(a2 + 4, v19);
              if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*a2 + 88) == CGeometry::NotifyListenerOfChange )
                CGeometry::NotifyListenerOfChange(a2, v21, 5LL, 0LL);
              else
                (*(void (__fastcall **)(__int64 *, unsigned __int64 *, __int64))(*a2 + 88))(a2, v21, 5LL);
              ++v19;
              --v20;
            }
            while ( v20 );
          }
        }
      }
      *((_DWORD *)a2 + 10) ^= ((unsigned __int8)*((_DWORD *)a2 + 10) ^ (unsigned __int8)(2 * (*((_DWORD *)a2 + 10) >> 1)
                                                                                       - 2)) & 6;
    }
    else if ( (char *)v12 == (char *)CBrush::NotifyOnChanged )
    {
      CBrush::NotifyOnChanged((__int64)a2, 5u, 0LL);
    }
    else
    {
      v12(a2, 5LL);
    }
  }
LABEL_4:
  v9 = *(void (__fastcall **)(__int64 *, _QWORD, CMaskBrush *))(*a2 + 80);
  if ( (char *)v9 == (char *)CResource::NotifyOnChanged )
  {
    if ( CResource::EnterResource((CResource *)a2) )
    {
      v10 = *(__int64 (__fastcall **)(__int64 *, _QWORD, CMaskBrush *))(*a2 + 176);
      if ( (char *)v10 == (char *)CVisual::OnChanged )
      {
        v11 = CVisual::OnChanged((__int64)a2, v6, a4);
      }
      else if ( (char *)v10 == (char *)CTransform3D::OnChanged )
      {
        v11 = CTransform3D::OnChanged((__int64)a2);
      }
      else
      {
        v11 = (char *)v10 == (char *)CVectorShape::OnChanged ? CVectorShape::OnChanged(a2, v6, a4) : v10(a2, v6, a4);
      }
      if ( v11 )
      {
        v15 = CPtrArray<CVisual>::GetCount(a2 + 4);
        if ( v15 )
        {
          v16 = v15;
          do
          {
            v17 = __A__CPtrArray___CBX__QEBAPEBX_K_Z(a2 + 4, v4);
            if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*a2 + 88) == CGeometry::NotifyListenerOfChange )
              CGeometry::NotifyListenerOfChange(a2, v17, v6, a4);
            else
              (*(void (__fastcall **)(__int64 *, unsigned __int64 *, _QWORD, CMaskBrush *))(*a2 + 88))(a2, v17, v6, a4);
            ++v4;
            --v16;
          }
          while ( v16 );
        }
      }
    }
    *((_DWORD *)a2 + 10) ^= ((unsigned __int8)*((_DWORD *)a2 + 10) ^ (unsigned __int8)(2 * (*((_DWORD *)a2 + 10) >> 1)
                                                                                     - 2)) & 6;
  }
  else if ( (char *)v9 == (char *)CBrush::NotifyOnChanged )
  {
    CBrush::NotifyOnChanged((__int64)a2, v6, (__int64)a4);
  }
  else
  {
    v9(a2, v6, a4);
  }
}
