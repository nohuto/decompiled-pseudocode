/*
 * XREFs of ?AveragePoint@@YA?AUPoint@Foundation@Windows@@PEBUInputInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@Z @ 0x1801A7168
 * Callers:
 *     ?DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801A72A0 (-DeliverInput@MagnifierGestureTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801A7440 (-DeliverInput@MagnifierToggleTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180057F60 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?GetRelativePoint@InputSite@@QEAA?AV?$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z @ 0x18009032C (-GetRelativePoint@InputSite@@QEAA-AV-$tuple@UPoint@Foundation@Windows@@_N@std@@AEBUtagPOINT@@@Z.c)
 *     ??$?4UPoint@Foundation@Windows@@_N$0A@@?$tuple@AEAUPoint@Foundation@Windows@@AEBU_Ignore@std@@@std@@QEAAAEAV01@$$QEAV?$tuple@UPoint@Foundation@Windows@@_N@1@@Z @ 0x1801A7150 (--$-4UPoint@Foundation@Windows@@_N$0A@@-$tuple@AEAUPoint@Foundation@Windows@@AEBU_Ignore@std@@@s.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AveragePoint(__int64 a1, __int64 *a2)
{
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  int v6; // edx
  int v7; // r9d
  _DWORD *v8; // rbx
  __int64 RelativePoint; // rax
  __int64 v10; // xmm6_8
  __int64 v11; // rcx
  char v13[16]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v15; // [rsp+70h] [rbp+20h] BYREF
  __int64 *v16; // [rsp+78h] [rbp+28h]
  __int64 v17; // [rsp+80h] [rbp+30h] BYREF

  v16 = a2;
  v15 = 0LL;
  v17 = 0LL;
  v3 = (_DWORD *)(a1 + 320);
  gsl::details::extent_type<-1>::extent_type<-1>(v14, *(unsigned int *)(a1 + 316));
  if ( v14[0] == -1LL || !v3 && v14[0] )
  {
    _o_terminate(v4);
    JUMPOUT(0x1801A7292LL);
  }
  v5 = &v3[36 * v14[0]];
  v6 = 0;
  v7 = HIDWORD(v15);
  if ( v3 != v5 )
  {
    v8 = v3 + 13;
    v6 = v15;
    do
    {
      v6 += *(v8 - 1);
      v7 += *v8;
      v8 += 36;
    }
    while ( v8 - 13 != v5 );
  }
  LODWORD(v15) = v6 / SLODWORD(v14[0]);
  HIDWORD(v15) = v7 / SLODWORD(v14[0]);
  if ( *a2 )
  {
    RelativePoint = InputSite::GetRelativePoint(*a2, (__int64)v13, (__int64)&v15);
    v14[0] = &std::ignore;
    v14[1] = &v17;
    std::tuple<Windows::Foundation::Point &,std::_Ignore const &>::operator=<Windows::Foundation::Point,bool,0>(
      (__int64)v14,
      RelativePoint);
  }
  else
  {
    *(float *)&v17 = (float)(v6 / SLODWORD(v14[0]));
    *((float *)&v17 + 1) = (float)(v7 / SLODWORD(v14[0]));
  }
  v10 = v17;
  v11 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v10;
}
