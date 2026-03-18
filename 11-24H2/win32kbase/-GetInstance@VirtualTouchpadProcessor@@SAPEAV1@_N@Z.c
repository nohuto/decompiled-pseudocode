/*
 * XREFs of ?GetInstance@VirtualTouchpadProcessor@@SAPEAV1@_N@Z @ 0x140116504
 * Callers:
 *     NtMITConfigureVirtualTouchpad @ 0x1401B7DD0 (NtMITConfigureVirtualTouchpad.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x140202D58 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

struct VirtualTouchpadProcessor *__fastcall VirtualTouchpadProcessor::GetInstance(__int64 a1)
{
  char v1; // di
  __int64 UserSessionState; // rbx
  struct VirtualTouchpadProcessor *result; // rax

  v1 = a1;
  UserSessionState = W32GetUserSessionState(a1);
  result = *(struct VirtualTouchpadProcessor **)(UserSessionState + 19336);
  if ( !result && v1 )
  {
    result = (struct VirtualTouchpadProcessor *)Win32AllocPoolZInitImpl(256LL, 0x58uLL, 0x70747655u);
    if ( result )
    {
      *((_DWORD *)result + 4) = 0;
      *((_DWORD *)result + 21) = 1000;
      *((_QWORD *)result + 1) = result;
      *(_QWORD *)result = result;
      *((_BYTE *)result + 20) = 1;
    }
    *(_QWORD *)(UserSessionState + 19336) = result;
  }
  return result;
}
