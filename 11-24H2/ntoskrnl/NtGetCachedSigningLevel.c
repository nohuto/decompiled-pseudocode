/*
 * XREFs of NtGetCachedSigningLevel @ 0x140A33620
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 */

__int64 __fastcall NtGetCachedSigningLevel(
        void *a1,
        _DWORD *a2,
        volatile void *a3,
        volatile void *a4,
        unsigned int *a5,
        volatile void *a6)
{
  PVOID v10; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  int v12; // ebx
  _BYTE *v14; // r9
  char v15; // cl
  unsigned int v16; // r14d
  void *v17; // rax
  _DWORD *v18; // r14
  _BYTE v19[4]; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+44h] [rbp-C4h] BYREF
  SIZE_T Length; // [rsp+48h] [rbp-C0h]
  int v22; // [rsp+50h] [rbp-B8h]
  HANDLE Handle; // [rsp+58h] [rbp-B0h]
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  volatile void *Address; // [rsp+68h] [rbp-A0h]
  volatile void *v26; // [rsp+70h] [rbp-98h]
  volatile void *v27; // [rsp+78h] [rbp-90h]
  _BYTE Src[64]; // [rsp+80h] [rbp-88h] BYREF

  v26 = a4;
  Address = a3;
  Handle = a1;
  v27 = a6;
  v10 = 0LL;
  memset_0(Src, 0, sizeof(Src));
  Length = 64LL;
  v20 = 0;
  v19[0] = 0;
  if ( !a1 || !a2 || !a3 )
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
  if ( a4 )
  {
    if ( !qword_140F04890 )
      goto LABEL_7;
    if ( Object )
    {
      v14 = Src;
LABEL_17:
      v12 = guard_dispatch_icall_no_overrides(Object, v19, &v20, v14);
      goto LABEL_8;
    }
  }
  else
  {
    if ( !qword_140F04890 )
    {
LABEL_7:
      v12 = -1073741823;
      goto LABEL_8;
    }
    if ( Object )
    {
      v14 = 0LL;
      goto LABEL_17;
    }
  }
  v12 = -1073741811;
LABEL_8:
  if ( v12 >= 0 )
  {
    if ( PreviousMode == 1 )
    {
      ProbeForWrite(a2, 4uLL, 4u);
      ProbeForWrite(Address, 1uLL, 1u);
    }
    v15 = v20;
    *a2 = v20;
    *(_BYTE *)Address = v19[0];
    if ( a5 )
    {
      if ( PreviousMode == 1 )
      {
        ProbeForWrite(a5, 4uLL, 4u);
        v15 = v20;
      }
      if ( (v15 & 2) != 0 )
      {
        v16 = Length;
        if ( *a5 >= (unsigned int)Length && (v17 = (void *)v26) != 0LL )
        {
          if ( PreviousMode == 1 )
          {
            ProbeForWrite(v26, (unsigned int)Length, 1u);
            v16 = Length;
            v17 = (void *)v26;
          }
          memmove(v17, Src, v16);
        }
        else
        {
          v12 = -1073741789;
          v22 = -1073741789;
        }
        *a5 = v16;
        v18 = v27;
        if ( v27 )
        {
          if ( PreviousMode == 1 )
            ProbeForWrite(v27, 4uLL, 4u);
          *v18 = HIDWORD(Length);
        }
      }
      else
      {
        *a5 = 0;
      }
    }
  }
LABEL_9:
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)v12;
}
