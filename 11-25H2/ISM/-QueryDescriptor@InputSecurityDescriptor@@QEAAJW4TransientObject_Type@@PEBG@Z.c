/*
 * XREFs of ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18000F140
 * Callers:
 *     ?Initialize@DWMCursorBroker@@QEAAJXZ @ 0x18000EB24 (-Initialize@DWMCursorBroker@@QEAAJXZ.c)
 *     ?Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z @ 0x18000EE68 (-Initialize@InputRedirectionProcessor@@IEAAJPEAUIInputDeviceInfoStore@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180034634 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Initialize@InputStateManager@@IEAAJXZ @ 0x180051CD8 (-Initialize@InputStateManager@@IEAAJXZ.c)
 *     ?CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ @ 0x180092BD0 (-CreateEndpointToReceiveMessages@TestCommandHost@@AEAAXXZ.c)
 *     ?InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ @ 0x1800CF904 (-InitializeCoreMessaging@SpeechRuntimeListener@@AEAAJXZ.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x18015E628 (-Initialize@CursorManager@@IEAAJXZ.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x18019EBF8 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall InputSecurityDescriptor::QueryDescriptor(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int TransientObjectSecurityDescriptor; // eax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_BYTE *)(a1 + 8) = 1;
  TransientObjectSecurityDescriptor = QueryTransientObjectSecurityDescriptor(8LL, a3, a1);
  if ( TransientObjectSecurityDescriptor == -1073741772 )
  {
    if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
            L"D:(A;;GA;;;SY)(A;;0x001F0003;;;WD)(A;;0x001F0003;;;AC)(A;;0x001F0003;;;S-1-15-3-1024-1502825166-1963708345-2"
             "616377461-2562897074-4192028372-3968301570-1997628692-1435953622)",
            1u,
            (PSECURITY_DESCRIPTOR *)a1,
            0LL) )
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0x46,
               (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputsecuritydescriptor\\lib\\inputsec"
                             "uritydescriptor.cpp",
               v7);
    *(_BYTE *)(a1 + 8) = 0;
    return 0;
  }
  if ( TransientObjectSecurityDescriptor >= 0 )
    return 0;
  return wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x4C,
           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\inputsecuritydescriptor\\lib\\inputsecuritydescriptor.cpp",
           (const char *)(unsigned int)TransientObjectSecurityDescriptor,
           a5);
}
