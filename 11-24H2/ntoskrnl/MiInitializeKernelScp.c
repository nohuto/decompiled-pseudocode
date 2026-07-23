/*
 * XREFs of MiInitializeKernelScp @ 0x140C579F0
 * Callers:
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     RtlCreateKernelScpFunctionTable @ 0x1405EE3DC (RtlCreateKernelScpFunctionTable.c)
 *     MiInitializeRetpoline @ 0x140C57A7C (MiInitializeRetpoline.c)
 *     MiLockKernelScpSection @ 0x140C57BE8 (MiLockKernelScpSection.c)
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
  KernelScpFunctionTable = RtlCreateKernelScpFunctionTable((unsigned int)v0, Base, dword_140E2D87C << 12);
  if ( KernelScpFunctionTable < 0 )
  {
    BugCheckParameter4 = 167LL;
    goto LABEL_9;
  }
  KernelScpFunctionTable = dword_140E2D888;
  if ( dword_140E2D888 >= 0 )
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
