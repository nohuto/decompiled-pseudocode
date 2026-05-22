/*
 * XREFs of ?OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180067FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?erase@?$vector@U?$pair@KPEAVInputRedirectionTarget@@@std@@V?$allocator@U?$pair@KPEAVInputRedirectionTarget@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@KPEAVInputRedirectionTarget@@@std@@@std@@@std@@@2@@Z @ 0x1801A8720 (-erase@-$vector@U-$pair@KPEAVInputRedirectionTarget@@@std@@V-$allocator@U-$pair@KPEAVInputRedire.c)
 *     ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1801A8CD8 (-IsValid@InputRedirectionTarget@@QEAA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall InputRedirectionProcessor::OnFocusRequest(
        InputRedirectionProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  char *v4; // r15
  __int64 v5; // rbx
  int v7; // edx
  InputRedirectionTarget *v10; // rsi
  __int64 (__fastcall *v11)(InputRedirectionTarget *, GUID *, char *); // rdi
  int v12; // eax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v15; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)a4 = 0;
  v4 = (char *)this + 80;
  v5 = *((_QWORD *)this + 10);
  v7 = *((_DWORD *)a2 + 1);
  while ( v5 != *((_QWORD *)this + 11) )
  {
    if ( (v7 & *(_DWORD *)v5) != 0 )
    {
      v10 = *(InputRedirectionTarget **)(v5 + 8);
      if ( InputRedirectionTarget::IsValid(v10) )
      {
        if ( *((_DWORD *)v10 + 16) != *((_DWORD *)a2 + 4) )
        {
          v11 = **(__int64 (__fastcall ***)(InputRedirectionTarget *, GUID *, char *))v10;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a4 + 1);
          v12 = v11(v10, &GUID_00000000_0000_0000_c000_000000000046, (char *)a4 + 8);
          if ( v12 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x1AB,
              (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection"
                            "\\system\\lib\\inputredirectionprocessor.cpp",
              (const char *)(unsigned int)v12,
              v13);
          *(_DWORD *)a4 = ((*(unsigned __int8 (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v10 + 32LL))(v10) != 0)
                        + 2;
        }
      }
      else
      {
        std::vector<std::pair<unsigned long,InputRedirectionTarget *>>::erase(v4, &v15, v5);
        (*(void (__fastcall **)(InputRedirectionTarget *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      return 0LL;
    }
    v5 += 16LL;
  }
  return 0LL;
}
