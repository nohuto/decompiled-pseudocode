/*
 * XREFs of ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1401322C0
 * Callers:
 *     zzzDecomposeDesktop @ 0x140131E78 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x140168F78 (zzzComposeDesktop.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxSendMessageBSM @ 0x1401171C0 (xxxSendMessageBSM.c)
 */

void __fastcall BroadcastCompositionChange(const struct tagDESKTOP *a1)
{
  _BYTE v2[16]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v3[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v4; // [rsp+48h] [rbp-30h]
  __int128 v5; // [rsp+58h] [rbp-20h]

  v3[0] = 8;
  v3[1] = 178;
  v4 = 0LL;
  v5 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v2);
  xxxSendMessageBSM(
    *(struct tagWND **)(*((_QWORD *)a1 + 1) + 24LL),
    0x31Eu,
    0LL,
    0LL,
    (struct tagBROADCASTSYSTEMMSGPARAMS *)v3,
    1);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v2);
}
