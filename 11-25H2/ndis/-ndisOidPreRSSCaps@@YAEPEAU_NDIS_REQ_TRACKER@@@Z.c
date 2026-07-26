/*
 * XREFs of ?ndisOidPreRSSCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140054110
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqLd @ 0x140026CC0 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qqq @ 0x140053160 (WPP_RECORDER_SF_qqq.c)
 *     memmove @ 0x1400EE080 (memmove.c)
 */

__int64 __fastcall ndisOidPreRSSCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  unsigned __int8 v4; // si
  __int64 v5; // r14
  unsigned int v7; // esi
  unsigned __int64 v8; // rcx

  v1 = *(_QWORD *)a1;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  v5 = *((_QWORD *)a1 + 3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x87u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      v1,
      v5,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  else
  {
    if ( !*(_QWORD *)a1 )
      goto LABEL_11;
    if ( *(_WORD *)(v1 + 2694) )
    {
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v3 + 48) < 0x10u )
      {
        *(_DWORD *)(v3 + 56) = 16;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      else
      {
        if ( *(_BYTE *)(v1 + 1992) )
          *(_DWORD *)(v1 + 2696) |= 0x8000000u;
        v7 = *(_DWORD *)(v3 + 48);
        v8 = v7;
        if ( v7 >= 0x14 )
          v8 = 20LL;
        if ( v8 >= *(unsigned __int16 *)(v1 + 2694) )
        {
          LOWORD(v7) = *(_WORD *)(v1 + 2694);
        }
        else if ( v7 >= 0x14 )
        {
          LOWORD(v7) = 20;
        }
        memmove(*(void **)(v3 + 40), (const void *)(v1 + 2692), (unsigned __int16)v7);
        *(_WORD *)(*(_QWORD *)(v3 + 40) + 2LL) = v7;
        *(_DWORD *)(v3 + 52) = (unsigned __int16)v7;
        *((_DWORD *)a1 + 10) = 0;
      }
    }
    else
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
  }
  v4 = 1;
LABEL_11:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x88u,
      (struct _GUID *)&WPP_4b0223d673a33a9431a2fd521e3a3c3a_Traceguids,
      v1,
      v5,
      v4,
      *((_DWORD *)a1 + 10));
  return v4;
}
