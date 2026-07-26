/*
 * XREFs of ?ndisOidPostTcpConnectionOffloadParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BA810
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

void __fastcall ndisOidPostTcpConnectionOffloadParameters(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  size_t v4; // rsi
  unsigned int v5; // eax
  size_t v6; // r8
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // [rsp+30h] [rbp-28h]

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      201,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v3);
  if ( *(_DWORD *)(v3 + 4) == 1 && !*((_DWORD *)a1 + 10) )
  {
    v4 = 60LL;
    if ( *(_QWORD *)a1 )
    {
      v5 = *(_DWORD *)(v3 + 52);
      if ( v5 < 0x38 )
      {
        *((_DWORD *)a1 + 10) = -1073741823;
      }
      else
      {
        v6 = 60LL;
        if ( v5 <= 0x3C )
          v6 = v5;
        memmove((void *)(*(_QWORD *)(v1 + 4096) + 1120LL), *(const void **)(v3 + 40), v6);
      }
    }
    v7 = *((_QWORD *)a1 + 3);
    if ( v7 )
    {
      v1 = *(_QWORD *)(v7 + 16);
      v8 = *(_DWORD *)(v3 + 52);
      if ( v8 < 0x38 )
      {
        *((_DWORD *)a1 + 10) = -1073741823;
      }
      else
      {
        if ( v8 <= 0x3C )
          v4 = v8;
        memmove((void *)(*(_QWORD *)(v1 + 4096) + 1060LL), *(const void **)(v3 + 40), v4);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xCAu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v1,
      v9);
  }
}
