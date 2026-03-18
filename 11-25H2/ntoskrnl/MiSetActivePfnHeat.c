/*
 * XREFs of MiSetActivePfnHeat @ 0x1403FA970
 * Callers:
 *     MmSetPfnListInfo @ 0x140221CC4 (MmSetPfnListInfo.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140231A30 (MiUpdatePfnForPrefetchByPte.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiMakeTransitionHeatBatch @ 0x1404F4FB0 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetActivePfnHeat(__int64 a1, int a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 result; // rax
  __int64 v8; // rax
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r11
  __int64 v11; // rdx

  if ( a2 && (*(_BYTE *)(a1 + 34) & 7) != 6 )
    _InterlockedIncrement(&dword_140E35A14);
  v3 = a1 + 16;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v8 = v4;
    if ( (v4 & 1) != 0 && ((v4 & 0x42) == 0 || (v4 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v11 = *(_QWORD *)(KernelWaitTime + 8 * ((v3 >> 3) & 0x1FF));
          if ( (v11 & 0x20) != 0 )
            v8 = v4 | 0x20;
          v4 = v8 | 0x42;
          if ( (v11 & 0x42) == 0 )
            v4 = v8;
        }
      }
    }
  }
  if ( (v4 & 0x400) != 0 )
  {
    v5 = a2 != 0 ? 0x800 : 0;
    v6 = v4 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  else
  {
    v5 = a2 != 0 ? 8 : 0;
    v6 = v4 & 0xFFFFFFFFFFFFFFF7uLL;
  }
  result = v6 | v5;
  *(_QWORD *)v3 = result;
  return result;
}
