/*
 * XREFs of MiApplyImageHotPatchDpc @ 0x140B65330
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalCallDpcSynchronize @ 0x1404282B0 (KeSignalCallDpcSynchronize.c)
 *     RtlApplyHotPatch @ 0x140B65BA0 (RtlApplyHotPatch.c)
 */

__int64 __fastcall MiApplyImageHotPatchDpc(__int64 a1, _QWORD *a2, volatile signed __int32 *a3, unsigned __int64 a4)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 result; // rax
  char v10; // [rsp+28h] [rbp-D0h]
  int v11; // [rsp+48h] [rbp-B0h]
  int v12; // [rsp+78h] [rbp-80h]
  int v13; // [rsp+C8h] [rbp-30h]
  __int64 v14; // [rsp+D0h] [rbp-28h]
  __int64 v15; // [rsp+D8h] [rbp-20h]
  int v16; // [rsp+E0h] [rbp-18h]

  v7 = KeSignalCallDpcSynchronize(a4, (__int64)a2);
  v8 = 0LL;
  if ( v7 )
    *((_DWORD *)a2 + 11) = RtlApplyHotPatch(
                             *(_QWORD *)(*a2 + 72LL),
                             *(_QWORD *)(*a2 + 8LL),
                             *(_QWORD *)(*a2 + 80LL),
                             *(_DWORD *)(*a2 + 36LL),
                             (__int64)(a2 + 5),
                             v10,
                             *(_QWORD *)(*a2 + 144LL),
                             *(_DWORD *)(*a2 + 152LL),
                             0LL,
                             v11,
                             *(_QWORD *)(a2[1] + 72LL),
                             *(_QWORD *)(a2[1] + 8LL),
                             0LL,
                             0,
                             0LL,
                             v12,
                             0LL,
                             0,
                             a2[2],
                             a2[3],
                             1,
                             *(_WORD *)(*a2 + 136LL),
                             *(PRTL_BITMAP *)(*a2 + 40LL),
                             a2[4],
                             0LL,
                             v13,
                             v14,
                             v15,
                             v16);
  result = KeSignalCallDpcSynchronize(a4, v8);
  _InterlockedDecrement(a3);
  return result;
}
