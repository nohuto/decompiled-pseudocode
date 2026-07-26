/*
 * XREFs of ?ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400AAE90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140015A90 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x14003E6D0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     memmove @ 0x1400E7200 (memmove.c)
 */

char __fastcall ndisOidPreReceiveFilterCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  int v2; // ebx
  __int64 v3; // r15
  char v5; // di
  __int64 v6; // rax
  char v7; // xmm2_1
  unsigned __int16 *v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // rax
  char v14[4]; // [rsp+40h] [rbp-B8h]
  __m128i v15; // [rsp+50h] [rbp-A8h]
  void *Src[2]; // [rsp+80h] [rbp-78h]
  __int64 v17; // [rsp+90h] [rbp-68h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0;
  v3 = *((_QWORD *)a1 + 3);
  v5 = 0;
  v6 = ndisCaptureIovOidContext(&v17, a1);
  v15 = *(__m128i *)v6;
  *(_OWORD *)Src = *(_OWORD *)(v6 + 48);
  v7 = _mm_srli_si128(*(__m128i *)v6, 8).m128i_u8[0];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xAu,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      v7,
      v3,
      v1);
  if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) < 0x38u )
    {
      *(_DWORD *)(v1 + 56) = 56;
      v2 = -1073676268;
      v5 = 1;
      goto LABEL_21;
    }
    if ( !v15.m128i_i8[0] )
      goto LABEL_22;
    if ( *(_DWORD *)(v1 + 32) == 66081 )
      v8 = (unsigned __int16 *)Src[0];
    else
      v8 = (unsigned __int16 *)Src[1];
    if ( v8 )
    {
      v9 = v8[1];
      if ( v8[1] >= 0x54u )
        v9 = 84;
      v10 = *(_DWORD *)(v1 + 48);
      if ( v9 < v10 )
        v10 = v9;
      v11 = v10;
      memmove(*(void **)(v1 + 40), v8, v10);
      v12 = *(_QWORD *)(v1 + 40);
      v5 = 1;
      if ( v11 < 0x54 )
      {
        if ( v11 >= 0x38 )
        {
          *(_BYTE *)(v12 + 1) = 1;
          *(_WORD *)(v12 + 2) = 56;
        }
      }
      else
      {
        *(_BYTE *)(v12 + 1) = 2;
        *(_WORD *)(v12 + 2) = 84;
      }
      *(_DWORD *)(v1 + 52) = v11;
      goto LABEL_21;
    }
  }
  v5 = 1;
  v2 = -1073741637;
LABEL_21:
  *((_DWORD *)a1 + 10) = v2;
LABEL_22:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = v2;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_784cc1ad24013d3c90a83e5ec182860f_Traceguids,
      v7,
      v3,
      v5,
      *(_DWORD *)v14);
  }
  return v5;
}
