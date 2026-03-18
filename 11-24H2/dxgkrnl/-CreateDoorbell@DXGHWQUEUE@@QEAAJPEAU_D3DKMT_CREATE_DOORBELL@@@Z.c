/*
 * XREFs of ?CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1401D7F48
 * Callers:
 *     ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1401D8A50 (-DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140053938 (--2-$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGDOORBELL@@IEAA@PEAVDXGHWQUEUE@@@Z @ 0x140073B3C (--0DXGDOORBELL@@IEAA@PEAVDXGHWQUEUE@@@Z.c)
 *     ?DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ @ 0x1401D8240 (-DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?Initialize@DXGDOORBELL@@IEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1401D9E74 (-Initialize@DXGDOORBELL@@IEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::CreateDoorbell(DXGHWQUEUE *this, struct _D3DKMT_CREATE_DOORBELL *a2)
{
  __int64 v2; // r8
  unsigned int v5; // edi
  DXGDOORBELL *v6; // rax
  DXGDOORBELL *v7; // rax
  __int64 v9; // [rsp+28h] [rbp-30h]

  v2 = *((_QWORD *)this + 18);
  if ( v2 )
  {
    v5 = -1073741811;
    WdLogSingleEntry3(2LL, this, v2, -1073741811LL);
    v9 = *((_QWORD *)this + 18);
    WdLogGlobalForLineNumber = 3415;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Can not create doorbell on DXGHWQueue 0x%I64x as DXGDOORBELL 0x%I64x already exists, returning 0x%I64x",
      (__int64)this,
      v9,
      -1073741811LL,
      0LL,
      0LL);
    return v5;
  }
  v6 = (DXGDOORBELL *)DXGQUOTAALLOCATOR<64,1265072196>::operator new(160LL);
  if ( !v6 )
  {
    *((_QWORD *)this + 18) = 0LL;
    goto LABEL_8;
  }
  v7 = DXGDOORBELL::DXGDOORBELL(v6, this);
  *((_QWORD *)this + 18) = v7;
  if ( !v7 )
  {
LABEL_8:
    v5 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 3426;
    return v5;
  }
  v5 = DXGDOORBELL::Initialize(v7, a2);
  if ( (v5 & 0x80000000) != 0 )
    DXGHWQUEUE::DestroyDoorbell(this);
  return v5;
}
