/*
 * XREFs of RtlAddResourceAttributeAce @ 0x180139330
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidSid @ 0x1800194A0 (RtlValidSid.c)
 *     RtlValidAcl @ 0x1800194E0 (RtlValidAcl.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlCopySid @ 0x1800C0750 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x1800D9A70 (RtlFirstFreeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1801102C0 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlUShortAdd @ 0x180137D08 (RtlUShortAdd.c)
 *     RtlpValidAttribute @ 0x180139F30 (RtlpValidAttribute.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlAddResourceAttributeAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        ULONG AccessMask,
        PSID Sid,
        PCLAIM_SECURITY_ATTRIBUTES_INFORMATION AttributeInfo,
        PULONG ReturnLength)
{
  NTSTATUS v11; // ebx
  BOOLEAN valid; // al
  __int64 v13; // rdx
  int v14; // ecx
  int AclRevision; // ecx
  PCLAIM_SECURITY_ATTRIBUTE_V1 pAttributeV1; // rsi
  DWORD i; // ebx
  unsigned int *v18; // rsi
  unsigned int *Heap; // rax
  size_t v20; // r12
  unsigned __int16 v21; // cx
  ULONG v22; // ecx
  PACL v23; // rdx
  unsigned int j; // r8d
  __int64 v25; // r8
  _WORD *v26; // rdi
  ULONG v27; // edx
  char v28; // al
  int v30; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int Size; // [rsp+2Ch] [rbp-DCh] BYREF
  ULONG Size_4; // [rsp+30h] [rbp-D8h]
  PVOID FirstFree; // [rsp+38h] [rbp-D0h] BYREF
  int v34; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v35; // [rsp+44h] [rbp-C4h]
  unsigned int Src[64]; // [rsp+48h] [rbp-C0h] BYREF

  Size_4 = AceFlags;
  FirstFree = 0LL;
  v34 = 0;
  v35 = 256;
  memset_thunk_772440563353939046(Src, 0, 0x100uLL);
  Size = 256;
  if ( !ReturnLength )
    return -1073741811;
  *ReturnLength = 0;
  if ( !Acl )
    return -1073741705;
  valid = RtlValidSid(Sid);
  v13 = 0LL;
  if ( !valid )
    return -1073741704;
  v14 = *(_DWORD *)((char *)Sid + 2) - v34;
  if ( !v14 )
    v14 = *((unsigned __int16 *)Sid + 3) - v35;
  if ( v14 || *((_BYTE *)Sid + 1) != 1 || *((_DWORD *)Sid + 2) )
    return -1073741811;
  if ( Acl->AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= (unsigned __int8)AceRevision )
    AclRevision = (unsigned __int8)AceRevision;
  v34 = AclRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0
    || AccessMask
    || !AttributeInfo
    || AttributeInfo->Version != 1
    || AttributeInfo->Reserved
    || !AttributeInfo->AttributeCount )
  {
    return -1073741811;
  }
  pAttributeV1 = AttributeInfo->Attribute.pAttributeV1;
  for ( i = 0; i < AttributeInfo->AttributeCount; ++i )
  {
    if ( !(unsigned __int8)RtlpValidAttribute(pAttributeV1, v13) )
      return -1073741811;
    ++pAttributeV1;
  }
  if ( AttributeInfo->AttributeCount != 1 )
    return -1073741811;
  v18 = Src;
  v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute((__int64)AttributeInfo->Attribute.pAttributeV1, Src, &Size);
  if ( v11 == -1073741789 )
  {
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, Size);
    v18 = Heap;
    if ( !Heap )
      return -1073741801;
    v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute((__int64)AttributeInfo->Attribute.pAttributeV1, Heap, &Size);
  }
  if ( v11 >= 0 )
  {
    if ( RtlValidAcl(Acl) && RtlFirstFreeAce(Acl, &FirstFree) )
    {
      v20 = Size;
      v21 = 4 * (*((unsigned __int8 *)Sid + 1) + 4);
      LOWORD(v30) = v21;
      if ( Size > 0xFFFF || (int)RtlUShortAdd(v21, Size, (__int16 *)&v30) < 0 )
      {
        v11 = -1073741675;
      }
      else
      {
        v22 = 8;
        v23 = Acl + 1;
        *ReturnLength = 8;
        for ( j = 0; j < Acl->AceCount; v23 = (PACL)((char *)v23 + v23->AclSize) )
        {
          ++j;
          v22 += v23->AclSize;
          *ReturnLength = v22;
        }
        v25 = (unsigned __int16)v30;
        v26 = FirstFree;
        v27 = v22 + (unsigned __int16)v30;
        *ReturnLength = v27;
        if ( v26 && (char *)v26 + v25 <= (char *)Acl + Acl->AclSize )
        {
          v28 = Size_4;
          v26[1] = v25;
          *((_BYTE *)v26 + 1) = v28;
          *(_BYTE *)v26 = 18;
          *((_DWORD *)v26 + 1) = 0;
          RtlCopySid(4 * *((unsigned __int8 *)Sid + 1) + 8, v26 + 4, Sid);
          memmove(&v26[2 * *((unsigned __int8 *)Sid + 1) + 8], v18, v20);
          ++Acl->AceCount;
          Acl->AclRevision = v34;
        }
        else
        {
          v11 = -1073741671;
          *ReturnLength = (v27 + 3) & 0xFFFFFFFC;
        }
      }
    }
    else
    {
      v11 = -1073741705;
    }
  }
  if ( v18 && v18 != Src )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
  return v11;
}
