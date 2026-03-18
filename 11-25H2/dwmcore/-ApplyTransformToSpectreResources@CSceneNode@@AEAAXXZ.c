/*
 * XREFs of ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ @ 0x1802AF23C
 * Callers:
 *     ?SetTransform@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJPEAVCSceneModelTransform@@@Z @ 0x180285064 (-SetTransform@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJPEAVCSceneModelTransform.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1802AF3E0 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?OnChanged@CSceneNode@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1802AF580 (-OnChanged@CSceneNode@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180019310 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneNode::ApplyTransformToSpectreResources(CSceneNode *this)
{
  __int64 v1; // rdx
  const struct CMILMatrix *Matrix; // rax
  CTransform3D *v4; // rcx
  __int64 v5; // rcx
  _OWORD v6[4]; // [rsp+20h] [rbp-49h] BYREF
  int v7; // [rsp+60h] [rbp-9h]
  _OWORD v8[4]; // [rsp+70h] [rbp+7h] BYREF

  v1 = *((_QWORD *)this + 9);
  Matrix = 0LL;
  if ( v1 )
  {
    v4 = *(CTransform3D **)(v1 + 72);
    if ( v4 )
      Matrix = CTransform3D::GetMatrix(v4, 0LL);
  }
  v7 = 0;
  if ( !Matrix )
  {
    v6[0] = _xmm;
    v6[1] = _xmm;
    BYTE1(v7) = BYTE1(v7) & 0xC0 | 0x29;
    Matrix = (const struct CMILMatrix *)v6;
    v6[2] = _xmm;
    v6[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
    LOBYTE(v7) = -86;
  }
  v5 = *((_QWORD *)this + 18);
  v8[0] = *(_OWORD *)Matrix;
  v8[1] = *((_OWORD *)Matrix + 1);
  v8[2] = *((_OWORD *)Matrix + 2);
  v8[3] = *((_OWORD *)Matrix + 3);
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v5 + 64LL))(v5, v8);
}
