/*
 * XREFs of ?GetConnectorProcessingModeForFormat@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEBUtWAVEFORMATEX@@PEAU_GUID@@@Z @ 0x1800DD400
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180045084 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBtAudioResourceManagerBase::GetConnectorProcessingModeForFormat(
        CBtAudioResourceManagerBase *this,
        struct EndpointCharacteristicsDescriptor *a2,
        const struct tWAVEFORMATEX *a3,
        struct _GUID *a4)
{
  _QWORD *v5; // rbx
  bool v9; // sf
  __int64 v10; // rax
  struct _GUID *v11; // rax
  _QWORD *v12; // rbx
  struct _GUID v13; // xmm0
  __int64 result; // rax
  GUID v15; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v5 = (_QWORD *)*((_QWORD *)a2 + 1);
  v15 = *(GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 128LL))(
                   this,
                   v16);
  v9 = (int)EffectPack::GetSharedModeEnginePeriodicity(v5, 0LL, &a3->wFormatTag, &v15, 0, 0LL, 0LL, 0LL, 0LL) < 0;
  v10 = *(_QWORD *)this;
  if ( !v9 )
  {
    v11 = (struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(v10 + 128))(this, v16);
LABEL_5:
    v13 = *v11;
    result = 0LL;
    *a4 = v13;
    return result;
  }
  v12 = (_QWORD *)*((_QWORD *)a2 + 1);
  v15 = *(GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(v10 + 136))(this, v16);
  if ( (int)EffectPack::GetSharedModeEnginePeriodicity(v12, 0LL, &a3->wFormatTag, &v15, 0, 0LL, 0LL, 0LL, 0LL) >= 0 )
  {
    v11 = (struct _GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 136LL))(
                            this,
                            v16);
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4C2,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
    (const char *)0x88890008LL);
  return 2290679816LL;
}
