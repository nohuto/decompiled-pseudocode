/*
 * XREFs of ObQuerySecurityDescriptorInfo @ 0x140870540
 * Callers:
 *     WmipSecurityMethod @ 0x1409A5180 (WmipSecurityMethod.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x14086EF20 (ObDereferenceSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140870750 (SeQuerySecurityDescriptorInfo.c)
 *     ObpReferenceSecurityDescriptor @ 0x1408A4FB0 (ObpReferenceSecurityDescriptor.c)
 */

__int64 __fastcall ObQuerySecurityDescriptorInfo(__int64 a1, DWORD *a2, void *a3, ULONG *a4)
{
  __int64 v4; // rbp
  __int64 v8; // r14
  unsigned int v9; // ebx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1 - 48;
  ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)ObpReferenceSecurityDescriptor(a1 - 48);
  v8 = (__int64)ObjectsSecurityDescriptor;
  v9 = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
  if ( v8 )
  {
    _m_prefetchw((const void *)(v4 + 40));
    v10 = *(_QWORD *)(v4 + 40);
    while ( (v10 ^ (unsigned __int64)v8) < 0xF )
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 40), v10 + 1, v10);
      if ( v11 == v10 )
        return v9;
    }
    ObDereferenceSecurityDescriptor(v8, 1u);
  }
  return v9;
}
