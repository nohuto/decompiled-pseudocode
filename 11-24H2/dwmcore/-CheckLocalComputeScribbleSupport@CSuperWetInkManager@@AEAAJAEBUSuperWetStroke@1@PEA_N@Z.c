/*
 * XREFs of ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x180218A88
 * Callers:
 *     ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1802189A4 (-TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x180043F80 (McTemplateU0t_EventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSuperWetInkManager::CheckLocalComputeScribbleSupport(
        CSuperWetInkManager *this,
        const struct CSuperWetInkManager::SuperWetStroke *a2,
        bool *a3)
{
  bool v3; // zf
  int (__fastcall ***v6)(_QWORD, GUID *, CSuperWetInkManager **); // rax
  int (__fastcall ***v7)(_QWORD, GUID *, CSuperWetInkManager **); // rbx
  __int64 v8; // r10
  __int64 v10; // r8
  CSuperWetInkManager *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = this;
  v3 = CCommonRegistryData::SuperWetEnabled == 0;
  *a3 = 0;
  if ( v3 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) == 0 )
      return 0LL;
    v10 = 9LL;
    goto LABEL_16;
  }
  v6 = (int (__fastcall ***)(_QWORD, GUID *, CSuperWetInkManager **))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 224LL))(*((_QWORD *)a2 + 1));
  v7 = v6;
  if ( !v6 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) == 0 )
      return 0LL;
    v10 = 10LL;
LABEL_16:
    McTemplateU0t_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE,
      v10);
    return 0LL;
  }
  v11 = 0LL;
  if ( (**v6)(v6, &GUID_2c1fe8d2_95c7_47a6_865f_9c56f4e898cc, &v11) >= 0 )
  {
    v8 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, CSuperWetInkManager **)))(*v7)[5])(v7);
    if ( !v8
      || !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64, char *, _QWORD))(**(_QWORD **)a2 + 312LL))(
            *(_QWORD *)a2,
            v8,
            (char *)a2 + 16,
            0LL)
      || !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 240LL))(*((_QWORD *)a2 + 1)) )
    {
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
      return 0LL;
    }
    *a3 = 1;
  }
  if ( v11 )
    (*(void (__fastcall **)(CSuperWetInkManager *))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
