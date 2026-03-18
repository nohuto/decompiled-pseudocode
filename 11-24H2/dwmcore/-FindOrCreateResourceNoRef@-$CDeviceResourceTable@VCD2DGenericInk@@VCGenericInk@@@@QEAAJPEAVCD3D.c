/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801A2290
 * Callers:
 *     ?GetBounds@CGenericInk@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A1E90 (-GetBounds@CGenericInk@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x1801A2210 (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAUIDCompositionDirectInkWetStrokeP.c)
 *     ?ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z @ 0x18024AB90 (-ComputeBackgroundBlendInfo@CGenericInk@@UEBAXPEA_N0@Z.c)
 * Callees:
 *     ??$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@?$vector@PEAVIDeviceResourceNotify@@V?$allocator@PEAVIDeviceResourceNotify@@@std@@@std@@AEAAAEAPEAVIDeviceResourceNotify@@AEBQEAV2@@Z @ 0x1800439AC (--$_Emplace_one_at_back@AEBQEAVIDeviceResourceNotify@@@-$vector@PEAVIDeviceResourceNotify@@V-$al.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AB80 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801A05C8 (-CreateResource@CGenericInk@@QEAAJPEAVCD3DDevice@@PEAPEAVCD2DGenericInk@@@Z.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x1801A2590 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801F5158 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reserve_region@?$vector_facade@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x18021D728 (-reserve_region@-$vector_facade@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@.c)
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
  __int64 v10; // rax
  struct CMILPoolResource *v11; // rax
  CDeviceManager *v13; // rcx
  int DefaultDevice; // eax
  CGenericInk *v15; // rcx
  int v16; // eax
  CGenericInk *v17; // rcx
  int v18; // eax
  struct CMILPoolResource *v19; // rbx
  CD3DDevice *v20; // [rsp+50h] [rbp+20h] BYREF
  struct CMILPoolResource *v21; // [rsp+60h] [rbp+30h] BYREF

  v3 = *((_QWORD *)a1 + 2);
  v4 = 0;
  v5 = *((_QWORD *)a1 + 3);
  v6 = 0LL;
  *a3 = 0LL;
  v7 = (v5 - v3) >> 3;
  while ( (unsigned int)v6 < v7 )
  {
    if ( !a2
      || (v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 8 * v6) + 40LL) + 24LL),
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
    v17 = (CGenericInk *)*((_QWORD *)a1 + 1);
    v21 = 0LL;
    v18 = CGenericInk::CreateResource(v17, a2, &v21);
    v4 = v18;
    if ( v18 >= 0 )
      goto LABEL_19;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x52u, 0LL);
  }
  else
  {
    v20 = 0LL;
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)&v20);
    DefaultDevice = CDeviceManager::GetDefaultDevice(v13, &v20);
    v4 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DefaultDevice, 0x4Bu, 0LL);
      if ( v20 )
        CD3DDevice::Release(v20);
      return v4;
    }
    v15 = (CGenericInk *)*((_QWORD *)a1 + 1);
    v21 = 0LL;
    v16 = CGenericInk::CreateResource(v15, v20, &v21);
    v4 = v16;
    if ( v16 >= 0 )
    {
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v20);
LABEL_19:
      v19 = v21;
      v20 = a1;
      std::vector<IDeviceResourceNotify *>::_Emplace_one_at_back<IDeviceResourceNotify * const &>(
        (char **)v21 + 2,
        &v20);
      *a3 = v19;
      *(_QWORD *)detail::vector_facade<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>,2,1,detail::liberal_expansion_policy>>::reserve_region(
                   (char *)a1 + 16,
                   (__int64)(*((_QWORD *)a1 + 3) - *((_QWORD *)a1 + 2)) >> 3) = v19;
      return v4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x4Eu, 0LL);
    wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v20);
  }
  if ( v21 )
    CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v21);
  return v4;
}
