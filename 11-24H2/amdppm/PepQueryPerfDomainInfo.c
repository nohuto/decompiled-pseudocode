/*
 * XREFs of PepQueryPerfDomainInfo @ 0x14003C560
 * Callers:
 *     RegisterXsdDomain @ 0x14003804C (RegisterXsdDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003B54 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x14000E310 (__security_check_cookie.c)
 *     ProcLibTracePepPerfDomain @ 0x140024664 (ProcLibTracePepPerfDomain.c)
 */

__int64 __fastcall PepQueryPerfDomainInfo(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  int v5; // edx
  unsigned int v6; // edi
  char v7; // r8
  char v8; // al
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_DWORD *)(a2 + 36);
  v3 = *(_QWORD *)(a1 + 1120);
  v10 = 0LL;
  LODWORD(v10) = v2;
  v6 = 0;
  if ( (int)PoFxProcessorNotification(v3, 42LL, &v10) < 0 )
    return v6;
  v7 = BYTE4(v10);
  if ( !BYTE4(v10) )
  {
    *(_DWORD *)(a2 + 40) = 252;
    goto LABEL_11;
  }
  if ( BYTE4(v10) == 1 )
  {
    *(_DWORD *)(a2 + 40) = 253;
    goto LABEL_11;
  }
  if ( BYTE4(v10) == 2 )
  {
    *(_DWORD *)(a2 + 40) = 254;
LABEL_11:
    v8 = BYTE5(v10);
    *(_WORD *)(a2 + 58) = WORD3(v10);
    *(_QWORD *)(a2 + 60) = *((_QWORD *)&v10 + 1);
    *(_BYTE *)(a2 + 56) = v7;
    *(_BYTE *)(a2 + 57) = v8;
    ProcLibTracePepPerfDomain((unsigned __int8 *)a2, 0);
    return v6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      2,
      33,
      (__int64)&WPP_a3d5211b01a83c7b779e65f1f4845e36_Traceguids,
      BYTE4(v10));
  }
  return (unsigned int)-1073741811;
}
