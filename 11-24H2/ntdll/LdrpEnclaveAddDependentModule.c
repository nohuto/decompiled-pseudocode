/*
 * XREFs of LdrpEnclaveAddDependentModule @ 0x180130F84
 * Callers:
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D4770 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D4828 (LdrpEnclaveAddForwarderModules.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180038910 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpPreprocessDllName @ 0x180070150 (LdrpPreprocessDllName.c)
 *     LdrpFindOrPrepareEnclaveModule @ 0x1800D3A60 (LdrpFindOrPrepareEnclaveModule.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpEnclaveAddDependentModule(__int64 *a1, const ANSI_STRING *a2)
{
  int appended; // ebx
  unsigned int v6; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v7; // [rsp+48h] [rbp-B8h] BYREF
  int v8; // [rsp+50h] [rbp-B0h] BYREF
  _WORD *v9; // [rsp+58h] [rbp-A8h]
  _WORD v10[128]; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING v11; // [rsp+160h] [rbp+60h] BYREF
  _WORD v12[128]; // [rsp+170h] [rbp+70h] BYREF

  memset_thunk_772440563353939046(&v11, 0, 0x110uLL);
  memset_thunk_772440563353939046(&v8, 0, 0x110uLL);
  v8 = 0x1000000;
  v9 = v10;
  *(_DWORD *)&v11.Length = 0x1000000;
  v11.Buffer = v12;
  v10[0] = 0;
  v12[0] = 0;
  appended = LdrpAppendAnsiStringToFilenameBuffer((unsigned __int16 *)&v8, a2);
  if ( appended >= 0 )
  {
    v6 = 0x800000;
    appended = LdrpPreprocessDllName((unsigned __int16 *)&v8, &v11, 0LL, (int *)&v6);
    if ( appended >= 0 )
      appended = LdrpFindOrPrepareEnclaveModule(a1[22], &v11, a1[2], v6, a1[7], &v7, a1[5]);
  }
  if ( v10 != v9 )
    RtlpSysVolFree(v9);
  v9 = v10;
  v8 = 0x1000000;
  v10[0] = 0;
  if ( v12 != v11.Buffer )
    RtlpSysVolFree(v11.Buffer);
  return (unsigned int)appended;
}
