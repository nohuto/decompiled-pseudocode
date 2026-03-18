/*
 * XREFs of DpiFdoCreateSysMmAdapter @ 0x1402367B0
 * Callers:
 *     DpiLdaPreStartChain @ 0x14008AF6C (DpiLdaPreStartChain.c)
 *     DpiFdoStartNonLdaAdapter @ 0x140241228 (DpiFdoStartNonLdaAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSICAL_MEMORY_RANGE@@I@Z @ 0x140199914 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_PHYSICAL_MEMORY_RANGE@@$01@@QEAAPEAU_DXGK_PHYSIC.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x14023E0DC (DpiFdoQuerySysMmAdapterCaps.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x14027E850 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 */

__int64 __fastcall DpiFdoCreateSysMmAdapter(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64, _QWORD *); // rax
  int v9; // eax
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 Elements; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdi
  _QWORD *Pool2; // rdx
  unsigned int v18; // ebx
  PVOID v19; // rcx
  bool v20; // zf
  __int64 v21; // r8
  __int64 v22; // r9
  int Adapter; // eax
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+58h] [rbp-A8h]
  __int64 v26; // [rsp+5Ch] [rbp-A4h]
  int v27; // [rsp+64h] [rbp-9Ch]
  PVOID v28; // [rsp+68h] [rbp-98h]
  _BYTE v29[32]; // [rsp+70h] [rbp-90h] BYREF
  int v30; // [rsp+90h] [rbp-70h]
  __int128 v31; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v32[4]; // [rsp+A8h] [rbp-58h] BYREF
  int v33; // [rsp+C8h] [rbp-38h]
  __int64 v34; // [rsp+CCh] [rbp-34h]
  int v35; // [rsp+D4h] [rbp-2Ch]
  PVOID P; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v37[32]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v38; // [rsp+100h] [rbp+0h]

  v4 = *(_QWORD *)(a2 + 40);
  v24 = 0x7FFFFFFFFFFFFFFFLL;
  v25 = *(_DWORD *)(a2 + 1120);
  v26 = 0LL;
  v27 = 0;
  P = 0LL;
  v38 = 0;
  if ( *(_WORD *)(a2 + 480) || *(_BYTE *)(a2 + 1158) || *(_BYTE *)(a2 + 2718) || *(_BYTE *)(a2 + 2716) )
  {
    LODWORD(v26) = v26 | 1;
  }
  else if ( *(_DWORD *)(v4 + 28) >= 0xE002u && (int)DpiFdoQuerySysMmAdapterCaps(a2, v4, *(_QWORD *)(a2 + 48), &v24) >= 0 )
  {
    if ( *(_DWORD *)(v4 + 28) >= 0x10001u )
    {
      v7 = *(_QWORD *)(a2 + 48);
      v32[3] = &v31;
      v8 = *(__int64 (__fastcall **)(__int64, _QWORD *))(v4 + 272);
      v32[0] = 36LL;
      v32[2] = 0LL;
      v34 = 0LL;
      v35 = 0;
      v31 = 0LL;
      v32[1] = 0LL;
      v33 = 16;
      v9 = v8(v7, v32);
      v11 = v9;
      if ( v9 >= 0 )
      {
        if ( (_DWORD)v31 )
        {
          Elements = PagedPoolZeroedArray<_DXGK_PHYSICAL_MEMORY_RANGE,2>::AllocateElements((__int64 *)&P, v31, v10, a4);
          if ( !Elements )
          {
            WdLogSingleEntry1(2LL, (unsigned int)v31);
            WdLogGlobalForLineNumber = 9292;
            if ( P != v37 && P )
              ExFreePoolWithTag(P, 0);
            return v11;
          }
          v14 = *(_QWORD *)(a2 + 48);
          *((_QWORD *)&v31 + 1) = Elements;
          if ( (*(int (__fastcall **)(__int64, _QWORD *))(v4 + 272))(v14, v32) < 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 9299;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"NT_SUCCESS(Status)", 9299LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      else
      {
        WdLogSingleEntry1(3LL, v9);
        WdLogGlobalForLineNumber = 9282;
      }
    }
    if ( *(_DWORD *)(v4 + 28) <= 0xF003u )
      HIDWORD(v26) &= ~2u;
  }
  else
  {
    LODWORD(v26) = v26 | 2;
  }
  v15 = *(_DWORD *)(a2 + 504);
  v16 = 1LL;
  v28 = 0LL;
  v30 = 0;
  if ( v15 )
    v16 = v15;
  if ( (unsigned int)v16 <= 4 )
  {
    v28 = v29;
    memset(v29, 0, 8LL * (unsigned int)v16);
    Pool2 = v28;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v16 < 8 )
      goto LABEL_29;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v16, 1265072196LL, a4);
    v28 = Pool2;
  }
  v30 = v16;
  if ( !Pool2 )
  {
LABEL_29:
    v18 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 9335;
    if ( v28 != v29 && v28 )
      ExFreePoolWithTag(v28, 0);
    v19 = P;
    v20 = P == v37;
LABEL_33:
    v30 = 0;
    v28 = 0LL;
    if ( !v20 )
    {
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
    }
    return v18;
  }
  if ( *(_DWORD *)(a2 + 504) )
  {
    v21 = 0LL;
    v22 = (unsigned int)v16;
    do
    {
      Pool2[v21] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v21 * 8 + *(_QWORD *)(a2 + 2832)) + 64LL) + 152LL);
      ++v21;
      --v22;
    }
    while ( v22 );
  }
  else
  {
    *Pool2 = *(_QWORD *)(a2 + 152);
  }
  Adapter = SysMmCreateAdapter(
              a1,
              (struct _DEVICE_OBJECT *const *)Pool2,
              v16,
              (const struct _DXGK_PHYSICAL_MEMORY_RANGE *)P,
              v38,
              *(_DWORD *)(v4 + 28),
              (const struct SYSMM_ADAPTER_CREATE_PARAMS *)&v24,
              (struct SYSMM_ADAPTER **)(a2 + 5824));
  v18 = Adapter;
  if ( Adapter < 0 )
  {
    WdLogSingleEntry1(2LL, Adapter);
    WdLogGlobalForLineNumber = 9378;
    if ( v28 != v29 && v28 )
      ExFreePoolWithTag(v28, 0);
    v19 = P;
    v20 = P == v37;
    goto LABEL_33;
  }
  if ( v28 != v29 && v28 )
    ExFreePoolWithTag(v28, 0);
  v28 = 0LL;
  v30 = 0;
  if ( P != v37 && P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
