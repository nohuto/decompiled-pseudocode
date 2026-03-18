/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801ABBD0
 * Callers:
 *     ?GetBounds@CGenericInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AB7D0 (-GetBounds@CGenericInk@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x1801ABB50 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z @ 0x180255EE0 (-ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z.c)
 * Callees:
 *     ??$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAAEAPEAVIDeviceResourceNotify@@AEBQEAV2@@Z @ 0x18006D62C (--$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$al.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC9A0 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800BFD28 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1801AA080 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801FBFD4 (-CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x180228F78 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::FindOrCreateResourceNoRef(
        CD3DDevice *a1,
        struct CD3DDevice *a2,
        struct CMILPoolResource **a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // r11
  __int64 v6; // r10
  unsigned __int64 v7; // r11
  CD3DDevice *v9; // rsi
  __int64 v10; // rax
  struct CMILPoolResource *v11; // rax
  int DefaultDevice; // eax
  CGenericInk *v14; // rcx
  int v15; // eax
  CGenericInk *v16; // rcx
  int v17; // eax
  struct CMILPoolResource *v18; // rbx
  struct CMILPoolResource *v19; // [rsp+50h] [rbp+20h] BYREF
  CD3DDevice *v20; // [rsp+60h] [rbp+30h] BYREF

  v3 = *((_QWORD *)a1 + 2);
  v4 = 0;
  v5 = *((_QWORD *)a1 + 3);
  v6 = 0LL;
  *a3 = 0LL;
  v7 = (v5 - v3) >> 3;
  v9 = a1;
  while ( (unsigned int)v6 < v7 )
  {
    if ( !a2
      || (v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8 * v6) + 40LL) + 24LL),
          a1 = (CD3DDevice *)(v10 - 16),
          a2 == (struct CD3DDevice *)((v10 - 16) & -(__int64)(v10 != 0))) )
    {
      v11 = *(struct CMILPoolResource **)(v3 + 8 * v6);
      *a3 = v11;
      if ( v11 )
        return v4;
      break;
    }
    v6 = (unsigned int)(v6 + 1);
  }
  if ( a2 )
  {
    v16 = (CGenericInk *)*((_QWORD *)v9 + 1);
    v19 = 0LL;
    v17 = CGenericInk::CreateResource(v16, a2, &v19);
    v4 = v17;
    if ( v17 >= 0 )
      goto LABEL_19;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x52u, 0LL);
  }
  else
  {
    v20 = 0LL;
    DefaultDevice = CDeviceManager::GetDefaultDevice(a1, &v20);
    v4 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
      if ( v20 )
        CD3DDevice::Release(v20);
      return v4;
    }
    v14 = (CGenericInk *)*((_QWORD *)v9 + 1);
    v19 = 0LL;
    v15 = CGenericInk::CreateResource(v14, v20, &v19);
    v4 = v15;
    if ( v15 >= 0 )
    {
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v20);
LABEL_19:
      v18 = v19;
      v20 = v9;
      std::vector<IDeviceResourceNotify *>::_Emplace_one_at_back<IDeviceResourceNotify * const &>(
        (char **)v19 + 2,
        &v20);
      *a3 = v18;
      *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                   (char *)v9 + 16,
                   (__int64)(*((_QWORD *)v9 + 3) - *((_QWORD *)v9 + 2)) >> 3) = v18;
      return v4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x4Eu, 0LL);
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v20);
  }
  if ( v19 )
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v19);
  return v4;
}
