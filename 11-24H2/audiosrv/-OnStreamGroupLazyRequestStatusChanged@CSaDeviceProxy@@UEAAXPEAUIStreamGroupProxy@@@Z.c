/*
 * XREFs of ?OnStreamGroupLazyRequestStatusChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x180075980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupLazyRequestStatusChanged(
        CSaDeviceProxy *this,
        struct IStreamGroupProxy *a2)
{
  char v3; // al

  v3 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 256LL))(a2);
  CSaDeviceProxy::UpdateFormatAndPeriodicitySensitivity((CSaDeviceProxy *)((char *)this - 8), 0, 0, v3 != 0 ? 1 : -1);
}
