/*
 * XREFs of ?ndisNsiEnumerateAllCompartments@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1400CB280
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14002A160 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1400469F0 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

__int64 __fastcall ndisNsiEnumerateAllCompartments(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  KIRQL v2; // al
  const struct _NDIS_IF_COMPARTMENT_BLOCK *v3; // r10
  unsigned int v4; // r11d
  KIRQL v5; // r13
  unsigned int v6; // ebx
  bool IsCompartmentAccessibleByClient; // al
  const struct _NDIS_IF_COMPARTMENT_BLOCK **v8; // r10
  unsigned int v9; // ecx
  unsigned int v10; // ebp
  bool v11; // cf
  __int64 v12; // r12
  char *v13; // r15
  unsigned int v14; // ebx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v15; // r14
  unsigned int v16; // esi
  __int64 v17; // r11
  KIRQL v19; // [rsp+40h] [rbp-58h]
  __int128 v20; // [rsp+48h] [rbp-50h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h]

  v20 = 0LL;
  v21 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      45,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      (char)a1);
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v20);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension);
  v3 = qword_14011CAA0;
  v4 = 0;
  v5 = v2;
  v19 = v2;
  v6 = 0;
  if ( qword_14011CAA0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0 )
  {
    do
    {
      IsCompartmentAccessibleByClient = ndisIsCompartmentAccessibleByClient(
                                          v3,
                                          (const struct _NDIS_NSI_CLIENT_INFO *)&v20,
                                          1);
      v3 = *v8;
      v9 = v6 + 1;
      if ( !IsCompartmentAccessibleByClient )
        v9 = v6;
      v6 = v9;
    }
    while ( v3 != (const struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0 );
    v5 = v19;
  }
  v10 = *((_DWORD *)a1 + 22);
  *((_DWORD *)a1 + 22) = v6;
  if ( v10 )
  {
    v12 = *((_QWORD *)a1 + 2);
    v13 = (char *)*((_QWORD *)a1 + 5);
    if ( v12 && *((_DWORD *)a1 + 6) != 4 || v13 && *((_DWORD *)a1 + 12) < 0x668u )
    {
      v14 = -1073741306;
      goto LABEL_26;
    }
    v15 = qword_14011CAA0;
    v16 = v4;
    do
    {
      if ( v15 == (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_14011CAA0 )
        break;
      if ( ndisIsCompartmentAccessibleByClient(v15, (const struct _NDIS_NSI_CLIENT_INFO *)&v20, 1) )
      {
        if ( *((_QWORD *)a1 + 2) != v17 )
          *(_DWORD *)(v12 + 4LL * v16) = *((_DWORD *)v15 + 4);
        if ( *((_QWORD *)a1 + 5) != v17 )
        {
          memmove(v13, (char *)v15 + 64, 0x668uLL);
          v13 += *((unsigned int *)a1 + 12);
        }
        ++v16;
      }
      v15 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v15;
    }
    while ( v16 < v10 );
    v5 = v19;
    v11 = v16 < v6;
  }
  else
  {
    v11 = v4 < v6;
  }
  v14 = v11 ? 0x105 : 0;
LABEL_26:
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.DeviceObjectExtension, v5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x2Eu,
      (struct _GUID *)&WPP_7b6e8809435e3846b6104774dae7899f_Traceguids,
      (char)a1,
      v14);
  return v14;
}
