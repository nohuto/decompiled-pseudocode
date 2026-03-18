/*
 * XREFs of VidSchEnableLatencyToleranceTimer @ 0x1400492A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlULongLongMult @ 0x140035FA0 (RtlULongLongMult.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x14004110C (McTemplateK0_EtwWriteTransfer.c)
 */

void __fastcall VidSchEnableLatencyToleranceTimer(__int64 a1, char a2, __int64 a3)
{
  LARGE_INTEGER v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r9
  ULONGLONG v7; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF
  ULONGLONG pullResult; // [rsp+40h] [rbp+18h] BYREF

  *(_BYTE *)(a1 + 3384) = a2;
  if ( a2 )
  {
    if ( bTracingEnabled && (byte_140081242 & 2) != 0 )
      McTemplateK0_EtwWriteTransfer(a1, &Dxgk_LatencyToleranceTimerEnable, a3);
    PerformanceFrequency.QuadPart = 0LL;
    v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
    pullResult = 0LL;
    if ( RtlULongLongMult(v4.QuadPart, 0x989680uLL, &pullResult) >= 0 )
      v7 = pullResult / v6;
    else
      v7 = 10000000 * (v5 / v6) + 10000000 * (v5 % v6) / v6;
    *(_QWORD *)(a1 + 3368) = v7 + *(_QWORD *)(a1 + 3376);
    *(_QWORD *)(a1 + 1648) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1616), 0, 0);
  }
  else if ( bTracingEnabled && (byte_140081242 & 2) != 0 )
  {
    McTemplateK0_EtwWriteTransfer(a1, &Dxgk_LatencyToleranceTimerDisable, a3);
  }
}
