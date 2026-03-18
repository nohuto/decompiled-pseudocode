/*
 * XREFs of sub_140C08680 @ 0x140C08680
 * Callers:
 *     <none>
 * Callees:
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 */

void __fastcall sub_140C08680(_BYTE *Parameter)
{
  Parameter[28] = sub_140BE10B0(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}
