/*
 * XREFs of ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1401E1D04
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1403EA850 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x140300638 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall DDAMetaData::Initialize(DDAMetaData *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // r9
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx

  if ( *((_DWORD *)this + 5) < 0x10u || *((_DWORD *)this + 10) < 4u )
    return 0LL;
  v5 = (_QWORD *)operator new(0x10uLL, 0x674D444Fu, 256LL, a4);
  v7 = v5;
  if ( v5 )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v5, 0x124u, 0);
  }
  else
  {
    v7 = 0LL;
  }
  *((_QWORD *)this + 4) = v7;
  if ( !v7 || !*v7 )
    return 0LL;
  v8 = (_QWORD *)operator new(0x10uLL, 0x674D444Fu, 256LL, v6);
  v9 = v8;
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v8, 0x60u, 0);
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 6) = v9;
  if ( !v9 || !*v9 )
    return 0LL;
  if ( !*((_QWORD *)this + 7) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 262;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Could not get Win32k functions!!",
      262LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
  return 1LL;
}
