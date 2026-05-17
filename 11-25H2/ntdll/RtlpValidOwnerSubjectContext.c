/*
 * XREFs of RtlpValidOwnerSubjectContext @ 0x1800E8934
 * Callers:
 *     RtlpNewSecurityObject @ 0x180061400 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1800E6AA0 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlEqualSid @ 0x180084E60 (RtlEqualSid.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtQueryInformationToken @ 0x180163640 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x180165870 (NtOpenProcessToken.c)
 *     ZwPrivilegeCheck @ 0x180165A50 (ZwPrivilegeCheck.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

char __fastcall RtlpValidOwnerSubjectContext(void *a1, unsigned __int16 *a2, char a3, int *a4)
{
  char v4; // bl
  char *ProcessHeap; // r12
  int v9; // eax
  int v10; // eax
  unsigned int *Heap; // r14
  __int64 v12; // r9
  unsigned int i; // edi
  __int64 v14; // r9
  bool v15; // sf
  char v16; // al
  int v18; // eax
  char v19[4]; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-85h] BYREF
  HANDLE Handle[2]; // [rsp+38h] [rbp-81h] BYREF
  void *v22; // [rsp+48h] [rbp-71h]
  __int128 v23; // [rsp+50h] [rbp-69h] BYREF
  int v24; // [rsp+60h] [rbp-59h]
  _WORD *v25; // [rsp+70h] [rbp-49h] BYREF

  v4 = 0;
  v22 = a1;
  v20 = 0;
  Handle[0] = 0LL;
  v19[0] = 0;
  v24 = 0;
  v23 = 0LL;
  if ( a2 )
  {
    if ( a3 )
    {
      v18 = NtOpenProcessToken(-1LL, 8LL, Handle);
      *a4 = v18;
      if ( v18 < 0 )
        return 0;
    }
    else
    {
      Handle[0] = a1;
    }
    ProcessHeap = (char *)NtCurrentPeb()->ProcessHeap;
    v9 = NtQueryInformationToken(Handle[0], 1LL, &v25, 84LL, &v20);
    *a4 = v9;
    if ( v9 < 0 )
      goto LABEL_31;
    if ( RtlEqualSid(a2, v25) )
    {
      if ( a3 )
        NtClose(Handle[0]);
      return 1;
    }
    v10 = NtQueryInformationToken(Handle[0], 2LL, 0LL, 0LL, &v20);
    *a4 = v10;
    if ( (int)(v10 + 0x80000000) >= 0 && v10 != -1073741789 )
    {
LABEL_31:
      if ( a3 )
        NtClose(Handle[0]);
      return 0;
    }
    Heap = (unsigned int *)RtlAllocateHeap(ProcessHeap, 0, v20);
    if ( !Heap )
    {
      *a4 = -1073741801;
      goto LABEL_31;
    }
    *a4 = NtQueryInformationToken(Handle[0], 2LL, Heap, v20, &v20);
    if ( a3 )
      NtClose(Handle[0]);
    if ( *a4 < 0 )
    {
LABEL_27:
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Heap, v12);
      return v4;
    }
    for ( i = 0; i < *Heap; ++i )
    {
      if ( RtlEqualSid(a2, *(_WORD **)&Heap[4 * i + 2]) )
      {
        if ( (Heap[4 * i + 4] & 0x18) == 8 )
        {
          v4 = 1;
          goto LABEL_27;
        }
        break;
      }
    }
    RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Heap, v12);
    Handle[1] = (HANDLE)18;
    *((_QWORD *)&v23 + 1) = 18LL;
    *(_QWORD *)&v23 = 0x100000001LL;
    v24 = 0;
    v15 = (int)ZwPrivilegeCheck(v22, &v23, v19, v14) < 0;
    v16 = 0;
    if ( !v15 )
      v16 = v19[0];
    if ( v16 )
      return 1;
  }
  *a4 = -1073741734;
  return 0;
}
