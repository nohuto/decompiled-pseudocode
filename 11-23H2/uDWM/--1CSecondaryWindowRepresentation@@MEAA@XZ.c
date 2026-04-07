/*
 * XREFs of ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x18004D2E0
 * Callers:
 *     ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x18004F640 (--_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180009B10 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18004F408 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(
        CSecondaryWindowRepresentation *this,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // esi
  char *v5; // rdi
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  unsigned int i; // edi
  __int64 v13; // rax
  __int64 v14; // rcx
  CWindowData *v15; // rcx
  CBaseObject *v16; // rcx
  CBaseObject *v17; // rcx
  CSecondaryWindowRepresentation *v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v20[16]; // [rsp+40h] [rbp-48h] BYREF
  CSecondaryWindowRepresentation **v21; // [rsp+50h] [rbp-38h]
  int v22; // [rsp+58h] [rbp-30h]
  int v23; // [rsp+5Ch] [rbp-2Ch]
  __int64 *v24; // [rsp+60h] [rbp-28h]
  int v25; // [rsp+68h] [rbp-20h]
  int v26; // [rsp+6Ch] [rbp-1Ch]

  *(_QWORD *)this = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  v4 = 0;
  v5 = (char *)this + 184;
  do
  {
    v6 = (CBaseObject *)*((_QWORD *)v5 - 1);
    if ( v6 )
    {
      CBaseObject::Release(v6);
      *((_QWORD *)v5 - 1) = 0LL;
    }
    if ( *(_QWORD *)v5 )
    {
      CBaseObject::Release(*(CBaseObject **)v5);
      *(_QWORD *)v5 = 0LL;
    }
    v7 = (CBaseObject *)*((_QWORD *)v5 + 1);
    if ( v7 )
    {
      CBaseObject::Release(v7);
      *((_QWORD *)v5 + 1) = 0LL;
    }
    v5[16] = 0;
    ++v4;
    v5 += 32;
  }
  while ( v4 < 5 );
  v8 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v8 )
    CBaseObject::Release(v8);
  v9 = (CBaseObject *)*((_QWORD *)this + 51);
  if ( v9 )
    CBaseObject::Release(v9);
  v10 = (CBaseObject *)*((_QWORD *)this + 47);
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = (CBaseObject *)*((_QWORD *)this + 48);
  if ( v11 )
    CBaseObject::Release(v11);
  for ( i = *((_DWORD *)this + 38); i; CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, i) )
    --i;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v13 = *((_QWORD *)this + 4);
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 40);
    else
      v14 = 0LL;
    v19 = v14;
    v18 = this;
    v21 = &v18;
    v22 = 8;
    v23 = 0;
    v24 = &v19;
    v25 = 8;
    v26 = 0;
    McGenEventWrite_EtwEventWriteTransfer(
      Microsoft_Windows_Dwm_Udwm_Provider_Context,
      (__int64)&RemoveSecondaryWindowRepresentation_Destroy,
      a3,
      3LL,
      (__int64)v20);
  }
  v15 = (CWindowData *)*((_QWORD *)this + 4);
  if ( v15 && *((_BYTE *)this + 160) )
    CWindowData::RemoveSecondaryWindowRepresentation(v15, this);
  v16 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v16 )
    CBaseObject::Release(v16);
  v17 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v17 )
    CBaseObject::Release(v17);
  if ( *((_QWORD *)this + 16) != *((_QWORD *)this + 17) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 16) = 0LL;
  }
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
