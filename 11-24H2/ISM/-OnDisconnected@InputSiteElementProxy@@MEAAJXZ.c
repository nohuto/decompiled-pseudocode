/*
 * XREFs of ?OnDisconnected@InputSiteElementProxy@@MEAAJXZ @ 0x18005A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Create@InputSystemServerConnection@@SA?AV?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18000DA9C (-Create@InputSystemServerConnection@@SA-AV-$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18008DEC0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall InputSiteElementProxy::OnDisconnected(InputSiteElementProxy *this)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int *i; // rbx
  int *v5; // rsi
  InputSiteElementProxy *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  int v11; // eax
  Microsoft::Bamo::BaseBamoConnection **v12; // rax
  struct InputSystemServerConnection *v13; // rcx
  Microsoft::Bamo::BaseBamoConnection *v14; // rcx
  __int64 v15; // rcx
  int v16; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v19; // [rsp+50h] [rbp+18h] BYREF

  if ( !ISMStatics::s_inputSystemBamoConnection )
  {
    v18 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    v11 = CoreUICreate(&v18);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x33,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v11,
        v16);
    v12 = InputSystemServerConnection::Create(&v19, v18);
    v13 = *v12;
    *v12 = 0LL;
    ISMStatics::s_inputSystemBamoConnection = v13;
    v14 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      Microsoft::Bamo::BaseBamoConnection::Release(v14);
    }
    v15 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)ISMStatics::s_inputSystemBamoConnection + 31) + 8LL)
                                          + 152LL))(*((_QWORD *)ISMStatics::s_inputSystemBamoConnection + 31) + 8LL);
  v3 = v2;
  for ( i = *(int **)(v2 + 80); i != *(int **)(v2 + 88) && *(InputSiteElementProxy **)i != this; i += 2 )
    ;
  v5 = *(int **)(v2 + 88);
  while ( 1 )
  {
    i += 2;
    if ( i == v5 )
      break;
    v6 = 0LL;
    if ( &v16 != i )
    {
      v6 = *(InputSiteElementProxy **)i;
      *(_QWORD *)i = 0LL;
    }
    v7 = *((_QWORD *)i - 1);
    *((_QWORD *)i - 1) = v6;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  v8 = *(_QWORD *)(v3 + 88);
  v9 = *(_QWORD *)(v8 - 8);
  if ( v9 )
  {
    *(_QWORD *)(v8 - 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  }
  *(_QWORD *)(v3 + 88) -= 8LL;
  return 0LL;
}
