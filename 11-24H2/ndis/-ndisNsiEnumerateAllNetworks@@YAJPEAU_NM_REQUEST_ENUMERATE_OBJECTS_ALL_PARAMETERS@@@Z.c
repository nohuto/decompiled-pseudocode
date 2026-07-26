/*
 * XREFs of ?ndisNsiEnumerateAllNetworks@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1400CD9F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14002A160 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1400469F0 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisNsiEnumerateAllNetworks(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  __int64 v3; // r11
  KIRQL v4; // r15
  unsigned int i; // r10d
  bool IsCompartmentAccessibleByClient; // al
  unsigned int v7; // r10d
  __int64 *v8; // r11
  unsigned int v9; // ecx
  unsigned int v10; // esi
  bool v11; // cf
  __int64 v12; // r14
  _OWORD *v13; // rbp
  unsigned int v14; // ebx
  __int64 v15; // r11
  unsigned int v16; // ebx
  __int64 v17; // r11
  __int64 v18; // rdx
  _OWORD *v19; // rcx
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int128 v23; // [rsp+40h] [rbp-48h] BYREF
  __int64 v24; // [rsp+50h] [rbp-38h]

  v23 = 0LL;
  v24 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      22,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (char)a1);
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v23);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v3 = qword_14011CAB0;
  v4 = v2;
  for ( i = 0; (__int64 *)v3 != &qword_14011CAB0; i = v9 )
  {
    IsCompartmentAccessibleByClient = ndisIsCompartmentAccessibleByClient(
                                        *(const struct _NDIS_IF_COMPARTMENT_BLOCK **)(v3 + 48),
                                        (const struct _NDIS_NSI_CLIENT_INFO *)&v23,
                                        0);
    v3 = *v8;
    v9 = v7 + 1;
    if ( !IsCompartmentAccessibleByClient )
      v9 = v7;
  }
  v10 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = i;
  if ( v10 )
  {
    v12 = *((_QWORD *)a1 + 2);
    v13 = (_OWORD *)*((_QWORD *)a1 + 5);
    if ( v12 && *((_DWORD *)a1 + 6) != 16 || v13 && *((_DWORD *)a1 + 12) < 0x210u )
    {
      v14 = -1073741306;
      goto LABEL_27;
    }
    v15 = qword_14011CAB0;
    v16 = 0;
    do
    {
      if ( (__int64 *)v15 == &qword_14011CAB0 )
        break;
      if ( ndisIsCompartmentAccessibleByClient(
             *(const struct _NDIS_IF_COMPARTMENT_BLOCK **)(v15 + 48),
             (const struct _NDIS_NSI_CLIENT_INFO *)&v23,
             0) )
      {
        if ( *((_QWORD *)a1 + 2) )
          *(_OWORD *)(v12 + 16LL * v16) = *(_OWORD *)(v17 + 32);
        if ( *((_QWORD *)a1 + 5) )
        {
          v18 = 4LL;
          v19 = (_OWORD *)(v17 + 80);
          v20 = v13;
          do
          {
            *v20 = *v19;
            v20[1] = v19[1];
            v20[2] = v19[2];
            v20[3] = v19[3];
            v20[4] = v19[4];
            v20[5] = v19[5];
            v20[6] = v19[6];
            v20 += 8;
            v21 = v19[7];
            v19 += 8;
            *(v20 - 1) = v21;
            --v18;
          }
          while ( v18 );
          *v20 = *v19;
          v13 = (_OWORD *)((char *)v13 + *((unsigned int *)a1 + 12));
        }
        ++v16;
      }
      v15 = *(_QWORD *)v17;
    }
    while ( v16 < v10 );
    v11 = v16 < i;
  }
  else
  {
    v11 = i != 0;
  }
  v14 = v11 ? 0x105 : 0;
LABEL_27:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x17u,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (char)a1,
      v14);
  return v14;
}
