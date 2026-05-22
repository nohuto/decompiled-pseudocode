/*
 * XREFs of ?OnHeadUpdateEvent@SpatialRimDeviceCollectionHeadEventHandler@@AEAAJXZ @ 0x1800518A0
 * Callers:
 *     ?_lambda_invoker_cdecl_@_lambda_3288c3d6534f126e79500dd5b9660c9a_@@CA@PEAX@Z @ 0x180051870 (-_lambda_invoker_cdecl_@_lambda_3288c3d6534f126e79500dd5b9660c9a_@@CA@PEAX@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@1@Z @ 0x1800D4B80 (-OnHeadUpdateEvent@SpatialRimDeviceCollection@@QEAAJAEBUMPCMatrix4x4@@PEAUIPerceptionTimestamp@P.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall SpatialRimDeviceCollectionHeadEventHandler::OnHeadUpdateEvent(
        SpatialRimDeviceCollectionHeadEventHandler *this)
{
  struct Windows::Perception::IPerceptionTimestamp **v2; // rax
  struct Windows::Perception::IPerceptionTimestamp *v3; // rbx
  struct Windows::Perception::IPerceptionTimestamp **v4; // rax
  struct Windows::Perception::IPerceptionTimestamp *v5; // rdi
  SpatialRimDeviceCollection *v7; // rcx
  char v8; // [rsp+20h] [rbp-88h] BYREF
  struct Windows::Perception::IPerceptionTimestamp *v9; // [rsp+28h] [rbp-80h]
  char v10; // [rsp+30h] [rbp-78h] BYREF
  struct Windows::Perception::IPerceptionTimestamp *v11; // [rsp+38h] [rbp-70h]
  char *v12; // [rsp+40h] [rbp-68h]
  _OWORD v13[4]; // [rsp+50h] [rbp-58h] BYREF

  memset_0(v13, 0, sizeof(v13));
  EnterCriticalSection((LPCRITICAL_SECTION)this + 2);
  v2 = (struct Windows::Perception::IPerceptionTimestamp **)((char *)this + 184);
  v3 = 0LL;
  if ( &v8 != (char *)this + 184 )
  {
    v3 = *v2;
    *v2 = 0LL;
  }
  v9 = v3;
  v4 = (struct Windows::Perception::IPerceptionTimestamp **)((char *)this + 192);
  v5 = 0LL;
  if ( &v10 != (char *)this + 192 )
  {
    v5 = *v4;
    *v4 = 0LL;
  }
  v11 = v5;
  v13[0] = *(_OWORD *)((char *)this + 120);
  v13[1] = *(_OWORD *)((char *)this + 136);
  v13[2] = *(_OWORD *)((char *)this + 152);
  v13[3] = *(_OWORD *)((char *)this + 168);
  if ( this != (SpatialRimDeviceCollectionHeadEventHandler *)-80LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)this + 2);
  if ( v3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
    v12 = (char *)this + 32;
    v7 = (SpatialRimDeviceCollection *)*((_QWORD *)this + 3);
    if ( v7 )
      SpatialRimDeviceCollection::OnHeadUpdateEvent(v7, (const struct MPCMatrix4x4 *)v13, v3, v5);
    if ( this != (SpatialRimDeviceCollectionHeadEventHandler *)-32LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  }
  if ( v5 )
    (*(void (__fastcall **)(struct Windows::Perception::IPerceptionTimestamp *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v3 )
    (*(void (__fastcall **)(struct Windows::Perception::IPerceptionTimestamp *))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
