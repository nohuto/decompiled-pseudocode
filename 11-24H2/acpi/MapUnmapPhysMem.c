/*
 * XREFs of MapUnmapPhysMem @ 0x140030F40
 * Callers:
 *     OpRegion @ 0x140030DC0 (OpRegion.c)
 * Callees:
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     MapPhysMem @ 0x140031068 (MapPhysMem.c)
 */

__int64 __fastcall MapUnmapPhysMem(__int64 a1, void *a2, unsigned int a3, __int64 a4)
{
  const void *v4; // rbx
  SIZE_T v5; // rdi
  int v9; // eax
  KIRQL CurrentIrql; // al

  LODWORD(v4) = 0;
  v5 = a3;
  if ( a3 )
  {
    if ( KeGetCurrentIrql() )
    {
      LODWORD(v4) = -1072431098;
      LogError(-1072431098);
      AcpiDiagTraceAmlError(a1, -1072431098);
      CurrentIrql = KeGetCurrentIrql();
      PrintDebugMessage(0x4Du, (const void *)CurrentIrql, 0LL, 0LL, 0LL);
    }
    else if ( a4 )
    {
      v9 = MapPhysMem((ULONG_PTR)a2, (unsigned int)v5);
      v4 = (const void *)v9;
      if ( v9 < 0 )
      {
        LogError(-1072431092);
        AcpiDiagTraceAmlError(a1, -1072431092);
        PrintDebugMessage(0x66u, a2, (const void *)v5, v4, 0LL);
      }
    }
    else
    {
      MmUnmapIoSpace(a2, v5);
    }
  }
  else
  {
    LODWORD(v4) = -1072431089;
    LogError(-1072431089);
    AcpiDiagTraceAmlError(a1, -1072431089);
    PrintDebugMessage(0xD8u, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)v4;
}
