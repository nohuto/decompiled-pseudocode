/*
 * XREFs of SepVerifyDesktopAppxImage @ 0x140291D1C
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14029223C (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140291ED8 (SepVerifyDesktopAppxPackageName.c)
 *     SeGetTrustLabelAce @ 0x1403CE100 (SeGetTrustLabelAce.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PsReferenceProcessFilePointer @ 0x14090B800 (PsReferenceProcessFilePointer.c)
 *     ObQuerySecurityObject @ 0x14099CFD4 (ObQuerySecurityObject.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepVerifyDesktopAppxImage(__int64 a1, int a2, char a3, _BYTE *a4)
{
  _BYTE *v6; // rdi
  int v7; // eax
  NTSTATUS v8; // ebx
  int SecurityObject; // eax
  _BYTE *Pool2; // rax
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE SecurityDescriptor[512]; // [rsp+40h] [rbp-C0h] BYREF

  *a4 = 0;
  v6 = 0LL;
  v7 = *(_DWORD *)(a1 + 1532);
  Object = 0LL;
  if ( (v7 & 1) != 0 )
    return 0;
  v8 = PsReferenceProcessFilePointer(a1, &Object);
  if ( v8 >= 0 )
  {
    v12 = 512;
    v6 = SecurityDescriptor;
    v8 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( v8 >= 0 )
    {
      SecurityObject = ObQuerySecurityObject((_DWORD)Object, 132, (unsigned int)SecurityDescriptor, 512, (__int64)&v12);
      if ( SecurityObject != -1073741789 )
        goto LABEL_5;
      Pool2 = (_BYTE *)ExAllocatePool2(0x100uLL);
      v6 = Pool2;
      if ( Pool2 )
      {
        v8 = RtlCreateSecurityDescriptor(Pool2, 1u);
        if ( v8 >= 0 )
        {
          SecurityObject = ObQuerySecurityObject((_DWORD)Object, 132, (_DWORD)v6, v12, (__int64)&v12);
LABEL_5:
          if ( SecurityObject < 0 )
          {
            v8 = 0;
          }
          else if ( v6 )
          {
            v8 = SepVerifyDesktopAppxPackageName(a2);
            if ( v8 >= 0 && a3 == 1 )
              SeGetTrustLabelAce(v6);
          }
          else
          {
            v8 = -1073739509;
          }
        }
      }
      else
      {
        v8 = -1073741801;
      }
    }
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  if ( v6 && v6 != SecurityDescriptor )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v8;
}
