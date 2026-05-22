/*
 * XREFs of ??$RemoveObject@UIDropTargetClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x18005D4D8
 * Callers:
 *     ?OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ @ 0x18005D460 (-OnDropTargetClientChanged@InputSiteElementProxy@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@PEAU12@00@Z @ 0x18003827C (--$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjec.c)
 *     ??$As@UIInputSiteClientPrivate@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputSiteClientPrivate@@@WRL@Microsoft@@@Details@12@@Z @ 0x180038424 (--$As@UIInputSiteClientPrivate@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall InputSite::RemoveObject<IDropTargetClientProxy>(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 *v4; // r14
  __int64 *v5; // r15
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rsi
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  bool v9; // al
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = *(__int64 **)(a1 + 488);
  v5 = *(__int64 **)(a1 + 496);
  while ( v4 != v5 )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v4;
    v7 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v4[1];
    v8 = **v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    v9 = v8(v7, &GUID_2997278b_3edd_8da0_6daf_809840cbb7ae, &v13) >= 0;
    if ( v6 == a2 && v9 )
      break;
    v4 += 2;
  }
  if ( v4 != *(__int64 **)(a1 + 496) )
  {
    v12 = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputSiteClientPrivate>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v4 + 1,
                &v12) >= 0 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 32LL))(v12);
    std::_Move_unchecked<InputSite::AttachedInputObjectEntry *,InputSite::AttachedInputObjectEntry *>(
      v4 + 2,
      *(_QWORD **)(a1 + 496),
      v4);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(*(_QWORD *)(a1 + 496) - 8LL));
    *(_QWORD *)(a1 + 496) -= 16LL;
    v10 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
}
