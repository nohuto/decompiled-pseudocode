/*
 * XREFs of ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1404008A4
 * Callers:
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1401E1A14 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1401E1E34 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1401DFD24 (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1401E1344 (-Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::ReleaseSessionReference(OUTPUTDUPL_CONTEXT *this, struct DXGSESSIONDATA *a2)
{
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v2; // rbx
  __int64 v4; // rax
  const wchar_t *v5; // r9
  OUTPUTDUPL_SESSION_MGR *v6; // rsi
  __int64 v7; // rdx
  __int128 v8; // [rsp+50h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp-18h]
  char v10; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( !a2 )
  {
    WdLogSingleEntry0(2LL);
    v4 = 2538LL;
    v5 = L"DXGSESSIONDATA is NULL";
LABEL_5:
    WdLogGlobalForLineNumber = v4;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v5, v4, 0LL, 0LL, 0LL, 0LL);
    return;
  }
  v6 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)a2 + 1);
  if ( !v6 )
  {
    WdLogSingleEntry0(2LL);
    v4 = 2545LL;
    v5 = L"OUTPUTDUPL_SESSION_MGR is NULL";
    goto LABEL_5;
  }
  v8 = 0LL;
  v9 = 0LL;
  if ( *((_DWORD *)this + 81) )
  {
    if ( !*((_DWORD *)this + 82) )
    {
      v2 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)&v8;
      v7 = **(_QWORD **)&OUTPUTDUPL_MGR::GetAdapterLuid(*((ADAPTER_DISPLAY ***)this + 37), (__int64)&v10);
      LODWORD(v9) = *((_DWORD *)this + 4);
      *(_QWORD *)&v8 = *((_QWORD *)this + 4);
      *((_QWORD *)&v8 + 1) = v7;
    }
  }
  OUTPUTDUPL_SESSION_MGR::Release(v6, *((struct _EPROCESS **)this + 3), v2);
}
