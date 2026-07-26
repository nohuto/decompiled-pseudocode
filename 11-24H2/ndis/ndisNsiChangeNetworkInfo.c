/*
 * XREFs of ndisNsiChangeNetworkInfo @ 0x1400CD6DC
 * Callers:
 *     ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1400CDFA0 (-ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1400CE530 (-ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1400483A0 (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x14004DAB0 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIsValidIfStringParts@@YAEPEB_WK@Z @ 0x14008E4B0 (-ndisIsValidIfStringParts@@YAEPEB_WK@Z.c)
 *     ndisIfReleaseSiteId @ 0x1400CD6A8 (ndisIfReleaseSiteId.c)
 */

__int64 __fastcall ndisNsiChangeNetworkInfo(__int64 a1, __int64 a2, int a3, int a4, int *a5)
{
  int v6; // ebp
  __int64 v7; // r15
  unsigned int v9; // ebx
  int *v10; // rax
  char v11; // r13
  int v12; // r10d
  int v13; // r9d
  int v14; // r11d
  unsigned int v15; // r12d
  __int128 *v16; // rcx
  int v17; // ebp
  _OWORD *v19; // rdx
  __int64 v20; // rax
  __int128 v21; // xmm0
  unsigned int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rdx
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  struct _NDIS_IF_COMPARTMENT_BLOCK *v26; // rdx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v27; // rbp
  _QWORD *v28; // r14
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rcx
  char v34; // [rsp+30h] [rbp-48h]
  int v36; // [rsp+98h] [rbp+20h]

  v6 = a3;
  v7 = a2;
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v34 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      12,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      a1,
      v34);
  }
  v10 = a5;
  v11 = 0;
  v12 = v6;
  v36 = v6;
  v13 = a4;
  v14 = -1073741811;
  *a5 = 0;
  if ( v6 > 0 )
  {
    while ( 1 )
    {
      if ( v11 )
      {
LABEL_13:
        v10 = a5;
        v6 = a3;
        break;
      }
      v15 = 0;
      if ( a4 )
      {
        if ( a4 == 4 )
        {
          v23 = *(_DWORD *)(v7 + 4);
          v15 = 4;
          if ( *(_DWORD *)(a1 + 84) != v23 )
          {
            v24 = *(_QWORD *)(a1 + 48);
            if ( !v24
              || *(_QWORD *)(v24 + 56) == a1
              || (CompartmentBlock = ndisIfFindCompartmentBlock(v23), (v27 = CompartmentBlock) == 0LL)
              || (*((_DWORD *)CompartmentBlock + 10) & 1) != 0 )
            {
LABEL_10:
              v9 = v14;
              goto LABEL_11;
            }
            v28 = (_QWORD *)(a1 + 16);
            v29 = *(_QWORD *)(a1 + 16);
            if ( *(_QWORD *)(v29 + 8) != a1 + 16
              || (v30 = *(_QWORD **)(a1 + 24), (_QWORD *)*v30 != v28)
              || (*v30 = v29,
                  *(_QWORD *)(v29 + 8) = v30,
                  COMPARTMENTBLOCK_DECREMENT_REF(v26),
                  v31 = (_QWORD *)((char *)v27 + 24),
                  v32 = *((_QWORD *)v27 + 3),
                  *(struct _NDIS_IF_COMPARTMENT_BLOCK **)(v32 + 8) != (struct _NDIS_IF_COMPARTMENT_BLOCK *)((char *)v27 + 24)) )
            {
              __fastfail(3u);
            }
            *v28 = v32;
            *(_QWORD *)(a1 + 24) = v31;
            *(_QWORD *)(v32 + 8) = v28;
            *v31 = v28;
            _InterlockedIncrement((volatile signed __int32 *)v27 + 11);
            v33 = *(_QWORD **)(a1 + 56);
            *(_DWORD *)(a1 + 84) = *(_DWORD *)(v7 + 4);
            *(_QWORD *)(a1 + 48) = v27;
            while ( v33 != (_QWORD *)(a1 + 56) )
            {
              *((_DWORD *)v33 - 172) = *(_DWORD *)(v7 + 4);
              v33[14] = *(_QWORD *)(a1 + 48);
              v33 = (_QWORD *)*v33;
            }
            v12 = v36;
            v14 = -1073741811;
          }
          v13 = 8;
        }
        else if ( a4 == 8 )
        {
          v22 = *(_DWORD *)(v7 + 8);
          v15 = 4;
          if ( v22 )
          {
            if ( v22 >= 0x7FFFFFF )
              goto LABEL_10;
            ndisIfReleaseSiteId(*(_DWORD *)(a1 + 88));
            *(_DWORD *)(a1 + 88) = *(_DWORD *)(v7 + 8);
          }
          v13 = 12;
        }
        else
        {
          if ( a4 == 12 )
          {
            v15 = 516;
            if ( !ndisIsValidIfStringParts((const wchar_t *)(v7 + 12), *(unsigned __int16 *)(v7 + 12)) )
              goto LABEL_10;
            v19 = (_OWORD *)(a1 + 92);
            v20 = 4LL;
            do
            {
              v21 = *v16;
              v16 += 8;
              *v19 = v21;
              v19 += 8;
              *(v19 - 7) = *(v16 - 7);
              *(v19 - 6) = *(v16 - 6);
              *(v19 - 5) = *(v16 - 5);
              *(v19 - 4) = *(v16 - 4);
              *(v19 - 3) = *(v16 - 3);
              *(v19 - 2) = *(v16 - 2);
              *(v19 - 1) = *(v16 - 1);
              --v20;
            }
            while ( v20 );
            v13 = 528;
            *(_DWORD *)v19 = *(_DWORD *)v16;
          }
          v11 = 1;
        }
      }
      else
      {
        v15 = 4;
        v13 = 4;
      }
      if ( !v9 && v15 && v12 >= v15 )
      {
        v12 += a4 - v13;
        a4 = v13;
        v36 = v12;
        goto LABEL_12;
      }
LABEL_11:
      v11 = 1;
LABEL_12:
      if ( v12 <= 0 )
        goto LABEL_13;
    }
  }
  v17 = v6 - v12;
  *v10 = v17;
  if ( !v17 )
    v9 = v14;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0xDu,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      a1,
      v7,
      v9);
  return v9;
}
