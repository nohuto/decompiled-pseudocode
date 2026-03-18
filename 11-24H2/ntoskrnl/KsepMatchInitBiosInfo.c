/*
 * XREFs of KsepMatchInitBiosInfo @ 0x140C2BB00
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140C2BE0C (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepDebugPrint @ 0x1402CA2D8 (KsepDebugPrint.c)
 *     KsepLogInfo @ 0x14048E6C8 (KsepLogInfo.c)
 *     __report_rangecheckfailure @ 0x1404F51BC (__report_rangecheckfailure.c)
 *     wcstoul @ 0x1405007D0 (wcstoul.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     KsepRegistryQueryMULTISZ @ 0x140740C7C (KsepRegistryQueryMULTISZ.c)
 *     KsepRegistryQuerySZ @ 0x140740CAC (KsepRegistryQuerySZ.c)
 *     KsepRegistryCloseKey @ 0x14095AB50 (KsepRegistryCloseKey.c)
 *     KsepRegistryOpenKey @ 0x14095BE4C (KsepRegistryOpenKey.c)
 */

__int64 KsepMatchInitBiosInfo()
{
  int v0; // r14d
  int v1; // eax
  HANDLE v2; // rbx
  int MULTISZ; // esi
  unsigned int i; // ecx
  unsigned __int64 v5; // rax
  unsigned int v6; // edi
  unsigned int v7; // ebx
  unsigned int v8; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+38h] [rbp-28h] BYREF
  wchar_t v12[3]; // [rsp+40h] [rbp-20h] BYREF
  wchar_t v13[3]; // [rsp+46h] [rbp-1Ah] BYREF
  wchar_t Str[6]; // [rsp+4Ch] [rbp-14h] BYREF

  v11 = 0LL;
  KeyHandle = 0LL;
  xmmword_140E621F8 = 0LL;
  qword_140E62228 = 0LL;
  v0 = -1;
  xmmword_140E62208 = 0LL;
  xmmword_140E62218 = 0LL;
  v1 = KsepRegistryOpenKey((__int64)L"\\Registry\\Machine\\Hardware\\Description\\System", 0LL, &KeyHandle);
  v2 = KeyHandle;
  MULTISZ = v1;
  if ( v1 >= 0 )
  {
    MULTISZ = KsepRegistryQuerySZ(KeyHandle, L"SystemBiosDate", 1, v12, 0x16uLL, &v11);
    if ( MULTISZ >= 0 )
    {
      Str[4] = 0;
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 655816LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: BiosDate name [%ws] .\n", v12);
      KsepLogInfo(0LL, (__int64)"KSE: BiosDate name [%ws] .\n", v12);
      MULTISZ = KsepRegistryQueryMULTISZ(KeyHandle, L"SystemBiosVersion", (__int64)&unk_140E61DA0, 520LL, (__int64)&v11);
      word_140E61FA6 = 0;
      for ( i = 0; i < 0x104; ++i )
      {
        v5 = 2LL * i;
        if ( *(_WORD *)((char *)&unk_140E61DA0 + v5) == 32 )
        {
          if ( v5 >= 0x208 )
            _report_rangecheckfailure();
          *(_WORD *)((char *)&unk_140E61DA0 + v5) = 0;
          break;
        }
      }
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 655840LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: BiosVendor name [%ws] .\n", &unk_140E61DA0);
      KsepLogInfo(0LL, (__int64)"KSE: BiosVendor name [%ws] .\n", &unk_140E61DA0);
      v12[2] = 0;
      v13[2] = 0;
      v6 = wcstoul(Str, 0LL, 16);
      v7 = wcstoul(v12, 0LL, 16) << 8;
      v8 = v7 + wcstoul(v13, 0LL, 16);
      v2 = KeyHandle;
      v0 = v8 + ((v6 + (v6 < 0x80 ? 0x2000 : 6400)) << 16);
    }
  }
  if ( v2 )
    KsepRegistryCloseKey(v2);
  if ( MULTISZ < 0 )
  {
    DWORD2(xmmword_140E62218) = -1;
    *(_QWORD *)&xmmword_140E621F8 = 0LL;
  }
  else
  {
    *(_QWORD *)&xmmword_140E621F8 = &unk_140E61DA0;
    DWORD2(xmmword_140E62218) = v0;
  }
  return (unsigned int)MULTISZ;
}
