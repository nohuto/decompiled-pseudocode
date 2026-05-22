/*
 * XREFs of ??$GetAttachedObject@UIAnimationTargetClientProxy@@VAnimationTargetClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VAnimationTargetClientProxy@@@WRL@Microsoft@@XZ @ 0x180158CFC
 * Callers:
 *     ?TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA?AV?$weak_ptr@VGestureHandler@@@std@@PEAUHitTestInfo@@PEAUHitTestResult@@@Z @ 0x180025F40 (-TryFindResumableAnimationTarget@ShellGesturesProcessor@@AEAA-AV-$weak_ptr@VGestureHandler@@@std.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIAnimationTargetClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAnimationTargetClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18005C758 (--$As@UIAnimationTargetClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Co.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall InputSite::GetAttachedObject<IAnimationTargetClientProxy,AnimationTargetClientProxy>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  void (__fastcall ***v6)(_QWORD); // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  v4 = *(_QWORD *)(a1 + 488);
  v5 = *(_QWORD *)(a1 + 496);
  if ( v4 != v5 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IAnimationTargetClientProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 8),
                  &v8) >= 0 )
        break;
      v4 += 16LL;
    }
    while ( v4 != v5 );
    v3 = v8;
  }
  v6 = (void (__fastcall ***)(_QWORD))((v3 - 8) & -(__int64)(v3 != 0));
  *a2 = v6;
  if ( v6 )
    (**v6)(v6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
  return a2;
}
