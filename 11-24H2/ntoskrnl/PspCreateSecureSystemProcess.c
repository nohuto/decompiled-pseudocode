/*
 * XREFs of PspCreateSecureSystemProcess @ 0x140C34DEC
 * Callers:
 *     PspInitPhase1 @ 0x140C34EC0 (PspInitPhase1.c)
 * Callees:
 *     strcpy_s @ 0x1405042E0 (strcpy_s.c)
 *     VslRegisterSecureSystemProcess @ 0x14058DEA0 (VslRegisterSecureSystemProcess.c)
 *     PsCreateMinimalProcess @ 0x1407797C4 (PsCreateMinimalProcess.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 */

bool PspCreateSecureSystemProcess()
{
  NTSTATUS v0; // eax
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF

  if ( !VslVsmEnabled )
    return 1;
  Handle = 0LL;
  if ( (int)PsCreateMinimalProcess(
              (__int64)PsInitialSystemProcess,
              0LL,
              0LL,
              BYTE2(PsInitialSystemProcess[3].ActiveGroupsMask.Masks[1]),
              0LL,
              0,
              0,
              0LL,
              0LL,
              0LL,
              0LL,
              &Handle) < 0 )
    return 0;
  Object = 0LL;
  v0 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
  PsSecureSystemProcess = (ULONG_PTR)Object;
  if ( v0 < 0 )
    return 0;
  strcpy_s((char *)Object + 824, 0xFuLL, "Secure System");
  return (int)VslRegisterSecureSystemProcess() >= 0;
}
