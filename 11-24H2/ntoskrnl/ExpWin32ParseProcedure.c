/*
 * XREFs of ExpWin32ParseProcedure @ 0x1408F4230
 * Callers:
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 * Callees:
 *     PsSessionGetWin32Callouts @ 0x140463D20 (PsSessionGetWin32Callouts.c)
 *     PspUpdateCalloutParameters @ 0x1404E64C0 (PspUpdateCalloutParameters.c)
 *     ExCallCallBack @ 0x1408F47CC (ExCallCallBack.c)
 */

__int64 __fastcall ExpWin32ParseProcedure(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _RTL_RUN_ONCE *Win32Callouts; // rax
  unsigned int v11; // r10d
  __int128 v13; // [rsp+30h] [rbp-39h] BYREF
  _DWORD *v14; // [rsp+40h] [rbp-29h]
  __int64 v15; // [rsp+48h] [rbp-21h]
  __int64 v16; // [rsp+50h] [rbp-19h]
  char v17; // [rsp+58h] [rbp-11h]
  __int16 v18; // [rsp+59h] [rbp-10h]
  char v19; // [rsp+5Bh] [rbp-Eh]
  int v20; // [rsp+5Ch] [rbp-Dh]
  __int64 v21; // [rsp+60h] [rbp-9h]
  __int64 v22; // [rsp+68h] [rbp-1h]
  __int64 v23; // [rsp+70h] [rbp+7h]
  __int64 v24; // [rsp+78h] [rbp+Fh]
  __int64 v25; // [rsp+80h] [rbp+17h]
  int v26; // [rsp+B8h] [rbp+4Fh] BYREF

  v26 = *a1;
  v18 = 0;
  v19 = 0;
  v20 = a5;
  v21 = a6;
  v22 = a7;
  v23 = a8;
  v24 = a9;
  v25 = a10;
  v14 = a1;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v13 = 0LL;
  if ( !(unsigned int)PspUpdateCalloutParameters(15, (__int64)&v13, 1, (__int64)&v26) )
    return 3221225485LL;
  Win32Callouts = PsSessionGetWin32Callouts();
  return ExCallCallBack(Win32Callouts, v11, &v13);
}
