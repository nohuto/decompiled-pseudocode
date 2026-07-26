/*
 * XREFs of ?ndisWdfGetGuidToOidList@@YAXPEBKGPEAU_NDIS_GUID@@PEAG@Z @ 0x1400B0070
 * Callers:
 *     NdisWdfGetGuidToOidMap @ 0x140094AF0 (NdisWdfGetGuidToOidMap.c)
 * Callees:
 *     ndisWmiMapOids @ 0x14004DDC0 (ndisWmiMapOids.c)
 */

void __fastcall ndisWdfGetGuidToOidList(
        const unsigned int *a1,
        unsigned __int16 a2,
        struct _NDIS_GUID *a3,
        unsigned __int16 *a4)
{
  unsigned __int16 v8; // dx
  char *v9; // r10
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // r9
  __int64 v14; // r9
  __int64 v15; // rdx
  _GUID *v16; // rax
  struct _NDIS_GUID *v17; // rcx
  _GUID v18; // xmm1

  v8 = 0;
  v9 = (char *)&ndisSupportedGuids;
  v10 = 82LL;
  do
  {
    if ( (*((_DWORD *)v9 + 6) & 0x31000000) == 0x20000000 )
    {
      if ( a3 )
      {
        v11 = v8;
        a3[v11].Guid = *(_GUID *)v9;
        *(_QWORD *)&a3[v11].Oid = *((_QWORD *)v9 + 2);
        a3[v11].Flags = *((_DWORD *)v9 + 6);
      }
      ++v8;
    }
    v9 += 28;
    --v10;
  }
  while ( v10 );
  v12 = ndisWmiMapOids((__int64)a3, v8, (__int64)a1, a2, (__int64)&ndisSupportedGuids, 0x52u);
  v14 = (unsigned __int16)ndisWmiMapOids((__int64)a3, v12, (__int64)a1, v13, (__int64)&ndisMediaSupportedGuids, 0x31u);
  if ( a3 )
  {
    v15 = 8LL;
    v16 = (_GUID *)&ndisStatusSupportedGuids;
    v17 = &a3[v14];
    do
    {
      v17->Guid = *v16;
      *(_GUID *)&v17->Oid = v16[1];
      *(_GUID *)&v17[1].Guid.Data2 = v16[2];
      *(_GUID *)&v17[1].Size = v16[3];
      *(_GUID *)v17[2].Guid.Data4 = v16[4];
      *(_GUID *)&v17[2].Flags = v16[5];
      *(_GUID *)&v17[3].Guid.Data4[4] = v16[6];
      v17 = (struct _NDIS_GUID *)((char *)v17 + 128);
      v18 = v16[7];
      v16 += 8;
      *(_GUID *)&v17[-1].Guid.Data4[4] = v18;
      --v15;
    }
    while ( v15 );
    v17->Guid = *v16;
    *(_GUID *)&v17->Oid = v16[1];
    *(_QWORD *)&v17[1].Guid.Data2 = *(_QWORD *)&v16[2].Data1;
  }
  *a4 = v14 + 38;
}
