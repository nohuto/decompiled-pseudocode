/*
 * XREFs of ?OnInput@LightDismissProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180024BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180037A08 (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Dismiss@BamoLightDismissClientProxy@@UEAAJXZ @ 0x18015C970 (-Dismiss@BamoLightDismissClientProxy@@UEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LightDismissProcessor::OnInput(
        LightDismissProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  int (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rbx
  int v6; // eax
  __int64 v7; // rdi
  char *i; // rbx
  __int64 v9; // rcx
  __int64 v11; // rsi
  unsigned int ProcessId; // eax
  int v13; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v15; // [rsp+38h] [rbp+10h] BYREF
  __int64 v16; // [rsp+48h] [rbp+20h] BYREF

  *((_DWORD *)a4 + 2) = 4;
  if ( (*(_BYTE *)a2 & 4) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x9A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lightdismiss\\processor\\"
                    "lightdismissprocessor.cpp",
      (const char *)a4);
  if ( (*((_BYTE *)a2 + 94) & 1) != 0 )
  {
    v15 = 0;
    v16 = 0LL;
    v4 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a3 + 2);
    if ( v4 )
    {
      v5 = **v4;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
      if ( v5(v4, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, &v16) >= 0 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v16 + 32LL))(v16, &v15);
        if ( v6 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xA8,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\lightdismiss\\proc"
                          "essor\\lightdismissprocessor.cpp",
            (const char *)(unsigned int)v6,
            v13);
      }
    }
    v7 = qword_180250F20;
    for ( i = (char *)LightDismissProcessor::s_clients; i != (char *)v7; i += 8 )
    {
      v11 = *(_QWORD *)i;
      ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)i + 32LL)
                                                                                                + 16LL));
      if ( v15 != ProcessId )
        BamoLightDismissClientProxy::Dismiss((BamoLightDismissClientProxy *)(v11 + 8));
    }
    v9 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  return 0LL;
}
