/*
 * XREFs of WmipLinkDataSourceToList @ 0x1409B19AC
 * Callers:
 *     WmipUpdateAddGuid @ 0x1407A5F20 (WmipUpdateAddGuid.c)
 *     WmipAddDataSource @ 0x1409B01A8 (WmipAddDataSource.c)
 * Callees:
 *     WmipRegisterEtwProvider @ 0x1407A590C (WmipRegisterEtwProvider.c)
 *     WmipAllocGuidEntry @ 0x1409AFDEC (WmipAllocGuidEntry.c)
 *     WmipFindGEByGuid @ 0x1409B2884 (WmipFindGEByGuid.c)
 */

__int64 __fastcall WmipLinkDataSourceToList(__int64 a1, char a2, __int64 a3)
{
  _QWORD *v3; // r15
  _QWORD *v5; // r14
  unsigned int v8; // esi
  _QWORD *v9; // rdi
  _QWORD *GEByGuid; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx

  v3 = (_QWORD *)(a1 + 40);
  v5 = *(_QWORD **)(a1 + 40);
  v8 = 0;
  while ( v5 != v3 )
  {
    v9 = v5 - 5;
    if ( (*(_DWORD *)(v5 - 3) & 8) != 0 )
    {
      GEByGuid = (_QWORD *)WmipFindGEByGuid(v9[7], 0LL);
      if ( !GEByGuid )
      {
        GEByGuid = WmipAllocGuidEntry();
        if ( !GEByGuid )
          return (unsigned int)-1073741670;
        v15 = WmipGEHeadPtr;
        *(_OWORD *)(GEByGuid + 9) = *(_OWORD *)v9[7];
        v16 = *(_QWORD *)v15;
        if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 )
          goto LABEL_6;
        *GEByGuid = v16;
        GEByGuid[1] = v15;
        *(_QWORD *)(v16 + 8) = GEByGuid;
        *(_QWORD *)v15 = GEByGuid;
      }
      *((_DWORD *)v9 + 4) &= ~8u;
      v9[7] = GEByGuid;
      v11 = (_QWORD *)GEByGuid[8];
      if ( (_QWORD *)*v11 != GEByGuid + 7 )
        goto LABEL_6;
      *v9 = GEByGuid + 7;
      v9[1] = v11;
      *v11 = v9;
      GEByGuid[8] = v9;
      ++*((_DWORD *)GEByGuid + 9);
      if ( (v9[2] & 0x80000) != 0 )
        WmipRegisterEtwProvider((__int64)(v5 - 5), a3);
    }
    v5 = (_QWORD *)*v5;
  }
  if ( a2 )
  {
    v12 = WmipDSHeadPtr;
    *(_DWORD *)(a1 + 16) |= 0x40000000u;
    v13 = *(_QWORD **)(v12 + 8);
    if ( *v13 != v12 )
LABEL_6:
      __fastfail(3u);
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = v13;
    *v13 = a1;
    *(_QWORD *)(v12 + 8) = a1;
  }
  return v8;
}
