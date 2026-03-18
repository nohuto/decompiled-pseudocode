/*
 * XREFs of ?InitializeDefaultPlaceholderPeer@BamoConnectionImpl@dataprovider_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x18026EA30
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z @ 0x1801A9164 (-Initialize@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoConnectionImpl@23@III@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl::InitializeDefaultPlaceholderPeer(
        BamoImpl::dataprovider_AutoBamos::BamoConnectionImpl *this,
        struct Microsoft::Bamo::BaseBamoPeer **a2)
{
  struct Microsoft::Bamo::BaseBamoPeer *v4; // rax
  const char *v5; // r9
  struct Microsoft::Bamo::BaseBamoPeer *v6; // rdi
  Microsoft::BamoImpl::BamoImplObject **v7; // rax
  const char *v8; // r9
  Microsoft::BamoImpl::BamoImplObject **v9; // rbx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct Microsoft::Bamo::BaseBamoPeer *)operator new(0x68uLL);
  v6 = v4;
  if ( !v4 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x3D22,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      v5);
  *(_QWORD *)v4 = &dataprovider_AutoBamos::BamoPeer::`vftable';
  *((_DWORD *)v4 + 4) = 1;
  *((_QWORD *)v4 + 3) = v4;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 6) = 0LL;
  *((_WORD *)v4 + 28) = 0;
  *((_QWORD *)v4 + 8) = 0LL;
  *((_QWORD *)v4 + 9) = 0LL;
  *((_QWORD *)v4 + 10) = 0LL;
  *((_QWORD *)v4 + 11) = 0LL;
  *((_QWORD *)v4 + 12) = 0LL;
  *((_QWORD *)v4 + 1) = &BamoImpl::dataprovider_AutoBamos::BamoPeerImpl::`vftable';
  v7 = (Microsoft::BamoImpl::BamoImplObject **)(*(__int64 (__fastcall **)(struct Microsoft::Bamo::BaseBamoPeer *))(*(_QWORD *)v4 + 8LL))(v4);
  v8 = (const char *)*((unsigned int *)this + 9);
  v9 = v7;
  *((_DWORD *)this + 9) = (_DWORD)v8 + 1;
  Microsoft::BamoImpl::BaseBamoPeerImpl::Initialize(v7, this, 0LL, v8, (unsigned int)v8);
  result = 0LL;
  *((_BYTE *)v9 + 48) = 1;
  *a2 = v6;
  return result;
}
