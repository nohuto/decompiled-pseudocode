/*
 * XREFs of ?GetDisplayName@CDisplayNode@@QEAAPEBDXZ @ 0x14006A20C
 * Callers:
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x14006AEAC (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 * Callees:
 *     sprintf_s @ 0x140059450 (sprintf_s.c)
 */

const char *__fastcall CDisplayNode::GetDisplayName(CDisplayNode *this)
{
  __int64 v1; // rbp
  int v2; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  const char *v6; // rax
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  v1 = *(_QWORD *)this;
  v2 = *(_DWORD *)(*(_QWORD *)this + 40LL);
  switch ( v2 )
  {
    case 3:
      v3 = *(_DWORD *)(v1 + 60);
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = v4 - 1;
          if ( v5 )
          {
            if ( v5 == 1 )
              v6 = "PostVolumeLoopback";
            else
              v6 = "Unknown";
          }
          else
          {
            v6 = "Loopback";
          }
        }
        else
        {
          v6 = "Capture";
        }
      }
      else
      {
        v6 = "Render";
      }
      sprintf_s(ScratchSpace, 0x4EuLL, "PID: %d (%s)", *(_DWORD *)(v1 + 56), v6);
      return ScratchSpace;
    case 1:
      return "Device";
    case 5:
      sprintf_s(ScratchSpace, 0x4EuLL, "Bridge Source #%I64d", *(_QWORD *)(v1 + 64));
      return ScratchSpace;
    case 6:
      sprintf_s(ScratchSpace, 0x4EuLL, "Streaming from bridge source #%I64d", *(_QWORD *)(v1 + 64));
      return ScratchSpace;
  }
  v8 = *(_QWORD *)(v1 + 32);
  v9 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_d69e0717_dd4b_4b25_997a_da813833b8ac.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_d69e0717_dd4b_4b25_997a_da813833b8ac.Data4;
  if ( !v9 )
    return "Limiter";
  v10 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba.Data4;
  if ( !v10 )
    return "Meter";
  v11 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_06587e71_f043_403a_bf49_cb591ba6e103.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_06587e71_f043_403a_bf49_cb591ba6e103.Data4;
  if ( !v11 )
    return "Volume";
  v12 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_27c98999_2895_4829_b080_5a8b65bd3db0.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_27c98999_2895_4829_b080_5a8b65bd3db0.Data4;
  if ( !v12 )
    return "SRC";
  v13 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_c58bd103_e87f_4b78_a0fa_7a5c95970ee2.Data1;
  if ( !v13 )
    v13 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_c58bd103_e87f_4b78_a0fa_7a5c95970ee2.Data4;
  if ( !v13 )
    return "SRC-old";
  v14 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_07252659_bb6b_4b79_b78b_623f6699a579.Data1;
  if ( !v14 )
    v14 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_07252659_bb6b_4b79_b78b_623f6699a579.Data4;
  if ( !v14 )
    return "Constrictor";
  v15 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a.Data1;
  if ( !v15 )
    v15 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a.Data4;
  if ( !v15 )
    return "Mixer";
  v16 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b.Data1;
  if ( !v16 )
    v16 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b.Data4;
  if ( !v16 )
    return "Matrix";
  v17 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e.Data1;
  if ( !v17 )
    v17 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e.Data4;
  if ( !v17 )
    return "Copy";
  v18 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec.Data1;
  if ( !v18 )
    v18 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec.Data4;
  if ( !v18 )
    return "Cleanup";
  v19 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_693badea_1eb1_4013_b799_285f624a55bd.Data1;
  if ( !v19 )
    v19 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_693badea_1eb1_4013_b799_285f624a55bd.Data4;
  if ( !v19 )
    return "SilenceMonitor";
  v20 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data1;
  if ( !v20 )
    v20 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_0fa53099_5317_46af_9376_9a04a4b550f9.Data4;
  if ( !v20 )
    return "Accessibility";
  v21 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_3fd7f233_a716_472e_8f2f_c25954f34e96.Data1;
  if ( !v21 )
    v21 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_3fd7f233_a716_472e_8f2f_c25954f34e96.Data4;
  if ( !v21 )
    return "Format Converter";
  v22 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_fed4acc3_87c9_45e9_a026_5b59a855e687.Data1;
  if ( !v22 )
    v22 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_fed4acc3_87c9_45e9_a026_5b59a855e687.Data4;
  if ( !v22 )
    return "SASP";
  v23 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5.Data1;
  if ( !v23 )
    v23 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_5bbc2c71_dec2_4ba3_961a_36f37d1cc8a5.Data4;
  if ( !v23 )
    return "ASAR";
  v24 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f.Data1;
  if ( !v24 )
    v24 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_73fb9979_623f_41a6_bf1c_ba817c519c4f.Data4;
  if ( !v24 )
    return "AEC";
  v25 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3.Data1;
  if ( !v25 )
    v25 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_f82eff51_99fa_4393_a31d_6d5d9f3972c3.Data4;
  if ( !v25 )
    return "AGC";
  v26 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_7ecead6d_6452_4ded_b567_7bb9947d7669.Data1;
  if ( !v26 )
    v26 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_7ecead6d_6452_4ded_b567_7bb9947d7669.Data4;
  if ( !v26 )
    return "NS";
  v27 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_62dc1a93_ae24_464c_a43e_452f824c4250.Data1;
  if ( !v27 )
    v27 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_62dc1a93_ae24_464c_a43e_452f824c4250.Data4;
  if ( !v27 )
    return "Wmalfx";
  v28 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_637c490d_eee3_4c0a_973f_371958802da2.Data1;
  if ( !v28 )
    v28 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_637c490d_eee3_4c0a_973f_371958802da2.Data4;
  if ( !v28 )
    return "Wmagfx";
  v29 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_e3eff23b_5360_40a1_8e7b_506b6283b5d4.Data1;
  if ( !v29 )
    v29 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_e3eff23b_5360_40a1_8e7b_506b6283b5d4.Data4;
  if ( !v29 )
    return "Spatializer";
  v30 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data1;
  if ( !v30 )
    v30 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_4be8a061_c73b_4f23_8114_317aae3e8698.Data4;
  if ( !v30 )
    return "VSS";
  v31 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_c9453e73_8c5c_4463_9984_af8bab2f5447.Data1;
  if ( !v31 )
    v31 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_c9453e73_8c5c_4463_9984_af8bab2f5447.Data4;
  if ( !v31 )
    return "Wmacapxlfx";
  v32 = *(_QWORD *)(v8 + 8) - *(_QWORD *)&GUID_13ab3ebd_137e_4903_9d89_60be8277fd17.Data1;
  if ( !v32 )
    v32 = *(_QWORD *)(v8 + 16) - *(_QWORD *)GUID_13ab3ebd_137e_4903_9d89_60be8277fd17.Data4;
  if ( !v32 )
    return "Wmacapxgfx";
  if ( *(_DWORD *)(v8 + 4) )
  {
    sprintf_s(
      ScratchSpace,
      0x4EuLL,
      "{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
      *(_DWORD *)(v8 + 8),
      *(unsigned __int16 *)(v8 + 12),
      *(unsigned __int16 *)(v8 + 14),
      *(unsigned __int8 *)(v8 + 16),
      *(unsigned __int8 *)(v8 + 17),
      *(unsigned __int8 *)(v8 + 18),
      *(unsigned __int8 *)(v8 + 19),
      *(unsigned __int8 *)(v8 + 20),
      *(unsigned __int8 *)(v8 + 21),
      *(unsigned __int8 *)(v8 + 22),
      *(unsigned __int8 *)(v8 + 23));
    return ScratchSpace;
  }
  return "Unknown";
}
