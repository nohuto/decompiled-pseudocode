/*
 * XREFs of ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1400339F8
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140010750 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400116C8 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140033DF0 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x140034410 (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     McTemplateU0jjt_EtwEventWriteTransfer @ 0x140049EAC (McTemplateU0jjt_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x140058CF0 (__security_check_cookie.c)
 *     memset_0 @ 0x14005A0E4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall InitializeSystemEffectsInterface(
        struct IMMDevice *a1,
        struct IAudioProcessingObject *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6)
{
  __int64 v10; // rax
  bool v11; // cl
  GUID *v12; // rax
  __int64 v13; // rdx
  int APOProcessingHostInstance; // edi
  struct APOInitSystemEffects2 *v15; // r8
  __int64 v16; // rdx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  struct _GUID v24; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v25; // [rsp+60h] [rbp-A0h] BYREF
  int v26; // [rsp+70h] [rbp-90h]
  _DWORD v27[5]; // [rsp+74h] [rbp-8Ch]
  void *pReserved; // [rsp+88h] [rbp-78h]
  IMMDeviceCollection *pDeviceCollection; // [rsp+90h] [rbp-70h]
  GUID AudioProcessingMode; // [rsp+98h] [rbp-68h]
  BOOL InitializeForDiscoveryOnly; // [rsp+A8h] [rbp-58h]
  struct APOInitSystemEffects2 v32; // [rsp+B0h] [rbp-50h] BYREF

  v21 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v32.APOInit.cbSize = 0;
  *((_DWORD *)&v32.APOInit + 5) = 0;
  memset_0(&v32.APOInit.clsid, 0, 0x54uLL);
  v10 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v10 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v11 = v10 == 0;
  v12 = a4;
  if ( v11 )
    v12 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  *a4 = *v12;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17,
         &v22) < 0
    && ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
         &v23) < 0
    && ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
         &v21) < 0 )
  {
    goto LABEL_13;
  }
  v24 = *a4;
  APOProcessingHostInstance = FillAPOInitSystemEffectsStructure(a1, a3, &v24, 0, a6, &v32);
  if ( APOProcessingHostInstance < 0 )
    goto LABEL_14;
  if ( !v22 )
  {
    if ( v23 )
    {
      v15 = &v32;
      v16 = 88LL;
    }
    else
    {
      if ( !v21 )
      {
LABEL_12:
        if ( (byte_1400C4541 & 2) != 0 )
        {
          if ( v21 )
            a4 = &GUID_00000000_0000_0000_0000_000000000000;
          McTemplateU0jjt_EtwEventWriteTransfer(&GUID_00000000_0000_0000_0000_000000000000, v13, a3, a4);
        }
LABEL_13:
        APOProcessingHostInstance = 0;
        goto LABEL_14;
      }
      v27[0] = 0;
      v25 = *(_OWORD *)&v32.APOInit.cbSize;
      v26 = *(_DWORD *)&v32.APOInit.clsid.Data4[4];
      v16 = 56LL;
      LODWORD(v25) = 56;
      *(_OWORD *)&v27[1] = *(_OWORD *)&v32.pAPOEndpointProperties;
      pReserved = v32.pReserved;
      pDeviceCollection = v32.pDeviceCollection;
      v15 = (struct APOInitSystemEffects2 *)&v25;
    }
    APOProcessingHostInstance = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, struct APOInitSystemEffects2 *))a2->lpVtbl->Initialize)(
                                  a2,
                                  v16,
                                  v15);
LABEL_11:
    if ( APOProcessingHostInstance < 0 )
      goto LABEL_14;
    goto LABEL_12;
  }
  v27[0] = 0;
  memset_0((char *)&v25 + 4, 0, 0x4CuLL);
  v25 = *(_OWORD *)&v32.APOInit.cbSize;
  v26 = *(_DWORD *)&v32.APOInit.clsid.Data4[4];
  LODWORD(v25) = 80;
  *(_QWORD *)&v27[1] = v32.pAPOEndpointProperties;
  pReserved = v32.pDeviceCollection;
  pDeviceCollection = *(IMMDeviceCollection **)&v32.nSoftwareIoDeviceInCollection;
  AudioProcessingMode = v32.AudioProcessingMode;
  InitializeForDiscoveryOnly = v32.InitializeForDiscoveryOnly;
  *(_QWORD *)&v24.Data1 = 0LL;
  APOProcessingHostInstance = GetAPOProcessingHostInstance((struct IAPOProcessingHost **)&v24);
  if ( APOProcessingHostInstance < 0 )
  {
    if ( *(_QWORD *)&v24.Data1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v24.Data1 + 16LL))(*(_QWORD *)&v24.Data1);
  }
  else
  {
    v20 = 0LL;
    v18 = *(_QWORD *)&v24.Data1;
    v19 = **(_QWORD **)&v24.Data1;
    v20 = 0LL;
    APOProcessingHostInstance = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcessingObject *, __int64 *))(v19 + 56))(
                                  *(_QWORD *)&v24.Data1,
                                  a2,
                                  &v20);
    if ( APOProcessingHostInstance >= 0 )
    {
      *(_QWORD *)&v27[3] = v20;
      APOProcessingHostInstance = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, __int128 *))a2->lpVtbl->Initialize)(
                                    a2,
                                    80LL,
                                    &v25);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      goto LABEL_11;
    }
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
LABEL_14:
  if ( v32.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v32.pAPOEndpointProperties->lpVtbl->Release)(v32.pAPOEndpointProperties);
    v32.pAPOEndpointProperties = 0LL;
  }
  if ( v32.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v32.pAPOSystemEffectsProperties->lpVtbl->Release)(v32.pAPOSystemEffectsProperties);
    v32.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v32.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v32.pDeviceCollection->lpVtbl->Release)(v32.pDeviceCollection);
    v32.pDeviceCollection = 0LL;
  }
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return (unsigned int)APOProcessingHostInstance;
}
