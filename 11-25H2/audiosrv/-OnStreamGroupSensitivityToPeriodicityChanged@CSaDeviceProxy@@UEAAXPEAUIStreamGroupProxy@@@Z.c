/*
 * XREFs of ?OnStreamGroupSensitivityToPeriodicityChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18007F220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupSensitivityToPeriodicityChanged(
        CSaDeviceProxy *this,
        struct IStreamGroupProxy *a2)
{
  *((_DWORD *)this + 27) += (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 240LL))(a2) != 0
                          ? 1
                          : -1;
  *((_QWORD *)this + 15) = GetTickCount64();
}
