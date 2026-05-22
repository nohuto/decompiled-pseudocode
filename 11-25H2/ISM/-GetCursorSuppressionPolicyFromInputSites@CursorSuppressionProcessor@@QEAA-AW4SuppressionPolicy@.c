/*
 * XREFs of ?GetCursorSuppressionPolicyFromInputSites@CursorSuppressionProcessor@@QEAA?AW4SuppressionPolicy@Input@Internal@UI@Windows@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180145100
 * Callers:
 *     ?OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180145260 (-OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualPro.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UICursorSuppressionPolicyObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UICursorSuppressionPolicyObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18003C13C (--$As@UICursorSuppressionPolicyObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CursorSuppressionProcessor::GetCursorSuppressionPolicyFromInputSites(__int64 a1, __int64 **a2)
{
  unsigned int v2; // ebp
  __int64 *v3; // rsi
  __int64 *v4; // r15
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = a1;
  v2 = 2;
  v3 = *a2;
  v4 = a2[1];
  v5 = 0;
  while ( v3 != v4 )
  {
    v6 = *v3;
    v7 = 0LL;
    v11 = 0LL;
    v8 = *(_QWORD *)(v6 + 488);
    v9 = *(_QWORD *)(v6 + 496);
    if ( v8 != v9 )
    {
      do
      {
        if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<ICursorSuppressionPolicyObjectProxy>(
                    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v8 + 8),
                    &v11) >= 0 )
          break;
        v8 += 16LL;
      }
      while ( v8 != v9 );
      v7 = v11;
    }
    if ( v7 )
    {
      v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
      if ( v2 != 2 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
        break;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    ++v3;
  }
  if ( v2 != 2 )
    return v2;
  return v5;
}
