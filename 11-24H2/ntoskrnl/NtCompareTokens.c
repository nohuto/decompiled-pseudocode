/*
 * XREFs of NtCompareTokens @ 0x140A17870
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeCompareTokens @ 0x140A179B8 (SeCompareTokens.c)
 */

NTSTATUS __cdecl NtCompareTokens(HANDLE FirstTokenHandle, HANDLE SecondTokenHandle, PBOOLEAN Equal)
{
  PVOID v6; // rdi
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v8; // rcx
  int v9; // esi
  PVOID v10; // rbx
  PVOID Token; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+38h] [rbp-20h] BYREF
  BOOLEAN v14; // [rsp+78h] [rbp+20h]

  v6 = 0LL;
  v14 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Equal < 0x7FFFFFFF0000LL )
      v8 = (__int64)Equal;
    *(_BYTE *)v8 = *(_BYTE *)v8;
  }
  Token = 0LL;
  v9 = ObReferenceObjectByHandle(FirstTokenHandle, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  if ( v9 >= 0 )
  {
    if ( FirstTokenHandle == SecondTokenHandle )
    {
      v14 = 1;
      v10 = Token;
    }
    else
    {
      Object = 0LL;
      v9 = ObReferenceObjectByHandle(SecondTokenHandle, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
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
  *Equal = v14;
  return v9;
}
