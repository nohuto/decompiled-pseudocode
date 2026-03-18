/*
 * XREFs of _lambda_4d2358d7a59f9862d39587a9c5c8147c_::operator() @ 0x1403E9CAC
 * Callers:
 *     _DXGKCALLONEXIT__lambda_4d2358d7a59f9862d39587a9c5c8147c____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140057FF0 (_DXGKCALLONEXIT__lambda_4d2358d7a59f9862d39587a9c5c8147c____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 * Callees:
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x14004FC08 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x140052D60 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1403DBB1C (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 */

void __fastcall lambda_4d2358d7a59f9862d39587a9c5c8147c_::operator()(unsigned int **a1)
{
  unsigned int v2; // ecx
  struct _KTHREAD **v3; // rcx
  unsigned int *v4; // rax
  unsigned int v5; // r10d
  unsigned int *v6; // rax
  unsigned int v7; // r9d
  DispBrokerClientHandle *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = **a1;
  if ( (int)(v2 + 0x80000000) >= 0 && v2 != -1073741772 )
  {
    v3 = (struct _KTHREAD **)a1[2];
    *a1[1] |= 1u;
    DispBrokerClient::ReferencePort(v3, &v8);
    v4 = a1[1];
    v5 = (v8 != 0LL ? 8 : 0) | *v4 & 0xFFFFFFF7;
    *v4 = v5;
    v6 = a1[3];
    if ( *(_QWORD *)v6 )
      v7 = *(_DWORD *)(*(_QWORD *)v6 + 40LL);
    else
      v7 = -1;
    DxgkLogCodePointPacketForSession(105, **(unsigned int **)a1[2], **a1, v7, v5, 0LL);
    DispBrokerClientReference::Assign(&v8, 0LL);
  }
}
