/*
 * XREFs of HmgDecProcessHandleCount @ 0x140084620
 * Callers:
 *     HmgInsertObjectInternal @ 0x14001E500 (HmgInsertObjectInternal.c)
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     GreSetBrushOwner @ 0x1400857A0 (GreSetBrushOwner.c)
 *     HmgAllocFast @ 0x1401C21B0 (HmgAllocFast.c)
 *     ?GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x1401C5800 (-GreSetDCOwnerExFastOpt@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 * Callees:
 *     HmgDecProcessHandleCountFastOpt @ 0x1401C4E28 (HmgDecProcessHandleCountFastOpt.c)
 */

__int64 __fastcall HmgDecProcessHandleCount(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 SessionState; // rax

  v1 = a1;
  SessionState = W32GetSessionState(a1);
  return HmgDecProcessHandleCountFastOpt(*(_QWORD *)(SessionState + 88), v1);
}
