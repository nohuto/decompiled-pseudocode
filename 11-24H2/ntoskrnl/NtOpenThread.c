/*
 * XREFs of NtOpenThread @ 0x14083F650
 * Callers:
 *     <none>
 * Callees:
 *     PsOpenThread @ 0x14083F680 (PsOpenThread.c)
 */

__int64 __fastcall NtOpenThread(int a1, int a2, int a3, int a4)
{
  char PreviousMode; // [rsp+20h] [rbp-18h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  return PsOpenThread(a1, a2, a3, a4, PreviousMode, PreviousMode);
}
