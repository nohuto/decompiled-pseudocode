/*
 * XREFs of ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE_@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x14009AC0C
 * Callers:
 *     ?GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE_@@PEAI@Z @ 0x14009A430 (-GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE_@@PEAI@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x140032C60 (-GetSurfaceUpdate@CompositionSurfaceObject@@QEAAJ_KPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 *     ?FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z @ 0x14003907C (-FromToken@CFlipToken@@SAPEBV1@PEBVCToken@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

char __fastcall CTokenQueue::ReleaseAnalogTokensAndGetUpdates(
        CTokenQueue *this,
        int a2,
        struct CSM_SURFACE_UPDATE_ *a3,
        int a4,
        bool *a5,
        unsigned int *a6,
        struct CToken **a7)
{
  int v7; // r14d
  bool *v8; // r15
  char v9; // r12
  CTokenQueue *v12; // rbx
  CTokenQueue **v13; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rax
  CTokenQueue **v16; // rax
  _QWORD *v17; // rax
  unsigned int v18; // esi
  __int64 v19; // rcx
  struct CToken **v20; // r15
  struct CSM_SURFACE_UPDATE_ *v21; // r13
  const struct CToken *v22; // rdi
  CompositionSurfaceObject *v23; // r14
  const struct CFlipToken *v24; // rbx
  __int64 Win32kImportTable; // rax
  __int64 v26; // rcx
  _QWORD v28[2]; // [rsp+20h] [rbp-10h] BYREF
  int v29; // [rsp+78h] [rbp+48h] BYREF
  struct CSM_SURFACE_UPDATE_ *v30; // [rsp+80h] [rbp+50h]

  v30 = a3;
  v29 = a2;
  v7 = 0;
  v8 = a5;
  v9 = 0;
  *a6 = 0;
  v12 = (CTokenQueue *)*((_QWORD *)this + 1);
  v28[1] = v28;
  v28[0] = v28;
  *v8 = 0;
  if ( *(CTokenQueue **)v12 != this )
    goto LABEL_33;
  v13 = (CTokenQueue **)*((_QWORD *)v12 + 1);
  if ( *v13 != v12 )
    goto LABEL_33;
  for ( *((_QWORD *)this + 1) = v13; ; *((_QWORD *)this + 1) = v13 )
  {
    *v13 = this;
    if ( v12 == this )
      goto LABEL_19;
    v14 = (_QWORD *)((char *)v12 - 8);
    LOBYTE(v29) = 0;
    if ( (*(int (__fastcall **)(_QWORD *, int *))(*((_QWORD *)v12 - 1) + 192LL))((_QWORD *)v12 - 1, &v29) < 0 )
    {
LABEL_11:
      (*(void (__fastcall **)(_QWORD *))(*v14 + 56LL))((_QWORD *)v12 - 1);
      (*(void (__fastcall **)(__int64, __int64))*v14)((__int64)v12 - 8, 1LL);
      goto LABEL_12;
    }
    if ( !(_BYTE)v29 )
      break;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v14 + 72LL))((_QWORD *)v12 - 1) )
      goto LABEL_11;
    if ( !a4 )
    {
      v9 = 1;
      goto LABEL_17;
    }
    v15 = v28[0];
    ++v7;
    if ( *(_QWORD **)(v28[0] + 8LL) != v28 )
      goto LABEL_33;
    *(_QWORD *)v12 = v28[0];
    *((_QWORD *)v12 + 1) = v28;
    *(_QWORD *)(v15 + 8) = v12;
    v28[0] = v12;
LABEL_12:
    v12 = (CTokenQueue *)*((_QWORD *)this + 1);
    if ( *(CTokenQueue **)v12 != this )
      goto LABEL_33;
    v13 = (CTokenQueue **)*((_QWORD *)v12 + 1);
    if ( *v13 != v12 )
      goto LABEL_33;
  }
  *v8 = 1;
LABEL_17:
  v16 = (CTokenQueue **)*((_QWORD *)this + 1);
  if ( *v16 != this )
LABEL_33:
    __fastfail(3u);
  *(_QWORD *)v12 = this;
  *((_QWORD *)v12 + 1) = v16;
  *v16 = v12;
  *((_QWORD *)this + 1) = v12;
LABEL_19:
  if ( v7 )
  {
    v17 = (_QWORD *)v28[0];
    v18 = 0;
    v19 = *(_QWORD *)v28[0];
    if ( *(_QWORD **)(v28[0] + 8LL) != v28 || *(_QWORD *)(v19 + 8) != v28[0] )
      goto LABEL_33;
    v28[0] = *(_QWORD *)v28[0];
    *(_QWORD *)(v19 + 8) = v28;
    if ( v17 != v28 )
    {
      v20 = a7;
      v21 = v30;
      do
      {
        v22 = (const struct CToken *)(v17 - 1);
        if ( v18
          || (v23 = (CompositionSurfaceObject *)*((_QWORD *)v22 + 6),
              (int)CompositionSurfaceObject::GetSurfaceUpdate(v23, 0LL, v21) < 0) )
        {
          (*(void (__fastcall **)(const struct CToken *))(*(_QWORD *)v22 + 56LL))(v22);
          (**(void (__fastcall ***)(const struct CToken *, __int64))v22)(v22, 1LL);
        }
        else
        {
          *((_DWORD *)v21 + 7) = (*(__int64 (__fastcall **)(const struct CToken *))(*(_QWORD *)v22 + 112LL))(v22);
          v18 = 1;
          v24 = CFlipToken::FromToken(v22);
          Win32kImportTable = DxgkGetWin32kImportTable();
          (*(void (__fastcall **)(CompositionSurfaceObject *, _QWORD))(Win32kImportTable + 88))(
            v23,
            *((unsigned int *)v24 + 30));
          *v20 = v22;
        }
        v17 = (_QWORD *)v28[0];
        if ( *(_QWORD **)(v28[0] + 8LL) != v28 )
          goto LABEL_33;
        v26 = *(_QWORD *)v28[0];
        if ( *(_QWORD *)(*(_QWORD *)v28[0] + 8LL) != v28[0] )
          goto LABEL_33;
        v28[0] = *(_QWORD *)v28[0];
        *(_QWORD *)(v26 + 8) = v28;
      }
      while ( v17 != v28 );
    }
    *a6 = v18;
  }
  return v9;
}
