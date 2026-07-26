/*
 * XREFs of NdisSetAoAcOptions @ 0x140136790
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x14001DD50 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1400527F0 (WPP_RECORDER_SF_D_ea_1400527F0.c)
 */

__int64 __fastcall NdisSetAoAcOptions(__int64 a1, int a2)
{
  __int64 v2; // rdi
  char v3; // si
  __int64 v4; // rbx
  char v6; // al
  int v7; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v4 = *(_QWORD *)(v2 + 4456);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = a2;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x2Du,
      (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
      a1,
      v7);
  }
  if ( *(_QWORD *)(v2 + 4456) )
  {
    if ( (v3 & 1) != 0 )
    {
      *(_DWORD *)(v4 + 284) = *(_DWORD *)ndisNicQuietDerefExtendedTimeout;
      v6 = ndisNicQuietDerefExtendedTimeout[0];
    }
    else
    {
      *(_DWORD *)(v4 + 284) = ndisNicQuietDerefDefaultTimeout;
      v6 = ndisNicQuietDerefDefaultTimeout;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        47,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
        v6);
    }
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 3;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        14,
        46,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids);
    }
    return 3221225659LL;
  }
}
