/*
 * XREFs of ?PrepareForExitAnimation@CDropFeedback@@UEAAJPEAPEAUIDropFeedbackArray@@@Z @ 0x18053F760
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedback::PrepareForExitAnimation(CDropFeedback *this, struct IDropFeedbackArray **a2)
{
  unsigned int v2; // esi
  __int64 *v3; // r14
  __int64 v5; // rcx
  unsigned int v7; // r15d
  __int64 v8; // rdi
  int (__fastcall *v9)(__int64, _QWORD, GUID *, __int64 *); // rbx
  struct IDropFeedbackArray *v10; // rax
  unsigned int v12; // [rsp+70h] [rbp+40h] BYREF
  __int64 v13; // [rsp+78h] [rbp+48h] BYREF

  v2 = 0;
  v3 = (__int64 *)((char *)this + 104);
  *a2 = 0LL;
  v5 = *((_QWORD *)this + 13);
  if ( v5 )
  {
    v12 = 0;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 24LL))(v5, &v12);
    v7 = v12;
    while ( (--v7 & 0x80000000) == 0 )
    {
      v8 = *v3;
      v13 = 0LL;
      v9 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v8 + 32LL);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
      if ( v9(v8, v7, &GUID_9a7744b2_e9e4_419a_b60f_f7b66ccd6810, &v13) >= 0
        && ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13) == 1
         || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13) == 2
         || (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 96LL))(v13) == 3
         || ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 104LL))(v13) & 0x80000) != 0) )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v3 + 48LL))(*v3, v7);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 40LL))(*((_QWORD *)this + 14), v13);
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v13);
    }
    v10 = (struct IDropFeedbackArray *)*v3;
    *v3 = 0LL;
    *a2 = v10;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v3);
  }
  else
  {
    return (unsigned int)-2147467259;
  }
  return v2;
}
