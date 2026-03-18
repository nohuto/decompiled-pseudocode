/*
 * XREFs of ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x14040D114
 * Callers:
 *     DxgkEscape @ 0x14041D630 (DxgkEscape.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x140188B3C (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x14024F2D8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x140253CC8 (-MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA-AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z.c)
 */

__int64 __fastcall DmmEscape(struct DXGADAPTER *const this, struct _D3DKMT_DMM_ESCAPE_INTERNAL *const a2)
{
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 result; // rax
  VIDPN_MGR *v7; // rbp
  int v8; // ecx
  _DWORD *v9; // rbx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  bool v13; // zf
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // edi
  char *v18; // r14
  __int128 v19; // xmm3
  __int64 v20; // xmm0_8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int CurrentProcessSessionId; // eax
  unsigned int v26; // esi
  int v27; // eax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 13347;
  }
  v5 = *((_QWORD *)this + 390);
  if ( !v5 )
  {
    WdLogSingleEntry1(2LL, this);
    WdLogGlobalForLineNumber = 13352;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v7 = *(VIDPN_MGR **)(v5 + 104);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, this);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 13367;
    return result;
  }
  v8 = *(_DWORD *)a2;
  v9 = 0LL;
  if ( *(int *)a2 > 7 )
  {
    v15 = v8 - 8;
    if ( !v15 )
      goto LABEL_26;
    v16 = v15 - 1;
    if ( !v16 )
      goto LABEL_26;
    v14 = v16 - 3;
    v13 = v14 == 0;
  }
  else
  {
    if ( v8 == 7 )
      goto LABEL_26;
    v10 = v8 - 1;
    if ( !v10 )
      goto LABEL_26;
    v11 = v10 - 1;
    if ( !v11 )
      goto LABEL_26;
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_26;
    v14 = v12 - 1;
    v13 = v14 == 0;
  }
  if ( v13 || (unsigned int)(v14 - 1) < 2 )
  {
LABEL_26:
    v18 = (char *)a2 + 24;
    goto LABEL_27;
  }
  v9 = (_DWORD *)operator new(0x2CuLL, 0x4E506456u, 256LL, v4);
  if ( !v9 )
  {
    WdLogSingleEntry1(6LL, 44LL);
    WdLogGlobalForLineNumber = 13404;
    v17 = -1073741801;
    goto LABEL_25;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(0LL);
  if ( *(_DWORD *)a2 == 10 )
  {
    v18 = (char *)a2 + 24;
    *v9 = *((_DWORD *)a2 + 6);
  }
  else
  {
    if ( *(_DWORD *)a2 != 11 )
    {
      WdLogSingleEntry1(2LL, *(int *)a2);
      WdLogGlobalForLineNumber = 13431;
      v17 = -1073741811;
LABEL_25:
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
      return v17;
    }
    v18 = (char *)a2 + 24;
    *v9 = *((_DWORD *)a2 + 6);
    v19 = *(_OWORD *)((char *)a2 + 44);
    v20 = *(_QWORD *)((char *)a2 + 60);
    *(_OWORD *)(v9 + 1) = *(_OWORD *)((char *)a2 + 28);
    *(_OWORD *)(v9 + 5) = v19;
    *(_QWORD *)(v9 + 9) = v20;
  }
LABEL_27:
  if ( DXGADAPTER::IsDiagnosticAllowed(this) )
  {
    v27 = VIDPN_MGR::MapEscapeCodeToDiagInfoType(*(_DWORD *)a2);
    v28 = VIDPN_MGR::AcquireDiagInfo(v7, v18, *((_QWORD *)a2 + 1), v27, v9, (size_t *)a2 + 2);
    v26 = v28;
    if ( v28 == -2147483643 )
    {
      WdLogSingleEntry2(3LL, *((_QWORD *)a2 + 1), *(int *)a2);
      WdLogGlobalForLineNumber = 13460;
      v26 = 1075707914;
    }
    else if ( v28 >= 0 )
    {
      v33 = WdLogNewEntry5_WdTrace(v30, v29, v31, v32);
      v26 = 0;
      *(_QWORD *)(v33 + 24) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(v33 + 32) = *(int *)a2;
      WdLogGlobalForLineNumber = 13471;
    }
  }
  else
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v22, v21, v23, v24);
    WdLogSingleEntry2(3LL, *(int *)a2, CurrentProcessSessionId);
    WdLogGlobalForLineNumber = 13444;
    v26 = -1073741790;
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v9);
  return v26;
}
