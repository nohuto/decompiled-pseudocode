/*
 * XREFs of ?CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1401D2C98
 * Callers:
 *     ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1401D37A0 (-DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x140053C88 (--2-$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??0DXGDOORBELL@@IEAA@PEAVDXGHWQUEUE@@@Z @ 0x140073048 (--0DXGDOORBELL@@IEAA@PEAVDXGHWQUEUE@@@Z.c)
 *     ?DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ @ 0x1401D2F90 (-DestroyDoorbell@DXGHWQUEUE@@QEAAXXZ.c)
 *     ?Initialize@DXGDOORBELL@@IEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1401D4BC8 (-Initialize@DXGDOORBELL@@IEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::CreateDoorbell(
        DXGHWQUEUE *this,
        struct _D3DKMT_CREATE_DOORBELL *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v7; // edi
  DXGDOORBELL *v8; // rax
  DXGDOORBELL *v9; // rax
  __int64 v11; // [rsp+28h] [rbp-30h]

  v4 = *((_QWORD *)this + 18);
  if ( v4 )
  {
    v7 = -1073741811;
    WdLogSingleEntry3(2LL, this, v4, -1073741811LL);
    v11 = *((_QWORD *)this + 18);
    WdLogGlobalForLineNumber = 3415;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Can not create doorbell on DXGHWQueue 0x%I64x as DXGDOORBELL 0x%I64x already exists, returning 0x%I64x",
      (__int64)this,
      v11,
      -1073741811LL,
      0LL,
      0LL);
    return v7;
  }
  v8 = (DXGDOORBELL *)DXGQUOTAALLOCATOR<64,1265072196>::operator new(160LL, (__int64)a2, 0LL, a4);
  if ( !v8 )
  {
    *((_QWORD *)this + 18) = 0LL;
    goto LABEL_8;
  }
  v9 = DXGDOORBELL::DXGDOORBELL(v8, this);
  *((_QWORD *)this + 18) = v9;
  if ( !v9 )
  {
LABEL_8:
    v7 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 3426;
    return v7;
  }
  v7 = DXGDOORBELL::Initialize(v9, a2);
  if ( (v7 & 0x80000000) != 0 )
    DXGHWQUEUE::DestroyDoorbell(this);
  return v7;
}
