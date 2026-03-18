/*
 * XREFs of ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021DE0
 * Callers:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021130 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021400 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021DE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180022C70 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800231F0 (-NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x1800AF200 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 * Callees:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?EnterResource@CResource@@QEAA_NXZ @ 0x1800213D0 (-EnterResource@CResource@@QEAA_NXZ.c)
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021400 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x180021770 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021DE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
 *     ?IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022190 (-IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022620 (-IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007D720 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801DC2B0 (-OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F75B0 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F8C30 (-NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnkno.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CContent::NotifyListenerOfChange(__int64 a1, __int64 *a2, __int64 a3, CMaskBrush *a4)
{
  unsigned int v6; // edi
  __int64 (__fastcall *v7)(__int64 *, __int64); // rax
  void (__fastcall *v8)(__int64 *, _QWORD, CMaskBrush *); // rax
  __int64 (__fastcall *v9)(__int64, unsigned int, CMaskBrush *); // rax
  int v10; // eax
  void (__fastcall *v11)(__int64 *, __int64); // rax
  __int64 (__fastcall *v12)(__int64, unsigned int, CMaskBrush *); // rax
  int v13; // eax
  unsigned int v14; // eax
  unsigned __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 *v19; // r13
  void (__fastcall *v20)(__int64, __int64 *, __int64, CMaskBrush *); // rax
  unsigned int v21; // r12d
  unsigned int Count; // eax
  unsigned __int64 v23; // rsi
  __int64 v24; // rbp
  unsigned __int64 *v25; // rax
  void (__fastcall *v26)(__int64, __int64 *, __int64, CMaskBrush *); // r10
  char v27; // al
  __int64 (__fastcall *v28)(unsigned __int64 *, __int64); // rax
  char v29; // al

  v6 = a3;
  v7 = *(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 64);
  if ( (char *)v7 == (char *)&CSurfaceBrush::IsOfType )
  {
    if ( !(unsigned __int8)CBrush::IsOfType(a2, 182LL, a3, a4) )
      goto LABEL_3;
  }
  else if ( (char *)v7 == (char *)CSpriteVisual::IsOfType )
  {
    if ( !(unsigned __int8)CVisual::IsOfType(a2, 182LL) )
      goto LABEL_3;
  }
  else
  {
    if ( (char *)v7 == (char *)CSpriteVectorShape::IsOfType )
      v27 = CSpriteVectorShape::IsOfType(a2, 182LL, a3, a4);
    else
      v27 = v7(a2, 182LL);
    if ( !v27 )
      goto LABEL_3;
  }
  if ( !v6 )
  {
    v11 = *(void (__fastcall **)(__int64 *, __int64))(*a2 + 80);
    if ( (char *)v11 == (char *)CResource::NotifyOnChanged )
    {
      if ( CResource::EnterResource((CResource *)a2) )
      {
        v12 = *(__int64 (__fastcall **)(__int64, unsigned int, CMaskBrush *))(*a2 + 176);
        if ( v12 == CVisual::OnChanged )
        {
          v13 = CVisual::OnChanged((__int64)a2, 5u, 0LL);
        }
        else if ( (char *)v12 == (char *)CTransform3D::OnChanged )
        {
          v13 = CTransform3D::OnChanged(a2);
        }
        else
        {
          v13 = (char *)v12 == (char *)CVectorShape::OnChanged ? CVectorShape::OnChanged(a2) : v12((__int64)a2, 5u, 0LL);
        }
        if ( v13 )
        {
          Count = CPtrArray<CVisual>::GetCount(a2 + 4);
          if ( Count )
          {
            v23 = 0LL;
            v24 = Count;
            do
            {
              v25 = __A__CPtrArray___CBX__QEBAPEBX_K_Z(a2 + 4, v23);
              v26 = *(void (__fastcall **)(__int64, __int64 *, __int64, CMaskBrush *))(*a2 + 88);
              if ( v26 == CBrush::NotifyListenerOfChange )
              {
                CContent::NotifyListenerOfChange(a2, v25, 5LL, 0LL);
              }
              else if ( (char *)v26 == (char *)CGeometry::NotifyListenerOfChange )
              {
                CGeometry::NotifyListenerOfChange(a2, v25, 5LL, 0LL);
              }
              else
              {
                (*(void (__fastcall **)(__int64 *, unsigned __int64 *, __int64))(*a2 + 88))(a2, v25, 5LL);
              }
              ++v23;
              --v24;
            }
            while ( v24 );
          }
        }
      }
      *((_DWORD *)a2 + 10) ^= ((unsigned __int8)*((_DWORD *)a2 + 10) ^ (unsigned __int8)(2 * (*((_DWORD *)a2 + 10) >> 1)
                                                                                       - 2)) & 6;
    }
    else if ( (char *)v11 == (char *)CBrush::NotifyOnChanged )
    {
      CBrush::NotifyOnChanged((__int64)a2, 5u, 0LL);
    }
    else
    {
      v11(a2, 5LL);
    }
  }
LABEL_3:
  v8 = *(void (__fastcall **)(__int64 *, _QWORD, CMaskBrush *))(*a2 + 80);
  if ( (char *)v8 == (char *)CResource::NotifyOnChanged )
  {
    if ( CResource::EnterResource((CResource *)a2) )
    {
      v9 = *(__int64 (__fastcall **)(__int64, unsigned int, CMaskBrush *))(*a2 + 176);
      if ( v9 == CVisual::OnChanged )
      {
        v10 = CVisual::OnChanged((__int64)a2, v6, a4);
      }
      else if ( (char *)v9 == (char *)CTransform3D::OnChanged )
      {
        v10 = CTransform3D::OnChanged(a2);
      }
      else
      {
        v10 = (char *)v9 == (char *)CVectorShape::OnChanged ? CVectorShape::OnChanged(a2) : v9((__int64)a2, v6, a4);
      }
      if ( v10 )
      {
        v14 = CPtrArray<CVisual>::GetCount(a2 + 4);
        if ( v14 )
        {
          v15 = 0LL;
          v16 = v14;
          do
          {
            v19 = __A__CPtrArray___CBX__QEBAPEBX_K_Z(a2 + 4, v15);
            v20 = *(void (__fastcall **)(__int64, __int64 *, __int64, CMaskBrush *))(*a2 + 88);
            if ( v20 == CBrush::NotifyListenerOfChange )
            {
              v21 = v6;
              if ( v6 == 14 )
              {
                v28 = *(__int64 (__fastcall **)(unsigned __int64 *, __int64))(*v19 + 64);
                if ( (char *)v28 == (char *)CSpriteVisual::IsOfType )
                  v29 = CSpriteVisual::IsOfType(v19, 17LL, v17, v18);
                else
                  v29 = v28(v19, 17LL);
                if ( !v29 )
                  v21 = 0;
              }
              CContent::NotifyListenerOfChange(a2, v19, v21, a4);
            }
            else if ( (char *)v20 == (char *)CGeometry::NotifyListenerOfChange )
            {
              CGeometry::NotifyListenerOfChange(a2, v19, v6, a4);
            }
            else
            {
              v20((__int64)a2, (__int64 *)v19, v6, a4);
            }
            ++v15;
            --v16;
          }
          while ( v16 );
        }
      }
    }
    *((_DWORD *)a2 + 10) ^= ((unsigned __int8)*((_DWORD *)a2 + 10) ^ (unsigned __int8)(2 * (*((_DWORD *)a2 + 10) >> 1)
                                                                                     - 2)) & 6;
  }
  else if ( (char *)v8 == (char *)CBrush::NotifyOnChanged )
  {
    CBrush::NotifyOnChanged((__int64)a2, v6, (__int64)a4);
  }
  else
  {
    v8(a2, v6, a4);
  }
}
