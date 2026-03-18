/*
 * XREFs of ?bOffset@RGNOBJ@@QEAAHAEBVRustAutoHotpatchLockSH@@PEBU_POINTL@@@Z @ 0x1401C14F0
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x140174490 (-bCompute@DC@@QEAAHXZ.c)
 * Callees:
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x140029120 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     EngSetLastError @ 0x14002DB90 (EngSetLastError.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x140047EB8 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140069040 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?LongLongToLong@@YAJ_JPEAJ@Z @ 0x1400BC4F4 (-LongLongToLong@@YAJ_JPEAJ@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bOffset(RGNOBJ *this, const struct RustAutoHotpatchLockSH *a2, const struct _POINTL *a3)
{
  __int64 v4; // rdi
  const struct REGION_CORE *v5; // rsi
  unsigned int v6; // ebx
  _DWORD *v8; // r9
  __int64 x; // r14
  __int64 y; // rdi
  LONG v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r9
  int v14; // ebx
  struct SCAN *i; // r8
  __int64 v16; // rcx
  _DWORD *v17; // rdx
  char *v18; // r8
  struct REGION_CORE *v19; // rdx
  tagRECT v20; // [rsp+20h] [rbp-10h] BYREF

  if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
  {
    v4 = *(_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument1;
    v5 = (const struct REGION_CORE *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
    v6 = (*(__int64 (__fastcall **)(const struct REGION_CORE *, const struct _POINTL *))(*(_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument1
                                                                                       + 136LL))(
           v5,
           a3);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan((unsigned int (__fastcall **)(const struct REGION_CORE *))(v4 + 48), v5);
    return v6;
  }
  v8 = *(_DWORD **)this;
  x = a3->x;
  y = a3->y;
  if ( *(_DWORD *)(*(_QWORD *)this + 48LL) == 1 )
    return 1LL;
  v11 = v8[13];
  v20.top = v8[14];
  v20.right = v8[15];
  v20.bottom = v8[16];
  v20.left = v11;
  if ( IsRectEmptyInl(&v20) )
    return 1LL;
  if ( (int)LongLongToLong(x + v12, &v20.left) >= 0
    && (int)LongLongToLong(y + v20.bottom, &v20.bottom) >= 0
    && (int)LongLongToLong(x + v20.right, &v20.right) >= 0
    && (int)LongLongToLong(y + v20.top, &v20.top) >= 0
    && (((v20.left & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((v20.bottom & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((v20.right & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((v20.top & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
  {
    *(tagRECT *)(v13 + 52) = v20;
    v14 = *(_DWORD *)(*(_QWORD *)this + 48LL);
    for ( i = REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)this + 24LL), (struct REGION_CORE *)0x8000000);
          v14;
          i = (struct SCAN *)((char *)i + (unsigned int)(4 * *(_DWORD *)i + 16)) )
    {
      *((_DWORD *)i + 1) += y;
      --v14;
      *((_DWORD *)i + 2) += y;
      v16 = *(unsigned int *)i;
      if ( (_DWORD)v16 )
      {
        v17 = (_DWORD *)((char *)i + 4 * v16 + 12);
        do
        {
          *--v17 += x;
          LODWORD(v16) = v16 - 1;
        }
        while ( (_DWORD)v16 );
      }
    }
    v18 = (char *)i - 4;
    v19 = (struct REGION_CORE *)(unsigned int)(4 * *(_DWORD *)v18 + 16);
    *(_DWORD *)(v18 - (char *)v19 + 12) = 0x7FFFFFFF;
    *((_DWORD *)REGION_CORE::get_pScan((REGION_CORE *)(*(_QWORD *)this + 24LL), v19) + 1) = 0x80000000;
    return 1LL;
  }
  EngSetLastError(0x216u);
  return 0LL;
}
