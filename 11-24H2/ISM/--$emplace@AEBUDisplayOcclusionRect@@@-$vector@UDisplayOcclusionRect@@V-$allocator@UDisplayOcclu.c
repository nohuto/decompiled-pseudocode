/*
 * XREFs of ??$emplace@AEBUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDisplayOcclusionRect@@@std@@@std@@@1@AEBUDisplayOcclusionRect@@@Z @ 0x180139DA0
 * Callers:
 *     ?RemoteInsert@?$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UDisplayOcclusionRect@@AEBU6@@Bamo@Microsoft@@MEAAJIAEBUDisplayOcclusionRect@@@Z @ 0x18013A570 (-RemoteInsert@-$ListProxySimpleCommon@VBamoList_DisplayOcclusionRect_Proxy@ISMBamos_AutoBamos@Li.c)
 *     ?InsertWorker@?$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_DisplayOcclusionRect_Stub@2345@UDisplayOcclusionRect@@AEBU8@@Bamo@Microsoft@@AEAAJPEAVBaseBamoConnection@23@IAEBUDisplayOcclusionRect@@@Z @ 0x18013D548 (-InsertWorker@-$ListPrincipalSimpleCommon@VBamoList_DisplayOcclusionRect_Principal@ISMBamos_Auto.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAPEAUDisplayOcclusionRect@@QEAU2@AEAU2@@Z @ 0x180139BF8 (--$_Emplace_reallocate@AEAUDisplayOcclusionRect@@@-$vector@UDisplayOcclusionRect@@V-$allocator@U.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

char **__fastcall std::vector<DisplayOcclusionRect>::emplace<DisplayOcclusionRect const &>(
        __int64 a1,
        char **a2,
        __int64 a3,
        _OWORD *a4)
{
  _OWORD *v6; // rcx
  _OWORD *v8; // rcx
  __int128 v10; // [rsp+28h] [rbp-C0h]
  __int128 v11; // [rsp+38h] [rbp-B0h]
  __int128 v12; // [rsp+48h] [rbp-A0h]
  __int128 v13; // [rsp+58h] [rbp-90h]
  __int128 v14; // [rsp+68h] [rbp-80h]
  __int128 v15; // [rsp+78h] [rbp-70h]
  __int128 v16; // [rsp+88h] [rbp-60h]
  __int128 v17; // [rsp+98h] [rbp-50h]
  __int128 v18; // [rsp+A8h] [rbp-40h]
  __int128 v19; // [rsp+B8h] [rbp-30h]
  __int128 v20; // [rsp+C8h] [rbp-20h]

  v6 = *(_OWORD **)(a1 + 8);
  if ( v6 == *(_OWORD **)(a1 + 16) )
  {
    *a2 = std::vector<DisplayOcclusionRect>::_Emplace_reallocate<DisplayOcclusionRect &>(
            (const void **)a1,
            (_BYTE *)a3,
            a4);
  }
  else
  {
    if ( (_OWORD *)a3 == v6 )
    {
      *v6 = *a4;
      v6[1] = a4[1];
      v6[2] = a4[2];
      v6[3] = a4[3];
      v6[4] = a4[4];
      v6[5] = a4[5];
      v6[6] = a4[6];
      v8 = v6 + 8;
      *(v8 - 1) = a4[7];
      *v8 = a4[8];
      v8[1] = a4[9];
      v8[2] = a4[10];
      *(_QWORD *)(a1 + 8) += 176LL;
    }
    else
    {
      v10 = *a4;
      v11 = a4[1];
      v12 = a4[2];
      v13 = a4[3];
      v14 = a4[4];
      v15 = a4[5];
      v16 = a4[6];
      v17 = a4[7];
      v18 = a4[8];
      v19 = a4[9];
      v20 = a4[10];
      *v6 = *(v6 - 11);
      v6[1] = *(v6 - 10);
      v6[2] = *(v6 - 9);
      v6[3] = *(v6 - 8);
      v6[4] = *(v6 - 7);
      v6[5] = *(v6 - 6);
      v6[6] = *(v6 - 5);
      v6[7] = *(v6 - 4);
      v6[8] = *(v6 - 3);
      v6[9] = *(v6 - 2);
      v6[10] = *(v6 - 1);
      *(_QWORD *)(a1 + 8) += 176LL;
      memmove_0((void *)(a3 + 176), (const void *)a3, (size_t)v6 - a3 - 176);
      *(_OWORD *)a3 = v10;
      *(_OWORD *)(a3 + 16) = v11;
      *(_OWORD *)(a3 + 32) = v12;
      *(_OWORD *)(a3 + 48) = v13;
      *(_OWORD *)(a3 + 64) = v14;
      *(_OWORD *)(a3 + 80) = v15;
      *(_OWORD *)(a3 + 96) = v16;
      *(_OWORD *)(a3 + 112) = v17;
      *(_OWORD *)(a3 + 128) = v18;
      *(_OWORD *)(a3 + 144) = v19;
      *(_OWORD *)(a3 + 160) = v20;
    }
    *a2 = (char *)a3;
  }
  return a2;
}
