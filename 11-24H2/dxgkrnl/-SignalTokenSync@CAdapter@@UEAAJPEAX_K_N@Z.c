/*
 * XREFs of ?SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z @ 0x140037170
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x14029E990 (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x1403E7E60 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 */

__int64 __fastcall CAdapter::SignalTokenSync(CAdapter *this, void *a2, __int64 a3, char a4)
{
  __int64 v7; // rdi
  __int64 result; // rax
  _QWORD v9[10]; // [rsp+20h] [rbp-58h] BYREF

  if ( a4 )
  {
    v7 = *((_QWORD *)this + 11);
    if ( *((_QWORD *)this + 10) != v7 )
    {
      memset(v9, 0, sizeof(v9));
      LODWORD(v9[0]) = *((_DWORD *)this + 18);
      v9[1] = (char *)this + 56;
      HIDWORD(v9[0]) = 1;
      v9[2] = v7;
      result = DxgkKernelModeWaitForSynchronizationObjectFromGpu(v9);
      if ( (int)result < 0 )
        return result;
      *((_QWORD *)this + 10) = *((_QWORD *)this + 11);
    }
  }
  return DxgkSignalSynchronizationObjectFromGpuByReference(a2, a3, *((unsigned int *)this + 18));
}
