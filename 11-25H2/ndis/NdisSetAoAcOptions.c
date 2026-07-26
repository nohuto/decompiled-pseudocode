/*
 * XREFs of NdisSetAoAcOptions @ 0x140141880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x140036F70 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x14006D370 (WPP_RECORDER_SF_D_ea_14006D370.c)
 */

__int64 __fastcall NdisSetAoAcOptions(__int64 a1, int a2)
{
  __int64 v2; // rdi
  char v3; // si
  __int64 v4; // rbx
  unsigned int v6; // eax
  __int64 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a2;
  v4 = *(_QWORD *)(v2 + 4456);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v8 = a2;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x2Du,
      (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
      a1,
      v8);
  }
  if ( *(_QWORD *)(v2 + 4456) )
  {
    if ( (v3 & 1) != 0 )
    {
      *(_DWORD *)(v4 + 284) = *(_DWORD *)ndisNicQuietDerefExtendedTimeout;
      v6 = *(_DWORD *)ndisNicQuietDerefExtendedTimeout;
    }
    else
    {
      *(_DWORD *)(v4 + 284) = ndisNicQuietDerefDefaultTimeout;
      v6 = ndisNicQuietDerefDefaultTimeout;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = v6;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x2Fu,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
        v7);
    }
    return 0LL;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
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
