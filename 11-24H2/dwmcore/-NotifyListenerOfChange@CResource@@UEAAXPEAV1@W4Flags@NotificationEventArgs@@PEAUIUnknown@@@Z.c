/*
 * XREFs of ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F3E0
 * Callers:
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x18007D1C0 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F3E0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180136420 (-NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs.c)
 *     ?NotifyListenerOfChange@CWindowBackgroundTreatment@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18022D2D0 (-NotifyListenerOfChange@CWindowBackgroundTreatment@@UEAAXPEAVCResource@@W4Flags@NotificationEven.c)
 *     ?NotifyListenerOfChange@CSceneComponent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180277D60 (-NotifyListenerOfChange@CSceneComponent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAU.c)
 *     ?NotifyListenerOfChange@CSceneNode@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802A5A10 (-NotifyListenerOfChange@CSceneNode@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnkn.c)
 * Callees:
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x18007EFA0 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007EFE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
 *     ?IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007F390 (-IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EnterResource@CResource@@QEAA_NXZ @ 0x18007F3B0 (-EnterResource@CResource@@QEAA_NXZ.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F3E0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801348B0 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801368D0 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180136900 (-IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180182370 (-NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnkno.c)
 *     ?OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801823D0 (-OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResource::NotifyListenerOfChange(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4)
{
  __int64 (__fastcall *v7)(__int64 *, _QWORD, __int64); // rax
  __int64 (__fastcall *v8)(__int64 *, _QWORD, __int64); // rax
  int v9; // eax
  __int64 result; // rax
  unsigned int Count; // eax
  unsigned __int64 v12; // r15
  __int64 i; // r12
  __int64 *v14; // r14
  __int64 (__fastcall *v15)(__int64, __int64 *, unsigned int, __int64); // rax
  __int64 (__fastcall *v16)(__int64 *, __int64); // rax
  unsigned int v17; // r13d
  char v18; // al
  __int64 (__fastcall *v19)(__int64 *, __int64); // rax

  v7 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 80);
  if ( (char *)v7 == (char *)CResource::NotifyOnChanged )
  {
    if ( CResource::EnterResource((CResource *)a2) )
    {
      v8 = *(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(*a2 + 176);
      if ( (char *)v8 == (char *)CVisual::OnChanged )
      {
        v9 = CVisual::OnChanged(a2, a3, a4);
      }
      else if ( (char *)v8 == (char *)CTransform3D::OnChanged )
      {
        v9 = CTransform3D::OnChanged(a2, a3, a4);
      }
      else
      {
        v9 = (char *)v8 == (char *)CVectorShape::OnChanged ? CVectorShape::OnChanged(a2, a3, a4) : v8(a2, a3, a4);
      }
      if ( v9 )
      {
        Count = CPtrArray<CVisual>::GetCount(a2 + 4);
        if ( Count )
        {
          v12 = 0LL;
          for ( i = Count; i; --i )
          {
            v14 = (__int64 *)__A__CPtrArray___CBX__QEBAPEBX_K_Z(a2 + 4, v12);
            v15 = *(__int64 (__fastcall **)(__int64, __int64 *, unsigned int, __int64))(*a2 + 88);
            if ( v15 != CContent::NotifyListenerOfChange )
            {
              if ( (char *)v15 == (char *)&CBrush::NotifyListenerOfChange )
              {
                v17 = a3;
                if ( a3 == 14 )
                {
                  v19 = *(__int64 (__fastcall **)(__int64 *, __int64))(*v14 + 64);
                  if ( !((char *)v19 == (char *)CSpriteVisual::IsOfType
                       ? CSpriteVisual::IsOfType(v14, 17LL)
                       : (unsigned __int8)v19(v14, 17LL)) )
                    v17 = 0;
                }
                CContent::NotifyListenerOfChange((__int64)a2, v14, v17, a4);
              }
              else if ( (char *)v15 == (char *)CGeometry::NotifyListenerOfChange )
              {
                CGeometry::NotifyListenerOfChange(a2, v14, a3, a4);
              }
              else
              {
                v15((__int64)a2, v14, a3, a4);
              }
              goto LABEL_13;
            }
            v16 = *(__int64 (__fastcall **)(__int64 *, __int64))(*v14 + 64);
            if ( (char *)v16 == (char *)CSurfaceBrush::IsOfType )
            {
              if ( CBrush::IsOfType((__int64)v14, 184) )
                goto LABEL_17;
            }
            else
            {
              if ( (char *)v16 != (char *)CSpriteVisual::IsOfType )
              {
                if ( (char *)v16 == (char *)CSpriteVectorShape::IsOfType )
                  v18 = CSpriteVectorShape::IsOfType(v14, 184LL);
                else
                  v18 = v16(v14, 184LL);
                if ( !v18 )
                  goto LABEL_12;
LABEL_17:
                if ( !a3 )
                  CResource::NotifyListenerOfChange(a2, v14, 5LL);
                goto LABEL_12;
              }
              if ( CVisual::IsOfType((__int64)v14, 184) )
                goto LABEL_17;
            }
LABEL_12:
            CResource::NotifyListenerOfChange(a2, v14, a3);
LABEL_13:
            ++v12;
          }
        }
      }
    }
    result = *((_DWORD *)a2 + 10) ^ ((unsigned __int8)*((_DWORD *)a2 + 10) ^ (unsigned __int8)(2
                                                                                             * (*((_DWORD *)a2 + 10) >> 1)
                                                                                             - 2)) & 6u;
    *((_DWORD *)a2 + 10) = result;
  }
  else if ( (char *)v7 == (char *)CBrush::NotifyOnChanged )
  {
    return CBrush::NotifyOnChanged(a2, a3, a4);
  }
  else
  {
    return v7(a2, a3, a4);
  }
  return result;
}
