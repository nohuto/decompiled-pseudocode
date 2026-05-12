/*
 * XREFs of ParseTcgTransactionStatus @ 0x1401425D8
 * Callers:
 *     TcglibpTransaction @ 0x140141BA4 (TcglibpTransaction.c)
 * Callees:
 *     WPP_SF_d @ 0x140055B28 (WPP_SF_d.c)
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 *     ParseToken @ 0x1401426CC (ParseToken.c)
 */

__int64 __fastcall ParseTcgTransactionStatus(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  int v3; // r9d
  int v4; // r9d
  int v6; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v1 = a1 + 56;
  v2 = ParseToken(a1 + 56, &v7);
  if ( v2 >= 0 )
  {
    v3 = *(_DWORD *)(v7 + 8);
    if ( v3 != 2 )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x16u,
          (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
          v3);
      return (unsigned int)-1073741435;
    }
    v2 = ParseToken(v1, &v7);
    if ( v2 >= 0 )
    {
      v4 = *(_DWORD *)(v7 + 8);
      if ( (unsigned int)(v4 - 7) > 7 || *(_DWORD *)(v7 + 12) > 1u )
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          v6 = *(_DWORD *)(v7 + 12);
          WPP_SF_DD(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x17u,
            (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
            v4,
            v6);
        }
        return (unsigned int)-1073741435;
      }
      if ( *(_QWORD *)(v7 + 16) == 1LL )
        return (unsigned int)-1073741297;
    }
  }
  return (unsigned int)v2;
}
