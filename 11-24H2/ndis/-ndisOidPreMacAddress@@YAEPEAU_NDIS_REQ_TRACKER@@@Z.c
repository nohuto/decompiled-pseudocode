/*
 * XREFs of ?ndisOidPreMacAddress@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BB140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

char __fastcall ndisOidPreMacAddress(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rsi
  char v4; // bl
  _DWORD *v5; // rdi
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v9; // [rsp+30h] [rbp-28h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      145,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
  {
    v5 = (_DWORD *)((char *)a1 + 40);
    *v5 = -1073741637;
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) )
    {
      v5 = (_DWORD *)((char *)a1 + 40);
      goto LABEL_11;
    }
    v5 = (_DWORD *)((char *)a1 + 40);
    *v5 = 0;
    v6 = *(_QWORD *)(v1 + 4040);
    v7 = *(unsigned __int16 *)(v6 + 1124);
    if ( *(_DWORD *)(v3 + 48) < v7 )
    {
      *(_DWORD *)(v3 + 56) = v7;
      *v5 = -1073676268;
      goto LABEL_11;
    }
    memmove(*(void **)(v3 + 40), (const void *)(v6 + 1126), *(unsigned __int16 *)(v6 + 1124));
    *v5 = 0;
    *(_DWORD *)(v3 + 52) = *(unsigned __int16 *)(*(_QWORD *)(v1 + 4040) + 1124LL);
  }
  v4 = 1;
LABEL_11:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = *v5;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x92u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v9);
  }
  return v4;
}
