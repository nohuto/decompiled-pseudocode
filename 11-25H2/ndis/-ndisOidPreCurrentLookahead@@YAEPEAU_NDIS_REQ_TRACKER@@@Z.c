/*
 * XREFs of ?ndisOidPreCurrentLookahead@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14007AA60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140028490 (WPP_RECORDER_SF_qql.c)
 */

__int64 __fastcall ndisOidPreCurrentLookahead(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  unsigned __int8 v3; // si
  int v4; // eax
  unsigned int v6; // ebp
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // r15
  __int64 v11; // rsi
  KIRQL v12; // cl
  unsigned int v13; // r14d
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rax

  v1 = *((_QWORD *)a1 + 4);
  v3 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Cu,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      *(_QWORD *)a1,
      v1);
  v4 = *(_DWORD *)(v1 + 4);
  if ( (v4 & 0xFFFFFFFD) != 0 )
  {
    if ( v4 != 1 )
      goto LABEL_5;
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 4u )
    {
      v6 = **(_DWORD **)(v1 + 40);
      if ( *((_QWORD *)a1 + 3) )
      {
        v10 = *(_QWORD *)(v1 + 104);
        v11 = *(_QWORD *)(v10 + 16);
        if ( v6 > *(_DWORD *)(v11 + 596) )
        {
          *(_QWORD *)(v1 + 52) = 0LL;
          v3 = 1;
          *((_DWORD *)a1 + 10) = -1073676268;
          goto LABEL_5;
        }
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v11 + 96));
        v13 = 0;
        v14 = *(_QWORD *)(v11 + 56);
        for ( *(_QWORD *)(v11 + 520) = KeGetCurrentThread(); v14; v13 = v15 )
        {
          v15 = *(_DWORD *)(v14 + 264);
          v14 = *(_QWORD *)(v14 + 392);
          if ( v15 <= v13 )
            v15 = v13;
        }
        *(_QWORD *)(v11 + 520) = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)(v11 + 96), v12);
        if ( v6 > v13 )
        {
          v3 = 0;
          *(_DWORD *)(v1 + 164) = v6;
          *(_QWORD *)(v1 + 152) = *(_QWORD *)(v1 + 40);
          *(_DWORD *)(v1 + 160) = *(_DWORD *)(v1 + 48);
          *(_DWORD *)(v1 + 48) = 4;
          *(_QWORD *)(v1 + 40) = v1 + 164;
          goto LABEL_5;
        }
        *(_DWORD *)(v10 + 264) = v6;
        v3 = 1;
      }
      else
      {
        v7 = *(_QWORD *)a1;
        if ( !*(_QWORD *)a1 )
          goto LABEL_5;
        v8 = *(_DWORD *)(v7 + 596);
        if ( v6 > v8 )
        {
          *(_QWORD *)(v1 + 52) = 0LL;
          *((_DWORD *)a1 + 10) = -1073676268;
          goto LABEL_5;
        }
        v9 = *(_DWORD *)(v7 + 592);
        if ( v6 >= v9 )
        {
          if ( v9 )
            v8 = **(_DWORD **)(v1 + 40);
          if ( v8 > v9 )
          {
            *((_DWORD *)a1 + 10) = 0;
            v3 = 0;
          }
          else
          {
            *(_DWORD *)(v1 + 52) = 4;
            *(_DWORD *)(v1 + 56) = 4;
            *((_DWORD *)a1 + 10) = 0;
          }
          goto LABEL_5;
        }
        *(_DWORD *)(v1 + 52) = 4;
        *(_DWORD *)(v1 + 56) = 4;
      }
      *((_DWORD *)a1 + 10) = 0;
      goto LABEL_5;
    }
    *(_DWORD *)(v1 + 56) = 4;
    *((_DWORD *)a1 + 10) = -1073676268;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qql(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xBu,
        0x2Du,
        (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
        0,
        v1,
        -1073676268);
  }
  else
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 4u )
    {
      v16 = *((_QWORD *)a1 + 3);
      if ( v16 )
      {
        **(_DWORD **)(v1 + 40) = *(_DWORD *)(v16 + 264);
        *(_DWORD *)(v1 + 52) = 4;
      }
      else if ( *(_QWORD *)a1 )
      {
        **(_DWORD **)(v1 + 40) = *(_DWORD *)(*(_QWORD *)a1 + 596LL);
        *(_DWORD *)(v1 + 52) = 4;
      }
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676266;
    }
  }
LABEL_5:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Eu,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      *(_QWORD *)a1,
      v1);
  return v3;
}
