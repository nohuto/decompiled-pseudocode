/*
 * XREFs of ?SetOverallZoom@CDropFeedback@@UEAAJ_N@Z @ 0x18053FF80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropFeedback::SetOverallZoom(CDropFeedback *this, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int i; // ebp
  __int64 v7; // rdi
  int (__fastcall *v8)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+10h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 100) != (_BYTE)a2 )
  {
    *((_BYTE *)this + 100) = a2;
    v4 = *((_QWORD *)this + 17);
    v2 = -2147467259;
    if ( v4 )
      v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 184LL))(v4, a2, 1LL);
    v5 = *((_QWORD *)this + 13);
    if ( v5 )
    {
      v11 = 0;
      (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 24LL))(v5, &v11);
      for ( i = 0; i < v11; ++i )
      {
        v7 = *((_QWORD *)this + 13);
        v10 = 0LL;
        v8 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 32LL);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
        if ( v8(v7, i, &GUID_3b3d24a4_78ef_4796_bec6_c9896b501c36, &v10) >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
        Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v10);
      }
    }
  }
  return v2;
}
