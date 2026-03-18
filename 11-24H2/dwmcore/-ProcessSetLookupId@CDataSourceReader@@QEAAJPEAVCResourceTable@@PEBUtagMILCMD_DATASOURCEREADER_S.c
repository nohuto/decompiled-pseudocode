/*
 * XREFs of ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x180291AA0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCDataSourceReader@@@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAPEAPEAVCDataSourceReader@@QEAPEAV2@AEBQEAV2@@Z @ 0x180205A3C (--$_Emplace_reallocate@AEBQEAVCDataSourceReader@@@-$vector@PEAVCDataSourceReader@@V-$allocator@P.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802422DC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x18024EA60 (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1802722D0 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 */

__int64 __fastcall CDataSourceReader::ProcessSetLookupId(
        CDataSourceReader *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DATASOURCEREADER_SETLOOKUPID *a3)
{
  __int64 v3; // rdx
  CDataSourceReader *v4; // rbx
  __int64 v5; // r8
  struct BamoDataSourceProxy *DataSourceProxy; // rax
  const char *v7; // r9
  struct BamoDataSourceProxy *v8; // rsi
  int v9; // eax
  int v10; // edi
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rcx
  _BYTE *v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CResourceTable *v17; // [rsp+38h] [rbp+10h] BYREF

  v17 = a2;
  v3 = *((_QWORD *)a3 + 1);
  v4 = this;
  *((_QWORD *)this + 9) = v3;
  v5 = *((_QWORD *)a3 + 2);
  *((_QWORD *)this + 10) = v5;
  DataSourceProxy = DataProviderManager::GetDataSourceProxy(
                      *(DataProviderManager **)(*((_QWORD *)this + 3) + 6400LL),
                      v3,
                      v5);
  v8 = DataSourceProxy;
  if ( DataSourceProxy && (v9 = DataSourceProxy::RegisterReader(DataSourceProxy, v4), v10 = v9, v9 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x178,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)(unsigned int)v9);
    if ( v10 == -2147024891 )
      return 0LL;
  }
  else
  {
    v10 = 0;
  }
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x45,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\datasourcereader.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  if ( !v8 )
  {
    v12 = (*((_BYTE *)v4 + 88) & 1) == 0;
    v13 = *((_QWORD *)v4 + 3);
    v17 = v4;
    v14 = *(_QWORD *)(v13 + 6400);
    if ( !v12 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x1AA,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
        v7);
    v15 = *(_BYTE **)(v14 + 112);
    if ( v15 == *(_BYTE **)(v14 + 120) )
    {
      std::vector<CDataSourceReader *>::_Emplace_reallocate<CDataSourceReader * const &>(
        (const void **)(v14 + 104),
        v15,
        &v17);
      v4 = v17;
    }
    else
    {
      *(_QWORD *)v15 = v4;
      *(_QWORD *)(v14 + 112) += 8LL;
    }
    *((_BYTE *)v4 + 88) |= 2u;
  }
  return 0LL;
}
