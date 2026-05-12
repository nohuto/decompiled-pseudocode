/*
 * XREFs of ParseNamedData @ 0x1401420F4
 * Callers:
 *     ParseToken @ 0x1401426CC (ParseToken.c)
 * Callees:
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     ParseToken @ 0x1401426CC (ParseToken.c)
 *     PeekTokenInfo @ 0x140142A8C (PeekTokenInfo.c)
 *     WPP_SF_Dd @ 0x140142D18 (WPP_SF_Dd.c)
 */

__int64 __fastcall ParseNamedData(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 result; // rax
  int v6; // r9d
  __int64 v7; // r8
  unsigned __int8 v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)(a2 + 12) = 0;
  v2 = (_QWORD *)(a2 + 16);
  result = ParseToken(a1, a2 + 16);
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(a2 + 12);
    v6 = *(_DWORD *)(*v2 + 8LL);
    if ( (unsigned int)(v6 - 7) > 0xA )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x22u,
          (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
          v6);
      return 3221225861LL;
    }
    result = ParseToken(a1, *v2);
    if ( (int)result >= 0 )
    {
      ++*(_DWORD *)(a2 + 12);
      v9 = 0;
      v8 = 0;
      result = PeekTokenInfo(a1, &v8, &v9);
      if ( (int)result >= 0 )
      {
        if ( v8 == 0xF3 )
        {
          ++*(_DWORD *)(a1 + 12);
          return result;
        }
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
          WPP_SF_Dd(WPP_GLOBAL_Control->AttachedDevice, 35LL, v7, v8, v9);
        return 3221225861LL;
      }
    }
  }
  return result;
}
