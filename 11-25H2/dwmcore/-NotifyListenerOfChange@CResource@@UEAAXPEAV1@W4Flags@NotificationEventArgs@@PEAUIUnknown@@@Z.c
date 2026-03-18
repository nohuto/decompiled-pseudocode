/*
 * XREFs of ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021130
 * Callers:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021130 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021400 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007D5F0 (-NotifyListenerOfChange@CContainerVectorShape@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs.c)
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x1800AF200 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 *     ?NotifyListenerOfChange@CWindowBackgroundTreatment@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180238F80 (-NotifyListenerOfChange@CWindowBackgroundTreatment@@UEAAXPEAVCResource@@W4Flags@NotificationEven.c)
 *     ?NotifyListenerOfChange@CSceneComponent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180282940 (-NotifyListenerOfChange@CSceneComponent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAU.c)
 *     ?NotifyListenerOfChange@CSceneNode@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802AF550 (-NotifyListenerOfChange@CSceneNode@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnkn.c)
 * Callees:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021130 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?EnterResource@CResource@@QEAA_NXZ @ 0x1800213D0 (-EnterResource@CResource@@QEAA_NXZ.c)
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

__int64 __fastcall CResource::NotifyListenerOfChange(__int64 a1, CResource *a2, unsigned int a3, CMaskBrush *a4)
{
  __int64 (__fastcall *v7)(CResource *, unsigned int, __int64); // rax
  __int64 (__fastcall *v8)(__int64, unsigned int, CMaskBrush *); // rax
  int v9; // eax
  __int64 result; // rax
  unsigned int Count; // eax
  __int64 v12; // r15
  __int64 i; // r12
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  void (__fastcall *v17)(CResource *, __int64, _QWORD, CMaskBrush *); // rax
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  unsigned int v19; // r13d
  char v20; // al
  unsigned __int8 (__fastcall *v21)(__int64, __int64); // rax

  v7 = *(__int64 (__fastcall **)(CResource *, unsigned int, __int64))(*(_QWORD *)a2 + 80LL);
  if ( (char *)v7 == (char *)CResource::NotifyOnChanged )
  {
    if ( CResource::EnterResource(a2) )
    {
      v8 = *(__int64 (__fastcall **)(__int64, unsigned int, CMaskBrush *))(*(_QWORD *)a2 + 176LL);
      if ( v8 == CVisual::OnChanged )
      {
        v9 = CVisual::OnChanged((__int64)a2, a3, a4);
      }
      else if ( (char *)v8 == (char *)CTransform3D::OnChanged )
      {
        v9 = CTransform3D::OnChanged(a2);
      }
      else
      {
        v9 = (char *)v8 == (char *)CVectorShape::OnChanged ? CVectorShape::OnChanged(a2) : v8((__int64)a2, a3, a4);
      }
      if ( v9 )
      {
        Count = CPtrArray<CVisual>::GetCount((char *)a2 + 32);
        if ( Count )
        {
          v12 = 0LL;
          for ( i = Count; i; --i )
          {
            v16 = __A__CPtrArray___CBX__QEBAPEBX_K_Z((char *)a2 + 32, v12);
            v17 = *(void (__fastcall **)(CResource *, __int64, _QWORD, CMaskBrush *))(*(_QWORD *)a2 + 88LL);
            if ( (char *)v17 != (char *)CContent::NotifyListenerOfChange )
            {
              if ( (char *)v17 == (char *)&CBrush::NotifyListenerOfChange )
              {
                v19 = a3;
                if ( a3 == 14 )
                {
                  v21 = *(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 64LL);
                  if ( !((char *)v21 == (char *)CSpriteVisual::IsOfType
                       ? CSpriteVisual::IsOfType(v16, 17LL, v14, v15)
                       : v21(v16, 17LL)) )
                    v19 = 0;
                }
                CContent::NotifyListenerOfChange(a2, v16, v19, a4);
              }
              else if ( (char *)v17 == (char *)CGeometry::NotifyListenerOfChange )
              {
                CGeometry::NotifyListenerOfChange(a2, v16, a3, a4);
              }
              else
              {
                v17(a2, v16, a3, a4);
              }
              goto LABEL_13;
            }
            v18 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 64LL);
            if ( (char *)v18 == (char *)&CSurfaceBrush::IsOfType )
            {
              if ( (unsigned __int8)CBrush::IsOfType(v16, 182LL, v14, v15) )
                goto LABEL_17;
            }
            else
            {
              if ( (char *)v18 != (char *)CSpriteVisual::IsOfType )
              {
                if ( (char *)v18 == (char *)CSpriteVectorShape::IsOfType )
                  v20 = CSpriteVectorShape::IsOfType(v16, 182LL, v14, v15);
                else
                  v20 = v18(v16, 182LL);
                if ( !v20 )
                  goto LABEL_12;
LABEL_17:
                if ( !a3 )
                  CResource::NotifyListenerOfChange(a2, v16, 5LL, 0LL);
                goto LABEL_12;
              }
              if ( (unsigned __int8)CVisual::IsOfType(v16, 182LL) )
                goto LABEL_17;
            }
LABEL_12:
            CResource::NotifyListenerOfChange(a2, v16, a3, a4);
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
    return v7(a2, a3, (__int64)a4);
  }
  return result;
}
