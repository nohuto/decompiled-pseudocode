/*
 * XREFs of NtGetCachedSigningLevel @ 0x140A2EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 */

NTSTATUS __cdecl NtGetCachedSigningLevel(
        HANDLE File,
        PULONG Flags,
        PSE_SIGNING_LEVEL SigningLevel,
        PUCHAR Thumbprint,
        PULONG ThumbprintSize,
        PULONG ThumbprintAlgorithm)
{
  PVOID v10; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS v12; // ebx
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  volatile void *Address; // [rsp+68h] [rbp-A0h]
  volatile void *v17; // [rsp+70h] [rbp-98h]
  volatile void *v18; // [rsp+78h] [rbp-90h]
  _BYTE Src[64]; // [rsp+80h] [rbp-88h] BYREF

  v17 = Thumbprint;
  Address = SigningLevel;
  v18 = ThumbprintAlgorithm;
  v10 = 0LL;
  memset_0(Src, 0, sizeof(Src));
  if ( !File || !Flags || !SigningLevel )
  {
    v12 = -1073741811;
    goto LABEL_9;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(File, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v10 = Object;
  if ( v12 < 0 )
    goto LABEL_9;
  if ( Thumbprint )
  {
    if ( !qword_140F044B0 )
      goto LABEL_7;
    if ( Object )
    {
LABEL_16:
      v12 = guard_dispatch_icall_no_overrides(Object);
      goto LABEL_8;
    }
  }
  else
  {
    if ( !qword_140F044B0 )
    {
LABEL_7:
      v12 = -1073741823;
      goto LABEL_8;
    }
    if ( Object )
      goto LABEL_16;
  }
  v12 = -1073741811;
LABEL_8:
  if ( v12 >= 0 )
  {
    if ( PreviousMode == 1 )
    {
      ProbeForWrite(Flags, 4uLL, 4u);
      ProbeForWrite(Address, 1uLL, 1u);
    }
    *Flags = 0;
    *(_BYTE *)Address = 0;
    if ( ThumbprintSize )
    {
      if ( PreviousMode == 1 )
        ProbeForWrite(ThumbprintSize, 4uLL, 4u);
      *ThumbprintSize = 0;
    }
  }
LABEL_9:
  if ( v10 )
    ObfDereferenceObject(v10);
  return v12;
}
