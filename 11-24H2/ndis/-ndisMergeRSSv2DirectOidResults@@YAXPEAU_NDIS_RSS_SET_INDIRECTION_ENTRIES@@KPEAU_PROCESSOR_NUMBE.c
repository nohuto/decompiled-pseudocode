/*
 * XREFs of ?ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBER@@U2@K11PEAH@Z @ 0x1400AC4EC
 * Callers:
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1400ABFB4 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 * Callees:
 *     WPP_RECORDER_SF_dddDL @ 0x1400AE108 (WPP_RECORDER_SF_dddDL.c)
 */

void __fastcall ndisMergeRSSv2DirectOidResults(
        struct _NDIS_RSS_SET_INDIRECTION_ENTRIES *a1,
        unsigned int a2,
        struct _PROCESSOR_NUMBER *a3,
        struct _PROCESSOR_NUMBER a4,
        unsigned int a5,
        struct _PROCESSOR_NUMBER *a6,
        struct _PROCESSOR_NUMBER *a7,
        int *a8)
{
  char *v9; // rbp
  struct _PROCESSOR_NUMBER *v10; // r9
  unsigned int v11; // r10d
  unsigned int v12; // r8d
  unsigned __int16 v13; // si
  char v14; // cl
  int v15; // r15d
  int v16; // edi
  __int64 v17; // r13
  int v18; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+B0h] [rbp+28h]

  v9 = (char *)a1 + *((unsigned int *)a1 + 3);
  v10 = a3;
  v11 = a2;
  v12 = *((_DWORD *)a1 + 4);
  v13 = 0;
  v21 = v12;
  if ( v12 )
  {
    v14 = 0;
    do
    {
      v15 = *(_DWORD *)&v9[24 * v13 + 20];
      v16 = *(_DWORD *)&v9[24 * v13 + 8];
      v17 = *(unsigned __int16 *)&v9[24 * v13 + 12];
      if ( v15 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_dddDL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (unsigned int)&WPP_RECORDER_INITIALIZED,
            v12,
            (_DWORD)v10,
            v18,
            *(_DWORD *)&v9[24 * v13 + 4],
            v14,
            v17,
            v16,
            *(_DWORD *)&v9[24 * v13 + 20]);
          v12 = v21;
          v10 = a3;
          v11 = a2;
        }
        if ( (v16 & 2) != 0 )
        {
          *a7 = a4;
        }
        else if ( (v16 & 1) != 0 )
        {
          __debugbreak();
        }
        else
        {
          a6[v17] = v10[(unsigned int)v17 % v11];
        }
        if ( !*a8 )
          *a8 = v15;
      }
      else if ( (v16 & 3) == 1 )
      {
        __debugbreak();
      }
      v14 = ++v13;
    }
    while ( v13 < v12 );
  }
}
