/*
 * XREFs of ?CombinedGeometryUpdate@CChannel@@UEAAJIW4Enum@MilCombineMode@@II@Z @ 0x18021BDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182DE0 (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180182E5C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180183860 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::CombinedGeometryUpdate(
        __int64 a1,
        unsigned int a2,
        int a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // r15
  unsigned int v10; // ebx
  _DWORD v12[14]; // [rsp+20h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(a1 + 64);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
  CChannel::CheckHandle(a1, a2, 27);
  CChannel::CheckOptionalHandle(a1, a4, 66);
  CChannel::CheckOptionalHandle(a1, a5, 66);
  v12[0] = 443;
  v12[1] = a2;
  v12[2] = a3;
  v12[3] = a4;
  v12[4] = a5;
  v10 = CChannel::SendCommand((struct CCommandBatch **)a1, v12, 0x14u);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 80LL))(v5);
  return v10;
}
