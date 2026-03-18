/*
 * XREFs of NtSetTimer @ 0x1402EB3F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExpSetTimerObject @ 0x1402EB930 (ExpSetTimerObject.c)
 *     ExpSetTimerObject2 @ 0x140370C68 (ExpSetTimerObject2.c)
 *     PoCaptureReasonContext @ 0x140425AF8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x1404E90C0 (PoDestroyReasonContext.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall NtSetTimer(HANDLE Handle, unsigned __int64 a2, __int64 a3, __int64 a4, char a5, int a6, __int64 a7)
{
  __int64 v7; // r12
  bool v10; // r15
  unsigned __int8 PreviousMode; // si
  __int64 v12; // rax
  char v13; // al
  NTSTATUS v14; // ebx
  struct _OBJECT_TYPE *v15; // rax
  NTSTATUS v16; // eax
  __int64 result; // rax
  char v18[8]; // [rsp+50h] [rbp-48h] BYREF
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  __int64 v20; // [rsp+60h] [rbp-38h] BYREF
  PVOID Object[3]; // [rsp+68h] [rbp-30h] BYREF

  v7 = a4;
  v20 = 0LL;
  v18[0] = 0;
  P = 0LL;
  v10 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v12 = a2;
    v20 = *(_QWORD *)v12;
    Object[1] = &v20;
    v13 = a5;
  }
  else
  {
    v13 = a5;
    if ( a5 )
      v10 = PoPowerDownActionInProgress != 0;
  }
  if ( a6 < 0 )
    return 3221225716LL;
  if ( !v13
    || v10
    || (LOBYTE(a4) = 1,
        result = PoCaptureReasonContext(0, PreviousMode, 0, a4, (__int64)v18, (__int64)&P),
        (int)result >= 0) )
  {
    Object[0] = 0LL;
    v14 = ObReferenceObjectByHandle(Handle, 2u, 0LL, PreviousMode, Object, 0LL);
    if ( v14 >= 0 )
    {
      v15 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
      if ( v15 == ExpIRTimerObjectType )
      {
        if ( a3 || v7 || P || a7 )
        {
          ObfDereferenceObjectWithTag(Object[0], 0x746C6644u);
          v14 = -1073741811;
          goto LABEL_28;
        }
        v16 = ExpSetTimerObject2((ULONG_PTR)Object[0]);
      }
      else
      {
        if ( v15 != ExTimerObjectType )
        {
          ObfDereferenceObjectWithTag(Object[0], 0x746C6644u);
          v14 = -1073741788;
          goto LABEL_28;
        }
        v16 = ExpSetTimerObject((ULONG_PTR)Object[0], v7, (__int64)P, v18[0], a6, 0, a7);
      }
      v14 = v16;
    }
    if ( v14 >= 0 && v14 != 1073741861 )
    {
LABEL_14:
      if ( v14 >= 0 && v10 )
        return 1073741861;
      return (unsigned int)v14;
    }
LABEL_28:
    if ( P )
      PoDestroyReasonContext(P);
    goto LABEL_14;
  }
  return result;
}
