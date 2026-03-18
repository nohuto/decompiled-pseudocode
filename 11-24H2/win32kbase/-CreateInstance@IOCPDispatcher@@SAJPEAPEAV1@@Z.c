/*
 * XREFs of ?CreateInstance@IOCPDispatcher@@SAJPEAPEAV1@@Z @ 0x1400CE8D4
 * Callers:
 *     UserActivateMITInputProcessing @ 0x14018A3B0 (UserActivateMITInputProcessing.c)
 *     UserKSTInitialize @ 0x140215930 (UserKSTInitialize.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0IOCPDispatcher@@IEAA@XZ @ 0x1400CE954 (--0IOCPDispatcher@@IEAA@XZ.c)
 *     CreateKernelIocp @ 0x1400CE9E0 (CreateKernelIocp.c)
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x14020BAE8 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall IOCPDispatcher::CreateInstance(struct IOCPDispatcher **a1)
{
  IOCPDispatcher *v2; // rax
  IOCPDispatcher *v3; // rbx
  __int64 KernelIocp; // rax
  unsigned int v5; // edx

  *a1 = 0LL;
  v2 = (IOCPDispatcher *)Win32AllocPoolZInitImpl(256LL, 0xB68uLL, 0x43486970u);
  if ( !v2 )
    return 3221225495LL;
  v3 = IOCPDispatcher::IOCPDispatcher(v2);
  if ( !v3 )
    return 3221225495LL;
  KernelIocp = CreateKernelIocp(1u);
  *((_QWORD *)v3 + 363) = KernelIocp;
  if ( KernelIocp )
  {
    *a1 = v3;
    return 0LL;
  }
  else
  {
    IOCPDispatcher::`scalar deleting destructor'(v3, v5);
    return 3221225473LL;
  }
}
