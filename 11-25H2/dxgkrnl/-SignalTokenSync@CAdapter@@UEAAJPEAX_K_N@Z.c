/*
 * XREFs of ?SignalTokenSync@CAdapter@@UEAAJPEAX_K_N@Z @ 0x1400378D0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1402AB2A0 (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x140347AF0 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 */

__int64 __fastcall CAdapter::SignalTokenSync(CAdapter *this, DXGSYNCOBJECT *a2, __int64 a3, char a4)
{
  __int64 v6; // rdi
  __int64 result; // rax
  _QWORD v8[10]; // [rsp+20h] [rbp-58h] BYREF

  if ( a4 )
  {
    v6 = *((_QWORD *)this + 11);
    if ( *((_QWORD *)this + 10) != v6 )
    {
      memset(v8, 0, sizeof(v8));
      LODWORD(v8[0]) = *((_DWORD *)this + 18);
      v8[1] = (char *)this + 56;
      HIDWORD(v8[0]) = 1;
      v8[2] = v6;
      result = DxgkKernelModeWaitForSynchronizationObjectFromGpu(v8);
      if ( (int)result < 0 )
        return result;
      *((_QWORD *)this + 10) = *((_QWORD *)this + 11);
    }
  }
  return DxgkSignalSynchronizationObjectFromGpuByReference(a2);
}
