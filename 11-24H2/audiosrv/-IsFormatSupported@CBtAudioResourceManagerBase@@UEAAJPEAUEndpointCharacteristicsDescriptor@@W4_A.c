/*
 * XREFs of ?IsFormatSupported@CBtAudioResourceManagerBase@@UEAAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@PEBUtWAVEFORMATEX@@PEAPEAU4@@Z @ 0x1800A3380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180045084 (-GetSharedModeEnginePeriodicity@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBtAudioResourceManagerBase::IsFormatSupported(
        CBtAudioResourceManagerBase *this,
        struct EndpointCharacteristicsDescriptor *a2,
        enum _AUDCLNT_SHAREMODE a3,
        const struct tWAVEFORMATEX *a4,
        struct tWAVEFORMATEX **a5)
{
  __int64 v8; // rdx
  unsigned int v10; // edi
  _QWORD *v11; // rbx
  int SharedModeEnginePeriodicity; // eax
  GUID v13; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v14[16]; // [rsp+60h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  if ( a3 != AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    v8 = 1189LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v10 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 56LL))(*(_QWORD *)a2) )
  {
    v8 = 1192LL;
    goto LABEL_3;
  }
  *a5 = 0LL;
  v11 = (_QWORD *)*((_QWORD *)a2 + 1);
  v13 = *(GUID *)(*(__int64 (__fastcall **)(CBtAudioResourceManagerBase *, _BYTE *))(*(_QWORD *)this + 136LL))(
                   this,
                   v14);
  SharedModeEnginePeriodicity = EffectPack::GetSharedModeEnginePeriodicity(
                                  v11,
                                  0LL,
                                  &a4->wFormatTag,
                                  &v13,
                                  0,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL);
  if ( SharedModeEnginePeriodicity < 0 )
    return (unsigned int)SharedModeEnginePeriodicity;
  return v10;
}
