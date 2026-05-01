/*
 * XREFs of RmAccessCheck @ 0x18000EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@K@Z @ 0x18000EC44 (-RmAccessCheck@ResourceManagerProxy@@QEAAJW4RmResourceType@@K@Z.c)
 *     CreateResourceManagerProxy @ 0x18001365C (CreateResourceManagerProxy.c)
 */

__int64 __fastcall RmAccessCheck(unsigned int a1, unsigned int a2)
{
  __int64 v4; // rbx
  int ResourceManagerProxy; // ebx

  RtlEnterCriticalSection(&s_csProxy);
  v4 = qword_18002FD30;
  if ( qword_18002FD30 )
    goto LABEL_2;
  ResourceManagerProxy = CreateResourceManagerProxy();
  if ( ResourceManagerProxy >= 0 )
  {
    v4 = qword_18002FD30;
LABEL_2:
    RtlLeaveCriticalSection(&s_csProxy);
    return ResourceManagerProxy::RmAccessCheck(v4, a1, a2);
  }
  RtlLeaveCriticalSection(&s_csProxy);
  return (unsigned int)ResourceManagerProxy;
}
