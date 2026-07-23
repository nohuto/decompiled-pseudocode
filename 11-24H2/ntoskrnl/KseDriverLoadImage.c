/*
 * XREFs of KseDriverLoadImage @ 0x14094187C
 * Callers:
 *     MmLoadSystemImageEx @ 0x1409B7B70 (MmLoadSystemImageEx.c)
 *     IopInitializeBuiltinDriver @ 0x140C68400 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     KsepLogInfo @ 0x140488AF8 (KsepLogInfo.c)
 *     KsepPoolFreePaged @ 0x1404A18F4 (KsepPoolFreePaged.c)
 *     KsepDebugPrint @ 0x1404CC7D8 (KsepDebugPrint.c)
 *     KsepEvntLogShimsApplied @ 0x1405C7DDC (KsepEvntLogShimsApplied.c)
 *     KsepApplyShimsToDriver @ 0x14073D2D4 (KsepApplyShimsToDriver.c)
 *     KsepGetShimsForDriver @ 0x140941A34 (KsepGetShimsForDriver.c)
 *     KsepStringDuplicateUnicode @ 0x140941D34 (KsepStringDuplicateUnicode.c)
 */

__int64 __fastcall KseDriverLoadImage(__int64 a1, _DWORD *a2)
{
  int ShimsForDriver; // ebx
  unsigned int v6; // r8d
  __int64 v7; // rdx
  __int128 v8; // [rsp+30h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-10h] BYREF
  void *v10; // [rsp+48h] [rbp-8h]
  unsigned int v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF

  v11 = 0;
  v12 = 0LL;
  v8 = 0uLL;
  v9 = 0LL;
  v10 = 0LL;
  *a2 = 0;
  if ( !a1 || dword_140E66C14 != 2 || (KseEngine & 1) != 0 )
    goto LABEL_3;
  ShimsForDriver = KsepStringDuplicateUnicode(&v8, a1 + 88);
  if ( ShimsForDriver >= 0 )
  {
    ShimsForDriver = KsepStringDuplicateUnicode(&v9, a1 + 72);
    if ( ShimsForDriver >= 0 )
    {
      ShimsForDriver = KsepGetShimsForDriver(
                         (unsigned int)&v8,
                         (unsigned int)&v9,
                         *(_QWORD *)(a1 + 48),
                         *(_DWORD *)(a1 + 64),
                         (__int64)&v12,
                         (__int64)&v11);
      if ( ShimsForDriver >= 0 )
      {
        ShimsForDriver = KsepApplyShimsToDriver(a1, (__int64)&v8, v12, v11);
        if ( ShimsForDriver >= 0 )
        {
          v6 = v11;
          v7 = v12;
          *a2 = 1;
          KsepEvntLogShimsApplied((unsigned __int16 *)&v8, v7, v6);
        }
      }
    }
  }
  if ( !ShimsForDriver )
  {
    dword_140E66C18 |= 0x800u;
    qword_140E66C68 = *(_QWORD *)(a1 + 48);
    goto LABEL_10;
  }
  if ( ShimsForDriver >= 0 )
  {
LABEL_10:
    KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 458948LL;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(4LL, (int)"KSE: Applied %d shim(s) to [%ws].\n", v11, *((_QWORD *)&v8 + 1));
    KsepLogInfo(4LL, (__int64)"KSE: Applied %d shim(s) to [%ws].\n", v11, *((_QWORD *)&v8 + 1));
    goto LABEL_13;
  }
  if ( ShimsForDriver != -1073740948 )
  {
LABEL_3:
    ShimsForDriver = 0;
    goto LABEL_13;
  }
  KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 458939LL;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(4LL, (int)"KSE: driver blocked from loading [%ws].\n", *((_QWORD *)&v8 + 1));
  KsepLogInfo(4LL, (__int64)"KSE: driver blocked from loading [%ws].\n", *((_QWORD *)&v8 + 1));
LABEL_13:
  if ( *((_QWORD *)&v8 + 1) )
  {
    KsepPoolFreePaged(*((void **)&v8 + 1));
    v8 = 0LL;
  }
  if ( v10 )
    KsepPoolFreePaged(v10);
  return (unsigned int)ShimsForDriver;
}
