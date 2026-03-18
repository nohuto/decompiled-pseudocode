/*
 * XREFs of AMLIReadNamespaceOverrideObject @ 0x14006CA3C
 * Callers:
 *     AsyncEvalObject @ 0x1400120D0 (AsyncEvalObject.c)
 * Callees:
 *     ReadObject @ 0x1400026A0 (ReadObject.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     AMLIGetNamespaceOverrideObject @ 0x14006C8CC (AMLIGetNamespaceOverrideObject.c)
 */

__int64 __fastcall AMLIReadNamespaceOverrideObject(__int64 a1, __int64 a2, __int64 a3)
{
  int Object; // edi
  __int64 v6; // rbx
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  Object = AMLIGetNamespaceOverrideObject(a2, (__int64)&v8);
  if ( Object >= 0 )
  {
    v6 = v8;
    Object = ReadObject(a1, v8 + 64, a3);
    DereferenceObjectEx(v6);
  }
  return (unsigned int)Object;
}
