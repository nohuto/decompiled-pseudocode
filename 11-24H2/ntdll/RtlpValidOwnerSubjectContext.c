/*
 * XREFs of RtlpValidOwnerSubjectContext @ 0x1800C6760
 * Callers:
 *     RtlpSetSecurityObject @ 0x1800C6F30 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlEqualSid @ 0x1800CE210 (RtlEqualSid.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtQueryInformationToken @ 0x1801620B0 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1801642E0 (NtOpenProcessToken.c)
 *     ZwPrivilegeCheck @ 0x1801644C0 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

char __fastcall RtlpValidOwnerSubjectContext(void *a1, __int64 a2, char a3, int *a4)
{
  char v4; // bl
  void *ProcessHeap; // r12
  int v9; // eax
  int v10; // eax
  unsigned int *Heap; // r14
  unsigned int i; // edi
  bool v13; // sf
  char v14; // al
  int v16; // eax
  char v17[4]; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-85h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-81h] BYREF
  void *v20; // [rsp+48h] [rbp-71h]
  __int128 v21; // [rsp+50h] [rbp-69h] BYREF
  int v22; // [rsp+60h] [rbp-59h]
  __int64 v23[12]; // [rsp+70h] [rbp-49h] BYREF

  v4 = 0;
  v20 = a1;
  v18 = 0;
  Handle[0] = 0LL;
  v17[0] = 0;
  v22 = 0;
  v21 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      v16 = NtOpenProcessToken(-1LL, 8LL, Handle);
      *a4 = v16;
      if ( v16 < 0 )
        return 0;
    }
    else
    {
      Handle[0] = a1;
    }
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    v9 = NtQueryInformationToken(Handle[0], 1LL, v23, 84LL, &v18);
    *a4 = v9;
    if ( v9 < 0 )
      goto LABEL_31;
    if ( (unsigned __int8)RtlEqualSid(a2, v23[0]) )
    {
      if ( a3 )
        NtClose(Handle[0]);
      return 1;
    }
    v10 = NtQueryInformationToken(Handle[0], 2LL, 0LL, 0LL, &v18);
    *a4 = v10;
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741789 )
    {
LABEL_31:
      if ( a3 )
        NtClose(Handle[0]);
      return 0;
    }
    Heap = (unsigned int *)RtlAllocateHeap((__int64)ProcessHeap, 0, v18);
    if ( !Heap )
    {
      *a4 = -1073741801;
      goto LABEL_31;
    }
    *a4 = NtQueryInformationToken(Handle[0], 2LL, Heap, v18, &v18);
    if ( a3 )
      NtClose(Handle[0]);
    if ( *a4 < 0 )
    {
LABEL_27:
      RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
      return v4;
    }
    for ( i = 0; i < *Heap; ++i )
    {
      if ( (unsigned __int8)RtlEqualSid(a2, *(_QWORD *)&Heap[4 * i + 2]) )
      {
        if ( (Heap[4 * i + 4] & 0x18) == 8 )
        {
          v4 = 1;
          goto LABEL_27;
        }
        break;
      }
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)Heap);
    Handle[1] = (HANDLE)18;
    *((_QWORD *)&v21 + 1) = 18LL;
    *(_QWORD *)&v21 = 0x100000001LL;
    v22 = 0;
    v13 = (int)ZwPrivilegeCheck(v20, &v21, v17) < 0;
    v14 = 0;
    if ( !v13 )
      v14 = v17[0];
    if ( v14 )
      return 1;
  }
  *a4 = -1073741734;
  return 0;
}
