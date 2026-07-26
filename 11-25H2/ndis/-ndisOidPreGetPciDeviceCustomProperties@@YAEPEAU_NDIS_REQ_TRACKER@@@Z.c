/*
 * XREFs of ?ndisOidPreGetPciDeviceCustomProperties@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400C2080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qDD @ 0x140028580 (WPP_RECORDER_SF_qDD_ea_140028580.c)
 */

unsigned __int8 __fastcall ndisOidPreGetPciDeviceCustomProperties(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  int *v4; // rdx
  int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  char v10[4]; // [rsp+38h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 4);
  v3 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x97u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      0,
      v1);
  v4 = (int *)((char *)a1 + 40);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) != 0 )
  {
    *v4 = -1073741637;
  }
  else
  {
    *v4 = 0;
    v5 = 52;
    if ( *(_DWORD *)(v1 + 48) >= 0x34u )
    {
      if ( *(_QWORD *)a1 )
      {
        v3 = *(_QWORD *)a1;
      }
      else
      {
        v6 = *((_QWORD *)a1 + 2);
        if ( v6 )
          v3 = *(_QWORD *)(v6 + 32);
      }
      if ( *(_DWORD *)(v3 + 3720) == 5 )
      {
        v7 = *(_QWORD *)(v1 + 40);
        *(_OWORD *)v7 = *(_OWORD *)(v3 + 3336);
        *(_OWORD *)(v7 + 16) = *(_OWORD *)(v3 + 3352);
        *(_OWORD *)(v7 + 32) = *(_OWORD *)(v3 + 3368);
        *(_DWORD *)(v7 + 48) = *(_DWORD *)(v3 + 3384);
        v8 = 0;
      }
      else
      {
        v5 = 0;
        v8 = -1073741808;
      }
      *v4 = v8;
      *(_DWORD *)(v1 + 52) = v5;
      *(_DWORD *)(v1 + 56) = 0;
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 52;
      *v4 = -1073676268;
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v10 = *v4;
    WPP_RECORDER_SF_qDD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x98u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      v3,
      1,
      *(_DWORD *)v10);
  }
  return 1;
}
