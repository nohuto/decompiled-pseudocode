/*
 * XREFs of ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x140405F9C
 * Callers:
 *     DxgkEscape @ 0x140419AB0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B8F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x14018AD84 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140256108 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x14025AB00 (-MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA-AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z.c)
 */

__int64 __fastcall DmmEscape(struct DXGADAPTER *const this, struct _D3DKMT_DMM_ESCAPE_INTERNAL *const a2)
{
  __int64 v4; // rax
  __int64 result; // rax
  VIDPN_MGR *v6; // rbp
  int v7; // ecx
  _DWORD *v8; // rbx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  bool v12; // zf
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  unsigned int v16; // edi
  char *v17; // r14
  __int128 v18; // xmm3
  __int64 v19; // xmm0_8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v25; // esi
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13359;
  }
  v4 = *((_QWORD *)this + 390);
  if ( !v4 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 13364;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v6 = *(VIDPN_MGR **)(v4 + 104);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, this);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 13379;
    return result;
  }
  v7 = *(_DWORD *)a2;
  v8 = 0LL;
  if ( *(int *)a2 > 7 )
  {
    v14 = v7 - 8;
    if ( !v14 )
      goto LABEL_26;
    v15 = v14 - 1;
    if ( !v15 )
      goto LABEL_26;
    v13 = v15 - 3;
    v12 = v13 == 0;
  }
  else
  {
    if ( v7 == 7 )
      goto LABEL_26;
    v9 = v7 - 1;
    if ( !v9 )
      goto LABEL_26;
    v10 = v9 - 1;
    if ( !v10 )
      goto LABEL_26;
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_26;
    v13 = v11 - 1;
    v12 = v13 == 0;
  }
  if ( v12 || (unsigned int)(v13 - 1) < 2 )
  {
LABEL_26:
    v17 = (char *)a2 + 24;
    goto LABEL_27;
  }
  v8 = (_DWORD *)operator new(0x2CuLL, 0x4E506456u, 256LL);
  if ( !v8 )
  {
    WdLogSingleEntry1(6LL, 44LL);
    WdLogGlobalForLineNumber = 13416;
    v16 = -1073741801;
    goto LABEL_25;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
  if ( *(_DWORD *)a2 == 10 )
  {
    v17 = (char *)a2 + 24;
    *v8 = *((_DWORD *)a2 + 6);
  }
  else
  {
    if ( *(_DWORD *)a2 != 11 )
    {
      WdLogSingleEntry1(2LL, *(int *)a2);
      WdLogGlobalForLineNumber = 13443;
      v16 = -1073741811;
LABEL_25:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
      return v16;
    }
    v17 = (char *)a2 + 24;
    *v8 = *((_DWORD *)a2 + 6);
    v18 = *(_OWORD *)((char *)a2 + 44);
    v19 = *(_QWORD *)((char *)a2 + 60);
    *(_OWORD *)(v8 + 1) = *(_OWORD *)((char *)a2 + 28);
    *(_OWORD *)(v8 + 5) = v18;
    *(_QWORD *)(v8 + 9) = v19;
  }
LABEL_27:
  if ( DXGADAPTER::IsDiagnosticAllowed(this) )
  {
    v26 = VIDPN_MGR::MapEscapeCodeToDiagInfoType(*(_DWORD *)a2);
    v27 = VIDPN_MGR::AcquireDiagInfo(v6, v17, *((_QWORD *)a2 + 1), v26, v8, (size_t *)a2 + 2);
    v25 = v27;
    if ( v27 == -2147483643 )
    {
      WdLogSingleEntry2(3LL, *((_QWORD *)a2 + 1), *(int *)a2);
      WdLogGlobalForLineNumber = 13472;
      v25 = 1075707914;
    }
    else if ( v27 >= 0 )
    {
      v32 = WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
      v25 = 0;
      *(_QWORD *)(v32 + 24) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(v32 + 32) = *(int *)a2;
      WdLogGlobalForLineNumber = 13483;
    }
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v21, v20, v22, v23);
    WdLogSingleEntry2(3LL, *(int *)a2, CurrentProcessSessionId);
    WdLogGlobalForLineNumber = 13456;
    v25 = -1073741790;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
  return v25;
}
