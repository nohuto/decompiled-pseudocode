/*
 * XREFs of SmPageWrite @ 0x1402F5950
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     SmpKeyedStoreReference @ 0x14020D9B4 (SmpKeyedStoreReference.c)
 *     SmKmStoreDereference @ 0x14022FA28 (SmKmStoreDereference.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@PEAU_SMKM_WRITE_QUEUE_CONTEXT@@@Z @ 0x1402F5B40 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxQueueEntries@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_QUEUE@@@Z @ 0x1404918B0 (-SmCompressCtxQueueEntries@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_PF_.c)
 */

__int64 __fastcall SmPageWrite(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // r15
  int v5; // edi
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v13; // [rsp+48h] [rbp-18h]
  unsigned int v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+54h] [rbp-Ch]
  __int64 v16; // [rsp+90h] [rbp+30h]
  int v17; // [rsp+A0h] [rbp+40h] BYREF

  v15 = 0;
  v3 = *(_QWORD *)(a1 + 24);
  v4 = 0LL;
  v12 = 0LL;
  v5 = -1;
  v6 = a2 + ((unsigned __int64)a3 << 6);
  v13 = &v12;
  v14 = (unsigned __int16)KeNumberNodes;
  if ( a2 >= v6 )
    return 259LL;
  v7 = a2 + 16;
  do
  {
    v17 = *(_DWORD *)(v7 - 12);
    v16 = *(_QWORD *)(v7 + 16);
    if ( (*(_DWORD *)v7 & 3) != 0 || (*(_DWORD *)(v3 + 2224) & 0x800) != 0 && *(_QWORD *)v7 > 0x7FFFFFFEFFFFuLL )
    {
LABEL_9:
      v9 = v16;
      goto LABEL_10;
    }
    if ( v4 == *(_QWORD *)(v7 - 8) )
    {
      v9 = v5 & 0x3FF | v16 & 0xFFFFF800;
      LODWORD(v16) = v9;
    }
    else
    {
      if ( v5 != -1 )
      {
        SmKmStoreDereference(v3, v5);
        v4 = 0LL;
      }
      v8 = SmpKeyedStoreReference((volatile signed __int64 *)(v3 + 2232), v3);
      v5 = v8;
      if ( v8 == -1 )
        goto LABEL_9;
      v4 = *(_QWORD *)(v7 - 8);
      v9 = v8 & 0x3FF | v16 & 0xFFFFF800;
      LODWORD(v16) = v9;
    }
LABEL_10:
    if ( (v9 & 0x7FF) != 0x400 )
      goto LABEL_13;
    if ( *(_DWORD *)(v3 + 2272) != -1 )
    {
      LODWORD(v16) = v9 & 0xFFFFF800 | *(_DWORD *)(v3 + 2272) & 0x3FF;
LABEL_13:
      v10 = SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(
              v3,
              (unsigned int)&v17,
              v16,
              *(_QWORD *)(v7 + 24),
              *(_QWORD *)(v7 + 32) & 0x7FFFFFFFFFFFFFFFLL,
              *(_QWORD *)(v7 + 40),
              (__int64)&v12);
      goto LABEL_14;
    }
    v10 = -1073741285;
LABEL_14:
    *(_DWORD *)(v7 - 16) = v10;
    v7 += 64LL;
  }
  while ( v7 - 16 < v6 );
  if ( v13 != &v12 )
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressCtxQueueEntries((PEX_SPIN_LOCK)(*(_QWORD *)(v3 + 1280) + 176LL * v14));
  if ( v5 != -1 )
    SmKmStoreDereference(v3, v5);
  return 259LL;
}
