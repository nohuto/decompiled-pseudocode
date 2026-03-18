/*
 * XREFs of ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1402FED68
 * Callers:
 *     GreGetRandomRgn @ 0x140038FA0 (GreGetRandomRgn.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x140259240 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 * Callees:
 *     ?W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140076B14 (-W32AcquirePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 */

__int64 __fastcall DC::AcquireDcVisRgnShared(DC *this, __int64 a2)
{
  __int64 result; // rax

  W32AcquirePushLockShared((DC *)((char *)this + 1112));
  *(_QWORD *)a2 = this;
  result = a2;
  *(_BYTE *)(a2 + 8) = 1;
  return result;
}
