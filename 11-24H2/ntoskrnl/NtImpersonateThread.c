/*
 * XREFs of NtImpersonateThread @ 0x140A28F20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeCreateClientSecurity @ 0x140896720 (SeCreateClientSecurity.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 */

NTSTATUS __fastcall NtImpersonateThread(HANDLE Handle, HANDLE a2, struct _SECURITY_QUALITY_OF_SERVICE *a3)
{
  KPROCESSOR_MODE PreviousMode; // di
  NTSTATUS result; // eax
  NTSTATUS v8; // edi
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
  if ( PreviousMode && ((unsigned __int8)a3 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  ClientSecurityQos = *a3;
  Object = 0LL;
  result = ObReferenceObjectByHandle(a2, 0x200u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v15 = 0LL;
    v8 = ObReferenceObjectByHandle(Handle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &v15, 0LL);
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
