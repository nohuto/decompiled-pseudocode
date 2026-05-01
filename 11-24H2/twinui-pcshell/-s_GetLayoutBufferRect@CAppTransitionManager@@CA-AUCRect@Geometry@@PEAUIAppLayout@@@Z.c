/*
 * XREFs of ?s_GetLayoutBufferRect@CAppTransitionManager@@CA?AUCRect@Geometry@@PEAUIAppLayout@@@Z @ 0x1804E5630
 * Callers:
 *     ?_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E50D4 (-_TagBuffer@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall CAppTransitionManager::s_GetLayoutBufferRect(_DWORD *a1, __int64 *a2)
{
  __int64 v4; // rax
  int (__fastcall *v5)(__int64 *, __int64 *); // rbx
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  __int64 v10[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-58h] BYREF
  int v12; // [rsp+48h] [rbp-40h]
  int v13; // [rsp+4Ch] [rbp-3Ch]
  int v14; // [rsp+50h] [rbp-38h]
  int v15; // [rsp+54h] [rbp-34h]

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  v4 = *a2;
  v10[0] = 0LL;
  v5 = *(int (__fastcall **)(__int64 *, __int64 *))(v4 + 128);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v10);
  if ( v5(a2, v10) >= 0 )
  {
    memset_0(v11, 0, 0x40uLL);
    if ( (*(int (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v10[0] + 24LL))(v10[0], 4LL, v11) >= 0 )
    {
      v6 = v13;
      v7 = v14;
      v8 = v15;
      *a1 = v12;
      a1[1] = v6;
      a1[2] = v7;
      a1[3] = v8;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v10);
  return a1;
}
