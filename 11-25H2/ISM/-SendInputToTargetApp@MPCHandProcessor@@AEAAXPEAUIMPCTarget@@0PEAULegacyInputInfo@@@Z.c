/*
 * XREFs of ?SendInputToTargetApp@MPCHandProcessor@@AEAAXPEAUIMPCTarget@@0PEAULegacyInputInfo@@@Z @ 0x1800C335C
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800C3000 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z @ 0x1800C7D34 (-ProcessSourceDetectedAndLost@MPCInputProviderBase@@IEAAXPEAUIMPCTarget@@0PEA_NI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCHandProcessor::SendInputToTargetApp(
        MPCHandProcessor *this,
        struct IMPCTarget *a2,
        struct IMPCTarget *a3,
        struct LegacyInputInfo *a4)
{
  _DWORD *v4; // rbx
  int v6; // eax
  bool v9; // cl
  int v10; // eax
  unsigned int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v13; // [rsp+50h] [rbp+18h] BYREF

  if ( !a3 )
    return;
  v4 = (_DWORD *)((char *)a4 + 64);
  v6 = *((_DWORD *)a4 + 16);
  if ( v6 != 5 )
  {
    if ( v6 != 4 || *((_BYTE *)this + 3568) )
      goto LABEL_5;
LABEL_14:
    v9 = 1;
    goto LABEL_6;
  }
  if ( *((_BYTE *)this + 3568) )
    goto LABEL_14;
  v4 = (_DWORD *)((char *)a4 + 64);
LABEL_5:
  v9 = 0;
LABEL_6:
  v13 = v9;
  if ( !v9 )
  {
    MPCInputProviderBase::ProcessSourceDetectedAndLost(this, a2, a3, &v13, v11);
    v9 = v13;
  }
  if ( *((_BYTE *)this + 3568) && !v9 && (unsigned int)(*v4 - 4) > 1 )
  {
    v10 = (*(__int64 (__fastcall **)(struct IMPCTarget *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 24LL))(a3, a4);
    if ( v10 == -2147417853 )
    {
      *((_BYTE *)this + 3568) = 0;
    }
    else if ( v10 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x262,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
        (const char *)(unsigned int)v10);
    }
  }
}
