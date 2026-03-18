/*
 * XREFs of DpiFdoIsDevicePresent @ 0x14023D6C0
 * Callers:
 *     DpiFdoHandleSurpriseRemoval @ 0x14023BA80 (DpiFdoHandleSurpriseRemoval.c)
 *     DpiFdoStopAdapter @ 0x1402412FC (DpiFdoStopAdapter.c)
 *     DpiFdoHandleDevicePower @ 0x1403C4AF0 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

__int64 __fastcall DpiFdoIsDevicePresent(__int64 a1, char *a2)
{
  unsigned int v4; // ebx
  int v5; // eax
  char v6; // di
  _WORD *v7; // rcx
  _WORD v9[32]; // [rsp+30h] [rbp-68h] BYREF

  memset(v9, 0, sizeof(v9));
  v4 = 0;
  *a2 = 0;
  v5 = *(_DWORD *)(a1 + 1120);
  v6 = 1;
  if ( v5 != 1 )
  {
    if ( (unsigned int)(v5 - 2) > 3 && !*(_BYTE *)(a1 + 1158) )
      return (unsigned int)-1073741637;
    goto LABEL_7;
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _WORD *, _QWORD, int))(a1 + 616))(
         *(_QWORD *)(a1 + 568),
         0LL,
         v9,
         0LL,
         64) == 64 )
  {
    v7 = *(_WORD **)(a1 + 1112);
    if ( v9[0] != *v7 || v9[1] != v7[1] )
      v6 = 0;
LABEL_7:
    *a2 = v6;
    return v4;
  }
  v4 = -1073741823;
  WdLogSingleEntry2(2LL, *(_QWORD *)(a1 + 616), -1073741823LL);
  WdLogGlobalForLineNumber = 11472;
  return v4;
}
