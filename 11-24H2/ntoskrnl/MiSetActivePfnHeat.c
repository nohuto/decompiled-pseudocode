/*
 * XREFs of MiSetActivePfnHeat @ 0x1403FD670
 * Callers:
 *     MmSetPfnListInfo @ 0x140311F44 (MmSetPfnListInfo.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140334220 (MiUpdatePfnForPrefetchByPte.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiMakeTransitionHeatBatch @ 0x1403FD304 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetActivePfnHeat(__int64 a1, int a2)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax
  _KPROCESS *Process; // r9
  unsigned __int64 KernelWaitTime; // r11
  __int64 v11; // rdx

  if ( a2 && (*(_BYTE *)(a1 + 34) & 7) != 6 )
    _InterlockedIncrement(&dword_140E35D94);
  v3 = a1 + 16;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v3 >= 0xFFFFF6FB7DBED000uLL && v3 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v5 = v4;
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
            v5 = v4 | 0x20;
          v4 = v5 | 0x42;
          if ( (v11 & 0x42) == 0 )
            v4 = v5;
        }
      }
    }
  }
  if ( (v4 & 0x400) != 0 )
  {
    v6 = a2 != 0 ? 0x800 : 0;
    v7 = v4 & 0xFFFFFFFFFFFFF7FFuLL;
  }
  else
  {
    v6 = a2 != 0 ? 8 : 0;
    v7 = v4 & 0xFFFFFFFFFFFFFFF7uLL;
  }
  result = v7 | v6;
  *(_QWORD *)v3 = result;
  return result;
}
