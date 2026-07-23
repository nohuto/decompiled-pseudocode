/*
 * XREFs of sub_140C0A680 @ 0x140C0A680
 * Callers:
 *     <none>
 * Callees:
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 */

void __fastcall sub_140C0A680(_BYTE *Parameter)
{
  Parameter[28] = sub_140BE30B0(
                    *(_DWORD *)Parameter,
                    *((_DWORD *)Parameter + 1),
                    *((_DWORD *)Parameter + 2),
                    *((_QWORD *)Parameter + 2),
                    *((_DWORD *)Parameter + 6));
}
