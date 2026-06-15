/*
 * XREFs of ?IsIntegratedAudioDevice@EffectPolicy@@CAJPEAUIPropertyStore@@PEAH@Z @ 0x18014B0A0
 * Callers:
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x18003A92C (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEff.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EffectPolicy::IsIntegratedAudioDevice(struct IPropertyStore *a1, int *a2)
{
  struct IPropertyStoreVtbl *lpVtbl; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rax
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v9; // [rsp+30h] [rbp-20h]
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v11 = -1LL;
  v10 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    v9 = 0LL;
    lpVtbl = a1->lpVtbl;
    *(_OWORD *)pvar = 0LL;
    v5 = ((__int64 (__fastcall *)(struct IPropertyStore *, const DEVPROPKEY *, PROPVARIANT *))lpVtbl->GetValue)(
           a1,
           &DEVPKEY_Device_ContainerId,
           pvar);
    v6 = v5;
    if ( v5 >= 0 )
    {
      if ( LOWORD(pvar[0]) == 72 )
      {
        v7 = *(_QWORD *)pvar[1] - v10;
        if ( *(_QWORD *)pvar[1] == v10 )
          v7 = *((_QWORD *)pvar[1] + 1) - v11;
        if ( !v7 )
          *a2 = 1;
      }
      PropVariantClear(pvar);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9E,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
        (const char *)(unsigned int)v5);
      return v6;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\effectpolicy.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
}
