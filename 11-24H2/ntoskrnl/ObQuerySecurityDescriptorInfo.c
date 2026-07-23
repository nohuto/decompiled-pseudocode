/*
 * XREFs of ObQuerySecurityDescriptorInfo @ 0x14087D604
 * Callers:
 *     WmipSecurityMethod @ 0x140989620 (WmipSecurityMethod.c)
 * Callees:
 *     SeQuerySecurityDescriptorInfo @ 0x14087CD40 (SeQuerySecurityDescriptorInfo.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptor @ 0x1408E7640 (ObpReferenceSecurityDescriptor.c)
 */

__int64 __fastcall ObQuerySecurityDescriptorInfo(__int64 a1, DWORD *a2, void *a3, ULONG *a4)
{
  __int64 v4; // rbp
  unsigned __int64 v8; // r14
  unsigned int v9; // ebx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1 - 48;
  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)ObpReferenceSecurityDescriptor(a1 - 48);
  v8 = (unsigned __int64)ObjectsSecurityDescriptor;
  v9 = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
  if ( v8 )
  {
    _m_prefetchw((const void *)(v4 + 40));
    v10 = *(_QWORD *)(v4 + 40);
    while ( (v10 ^ v8) < 0xF )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 40), v10 + 1, v10);
      if ( v11 == v10 )
        return v9;
    }
    ObDereferenceSecurityDescriptor(v8, 1LL);
  }
  return v9;
}
