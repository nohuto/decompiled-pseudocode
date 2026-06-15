/*
 * XREFs of ?GetVirtualSurroundAPO@CPipeInstance@@QEBAJPEAPEAUIVirtualSurround@@@Z @ 0x14002F354
 * Callers:
 *     ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14002EE78 (-RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPipeInstance::GetVirtualSurroundAPO(CPipeInstance *this, struct IVirtualSurround **a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  unsigned int v9; // edi
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h]
  __int64 v12; // [rsp+50h] [rbp+18h]

  v12 = 0LL;
  *a2 = 0LL;
  v3 = *((_QWORD *)this + 3);
  v4 = *((_QWORD *)this + 9);
  while ( 1 )
  {
    do
    {
      if ( !v3 )
        return 2147943568LL;
      v5 = *(_QWORD *)(v3 + 16);
      v3 = *(_QWORD *)(v3 + 8);
      v6 = *(_QWORD **)(v4 + 16);
      v4 = *(_QWORD *)(v4 + 8);
      if ( !*v6 )
        ATL::AtlThrowImpl(-2147467259);
    }
    while ( *(_DWORD *)(v5 + 40) != 2 );
    v7 = *(_QWORD *)(*(_QWORD *)(v5 + 32) + 40LL);
    v11 = v7;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    v10 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v7)(v7, &GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065, &v10) >= 0 )
      break;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v11 = 0LL;
  v12 = v7;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( !v7 )
    return 2147943568LL;
  v9 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IVirtualSurround **))v7)(
         v7,
         &GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065,
         a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v9;
}
