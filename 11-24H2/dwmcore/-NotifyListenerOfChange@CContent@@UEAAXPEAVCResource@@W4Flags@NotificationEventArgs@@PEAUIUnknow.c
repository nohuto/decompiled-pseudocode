/*
 * XREFs of ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007EFE0
 * Callers:
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x18007D1C0 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007EFE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F3E0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180134C70 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801821D0 (-NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x18007EFA0 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007EFE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
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

__int64 __fastcall CContent::NotifyListenerOfChange(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  __int64 (__fastcall *v7)(__int64 *, __int64); // rax
  __int64 (__fastcall *v8)(__int64 *, _QWORD, __int64); // rax
  __int64 (__fastcall *v9)(__int64 *, _QWORD, __int64); // rax
  int v10; // eax
  __int64 result; // rax
  void (__fastcall *v12)(__int64 *, __int64); // rax
  __int64 (__fastcall *v13)(__int64 *, __int64, _QWORD); // rax
  int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // rsi
  __int64 v17; // rbp
  unsigned __int64 *v18; // r13
  void (__fastcall *v19)(__int64 *, unsigned __int64 *, _QWORD, __int64); // rax
  unsigned int v20; // r12d
  unsigned int Count; // eax
  unsigned __int64 v22; // rsi
  __int64 v23; // rbp
  unsigned __int64 *v24; // rax
  __int64 (__fastcall *v25)(_QWORD, _QWORD, _QWORD, _QWORD); // r10
  char v26; // al
  __int64 (__fastcall *v27)(unsigned __int64 *, __int64); // rax
  char v28; // al

  v7 = *(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 64);
  if ( (char *)v7 == (char *)CSurfaceBrush::IsOfType )
  {
    if ( !(unsigned __int8)CBrush::IsOfType(a2, 184LL) )
      goto LABEL_3;
  }
  else if ( (char *)v7 == (char *)CSpriteVisual::IsOfType )
  {
    if ( !CVisual::IsOfType((__int64)a2, 184) )
      goto LABEL_3;
  }
  else
  {
    if ( (char *)v7 == (char *)CSpriteVectorShape::IsOfType )
      v26 = CSpriteVectorShape::IsOfType(a2, 184LL);
    else
      v26 = v7(a2, 184LL);
    if ( !v26 )
      goto LABEL_3;
  }
  if ( !a3 )
  {
    v12 = *(void (__fastcall **)(__int64 *, __int64))(*a2 + 80);
    if ( (char *)v12 == (char *)CResource::NotifyOnChanged )
    {
      if ( CResource::EnterResource((CResource *)a2) )
      {
        v13 = *(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(*a2 + 176);
        if ( (char *)v13 == (char *)CVisual::OnChanged )
        {
          v14 = CVisual::OnChanged(a2, 5LL, 0LL);
        }
        else if ( (char *)v13 == (char *)CTransform3D::OnChanged )
        {
          v14 = CTransform3D::OnChanged(a2, 5LL, 0LL);
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
            v22 = 0LL;
            v23 = Count;
            do
            {
              v24 = __A__CPtrArray___CBX__QEBAPEBX_K_Z(a2 + 4, v22);
              v25 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*a2 + 88);
              if ( (char *)v25 == (char *)&CBrush::NotifyListenerOfChange )
              {
                CContent::NotifyListenerOfChange(a2, v24, 5LL, 0LL);
              }
              else if ( v25 == CGeometry::NotifyListenerOfChange )
              {
                CGeometry::NotifyListenerOfChange(a2, v24, 5LL, 0LL);
              }
              else
              {
                (*(void (__fastcall **)(__int64 *, unsigned __int64 *, __int64))(*a2 + 88))(a2, v24, 5LL);
              }
              ++v22;
              --v23;
            }
            while ( v23 );
          }
        }
      }
      *((_DWORD *)a2 + 10) ^= ((unsigned __int8)*((_DWORD *)a2 + 10) ^ (unsigned __int8)(2 * (*((_DWORD *)a2 + 10) >> 1)
                                                                                       - 2)) & 6;
    }
    else if ( (char *)v12 == (char *)CBrush::NotifyOnChanged )
    {
      CBrush::NotifyOnChanged(a2, 5LL, 0LL);
    }
    else
    {
      v12(a2, 5LL);
    }
  }
LABEL_3:
  v8 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 80);
  if ( (char *)v8 == (char *)CResource::NotifyOnChanged )
  {
    if ( CResource::EnterResource((CResource *)a2) )
    {
      v9 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 176);
      if ( (char *)v9 == (char *)CVisual::OnChanged )
      {
        v10 = CVisual::OnChanged(a2, a3, a4);
      }
      else if ( (char *)v9 == (char *)CTransform3D::OnChanged )
      {
        v10 = CTransform3D::OnChanged(a2, a3, a4);
      }
      else
      {
        v10 = (char *)v9 == (char *)CVectorShape::OnChanged ? CVectorShape::OnChanged(a2, a3, a4) : v9(a2, a3, a4);
      }
      if ( v10 )
      {
        v15 = CPtrArray<CVisual>::GetCount(a2 + 4);
        if ( v15 )
        {
          v16 = 0LL;
          v17 = v15;
          do
          {
            v18 = __A__CPtrArray___CBX__QEBAPEBX_K_Z(a2 + 4, v16);
            v19 = *(void (__fastcall **)(__int64 *, unsigned __int64 *, _QWORD, __int64))(*a2 + 88);
            if ( (char *)v19 == (char *)&CBrush::NotifyListenerOfChange )
            {
              v20 = a3;
              if ( a3 == 14 )
              {
                v27 = *(__int64 (__fastcall **)(unsigned __int64 *, __int64))(*v18 + 64);
                if ( (char *)v27 == (char *)CSpriteVisual::IsOfType )
                  v28 = CSpriteVisual::IsOfType(v18, 17LL);
                else
                  v28 = v27(v18, 17LL);
                if ( !v28 )
                  v20 = 0;
              }
              CContent::NotifyListenerOfChange(a2, v18, v20, a4);
            }
            else if ( (char *)v19 == (char *)CGeometry::NotifyListenerOfChange )
            {
              CGeometry::NotifyListenerOfChange(a2, v18, a3, a4);
            }
            else
            {
              v19(a2, v18, a3, a4);
            }
            ++v16;
            --v17;
          }
          while ( v17 );
        }
      }
    }
    result = *((_DWORD *)a2 + 10) ^ ((unsigned __int8)*((_DWORD *)a2 + 10) ^ (unsigned __int8)(2
                                                                                             * (*((_DWORD *)a2 + 10) >> 1)
                                                                                             - 2)) & 6u;
    *((_DWORD *)a2 + 10) = result;
  }
  else if ( (char *)v8 == (char *)CBrush::NotifyOnChanged )
  {
    return CBrush::NotifyOnChanged(a2, a3, a4);
  }
  else
  {
    return v8(a2, a3, a4);
  }
  return result;
}
