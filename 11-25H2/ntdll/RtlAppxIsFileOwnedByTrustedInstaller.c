/*
 * XREFs of RtlAppxIsFileOwnedByTrustedInstaller @ 0x180133630
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlEqualSid @ 0x180084E60 (RtlEqualSid.c)
 *     RtlCreateServiceSid @ 0x1800CD150 (RtlCreateServiceSid.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1800EDE40 (RtlGetOwnerSecurityDescriptor.c)
 *     NtQuerySecurityObject @ 0x180165F10 (NtQuerySecurityObject.c)
 */

__int64 __fastcall RtlAppxIsFileOwnedByTrustedInstaller(__int64 a1, bool *a2)
{
  int OwnerSecurityDescriptor; // ebx
  __int64 Heap; // rsi
  __int64 v7; // r9
  __int64 v8; // rax
  _WORD *v9; // rdi
  __int64 v10; // r9
  unsigned __int16 *v11; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v14; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v15; // [rsp+98h] [rbp+48h] BYREF

  v11 = 0LL;
  v14 = 0;
  v15 = 0;
  v12[0] = 2228256LL;
  v12[1] = L"TrustedInstaller";
  if ( !a2 )
    return 3221225485LL;
  OwnerSecurityDescriptor = NtQuerySecurityObject(a1, 1LL, 0LL, 0LL, &v14);
  if ( OwnerSecurityDescriptor == -1073741789 )
  {
    Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v14);
    if ( Heap )
    {
      OwnerSecurityDescriptor = NtQuerySecurityObject(a1, 1LL, Heap, v14, &v14);
      if ( OwnerSecurityDescriptor >= 0 )
      {
        OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Heap, &v11, &v13);
        if ( OwnerSecurityDescriptor >= 0 )
        {
          if ( v11 )
          {
            OwnerSecurityDescriptor = RtlCreateServiceSid((__int64)v12, 0LL, &v15);
            if ( OwnerSecurityDescriptor == -1073741789 )
            {
              v8 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v15);
              v9 = (_WORD *)v8;
              if ( v8 )
              {
                OwnerSecurityDescriptor = RtlCreateServiceSid((__int64)v12, v8, &v15);
                if ( OwnerSecurityDescriptor >= 0 )
                  *a2 = RtlEqualSid(v11, v9);
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v9, v10);
              }
            }
          }
        }
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v7);
    }
  }
  return (unsigned int)OwnerSecurityDescriptor;
}
