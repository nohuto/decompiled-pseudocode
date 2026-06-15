/*
 * XREFs of ?DumpDeviceGraph@@YAJPEBVCPipeInstance@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x14006A0E8
 * Callers:
 *     ?DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x140069ED4 (-DumpDeviceGraph@@YAJPEAVCAudioDeviceGraph@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@P.c)
 *     ?DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@3@2@Z @ 0x140069F50 (-DumpDeviceGraph@@YAJPEAVCSubmixImpl@@AEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDi.c)
 * Callees:
 *     ?GetNext@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@AEAPEAU__POSITION@@@Z @ 0x140032A94 (-GetNext@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     ??A?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@1@_K@Z @ 0x140069D64 (--A-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V-$.c)
 *     ?AddHead@?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCDisplayNode@@@Z @ 0x140069E14 (-AddHead@-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ?GetDisplayNode@@YAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@PEAVCProcessNode@@PEAPEAVCDisplayNode@@@Z @ 0x14006A7CC (-GetDisplayNode@@YAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DumpDeviceGraph(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int DisplayNode; // ebx
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  struct ATL::CAtlPlex **v10; // rax
  struct ATL::CAtlPlex **v11; // rax
  ATL::CAtlException *v13; // rbx
  ATL::CAtlException *v14; // rbx
  __int64 *v15; // [rsp+28h] [rbp-70h]
  __int64 v16; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-58h] BYREF
  ATL::CAtlException *v19; // [rsp+68h] [rbp-30h] BYREF
  ATL::CAtlException *v20; // [rsp+70h] [rbp-28h] BYREF
  int v21; // [rsp+A0h] [rbp+8h]
  int v22; // [rsp+A0h] [rbp+8h]

  DisplayNode = 0;
  v15 = *(__int64 **)(a1 + 64);
  while ( 1 )
  {
    v5 = v15;
    if ( !v15 )
      break;
    v16 = 0LL;
    v17 = 0LL;
    v6 = *v15;
    v15 = (__int64 *)*v15;
    DisplayNode = 0;
    v18 = *(_QWORD **)v5[2];
    while ( v18 )
    {
      DisplayNode = 0;
      v7 = (__int64 *)*ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetNext(v6, &v18);
      v8 = v7[3];
      if ( v8 )
      {
        DisplayNode = GetDisplayNode(a2, v8, &v16);
        if ( (DisplayNode & 0x80000000) != 0 )
          return DisplayNode;
      }
      v9 = v7[4];
      if ( v9 )
      {
        DisplayNode = GetDisplayNode(a2, v9, &v17);
        if ( (DisplayNode & 0x80000000) != 0 )
          return DisplayNode;
      }
      if ( v16 )
      {
        DisplayNode = 0;
        try
        {
          v10 = (struct ATL::CAtlPlex **)ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::operator[](
                                           a3,
                                           v7[1]);
          ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead(v10, &v16);
        }
        catch ( ATL::CAtlException *v19 )
        {
          v13 = v19;
          if ( *(_DWORD *)v19 == -1073741571 )
            _o__resetstkoflw();
          v21 = *(_DWORD *)v13;
          DisplayNode = *(_DWORD *)v13;
          if ( v21 < 0 )
            return DisplayNode;
        }
      }
      if ( v17 )
      {
        DisplayNode = 0;
        try
        {
          v11 = (struct ATL::CAtlPlex **)ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::operator[](
                                           a4,
                                           v7[1]);
          ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>::AddHead(v11, &v17);
        }
        catch ( ATL::CAtlException *v20 )
        {
          v14 = v20;
          if ( *(_DWORD *)v20 == -1073741571 )
            _o__resetstkoflw();
          v22 = *(_DWORD *)v14;
          DisplayNode = *(_DWORD *)v14;
          if ( v22 < 0 )
            return DisplayNode;
        }
      }
    }
  }
  return DisplayNode;
}
