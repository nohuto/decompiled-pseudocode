/*
 * XREFs of NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x14008A9A0
 * Callers:
 *     <none>
 * Callees:
 *     SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_ @ 0x14008AA50 (SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_.c)
 *     ?SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z @ 0x14008ADFC (-SetSigningKeyAndSequenceNumbers@COPM@@QEAAJPEAXQEAU_DXGKMDT_OPM_ENCRYPTED_PARAMETERS@@@Z.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x14008C2B0 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 */

__int64 __fastcall NtGdiSetOPMSigningKeyAndSequenceNumbers(void *a1, __int64 a2)
{
  __int64 v4; // r14
  __int64 Pool2; // rax
  void *v6; // rdx
  unsigned int v7; // edi
  struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *v8; // rsi
  int v9; // ebx

  v4 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  Pool2 = ExAllocatePool2(258LL, 256LL, 1297108807LL);
  v7 = 0;
  v8 = (struct _DXGKMDT_OPM_ENCRYPTED_PARAMETERS *)Pool2;
  if ( Pool2 )
  {
    v9 = SafelyCopyUserModeDataToKernelModeData__DXGKMDT_OPM_ENCRYPTED_PARAMETERS_(Pool2, a2);
    if ( v9 >= 0 )
      v9 = COPM::SetSigningKeyAndSequenceNumbers(*(COPM **)(v4 + 3648), a1, v8);
  }
  else
  {
    v9 = -1073741801;
  }
  OPM::OPMFreeMemory((OPM *)v8, v6);
  if ( v9 < 0 )
    return (unsigned int)v9;
  return v7;
}
