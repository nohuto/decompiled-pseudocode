/*
 * XREFs of NtGetCachedSigningLevel @ 0x140A27630
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
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
  char v14; // cl
  ULONG v15; // r14d
  void *v16; // rax
  _DWORD *v17; // r14
  _BYTE v18[4]; // [rsp+40h] [rbp-C8h] BYREF
  ULONG v19; // [rsp+44h] [rbp-C4h]
  SIZE_T Length; // [rsp+48h] [rbp-C0h]
  int v21; // [rsp+50h] [rbp-B8h]
  HANDLE Handle; // [rsp+58h] [rbp-B0h]
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  volatile void *Address; // [rsp+68h] [rbp-A0h]
  volatile void *v25; // [rsp+70h] [rbp-98h]
  volatile void *v26; // [rsp+78h] [rbp-90h]
  _BYTE Src[64]; // [rsp+80h] [rbp-88h] BYREF

  v25 = Thumbprint;
  Address = SigningLevel;
  Handle = File;
  v26 = ThumbprintAlgorithm;
  v10 = 0LL;
  memset_0(Src, 0, sizeof(Src));
  Length = 64LL;
  v19 = 0;
  v18[0] = 0;
  if ( !File || !Flags || !SigningLevel )
  {
    v12 = -1073741811;
    goto LABEL_9;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v10 = Object;
  Handle = Object;
  if ( v12 < 0 )
    goto LABEL_9;
  if ( Thumbprint )
  {
    if ( !qword_140F04B30 )
      goto LABEL_7;
    if ( Object )
    {
LABEL_16:
      v12 = guard_dispatch_icall_no_overrides(Object, v18);
      goto LABEL_8;
    }
  }
  else
  {
    if ( !qword_140F04B30 )
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
    v14 = v19;
    *Flags = v19;
    *(_BYTE *)Address = v18[0];
    if ( ThumbprintSize )
    {
      if ( PreviousMode == 1 )
      {
        ProbeForWrite(ThumbprintSize, 4uLL, 4u);
        v14 = v19;
      }
      if ( (v14 & 2) != 0 )
      {
        v15 = Length;
        if ( *ThumbprintSize >= (unsigned int)Length && (v16 = (void *)v25) != 0LL )
        {
          if ( PreviousMode == 1 )
          {
            ProbeForWrite(v25, (unsigned int)Length, 1u);
            v15 = Length;
            v16 = (void *)v25;
          }
          memmove(v16, Src, v15);
        }
        else
        {
          v12 = -1073741789;
          v21 = -1073741789;
        }
        *ThumbprintSize = v15;
        v17 = v26;
        if ( v26 )
        {
          if ( PreviousMode == 1 )
            ProbeForWrite(v26, 4uLL, 4u);
          *v17 = HIDWORD(Length);
        }
      }
      else
      {
        *ThumbprintSize = 0;
      }
    }
  }
LABEL_9:
  if ( v10 )
    ObfDereferenceObject(v10);
  return v12;
}
