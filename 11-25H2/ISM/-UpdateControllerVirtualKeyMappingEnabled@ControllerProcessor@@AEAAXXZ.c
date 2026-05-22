/*
 * XREFs of ?UpdateControllerVirtualKeyMappingEnabled@ControllerProcessor@@AEAAXXZ @ 0x18017B2E8
 * Callers:
 *     _lambda_e82e8f5a3f31cf71ee9f5897f2a02386_::_lambda_invoker_cdecl_ @ 0x180177BB0 (_lambda_e82e8f5a3f31cf71ee9f5897f2a02386_--_lambda_invoker_cdecl_.c)
 *     ?Initialize@ControllerProcessor@@IEAAJXZ @ 0x180179368 (-Initialize@ControllerProcessor@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ControllerProcessor::UpdateControllerVirtualKeyMappingEnabled(ControllerProcessor *this)
{
  int v1; // ebx
  int v3; // [rsp+50h] [rbp+8h] BYREF
  DWORD v4; // [rsp+58h] [rbp+10h] BYREF

  v4 = 4;
  v1 = 1;
  v3 = 1;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Input\\Settings\\ControllerProcessor\\ControllerToVKMapping",
          L"Enabled",
          0x10u,
          0LL,
          &v3,
          &v4) )
    v1 = v3;
  *((_BYTE *)this + 7808) = v1 != 0;
}
