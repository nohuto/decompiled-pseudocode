/*
 * XREFs of NtImpersonateThread @ 0x140A1D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeCreateClientSecurity @ 0x14089EDC0 (SeCreateClientSecurity.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 */

NTSTATUS __cdecl NtImpersonateThread(
        HANDLE ServerThreadHandle,
        HANDLE ClientThreadHandle,
        PSECURITY_QUALITY_OF_SERVICE SecurityQos)
{
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS result; // eax
  int v8; // edi
  PVOID v9; // rbx
  BOOLEAN EffectiveOnly; // r9
  PVOID v11; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  void *ClientToken; // rsi
  NTSTATUS v14; // r14d
  PVOID v15; // [rsp+38h] [rbp-80h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+40h] [rbp-78h] BYREF
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+60h] [rbp-58h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+20h] BYREF

  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  *((_DWORD *)&ClientContext.SecurityQos + 3) = 0;
  memset_0(&ClientContext, 0, 0x44uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)SecurityQos & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  ClientSecurityQos = *SecurityQos;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ClientThreadHandle, 0x200u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v15 = 0LL;
    v8 = ObReferenceObjectByHandle(ServerThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &v15, 0LL);
    v9 = Object;
    if ( v8 >= 0 )
    {
      v8 = SeCreateClientSecurity((PETHREAD)Object, &ClientSecurityQos, 0, &ClientContext);
      if ( v8 >= 0 )
      {
        EffectiveOnly = ClientContext.SecurityQos.EffectiveOnly;
        if ( ClientContext.DirectlyAccessClientToken )
          EffectiveOnly = ClientContext.DirectAccessEffectiveOnly;
        v11 = v15;
        if ( v15 )
        {
          CurrentThread = (struct _KTHREAD *)v15;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          v9 = Object;
          v11 = 0LL;
        }
        ClientToken = ClientContext.ClientToken;
        v14 = PsImpersonateClient(
                CurrentThread,
                ClientContext.ClientToken,
                1u,
                EffectiveOnly,
                ClientContext.SecurityQos.ImpersonationLevel);
        ObfDereferenceObjectWithTag(ClientToken, 0x63436553u);
        ObfDereferenceObject(v11);
        ObfDereferenceObject(v9);
        return v14;
      }
      ObfDereferenceObject(v15);
    }
    ObfDereferenceObject(v9);
    return v8;
  }
  return result;
}
