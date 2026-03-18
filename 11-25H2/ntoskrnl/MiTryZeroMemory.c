/*
 * XREFs of MiTryZeroMemory @ 0x140210860
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     AccelFillMemory @ 0x140406838 (AccelFillMemory.c)
 *     MiGetZeroExceptionInfo @ 0x140433D28 (MiGetZeroExceptionInfo.c)
 *     MiZeroVaToActiveEntry @ 0x140433DA8 (MiZeroVaToActiveEntry.c)
 *     MiGetZeroingContext @ 0x140433E30 (MiGetZeroingContext.c)
 *     MiAllocateHardwareDescriptor @ 0x140683CB4 (MiAllocateHardwareDescriptor.c)
 *     KeZeroPages @ 0x1406A80C0 (KeZeroPages.c)
 */

__int64 __fastcall MiTryZeroMemory(__int64 a1)
{
  __int64 ZeroingContext; // r13
  unsigned __int64 v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 HardwareDescriptor; // rax
  unsigned int v10; // [rsp+A8h] [rbp+10h]

  v10 = 0;
  ZeroingContext = a1;
  v3 = *(_QWORD *)(a1 + 296);
  v4 = *(unsigned int *)(a1 + 320);
  v5 = MiPageSizes[v4];
  if ( v5 != 1 && !(_DWORD)v4 )
  {
    ZeroingContext = MiGetZeroingContext(a1);
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 584) + 560LL) + ((unsigned __int64)*(unsigned __int16 *)(a1 + 576) << 21);
    v5 = 512LL;
  }
  v6 = (v5 * *(unsigned int *)(ZeroingContext + 280)) << 12;
  if ( **(_DWORD **)(a1 + 336) )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 680);
    if ( !v7 )
    {
      HardwareDescriptor = MiAllocateHardwareDescriptor();
      v7 = HardwareDescriptor;
      if ( HardwareDescriptor )
        *(_QWORD *)(a1 + 680) = HardwareDescriptor;
      else
        v10 = 1;
    }
  }
  if ( !v7 )
    goto LABEL_7;
  if ( (int)AccelFillMemory(v7, v3, v6, 0, 3LL) < 0 )
  {
    ++dword_140EF49CC;
LABEL_7:
    KeZeroPages(v3, v6);
  }
  return v10;
}
