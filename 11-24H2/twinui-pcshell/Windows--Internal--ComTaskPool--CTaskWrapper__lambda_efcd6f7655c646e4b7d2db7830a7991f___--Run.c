/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f___::Run @ 0x18022AE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void Windows::Internal::ComTaskPool::CTaskWrapper__lambda_efcd6f7655c646e4b7d2db7830a7991f___::Run()
{
  char *v0; // rcx

  v0 = (char *)&CApplicationManagerUtility::g_pIAMGlobals[13].Ptr + 5;
  BYTE5(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) = 1;
  WakeByAddressAll(v0);
}
