/*
 * XREFs of InitializeGreCSRSS @ 0x1C00A9010
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C013FA90 (Win32kBaseUserInitialize.c)
 * Callees:
 *     DrvNotifySessionStateChange @ 0x1C00A92D0 (DrvNotifySessionStateChange.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C00A9368 (-GetLanguageID@@YAGXZ.c)
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C00A94C0 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 InitializeGreCSRSS()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  USHORT *v3; // rbp
  USHORT *v4; // rdi
  int v5; // edx
  _DWORD *v6; // rax
  __int64 v7; // rcx
  USHORT v8; // cx
  BOOL v9; // eax
  __int64 v10; // rsi
  _DWORD *v11; // r14

  v0 = 0;
  if ( (int)DrvNotifySessionStateChange(0LL) < 0 || !qword_1C0296148 || (unsigned int)qword_1C0296148() )
    return 0LL;
  v10 = *(_QWORD *)(SGDGetSessionState(v1) + 24);
  *(_WORD *)(v10 + 152) = GetLanguageID();
  v11 = qword_1C0294948 ? (_DWORD *)qword_1C0294948() : 0LL;
  v3 = qword_1C0294928 ? (USHORT *)qword_1C0294928() : 0LL;
  v4 = qword_1C0294938 ? (USHORT *)qword_1C0294938() : 0LL;
  RtlGetDefaultCodePage(v4, v3);
  v5 = *v4;
  v6 = &codepages;
  *(_BYTE *)(v10 + 168) = 0;
  *(_DWORD *)(v10 + 8080) = 1;
  v7 = 0LL;
  while ( *v6 != v5 )
  {
    v7 = (unsigned int)(v7 + 1);
    ++v6;
    if ( (unsigned int)v7 >= 0x11 )
      goto LABEL_12;
  }
  *(_DWORD *)(v10 + 8080) = *((_DWORD *)&fs + v7);
  *(_BYTE *)(v10 + 168) = *((_BYTE *)&charsets + 4 * v7);
LABEL_12:
  if ( *v4 == 936 || (unsigned __int16)(*v4 - 949) <= 1u )
    *v11 = 3;
  v8 = *v4;
  v9 = *v4 == 932 || v8 == 949 || v8 == 950 || v8 == 936;
  *(_DWORD *)(v10 + 156) = v9;
  if ( qword_1C0294950 && (int)qword_1C0294950() >= 0 && qword_1C0294958 )
    qword_1C0294958();
  vCheckIsSetupRunning();
  if ( qword_1C0294988 && (int)qword_1C0294988() >= 0 && qword_1C0294990 )
    qword_1C0294990();
  if ( !qword_1C0294A60
    || (int)qword_1C0294A60() < 0
    || qword_1C0294998 && (int)qword_1C0294998() >= 0 && (!qword_1C02949A0 || !(unsigned int)qword_1C02949A0())
    || qword_1C02949A8 && (int)qword_1C02949A8() >= 0 && (!qword_1C02949B0 || !(unsigned int)qword_1C02949B0()) )
  {
    return 0LL;
  }
  if ( qword_1C02949B8 && (int)qword_1C02949B8() >= 0 && qword_1C02949C0 )
    qword_1C02949C0();
  if ( qword_1C02949C8 && (int)qword_1C02949C8() >= 0 && qword_1C02949D0 )
    qword_1C02949D0();
  if ( qword_1C02949D8 && (int)qword_1C02949D8() >= 0 && qword_1C02949F0 )
    qword_1C02949F0();
  if ( qword_1C02949E0 && (int)qword_1C02949E0() >= 0 )
  {
    if ( qword_1C02949E8 )
    {
      LOBYTE(v0) = (unsigned int)qword_1C02949E8() != 0;
      return v0;
    }
    return 0LL;
  }
  return 1LL;
}
