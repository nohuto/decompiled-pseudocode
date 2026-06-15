/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180031A80
 * Callers:
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180031974 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180032058 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?HardwareLoopbackEnabled@EffectPack@@QEAAHXZ @ 0x180033658 (-HardwareLoopbackEnabled@EffectPack@@QEAAHXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator() @ 0x18002CA28 (_lambda_53e50f4d36d820af02fa3fa8c2905d02_--operator().c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x18003EA14 (CEndpointCharacteristics--GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180040830 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180074CAC (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z @ 0x180135C5C (-Log_Win32@in1diag3@details@wil@@YAKPEAXIPEBDK@Z.c)
 *     ?Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ @ 0x180135C80 (-Log_Win32Msg@in1diag3@details@wil@@YAKPEAXIPEBDK1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
        CEndpointCharacteristics *this,
        char a2,
        unsigned __int8 a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        __int64 a5,
        LPVOID *a6)
{
  int v7; // r15d
  int DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02; // ebx
  void *v10; // rcx
  __int64 v11; // rdx
  const PROPERTYKEY *v12; // rax
  int v13; // eax
  unsigned int v14; // r8d
  const char *v15; // r9
  struct tWAVEFORMATEX *v16; // rbx
  void *v17; // rcx
  __int64 v18; // rdx
  void *v19; // rcx
  void *v20; // rcx
  bool v21; // zf
  int v23; // r9d
  int v24; // r10d
  int v25; // r11d
  int v26; // ebx
  unsigned __int16 v27; // dx
  unsigned __int16 v28; // dx
  void *v29; // rcx
  unsigned __int16 v30; // ax
  unsigned __int16 v31; // ax
  int v32; // edx
  unsigned int v33; // [rsp+20h] [rbp-89h]
  char *v34; // [rsp+28h] [rbp-81h]
  LPVOID pv; // [rsp+40h] [rbp-69h] BYREF
  PROPVARIANT pvar[2]; // [rsp+48h] [rbp-61h] BYREF
  struct tWAVEFORMATEX *Src; // [rsp+58h] [rbp-51h]
  struct tWAVEFORMATEX *v38[2]; // [rsp+60h] [rbp-49h] BYREF
  __int128 v39; // [rsp+70h] [rbp-39h]
  int v40[4]; // [rsp+80h] [rbp-29h] BYREF
  __int128 v41; // [rsp+90h] [rbp-19h]
  GUID fmtid; // [rsp+A0h] [rbp-9h] BYREF
  DWORD pid; // [rsp+B0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  v7 = a3;
  *a6 = 0LL;
  pv = 0LL;
  if ( !a2 )
  {
    v12 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    if ( a4 != eKeywordDetectorConnector )
      v12 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v12->fmtid;
    pid = v12->pid;
    *(_OWORD *)pvar = 0LL;
    Src = 0LL;
    v13 = (*(__int64 (__fastcall **)(_QWORD, GUID *, PROPVARIANT *))(**((_QWORD **)this + 9) + 40LL))(
            *((_QWORD *)this + 9),
            &fmtid,
            pvar);
    if ( v13 >= 0 )
    {
      if ( LOWORD(pvar[0]) )
      {
        if ( LOWORD(pvar[0]) == 65 )
        {
          if ( LODWORD(pvar[1]) >= 0x12 && (v16 = Src, LODWORD(pvar[1]) == Src->cbSize + 18LL) )
          {
            if ( lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator()((__int64 *)a5, Src) )
            {
              v38[0] = (struct tWAVEFORMATEX *)&pv;
              v38[1] = 0LL;
              LOBYTE(v39) = 1;
              DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 = CloneWaveFormat(v16, &v38[1]);
              if ( (_BYTE)v39 )
              {
                v17 = *(void **)v38[0];
                *(_QWORD *)v38[0] = v38[1];
                if ( v17 )
                  CoTaskMemFree(v17);
              }
              if ( DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 < 0 )
              {
                v18 = 6637LL;
                goto LABEL_23;
              }
            }
          }
          else
          {
            wil::details::in1diag3::Log_Win32(retaddr, (void *)0x19F2, v14, v15, v33);
          }
        }
        else
        {
          LODWORD(v34) = LOWORD(pvar[0]);
          wil::details::in1diag3::Log_Win32Msg(
            retaddr,
            (void *)0x19FE,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)0xD,
            (unsigned int)"Unexpected vartype %d (0x%08x)",
            v34,
            LOWORD(pvar[0]));
        }
      }
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19E1,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v13,
        v33);
    }
    if ( !pv )
    {
      v38[0] = (struct tWAVEFORMATEX *)&pv;
      v38[1] = 0LL;
      LOBYTE(v39) = 1;
      *(_OWORD *)v40 = *(_OWORD *)a5;
      v41 = *(_OWORD *)(a5 + 16);
      DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 = CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
                                                                 (int)this,
                                                                 v7,
                                                                 a4,
                                                                 (int)v40,
                                                                 &v38[1]);
      if ( (_BYTE)v39 )
      {
        v19 = *(void **)v38[0];
        *(_QWORD *)v38[0] = v38[1];
        if ( v19 )
          CoTaskMemFree(v19);
      }
      if ( DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 < 0 )
      {
        if ( DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 == -2004287484 )
        {
          PropVariantClear(pvar);
          goto LABEL_32;
        }
        v18 = 6661LL;
LABEL_23:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02);
        PropVariantClear(pvar);
LABEL_59:
        v29 = pv;
        pv = 0LL;
        if ( v29 )
          CoTaskMemFree(v29);
        return (unsigned int)DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02;
      }
      DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                                                                 this,
                                                                 v7,
                                                                 a4,
                                                                 (const struct tWAVEFORMATEX *)pv);
      if ( DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 < 0 )
      {
        v18 = 6664LL;
        goto LABEL_23;
      }
    }
    PropVariantClear(pvar);
    goto LABEL_39;
  }
  pvar[0] = &pv;
  pvar[1] = 0LL;
  LOBYTE(Src) = 1;
  *(_OWORD *)v38 = *(_OWORD *)a5;
  v39 = *(_OWORD *)(a5 + 16);
  DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 = CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
                                                             (int)this,
                                                             a3,
                                                             a4,
                                                             (int)v38,
                                                             (struct tWAVEFORMATEX **)&pvar[1]);
  if ( (_BYTE)Src )
  {
    v10 = *(void **)pvar[0];
    *(_QWORD *)pvar[0] = pvar[1];
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 >= 0 )
  {
LABEL_39:
    if ( !pv )
    {
      DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 = -2147467261;
LABEL_57:
      v11 = 6669LL;
      goto LABEL_58;
    }
    v23 = *((unsigned __int16 *)pv + 1);
    if ( (_WORD)v23 )
    {
      v24 = *((_DWORD *)pv + 1);
      if ( v24 )
      {
        v25 = *((_DWORD *)pv + 2);
        if ( v25 )
        {
          v26 = *((unsigned __int16 *)pv + 6);
          if ( (_WORD)v26 )
          {
            v27 = *((_WORD *)pv + 8);
            if ( v27 <= 0x400u )
            {
              if ( ((*(_WORD *)pv - 1) & 0xFFFD) == 0 )
              {
                if ( v27 )
                  goto LABEL_56;
                v32 = *((unsigned __int16 *)pv + 7);
                if ( (v32 & 7) != 0 || (unsigned __int16)v23 > 2u || v25 != (unsigned int)(v24 * v32 * v23) >> 3 )
                  goto LABEL_56;
                goto LABEL_73;
              }
              if ( *(_WORD *)pv != 0xFFFE )
                goto LABEL_73;
              if ( v27 >= 0x16u )
              {
                if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pv + 3)
                  && *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 == *((_QWORD *)pv + 4)
                  || *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pv + 3)
                  && *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 == *((_QWORD *)pv + 4) )
                {
                  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *((_QWORD *)pv + 3)
                    && *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 == *((_QWORD *)pv + 4) )
                  {
                    v28 = *((_WORD *)pv + 7);
                    if ( ((v28 - 8) & 0xFFE7) != 0 )
                      goto LABEL_56;
                  }
                  else
                  {
                    v30 = *((_WORD *)pv + 7);
                    v28 = v30;
                    if ( v30 != 32 && v30 != 64 )
                      goto LABEL_56;
                  }
                  v31 = *((_WORD *)pv + 9);
                  if ( !v31 || v28 < v31 || v25 != (v24 * v23 * (unsigned int)v28) >> 3 || v26 != v23 * v28 / 8 )
                    goto LABEL_56;
                }
LABEL_73:
                *a6 = pv;
                return 0LL;
              }
            }
          }
        }
      }
    }
LABEL_56:
    DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 = -2147024809;
    goto LABEL_57;
  }
  if ( DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02 != -2004287484 )
  {
    v11 = 6616LL;
LABEL_58:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02);
    goto LABEL_59;
  }
LABEL_32:
  v20 = pv;
  v21 = pv == 0LL;
  pv = 0LL;
  if ( !v21 )
    CoTaskMemFree(v20);
  return 2290679812LL;
}
