/*
 * XREFs of ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x180029D68
 * Callers:
 *     ?Initialize@CDWMDXGIAdapter@@AEAAJXZ @ 0x1800297F0 (-Initialize@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x18001FEC8 (-AddMultipleAndSet@-$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z.c)
 *     ?UpdateDesc@DXGIOutputInfo@@QEAAJXZ @ 0x180029EE4 (-UpdateDesc@DXGIOutputInfo@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIAdapter::EnumerateDWMOutputs(CDWMDXGIAdapter *this)
{
  __int64 v2; // rcx
  unsigned int v3; // esi
  int i; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rbx
  int v7; // eax
  int updated; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v14[19]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  v12 = 0LL;
  v13 = 0LL;
  for ( i = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v2 + 40LL))(
              v2,
              0LL,
              0xFFFFFFFFLL,
              &v12);
        ;
        i = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v10 + 40LL))(
              v10,
              v3,
              0xFFFFFFFFLL,
              &v12) )
  {
    v5 = i;
    if ( i < 0 )
      break;
    v6 = v12;
    *(_QWORD *)&v14[0] = v12;
    memset_0((char *)v14 + 8, 0, 0x128uLL);
    v7 = (**v6)(v6, &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976, &v13);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x99u, 0LL);
      goto LABEL_9;
    }
    *((_QWORD *)&v14[0] + 1) = v13;
    updated = DXGIOutputInfo::UpdateDesc((DXGIOutputInfo *)v14);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x9Cu, 0LL);
      goto LABEL_9;
    }
    v9 = DynArray<DXGIOutputInfo,0>::AddMultipleAndSet((__int64)this + 352, v14);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x9Eu, 0LL);
      goto LABEL_9;
    }
    v10 = *((_QWORD *)this + 4);
    ++v3;
    v12 = 0LL;
    v13 = 0LL;
  }
  if ( i == -2005270526 )
    v5 = 0;
LABEL_9:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v12 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v12)[2])(v12);
  return v5;
}
