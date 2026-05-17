/*
 * XREFs of RtlAppxIsFileOwnedByTrustedInstaller @ 0x180131B50
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlEqualSid @ 0x1800CE210 (RtlEqualSid.c)
 *     RtlCreateServiceSid @ 0x1800D0430 (RtlCreateServiceSid.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1800ED7C0 (RtlGetOwnerSecurityDescriptor.c)
 *     NtQuerySecurityObject @ 0x180164980 (NtQuerySecurityObject.c)
 */

__int64 __fastcall RtlAppxIsFileOwnedByTrustedInstaller(__int64 a1, bool *a2)
{
  int OwnerSecurityDescriptor; // ebx
  __int64 Heap; // rsi
  __int64 v7; // rax
  _WORD *v8; // rdi
  unsigned __int16 *v9; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-18h] BYREF
  char v11; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+48h] BYREF

  v9 = 0LL;
  v12 = 0;
  v13 = 0;
  v10[0] = 2228256LL;
  v10[1] = L"TrustedInstaller";
  if ( !a2 )
    return 3221225485LL;
  OwnerSecurityDescriptor = NtQuerySecurityObject(a1, 1LL, 0LL, 0LL, &v12);
  if ( OwnerSecurityDescriptor == -1073741789 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v12);
    if ( Heap )
    {
      OwnerSecurityDescriptor = NtQuerySecurityObject(a1, 1LL, Heap, v12, &v12);
      if ( OwnerSecurityDescriptor >= 0 )
      {
        OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Heap, &v9, &v11);
        if ( OwnerSecurityDescriptor >= 0 )
        {
          if ( v9 )
          {
            OwnerSecurityDescriptor = RtlCreateServiceSid((__int64)v10, 0LL, &v13);
            if ( OwnerSecurityDescriptor == -1073741789 )
            {
              v7 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v13);
              v8 = (_WORD *)v7;
              if ( v7 )
              {
                OwnerSecurityDescriptor = RtlCreateServiceSid((__int64)v10, v7, &v13);
                if ( OwnerSecurityDescriptor >= 0 )
                  *a2 = RtlEqualSid(v9, v8);
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v8);
              }
            }
          }
        }
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
  }
  return (unsigned int)OwnerSecurityDescriptor;
}
