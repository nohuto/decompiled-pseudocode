/*
 * XREFs of DpiFdoCreateSysMmAdapter @ 0x14023D2B4
 * Callers:
 *     DpiLdaPreStartChain @ 0x14008BED0 (DpiLdaPreStartChain.c)
 *     DpiFdoStartNonLdaAdapter @ 0x14024802C (DpiFdoStartNonLdaAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x14019BE04 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSIC.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x140244DA4 (DpiFdoQuerySysMmAdapterCaps.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140285BC0 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 */

__int64 __fastcall DpiFdoCreateSysMmAdapter(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // rcx
  __int64 (__fastcall *v6)(__int64, _QWORD *); // rax
  int v7; // eax
  unsigned int v8; // edi
  __int64 Elements; // rax
  __int64 v11; // rcx
  unsigned int v12; // eax
  __int64 v13; // rdi
  _QWORD *Pool2; // rdx
  unsigned int v15; // ebx
  PVOID v16; // rcx
  bool v17; // zf
  __int64 v18; // r8
  __int64 v19; // r9
  int Adapter; // eax
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+5Ch] [rbp-A4h]
  int v24; // [rsp+64h] [rbp-9Ch]
  PVOID v25; // [rsp+68h] [rbp-98h]
  _BYTE v26[32]; // [rsp+70h] [rbp-90h] BYREF
  int v27; // [rsp+90h] [rbp-70h]
  __int128 v28; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v29[4]; // [rsp+A8h] [rbp-58h] BYREF
  int v30; // [rsp+C8h] [rbp-38h]
  __int64 v31; // [rsp+CCh] [rbp-34h]
  int v32; // [rsp+D4h] [rbp-2Ch]
  PVOID P; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v34[32]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v35; // [rsp+100h] [rbp+0h]

  v2 = *(_QWORD *)(a2 + 40);
  v21 = 0x7FFFFFFFFFFFFFFFLL;
  v22 = *(_DWORD *)(a2 + 1120);
  v23 = 0LL;
  v24 = 0;
  P = 0LL;
  v35 = 0;
  if ( *(_WORD *)(a2 + 480) || *(_BYTE *)(a2 + 1158) || *(_BYTE *)(a2 + 2718) || *(_BYTE *)(a2 + 2716) )
  {
    LODWORD(v23) = v23 | 1;
  }
  else if ( *(_DWORD *)(v2 + 28) >= 0xE002u && (int)DpiFdoQuerySysMmAdapterCaps(a2, v2, *(_QWORD *)(a2 + 48), &v21) >= 0 )
  {
    if ( *(_DWORD *)(v2 + 28) >= 0x10001u )
    {
      v5 = *(_QWORD *)(a2 + 48);
      v29[3] = &v28;
      v6 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v2 + 272);
      v29[0] = 36LL;
      v29[2] = 0LL;
      v31 = 0LL;
      v32 = 0;
      v28 = 0LL;
      v29[1] = 0LL;
      v30 = 16;
      v7 = v6(v5, v29);
      v8 = v7;
      if ( v7 >= 0 )
      {
        if ( (_DWORD)v28 )
        {
          Elements = PagedPoolZeroedArray<_DXGK_PHYSICAL_MEMORY_RANGE,2>::AllocateElements((__int64 *)&P, v28);
          if ( !Elements )
          {
            WdLogSingleEntry1(2LL, (unsigned int)v28);
            WdLogGlobalForLineNumber = 9424;
            if ( P != v34 && P )
              ExFreePoolWithTag(P, 0);
            return v8;
          }
          v11 = *(_QWORD *)(a2 + 48);
          *((_QWORD *)&v28 + 1) = Elements;
          if ( (*(int (__fastcall **)(__int64, _QWORD *))(v2 + 272))(v11, v29) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9431;
            DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 9431LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, v7);
        WdLogGlobalForLineNumber = 9414;
      }
    }
    if ( *(_DWORD *)(v2 + 28) <= 0xF003u )
      HIDWORD(v23) &= ~2u;
  }
  else
  {
    LODWORD(v23) = v23 | 2;
  }
  v12 = *(_DWORD *)(a2 + 504);
  v13 = 1LL;
  v25 = 0LL;
  v27 = 0;
  if ( v12 )
    v13 = v12;
  if ( (unsigned int)v13 <= 4 )
  {
    v25 = v26;
    memset(v26, 0, 8LL * (unsigned int)v13);
    Pool2 = v25;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v13 < 8 )
      goto LABEL_29;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v13, 1265072196LL);
    v25 = Pool2;
  }
  v27 = v13;
  if ( !Pool2 )
  {
LABEL_29:
    v15 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 9467;
    if ( v25 != v26 && v25 )
      ExFreePoolWithTag(v25, 0);
    v16 = P;
    v17 = P == v34;
LABEL_33:
    v27 = 0;
    v25 = 0LL;
    if ( !v17 )
    {
      if ( v16 )
        ExFreePoolWithTag(v16, 0);
    }
    return v15;
  }
  if ( *(_DWORD *)(a2 + 504) )
  {
    v18 = 0LL;
    v19 = (unsigned int)v13;
    do
    {
      Pool2[v18] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 * 8 + *(_QWORD *)(a2 + 2832)) + 64LL) + 152LL);
      ++v18;
      --v19;
    }
    while ( v19 );
  }
  else
  {
    *Pool2 = *(_QWORD *)(a2 + 152);
  }
  Adapter = SysMmCreateAdapter(
              a1,
              (struct _DEVICE_OBJECT *const *)Pool2,
              v13,
              (const struct _DXGK_PHYSICAL_MEMORY_RANGE *)P,
              v35,
              *(_DWORD *)(v2 + 28),
              (const struct SYSMM_ADAPTER_CREATE_PARAMS *)&v21,
              (struct SYSMM_ADAPTER **)(a2 + 5824));
  v15 = Adapter;
  if ( Adapter < 0 )
  {
    WdLogSingleEntry1(2LL, Adapter);
    WdLogGlobalForLineNumber = 9510;
    if ( v25 != v26 && v25 )
      ExFreePoolWithTag(v25, 0);
    v16 = P;
    v17 = P == v34;
    goto LABEL_33;
  }
  if ( v25 != v26 && v25 )
    ExFreePoolWithTag(v25, 0);
  v25 = 0LL;
  v27 = 0;
  if ( P != v34 && P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
