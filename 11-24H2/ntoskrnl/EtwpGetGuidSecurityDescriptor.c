/*
 * XREFs of EtwpGetGuidSecurityDescriptor @ 0x140839E78
 * Callers:
 *     EtwpAccessCheckFromState @ 0x140839BF8 (EtwpAccessCheckFromState.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140839D68 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpInitializeSecurity @ 0x140C3E2EC (EtwpInitializeSecurity.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     SeValidSecurityDescriptor @ 0x1409EA4E0 (SeValidSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpGetGuidSecurityDescriptor(UNICODE_STRING *a1, _QWORD *a2)
{
  void *Pool2; // rbp
  int v3; // r14d
  ULONG v4; // esi
  HANDLE v5; // r15
  HANDLE v6; // r12
  ULONG Length; // r13d
  _DWORD *v8; // rbx
  NTSTATUS v9; // edi
  unsigned int v10; // ebx
  void *v12; // rax
  ULONG v13; // eax
  ULONG ResultLength; // [rsp+80h] [rbp+18h] BYREF

  Pool2 = 0LL;
  v3 = 0;
  *a2 = 0LL;
  v4 = 512;
  while ( 1 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v5 = EtwpMutableSecurityKeyHandle;
    ResultLength = 0;
    v6 = EtwpSecurityKeyHandle;
    if ( !EtwpMutableSecurityKeyHandle && !EtwpSecurityKeyHandle )
    {
      v10 = -1073741811;
      goto LABEL_17;
    }
    if ( v4 >= 0xFFFFFFF0 )
    {
      v10 = -1073741675;
LABEL_17:
      ExFreePoolWithTag(Pool2, 0);
      return v10;
    }
    Length = v4 + 16;
    v8 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( !v8 )
    {
      v10 = -1073741801;
      goto LABEL_17;
    }
    v9 = -1073741772;
    if ( v5 )
    {
      v9 = ZwQueryValueKey(v5, a1, KeyValuePartialInformation, v8, Length, &ResultLength);
      if ( v9 != -1073741772 )
        goto LABEL_12;
    }
    if ( v6 )
    {
      v9 = ZwQueryValueKey(v6, a1, KeyValuePartialInformation, v8, Length, &ResultLength);
LABEL_12:
      if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      {
        v3 = v8[1];
        if ( v9 >= 0 )
        {
          v13 = v8[2];
          if ( v4 < v13 )
            v9 = -2147483643;
          else
            memmove(Pool2, v8 + 3, v13);
        }
        v4 = v8[2];
      }
    }
    ExFreePoolWithTag(v8, 0);
    if ( v9 != -2147483643 && v9 != -1073741789 )
    {
      v10 = v9;
      if ( v9 >= 0 && v3 == 3 )
      {
        if ( SeValidSecurityDescriptor(v4, Pool2) )
        {
          v12 = (void *)ExAllocatePool2(0x100uLL);
          *a2 = v12;
          if ( v12 )
          {
            memmove(v12, Pool2, v4);
            v10 = v9;
          }
          else
          {
            v10 = -1073741670;
          }
        }
        else
        {
          v10 = -1073741703;
        }
      }
      goto LABEL_17;
    }
  }
}
