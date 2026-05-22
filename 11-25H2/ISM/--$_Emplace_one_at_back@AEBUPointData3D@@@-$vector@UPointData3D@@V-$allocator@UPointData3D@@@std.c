/*
 * XREFs of ??$_Emplace_one_at_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@AEAAAEAUPointData3D@@AEBU2@@Z @ 0x1800BB6F4
 * Callers:
 *     _lambda_dd0ac130d9769d2b3db8f6249ecd131b_::operator() @ 0x18007CB8C (_lambda_dd0ac130d9769d2b3db8f6249ecd131b_--operator().c)
 *     ?GetPoints@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1800C1DB0 (-GetPoints@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@V-$.c)
 *     ?GetPoints@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1801B2280 (-GetPoints@MPCVoiceProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@V-.c)
 *     ?GetPoints@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1801B4410 (-GetPoints@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@V.c)
 *     ?GetPoints@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1801B7690 (-GetPoints@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@.c)
 *     ?GetPoints@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1801BAB40 (-GetPoints@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@V-.c)
 *     ?GetPoints@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@@Z @ 0x1801BD050 (-GetPoints@MPCClickerProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAV-$vector@UPointData3D@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<PointData3D>::_Emplace_one_at_back<PointData3D const &>(__int64 a1, _OWORD *a2)
{
  _OWORD *v3; // rdx
  _OWORD *v4; // rdx
  __int128 v5; // xmm0
  _OWORD *v6; // r8
  __int64 result; // rax

  v3 = *(_OWORD **)(a1 + 8);
  if ( v3 == *(_OWORD **)(a1 + 16) )
    return std::vector<PointData3D>::_Emplace_reallocate<PointData3D const &>(a1, v3, a2, a1);
  *v3 = *a2;
  v3[1] = a2[1];
  v3[2] = a2[2];
  v3[3] = a2[3];
  v3[4] = a2[4];
  v3[5] = a2[5];
  v3[6] = a2[6];
  v4 = v3 + 8;
  v5 = a2[7];
  v6 = a2 + 8;
  *(v4 - 1) = v5;
  *v4 = *v6;
  v4[1] = v6[1];
  v4[2] = v6[2];
  *((_QWORD *)v4 + 6) = *((_QWORD *)v6 + 6);
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = result + 184;
  return result;
}
