/*
 * XREFs of ?RemoveAllObjectsForElement@InputSite@@QEAAXPEAVInputSiteElementProxy@@@Z @ 0x180038104
 * Callers:
 *     ??1InputSiteElementProxy@@UEAA@XZ @ 0x180037EDC (--1InputSiteElementProxy@@UEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     std::find_if_InputSite::AttachedInputObjectEntry____lambda_4edb7c407ffe7f35937f17f6fb9e42e7___ @ 0x1800381D0 (std--find_if_InputSite--AttachedInputObjectEntry____lambda_4edb7c407ffe7f35937f17f6fb9e42e7___.c)
 *     ??$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjectEntry@InputSite@@PEAU12@00@Z @ 0x18003827C (--$_Move_unchecked@PEAUAttachedInputObjectEntry@InputSite@@PEAU12@@std@@YAPEAUAttachedInputObjec.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800382E0 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _lambda_4edb7c407ffe7f35937f17f6fb9e42e7_::operator()_InputSite::AttachedInputObjectEntry_ @ 0x180038328 (_lambda_4edb7c407ffe7f35937f17f6fb9e42e7_--operator()_InputSite--AttachedInputObjectEntry_.c)
 */

void __fastcall InputSite::RemoveAllObjectsForElement(InputSite *this, struct InputSiteElementProxy *a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 i; // rbx
  struct InputSiteElementProxy **v10; // [rsp+40h] [rbp+8h] BYREF
  struct InputSiteElementProxy *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v2 = (_QWORD *)*((_QWORD *)this + 62);
  v10 = &v11;
  v4 = (_QWORD *)std::find_if_InputSite::AttachedInputObjectEntry____lambda_4edb7c407ffe7f35937f17f6fb9e42e7___(
                   *((_QWORD *)this + 61),
                   v2,
                   &v11);
  v5 = v4;
  if ( v4 != v2 )
  {
    while ( 1 )
    {
      v4 += 2;
      if ( v4 == v2 )
        break;
      if ( !(unsigned __int8)lambda_4edb7c407ffe7f35937f17f6fb9e42e7_::operator()_InputSite::AttachedInputObjectEntry_(
                               &v10,
                               v4) )
      {
        *v5 = *v4;
        Microsoft::WRL::ComPtr<IUnknown>::operator=(v5 + 1, v4 + 1);
        v5 += 2;
      }
    }
  }
  if ( v5 != v2 )
  {
    v6 = std::_Move_unchecked<InputSite::AttachedInputObjectEntry *,InputSite::AttachedInputObjectEntry *>(
           v2,
           *((_QWORD *)this + 62),
           v5);
    v7 = *((_QWORD *)this + 62);
    v8 = v6;
    for ( i = v6; i != v7; i += 16LL )
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(i + 8));
    *((_QWORD *)this + 62) = v8;
  }
}
