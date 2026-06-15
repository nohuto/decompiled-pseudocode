/*
 * XREFs of ??R?$default_delete@USaDeviceParams@@@std@@QEBAXPEAUSaDeviceParams@@@Z @ 0x1800276C4
 * Callers:
 *     ??1?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180076FFC (--1-$out_param_t@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@.c)
 * Callees:
 *     ??1SaDeviceParams@@QEAA@XZ @ 0x180027A34 (--1SaDeviceParams@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::default_delete<SaDeviceParams>::operator()(__int64 a1, SaDeviceParams *a2)
{
  if ( a2 )
  {
    SaDeviceParams::~SaDeviceParams(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x70);
  }
}
