/*
 * XREFs of ?OnInputConfigChanged@SystemContextEndpoint@@UEAAJPEAVBamoSystemContextEndpointStub@@PEBQEAVBamoInputSpacePayloadProxy@@I@Z @ 0x1800AB200
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x18000BE80 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ?OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@@Z @ 0x18000BED4 (-OnInputConfigPayloadReceived@InputConfigContextProvider@@QEAAXAEBV-$vector@UINPUT_SPACE_PAYLOAD.c)
 *     ?GetInstance@InputConfigContextProvider@@SAPEAV1@XZ @ 0x18000F93C (-GetInstance@InputConfigContextProvider@@SAPEAV1@XZ.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180057D70 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAPEAUINPUT_SPACE_PAYLOAD@@QEAU2@AEAU2@@Z @ 0x1800AA604 (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UIN.c)
 *     ??$_Reallocate@$0A@@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800AA728 (--$_Reallocate@$0A@@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemContextEndpoint::OnInputConfigChanged(
        SystemContextEndpoint *this,
        struct BamoSystemContextEndpointStub *a2,
        struct BamoInputSpacePayloadProxy *const *a3,
        unsigned int a4)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  struct BamoInputSpacePayloadProxy *const *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rax
  InputConfigContextProvider *Instance; // rax
  int v12; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v13[2]; // [rsp+28h] [rbp-48h] BYREF
  __int128 v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-28h]
  __int128 v16; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v17; // [rsp+60h] [rbp-10h]

  v14 = 0LL;
  v15 = 0LL;
  v5 = a4;
  v13[0] = a4;
  if ( a4 )
    std::vector<INPUT_SPACE_PAYLOAD>::_Reallocate<0>((__int64)&v14, v13);
  gsl::details::extent_type<-1>::extent_type<-1>(v13, v5);
  if ( v13[0] == -1LL || !a3 && v13[0] )
  {
    _o_terminate(v6);
    JUMPOUT(0x1800AB36ALL);
  }
  v7 = &a3[v13[0]];
  if ( a3 != v7 )
  {
    v8 = *((_QWORD *)&v14 + 1);
    do
    {
      v9 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)*a3 + 1) + 24LL))((char *)*a3 + 8);
      *(_QWORD *)&v16 = *(_QWORD *)v9;
      DWORD2(v16) = *(_DWORD *)(v9 + 8);
      v13[0] = 0LL;
      v12 = 0;
      (*(void (__fastcall **)(char *, unsigned __int64 *, int *))(*((_QWORD *)*a3 + 1) + 32LL))(
        (char *)*a3 + 8,
        v13,
        &v12);
      v17 = v13[0];
      HIDWORD(v16) = v12;
      if ( v8 == v15 )
      {
        std::vector<INPUT_SPACE_PAYLOAD>::_Emplace_reallocate<INPUT_SPACE_PAYLOAD &>(
          (const void **)&v14,
          (_BYTE *)v8,
          (__int64)&v16);
        v8 = *((_QWORD *)&v14 + 1);
      }
      else
      {
        *(_OWORD *)v8 = v16;
        *(_QWORD *)(v8 + 16) = v17;
        v8 += 24LL;
        *((_QWORD *)&v14 + 1) = v8;
      }
      ++a3;
    }
    while ( a3 != v7 );
  }
  Instance = InputConfigContextProvider::GetInstance();
  InputConfigContextProvider::OnInputConfigPayloadReceived(Instance, (__int64 *)&v14);
  std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((__int64 *)&v14);
  return 0LL;
}
