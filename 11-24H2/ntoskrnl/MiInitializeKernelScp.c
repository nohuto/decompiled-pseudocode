/*
 * XREFs of MiInitializeKernelScp @ 0x140C55860
 * Callers:
 *     MiInitSystem @ 0x140C4DC40 (MiInitSystem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     RtlCreateKernelScpFunctionTable @ 0x1405F0D9C (RtlCreateKernelScpFunctionTable.c)
 *     MiInitializeRetpoline @ 0x140C558EC (MiInitializeRetpoline.c)
 *     MiLockKernelScpSection @ 0x140C55A58 (MiLockKernelScpSection.c)
 */

__int64 MiInitializeKernelScp()
{
  int v0; // eax
  int KernelScpFunctionTable; // ecx
  ULONG_PTR BugCheckParameter4; // rax
  unsigned int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  v0 = MiLockKernelScpSection();
  KernelScpFunctionTable = v0;
  if ( v0 < 0 )
  {
    BugCheckParameter4 = 162LL;
    goto LABEL_9;
  }
  KernelScpFunctionTable = RtlCreateKernelScpFunctionTable((unsigned int)v0, qword_140E2D730, dword_140E2D73C << 12);
  if ( KernelScpFunctionTable < 0 )
  {
    BugCheckParameter4 = 167LL;
    goto LABEL_9;
  }
  KernelScpFunctionTable = dword_140E2D748;
  if ( dword_140E2D748 >= 0 )
  {
    KernelScpFunctionTable = MiInitializeRetpoline(&v4);
    BugCheckParameter4 = v4;
  }
  else
  {
    BugCheckParameter4 = 161LL;
  }
  if ( KernelScpFunctionTable < 0 )
LABEL_9:
    KeBugCheckEx(0x1Au, 0x1082uLL, 0LL, KernelScpFunctionTable, BugCheckParameter4);
  return (unsigned int)KernelScpFunctionTable;
}
