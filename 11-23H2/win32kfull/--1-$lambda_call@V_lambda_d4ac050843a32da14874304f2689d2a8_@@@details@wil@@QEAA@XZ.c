/*
 * XREFs of ??1?$lambda_call@V_lambda_d4ac050843a32da14874304f2689d2a8_@@@details@wil@@QEAA@XZ @ 0x1C013E290
 * Callers:
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C006A584 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1C011C144 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     GreGetRandomRgn @ 0x1C0131120 (GreGetRandomRgn.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0082974 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 */

void __fastcall wil::details::lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>::~lambda_call<_lambda_d4ac050843a32da14874304f2689d2a8_>(
        _BYTE *a1,
        __int64 a2,
        __int64 a3)
{
  if ( a1[8] )
  {
    a1[8] = 0;
    CPushLock::ReleaseLock((CPushLock *)(*(_QWORD *)a1 + 1112LL), a2, a3);
  }
}
