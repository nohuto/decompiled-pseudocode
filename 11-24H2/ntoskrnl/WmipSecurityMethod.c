/*
 * XREFs of WmipSecurityMethod @ 0x140989620
 * Callers:
 *     ObpRemoveObjectRoutine @ 0x140842AF0 (ObpRemoveObjectRoutine.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140404170 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407A6298 (WmipSaveGuidSecurityDescriptor.c)
 *     ObDeassignSecurity @ 0x140843480 (ObDeassignSecurity.c)
 *     ObSetSecurityDescriptorInfo @ 0x140854B90 (ObSetSecurityDescriptorInfo.c)
 *     ObQuerySecurityDescriptorInfo @ 0x14087D604 (ObQuerySecurityDescriptorInfo.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140989740 (ObAssignObjectSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipSecurityMethod(
        __int64 a1,
        int a2,
        DWORD *a3,
        void *a4,
        ULONG *a5,
        __int64 *a6,
        int a7,
        __int64 a8)
{
  int v9; // edx
  int v10; // edx
  ULONG_PTR v12; // rdi
  int v13; // ebx
  ULONG v14; // eax
  void *Pool2; // rax
  void *v16; // r14
  int v17; // eax
  __int64 v18; // [rsp+20h] [rbp-F8h]
  __int64 v19; // [rsp+28h] [rbp-F0h]
  ULONG i; // [rsp+70h] [rbp-A8h] BYREF
  DWORD v21; // [rsp+74h] [rbp-A4h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-A0h] BYREF
  wchar_t pszDest[40]; // [rsp+90h] [rbp-88h] BYREF

  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
          KeBugCheckEx(0x29u, 1uLL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
        return ObAssignObjectSecurityDescriptor(a1, a4, a8, a6);
      }
      else
      {
        return ObDeassignSecurity(a6);
      }
    }
    else
    {
      return ObQuerySecurityDescriptorInfo(a1, a3, a4, a5);
    }
  }
  else
  {
    v12 = 64LL;
    if ( a7 != 512 )
      v12 = 256LL;
    DestinationString = 0LL;
    v13 = ObSetSecurityDescriptorInfo(a1, a3, (int)a4, (__int64)a6, a7, a8);
    if ( v13 >= 0 )
    {
      v14 = 1024;
      for ( i = 1024; ; v14 = i )
      {
        Pool2 = (void *)ExAllocatePool2(v12, v14, 0x70696D57u);
        v16 = Pool2;
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        v21 = -1;
        v17 = ObQuerySecurityDescriptorInfo(a1, &v21, Pool2, &i);
        v13 = v17;
        if ( v17 != -1073741789 )
          break;
        ExFreePoolWithTag(v16, 0);
      }
      if ( v17 >= 0 )
      {
        LODWORD(v19) = *(unsigned __int16 *)(a1 + 30);
        LODWORD(v18) = *(unsigned __int16 *)(a1 + 28);
        RtlStringCbPrintfW(
          pszDest,
          0x4CuLL,
          L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
          *(unsigned int *)(a1 + 24),
          v18,
          v19,
          *(unsigned __int8 *)(a1 + 32),
          *(unsigned __int8 *)(a1 + 33),
          *(unsigned __int8 *)(a1 + 34),
          *(unsigned __int8 *)(a1 + 35),
          *(unsigned __int8 *)(a1 + 36),
          *(unsigned __int8 *)(a1 + 37),
          *(unsigned __int8 *)(a1 + 38),
          *(unsigned __int8 *)(a1 + 39));
        RtlInitUnicodeString(&DestinationString, pszDest);
        v13 = WmipSaveGuidSecurityDescriptor((__int64)&DestinationString, v16);
        ExFreePoolWithTag(v16, 0);
      }
    }
    return (unsigned int)v13;
  }
}
