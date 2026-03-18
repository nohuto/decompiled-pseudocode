/*
 * XREFs of ?QueryLastCompletedPresentId@DXGDEVICE@@QEAAJIPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x1401872E8
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1402AB150 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?QueryPresentStats@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS@@@Z @ 0x140282A44 (-QueryPresentStats@BLTQUEUE@@QEAAJPEAU_D3DKMT_PRESENT_STATS@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::QueryLastCompletedPresentId(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_PRESENT_STATS *a3)
{
  __int64 v3; // rax
  struct DXGADAPTER *v5; // rbx
  __int64 v6; // rsi
  int v8; // edi
  __int64 v9; // rdx
  int PresentStats; // eax
  _BYTE v11[144]; // [rsp+20h] [rbp-B8h] BYREF

  v3 = *((_QWORD *)this + 2);
  v5 = (struct DXGADAPTER *)*((_QWORD *)this + 237);
  v6 = a2;
  if ( v5 == *(struct DXGADAPTER **)(v3 + 16) )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v3 + 736) + 8LL) + 488LL))(
             *((_QWORD *)this + 100),
             a2);
  if ( !v5 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, v5, 0LL);
  v8 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11, 0LL);
  if ( v8 >= 0 )
  {
    v9 = *(_QWORD *)(*((_QWORD *)v5 + 390) + 464LL);
    if ( v9 )
      PresentStats = BLTQUEUE::QueryPresentStats((BLTQUEUE *)(*(_QWORD *)(v9 + 8) + 3040 * v6), a3);
    else
      PresentStats = -1073741811;
    v8 = PresentStats;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
  return (unsigned int)v8;
}
