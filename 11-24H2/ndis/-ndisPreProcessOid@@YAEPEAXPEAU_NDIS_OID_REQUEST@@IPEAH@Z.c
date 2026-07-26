/*
 * XREFs of ?ndisPreProcessOid@@YAEPEAXPEAU_NDIS_OID_REQUEST@@IPEAH@Z @ 0x140016320
 * Callers:
 *     ?ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000A5A0 (-ndisMDoOidRequest@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140016530 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140050710 (-ndisOidPreSupportedList@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ndisPreProcessOid(_DWORD *a1, struct _NDIS_OID_REQUEST *a2, int a3, int *a4)
{
  unsigned __int8 v4; // si
  int v5; // r11d
  unsigned int v10; // r8d
  unsigned int v11; // eax
  _DWORD *v12; // rcx
  NDIS_OID Oid; // r10d
  unsigned int v14; // r9d
  __int64 v15; // rdx
  int v16; // r8d
  _DWORD *v17; // rcx
  bool v18; // zf
  UCHAR *v19; // r8
  __int64 (__fastcall *v20)(__int128 *, __int64, UCHAR *); // rax
  __int64 result; // rax
  UINT Timeout; // eax
  unsigned int v23; // ecx
  __int128 v24; // [rsp+20h] [rbp-48h] BYREF
  __int128 v25; // [rsp+30h] [rbp-38h]
  __int128 v26; // [rsp+40h] [rbp-28h]

  v4 = 0;
  v5 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( a3 == 17 )
  {
    Timeout = a2->Timeout;
    if ( Timeout < 0x3C )
    {
      v23 = a1[94];
      if ( v23 )
        *((_WORD *)a1 + 911) = (v23 + Timeout - 1) / v23;
    }
  }
  *(_DWORD *)&a2->NdisReserved[16] &= ~4u;
  v10 = 0;
  v11 = 73;
  if ( *(_BYTE *)a1 == 17 )
    v12 = a1;
  else
    v12 = (_DWORD *)*((_QWORD *)a1 + 4);
  if ( !a2->PortNumber || (v12[468] & 0x200) == 0 )
  {
    Oid = a2->DATA.QUERY_INFORMATION.Oid;
    v14 = 146;
    while ( v11 <= v14 && v11 >= v10 )
    {
      if ( *((_DWORD *)&unk_1400F2000 + 6 * v11) > Oid )
      {
        if ( !v11 )
          break;
        v14 = v11 - 1;
        v11 = v10 + ((v11 - v10) >> 1);
      }
      else
      {
        if ( *((_DWORD *)&unk_1400F2000 + 6 * v11) == Oid )
        {
          *(_DWORD *)&a2->NdisReserved[20] = v11;
          v15 = *(unsigned int *)&a2->NdisReserved[16];
          v16 = *(_DWORD *)&a2->NdisReserved[16] | 4;
          *(_QWORD *)&v25 = 0LL;
          HIDWORD(v26) = 0;
          *(_DWORD *)&a2->NdisReserved[16] = v16;
          if ( a3 == 17 )
          {
            *(_QWORD *)&v24 = a1;
          }
          else
          {
            v17 = 0LL;
            if ( a3 == 5 )
              v17 = a1;
            *(_QWORD *)&v25 = v17;
          }
          v18 = (v16 & 0x220) == 0;
          *(_QWORD *)&v26 = a2;
          v19 = &a2->NdisReserved[32];
          if ( v18 )
            *((_QWORD *)&v25 + 1) = 0LL;
          else
            *((_QWORD *)&v25 + 1) = *(_QWORD *)v19;
          if ( (v15 & 0x40) != 0 )
            *((_QWORD *)&v24 + 1) = *(_QWORD *)v19;
          else
            *((_QWORD *)&v24 + 1) = 0LL;
          DWORD2(v26) = 0;
          if ( (v15 & 0x840080) == 0 )
          {
            v20 = (__int64 (__fastcall *)(__int128 *, __int64, UCHAR *))*(&funcs_140016468 + 3 * v11);
            if ( v20 )
            {
              v4 = v20(&v24, v15, v19);
              if ( v4 == 1 )
              {
                HIDWORD(v26) |= 4u;
                ndisOidRequestComplete((struct _NDIS_REQ_TRACKER *)&v24);
                v5 = 259;
              }
              else
              {
                v5 = DWORD2(v26);
              }
            }
          }
          break;
        }
        v10 = v11 + 1;
        v11 += 1 + ((v14 - v11) >> 1);
      }
    }
  }
  result = v4;
  *a4 = v5;
  return result;
}
