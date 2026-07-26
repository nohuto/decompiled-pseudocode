/*
 * XREFs of ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1400ABFB4
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1400AD1B0 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     ?ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z @ 0x1400AB990 (-ndisAreProcessorsEqual@@YAEU_PROCESSOR_NUMBER@@0@Z.c)
 *     ?ndisEntrySetPrime@@YAXPEAU_NDIS_RSS_ENTRY_SET@@G@Z @ 0x1400ABA28 (-ndisEntrySetPrime@@YAXPEAU_NDIS_RSS_ENTRY_SET@@G@Z.c)
 *     ?ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z @ 0x1400ABAC4 (-ndisEntrySetScanForward@@YAEPEAGPEAU_NDIS_RSS_ENTRY_SET@@@Z.c)
 *     ?ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DPC_WORKER_CONTEXT@@U_PROCESSOR_NUMBER@@@Z @ 0x1400ABB5C (-ndisExecuteRSSv2DirectOid@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_RSS_DP.c)
 *     ?ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBER@@U2@K11PEAH@Z @ 0x1400AC4EC (-ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBE.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall ndisInternalSetRSSv2IndirectionTable(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        unsigned __int16 a3,
        struct _PROCESSOR_NUMBER *a4,
        struct _PROCESSOR_NUMBER a5,
        unsigned __int16 a6,
        struct _PROCESSOR_NUMBER *a7,
        struct _PROCESSOR_NUMBER *a8)
{
  struct _PROCESSOR_NUMBER *v8; // r15
  struct _PROCESSOR_NUMBER *v10; // rbx
  struct _NDIS_RSS_DPC_WORKER_CONTEXT *RssV2Context; // rsi
  unsigned __int16 v12; // r12
  char Reserved; // r14
  struct _PROCESSOR_NUMBER v14; // edi
  bool v15; // al
  int v16; // r8d
  __int64 v17; // r9
  int v18; // r10d
  int v19; // edx
  int v20; // eax
  NDIS_OBJECT_HEADER Header; // ecx
  unsigned __int16 i; // cx
  struct _PROCESSOR_NUMBER v23; // ebx
  unsigned __int64 v24; // r15
  char v25; // r8
  unsigned int v26; // edi
  struct _PROCESSOR_NUMBER *v27; // r9
  int v28; // r8d
  struct _PROCESSOR_NUMBER *v29; // r9
  char v30; // r10
  NDIS_OBJECT_HEADER v31; // r9d
  int v32; // r8d
  __int64 v33; // r10
  __int64 v34; // rdx
  unsigned __int16 v35; // r11
  unsigned __int16 v36; // r14
  signed int v37; // edi
  unsigned __int16 v38; // r12
  int v39; // r8d
  char v40; // r10
  __int16 v41; // r11
  NDIS_OBJECT_HEADER v42; // r9d
  int v43; // r8d
  __int64 v44; // r10
  __int64 v45; // rdx
  unsigned int v47; // [rsp+20h] [rbp-81h]
  struct _PROCESSOR_NUMBER v48; // [rsp+40h] [rbp-61h]
  int v49; // [rsp+48h] [rbp-59h]
  int v50; // [rsp+48h] [rbp-59h]
  unsigned __int16 v51[2]; // [rsp+50h] [rbp-51h] BYREF
  unsigned __int16 v52; // [rsp+58h] [rbp-49h]
  unsigned __int16 v53; // [rsp+5Ah] [rbp-47h]
  int v54; // [rsp+5Ch] [rbp-45h] BYREF
  struct _PROCESSOR_NUMBER *v55; // [rsp+60h] [rbp-41h]
  struct _PROCESSOR_NUMBER *v56; // [rsp+68h] [rbp-39h]
  struct _NDIS_MINIPORT_BLOCK *v57; // [rsp+70h] [rbp-31h]
  struct _PROCESSOR_NUMBER *v58; // [rsp+78h] [rbp-29h]
  __int128 v59; // [rsp+80h] [rbp-21h] BYREF

  v8 = a7;
  v57 = a1;
  v10 = a4;
  RssV2Context = a1->RssV2Context;
  v53 = a6;
  v12 = a3;
  v54 = 0;
  v56 = a4;
  v52 = a3;
  v55 = a7;
  v58 = a8;
  v59 = 0LL;
  ndisEntrySetPrime((struct _NDIS_RSS_ENTRY_SET *)&v59, a3);
  *(_QWORD *)((char *)RssV2Context + 68) = 1311177LL;
  *((_QWORD *)RssV2Context + 10) = 20LL;
  *((_DWORD *)RssV2Context + 19) = 24;
  Reserved = 0;
  v14 = a5;
  v48 = a5;
  v48.Reserved = 0;
  v15 = ndisAreProcessorsEqual(a5, *a8);
  v19 = v18 + 1;
  if ( !v15 )
  {
    v20 = *(_DWORD *)(&a2->Reserved2 + 1);
    Header = a2[1].Header;
    *(_DWORD *)v51 = v16;
    *((_DWORD *)RssV2Context + 22) = v20;
    HIBYTE(v51[1]) = v17;
    *(_DWORD *)((char *)RssV2Context + 102) = *(_DWORD *)v51;
    *((_DWORD *)RssV2Context + 24) = v19;
    *((_WORD *)RssV2Context + 50) = v17;
    *((NDIS_OBJECT_HEADER *)RssV2Context + 23) = Header;
    *((_DWORD *)RssV2Context + 27) = 259;
    *((_DWORD *)RssV2Context + 21) = v18;
  }
LABEL_3:
  for ( i = v17; i < (unsigned __int16)v19; i += v18 )
  {
    if ( *((_QWORD *)&v59 + i) != v17 )
    {
      v51[0] = -1;
      v23 = v48;
      if ( ndisEntrySetScanForward(v51, (struct _NDIS_RSS_ENTRY_SET *)&v59) )
      {
        do
        {
          v24 = v51[0];
          if ( Reserved == 1 )
          {
            Reserved = 0;
            v48 = v56[v51[0]];
            v48.Reserved = 0;
            v23 = v48;
            *((_DWORD *)RssV2Context + 21) = 0;
          }
          if ( ndisAreProcessorsEqual(v23, v56[v24]) )
          {
            v26 = v53;
            v27 = v55;
            *((_QWORD *)&v59 + (v24 >> 6)) &= ~(1LL << (v25 & 0x3F));
            if ( !ndisAreProcessorsEqual(v27[(unsigned int)v24 % v26], v23) )
            {
              v31 = a2[1].Header;
              v49 = v28;
              v32 = *(_DWORD *)(&a2->Reserved2 + 1);
              HIBYTE(v49) = v30;
              v33 = *((unsigned int *)RssV2Context + 21);
              *((_DWORD *)RssV2Context + 6 * v33 + 24) = 0;
              v34 = 3 * v33;
              *(_DWORD *)((char *)RssV2Context + 8 * v34 + 102) = v49;
              *((NDIS_OBJECT_HEADER *)RssV2Context + 2 * v34 + 23) = v31;
              v29 = v55;
              *((_WORD *)RssV2Context + 4 * v34 + 50) = v24;
              *((_DWORD *)RssV2Context + 2 * v34 + 22) = v32;
              *((_DWORD *)RssV2Context + 2 * v34 + 27) = 259;
              *((_DWORD *)RssV2Context + 21) = v33 + 1;
            }
            if ( (unsigned __int16)v26 > v12 )
            {
              v35 = 1;
              if ( (int)(v26 / v12) > 1 )
              {
                v36 = v52;
                v37 = v26 / v12;
                do
                {
                  v38 = v24 + v35 * v36;
                  if ( !ndisAreProcessorsEqual(v29[v38], v23) )
                  {
                    v42 = a2[1].Header;
                    v50 = v39;
                    v43 = *(_DWORD *)(&a2->Reserved2 + 1);
                    HIBYTE(v50) = v40;
                    v44 = *((unsigned int *)RssV2Context + 21);
                    *((_DWORD *)RssV2Context + 6 * v44 + 24) = 0;
                    v45 = 3 * v44;
                    *(_DWORD *)((char *)RssV2Context + 8 * v45 + 102) = v50;
                    *((NDIS_OBJECT_HEADER *)RssV2Context + 2 * v45 + 23) = v42;
                    v29 = v55;
                    *((_WORD *)RssV2Context + 4 * v45 + 50) = v38;
                    *((_DWORD *)RssV2Context + 2 * v45 + 22) = v43;
                    *((_DWORD *)RssV2Context + 2 * v45 + 27) = 259;
                    *((_DWORD *)RssV2Context + 21) = v44 + 1;
                  }
                  v35 = v41 + 1;
                }
                while ( v35 < v37 );
                Reserved = v48.Reserved;
                v12 = v52;
              }
            }
          }
        }
        while ( ndisEntrySetScanForward(v51, (struct _NDIS_RSS_ENTRY_SET *)&v59) );
        v14 = a5;
        v8 = v55;
      }
      ndisExecuteRSSv2DirectOid(v57, a2, (struct _KDPC *)RssV2Context, v23);
      v10 = v56;
      ndisMergeRSSv2DirectOidResults(
        (struct _NDIS_RSS_DPC_WORKER_CONTEXT *)((char *)RssV2Context + 68),
        v12,
        v56,
        v14,
        v47,
        v8,
        v58,
        &v54);
      LOWORD(v18) = 1;
      v17 = 0LL;
      Reserved = 1;
      v48.Reserved = 1;
      LOWORD(v19) = 2;
      goto LABEL_3;
    }
  }
  if ( !Reserved )
  {
    ndisExecuteRSSv2DirectOid(v57, a2, (struct _KDPC *)RssV2Context, v48);
    ndisMergeRSSv2DirectOidResults(
      (struct _NDIS_RSS_DPC_WORKER_CONTEXT *)((char *)RssV2Context + 68),
      v12,
      v10,
      v14,
      v47,
      v8,
      v58,
      &v54);
  }
  return (unsigned int)v54;
}
