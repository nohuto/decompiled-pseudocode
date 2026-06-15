/*
 * XREFs of ?OnStreamGroupDisconnected@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x18006EB60
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHHH@Z @ 0x18006C078 (-UpdateFormatAndPeriodicitySensitivity@CSaDeviceProxy@@IEAAXHHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupDisconnected(CSaDeviceProxy *this, struct IStreamGroupProxy *a2)
{
  int v4; // edi
  int v5; // ebx
  char v6; // al

  if ( (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 248LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 240LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 256LL))(a2) )
  {
    v4 = -((*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 256LL))(a2) != 0);
    v5 = -((*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 240LL))(a2) != 0);
    v6 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 248LL))(a2);
    CSaDeviceProxy::UpdateFormatAndPeriodicitySensitivity((CSaDeviceProxy *)((char *)this - 8), -(v6 != 0), v5, v4);
  }
  --*((_DWORD *)this + 26);
}
