/*
 * XREFs of ?QueryInterface@MPCTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180097D90
 * Callers:
 *     ?QueryInterface@MPCFocusTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180097D20 (-QueryInterface@MPCFocusTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@MPCTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FE530 (-QueryInterface@MPCTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QueryInterface@RefCountedObject@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A31B0 (-QueryInterface@RefCountedObject@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MPCTarget::QueryInterface(MPCTarget *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  __int64 v6; // rax
  __int64 result; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4;
  if ( v4 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b1814bf0_3b70_4438_85b7_b79ea0945ec5.Data4;
    if ( v6 )
      return RefCountedObject::QueryInterface((MPCTarget *)((char *)this + 8), a2, a3);
  }
  (*(void (__fastcall **)(MPCTarget *))(*(_QWORD *)this + 8LL))(this);
  result = 0LL;
  *a3 = this;
  return result;
}
