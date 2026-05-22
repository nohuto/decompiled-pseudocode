/*
 * XREFs of ?OnConnected@LightDismissClientProxy@@MEAAJXZ @ 0x18015BD20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@?$vector@PEAVLightDismissClientProxy@@V?$allocator@PEAVLightDismissClientProxy@@@std@@@std@@AEAAPEAPEAVLightDismissClientProxy@@QEAPEAV2@AEBQEAV2@@Z @ 0x18015BECC (--$_Emplace_reallocate@AEBQEAVLightDismissClientProxy@@@-$vector@PEAVLightDismissClientProxy@@V-.c)
 */

__int64 __fastcall LightDismissClientProxy::OnConnected(LightDismissClientProxy *this)
{
  LightDismissClientProxy *v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = this;
  if ( qword_180246F50 == qword_180246F58 )
  {
    std::vector<LightDismissClientProxy *>::_Emplace_reallocate<LightDismissClientProxy * const &>(
      this,
      qword_180246F50,
      &v2);
  }
  else
  {
    *(_QWORD *)qword_180246F50 = this;
    qword_180246F50 += 8LL;
  }
  return 0LL;
}
