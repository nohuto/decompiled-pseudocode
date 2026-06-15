/*
 * XREFs of ?ValidateConnectionFormatMatchesEndpoint@CAudioProcessor@@AEAAJAEBVCConnectionNode@@PEAUIAudioEndpoint@@@Z @ 0x1400275CC
 * Callers:
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x140027360 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x140027718 (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?GetBitsPerSample@@YAIPEBUtWAVEFORMATEX@@@Z @ 0x140027794 (-GetBitsPerSample@@YAIPEBUtWAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioProcessor::ValidateConnectionFormatMatchesEndpoint(
        CAudioProcessor *this,
        const struct CConnectionNode *a2,
        struct IAudioEndpoint *a3)
{
  struct IAudioEndpointVtbl *lpVtbl; // rax
  int v5; // edi
  int *v6; // rcx
  __int16 v7; // ax
  void *v9; // rcx
  __int64 v10; // [rsp+28h] [rbp-18h] BYREF
  char v11; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  LPVOID pv; // [rsp+50h] [rbp+10h] BYREF

  pv = 0LL;
  lpVtbl = a3->lpVtbl;
  v10 = 0LL;
  v11 = 1;
  v5 = ((__int64 (__fastcall *)(struct IAudioEndpoint *, __int64 *))lpVtbl->GetFrameFormat)(a3, &v10);
  if ( v11 )
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &pv,
      v10);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC8,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
      (const char *)(unsigned int)v5);
    v9 = pv;
    pv = 0LL;
    if ( v9 )
      CoTaskMemFree(v9);
    return (unsigned int)v5;
  }
  else
  {
    if ( *((unsigned __int16 *)pv + 7) >> 3 != *((_DWORD *)a2 + 11)
      || *((unsigned __int16 *)pv + 1) != *((_DWORD *)a2 + 10)
      || GetBitsPerSample((const struct tWAVEFORMATEX *)pv) != *((_DWORD *)a2 + 12)
      || (float)v6[1] != *((float *)a2 + 13) )
    {
      goto LABEL_17;
    }
    v7 = *(_WORD *)v6;
    if ( *(_WORD *)v6 == 0xFFFE )
      v7 = *((_WORD *)v6 + 12);
    if ( v7 == *((_WORD *)a2 + 12) )
    {
      pv = 0LL;
      if ( v6 )
        CoTaskMemFree(v6);
      return 0LL;
    }
    else
    {
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xACF,
        (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor.cpp",
        (const char *)0x887C001ELL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &pv,
        0LL);
      return 2289827870LL;
    }
  }
}
