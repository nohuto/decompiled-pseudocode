/*
 * XREFs of NtCompareTokens @ 0x140A23460
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeCompareTokens @ 0x140A235A8 (SeCompareTokens.c)
 */

__int64 __fastcall NtCompareTokens(HANDLE Handle, HANDLE a2, char *a3)
{
  PVOID v6; // rdi
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v8; // rcx
  NTSTATUS v9; // esi
  PVOID v10; // rbx
  PVOID Token; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  char v14; // [rsp+78h] [rbp+20h]

  v6 = 0LL;
  v14 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v8 = (__int64)a3;
    *(_BYTE *)v8 = *(_BYTE *)v8;
  }
  Token = 0LL;
  v9 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  if ( v9 >= 0 )
  {
    if ( Handle == a2 )
    {
      v14 = 1;
      v10 = Token;
    }
    else
    {
      Object = 0LL;
      v9 = ObReferenceObjectByHandle(a2, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
      v6 = Object;
      v10 = Token;
      if ( v9 < 0 )
      {
        v6 = 0LL;
      }
      else if ( Token == Object )
      {
        v14 = 1;
      }
      else
      {
        v9 = SeCompareTokens(Token, Object);
      }
    }
    if ( v10 )
      ObfDereferenceObject(v10);
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  *a3 = v14;
  return (unsigned int)v9;
}
