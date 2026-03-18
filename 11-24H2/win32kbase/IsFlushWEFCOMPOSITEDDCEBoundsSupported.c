/*
 * XREFs of IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x14012101C
 * Callers:
 *     ReleaseCacheDC @ 0x1400225A0 (ReleaseCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IsFlushWEFCOMPOSITEDDCEBoundsSupported(__int64 a1, __int64 a2)
{
  __int64 (*v2)(void); // rax

  v2 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 2640LL);
  if ( v2 )
    return v2();
  else
    return 3221225659LL;
}
