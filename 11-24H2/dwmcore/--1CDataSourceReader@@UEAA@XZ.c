/*
 * XREFs of ??1CDataSourceReader@@UEAA@XZ @ 0x18029191C
 * Callers:
 *     ??_ECDataSourceReader@@UEAAPEAXI@Z @ 0x1802919B0 (--_ECDataSourceReader@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x18024EA60 (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     ?UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x1802726DC (-UnregisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 *     ?EnsureRemovedFromReadyList@CDataSourceReader@@AEAAXXZ @ 0x1802919FC (-EnsureRemovedFromReadyList@CDataSourceReader@@AEAAXXZ.c)
 */

void __fastcall CDataSourceReader::~CDataSourceReader(CDataSourceReader *this)
{
  const __m128i **DataSourceProxy; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &CDataSourceReader::`vftable';
  CDataSourceReader::EnsureRemovedFromReadyList(this);
  if ( (*((_BYTE *)this + 88) & 1) != 0 )
  {
    DataSourceProxy = (const __m128i **)DataProviderManager::GetDataSourceProxy(
                                          *(DataProviderManager **)(*((_QWORD *)this + 3) + 6400LL),
                                          *((_QWORD *)this + 9),
                                          *((_QWORD *)this + 10));
    if ( DataSourceProxy )
    {
      v5 = DataSourceProxy::UnregisterReader(DataSourceProxy, this);
      if ( v5 >= 0 )
      {
LABEL_7:
        *((_BYTE *)this + 88) &= ~1u;
        goto LABEL_8;
      }
      v3 = (unsigned int)v5;
      v4 = 402LL;
    }
    else
    {
      v3 = 2147500037LL;
      v4 = 398LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)v3);
    goto LABEL_7;
  }
LABEL_8:
  CResource::~CResource(this);
}
