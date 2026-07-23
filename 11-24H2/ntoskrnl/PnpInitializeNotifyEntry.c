/*
 * XREFs of PnpInitializeNotifyEntry @ 0x1409EB17C
 * Callers:
 *     PiRegisterKernelSoftRestartNotification @ 0x140731F6C (PiRegisterKernelSoftRestartNotification.c)
 *     IoRegisterPlugPlayNotification @ 0x1409EB2A0 (IoRegisterPlugPlayNotification.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1403EAC90 (ExInitializeResourceLite.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpInitializeNotifyEntry(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // edi
  struct _ERESOURCE *Pool2; // rax

  v6 = 0;
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = a1;
  *(_QWORD *)(a1 + 48) = a5;
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 64) = a6;
  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = a4;
  *(_WORD *)(a1 + 56) = 1;
  *(_BYTE *)(a1 + 58) = 0;
  Pool2 = (struct _ERESOURCE *)ExAllocatePool2(0x40uLL, 0x68uLL, 0x56706E50u);
  *(_QWORD *)(a1 + 72) = Pool2;
  if ( Pool2 )
    ExInitializeResourceLite(Pool2);
  else
    return (unsigned int)-1073741670;
  return v6;
}
