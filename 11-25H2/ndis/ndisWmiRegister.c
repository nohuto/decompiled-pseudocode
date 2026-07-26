/*
 * XREFs of ndisWmiRegister @ 0x14002C080
 * Callers:
 *     ndisWMIDispatch @ 0x14002BA20 (ndisWMIDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ndisQuerySupportedGuidToOidList @ 0x14002E140 (ndisQuerySupportedGuidToOidList.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 *     memset @ 0x1400EE380 (memset.c)
 */

__int64 __fastcall ndisWmiRegister(__int64 a1, __int64 a2, int *a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // edi
  int v7; // r14d
  const void **v8; // r15
  __int64 v9; // rbp
  int v13; // edx
  int v14; // r8d
  unsigned int v15; // r13d
  unsigned int v16; // eax
  int v17; // edx
  bool v18; // cf
  int *v19; // r12
  int *v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rcx
  const void **v29; // rax
  _OWORD *v30; // rbx
  unsigned int v31; // ecx
  __int128 *i; // rdx
  __int128 v33; // xmm0
  char *v34; // rbx
  char *v35; // rcx
  unsigned int v37; // [rsp+90h] [rbp+28h]

  v5 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      18,
      21,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1);
  }
  *a5 = 0;
  if ( v9 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        18,
        24,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    }
    v5 = -1073741811;
  }
  else if ( *(_QWORD *)(a1 + 1368) || !(unsigned int)ndisQuerySupportedGuidToOidList(a1) )
  {
    v13 = *(unsigned __int16 *)(a1 + 1388);
    if ( (_WORD)v13 )
    {
      v27 = *(_QWORD *)(a1 + 3760);
      v14 = *(unsigned __int16 *)(a1 + 1388);
      v28 = *(_QWORD *)(v27 + 32);
      v29 = (const void **)(v27 + 48);
      v8 = (const void **)(v28 + 8);
      if ( !v28 )
        v8 = v29;
      v7 = 32 * v13 + 58 + *(unsigned __int16 *)v8;
    }
    else
    {
      v14 = 0;
    }
    v15 = (v7 + 7) & 0xFFFFFFF8;
    v37 = *(unsigned __int16 *)(a1 + 1386) - v14;
    v16 = v15 + 32 * v37 + 24;
    if ( v16 >= v15 )
    {
      v18 = a4 < v16;
      v19 = a3;
      if ( v18 )
      {
        *a3 = v16;
        v5 = -1073741789;
        *a5 = 4;
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return v5;
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          18,
          23,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          a1);
      }
      else
      {
        *a5 = v16;
        memset(a3, 0, v16);
        if ( v15 && v8 )
        {
          *a3 = v7;
          v30 = a3 + 6;
          a3[1] = v15;
          v31 = 0;
          a3[4] = *(unsigned __int16 *)(a1 + 1388);
          for ( i = *(__int128 **)(a1 + 1376); v31 < *(unsigned __int16 *)(a1 + 1388); v30 += 2 )
          {
            v33 = *i;
            ++v31;
            i = (__int128 *)((char *)i + 28);
            *v30 = v33;
          }
          a3[2] = (_DWORD)v30 - (_DWORD)a3;
          *(_WORD *)v30 = *(_WORD *)v8;
          v34 = (char *)v30 + 2;
          memmove(v34, v8[1], *(unsigned __int16 *)v8);
          v35 = &v34[*(unsigned __int16 *)v8];
          a3[3] = (_DWORD)v34 + *(unsigned __int16 *)v8 - (_DWORD)a3;
          *(_WORD *)v35 = 30;
          *(_OWORD *)(v35 + 2) = *(_OWORD *)L"NdisMofResource";
          *(_QWORD *)(v35 + 18) = *(_QWORD *)L"esource";
          *(_DWORD *)(v35 + 26) = *(_DWORD *)L"rce";
          *((_WORD *)v35 + 15) = aNdismofresourc[14];
          v19 = (int *)((char *)a3 + (unsigned int)a3[1]);
        }
        v20 = v19 + 6;
        v19[4] = v37;
        *v19 = 32 * v37 + 24;
        v19[1] = 0;
        v21 = *(_QWORD **)(a1 + 1368);
        if ( v37 )
        {
          v22 = v37;
          do
          {
            v23 = *v21 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
            if ( *v21 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
              v23 = v21[1] - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
            if ( !v23 )
              goto LABEL_34;
            v24 = *v21 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
            if ( *v21 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
              v24 = v21[1] - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
            if ( !v24 )
              goto LABEL_34;
            v25 = *v21 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
            if ( *v21 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
              v25 = v21[1] - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
            if ( !v25 )
            {
LABEL_34:
              *((_QWORD *)v20 + 3) = *(_QWORD *)(a1 + 3832);
              v20[4] = 32;
              v20[5] = 1;
            }
            v26 = *(_OWORD *)v21;
            v21 = (_QWORD *)((char *)v21 + 28);
            *(_OWORD *)v20 = v26;
            v20 += 8;
            --v22;
          }
          while ( v22 );
        }
        *((_QWORD *)v19 + 1) = 0LL;
      }
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v17) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v17,
        18,
        22,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        a1);
    }
    v5 = -1073741823;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x19u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a1,
      v5);
  return v5;
}
