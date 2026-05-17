/*
 * XREFs of RtlIsUntrustedObject @ 0x18013A880
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlFindAceByType @ 0x1800EEBE0 (RtlFindAceByType.c)
 *     NtQuerySecurityObject @ 0x180165F10 (NtQuerySecurityObject.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlIsUntrustedObject(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *Heap; // rbx
  char v6; // bp
  __int64 result; // rax
  __int64 v8; // r9
  int v9; // esi
  __int64 v10; // rdi
  unsigned __int8 *AceByType; // rax
  unsigned int v12; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v13[3]; // [rsp+34h] [rbp-C4h] BYREF
  _BYTE v14[128]; // [rsp+40h] [rbp-B8h] BYREF

  *a3 = 1;
  v12 = 0;
  Heap = v14;
  if ( !a2 && a1 )
  {
    v6 = 0;
    result = NtQuerySecurityObject(a1, 16LL, v14, 124LL, &v12);
    v9 = result;
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741789 )
        return result;
      Heap = (_BYTE *)RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v12);
      if ( !Heap )
        return (unsigned int)(v9 - 12);
      v6 = 1;
      v9 = NtQuerySecurityObject(a1, 16LL, Heap, 124LL, &v12);
      if ( v9 < 0 )
      {
LABEL_21:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap, v8);
        return (unsigned int)v9;
      }
    }
    if ( (Heap[2] & 0x10) != 0 )
    {
      if ( *((__int16 *)Heap + 1) >= 0 )
      {
        v10 = *((_QWORD *)Heap + 3);
      }
      else
      {
        if ( !*((_DWORD *)Heap + 3) )
          goto LABEL_19;
        v10 = (__int64)&Heap[*((unsigned int *)Heap + 3)];
      }
      if ( v10 )
      {
        v13[0] = 0;
        while ( 1 )
        {
          AceByType = RtlFindAceByType(v10, 17, v13);
          if ( !AceByType )
            break;
          if ( (AceByType[1] & 8) == 0 )
          {
            if ( !AceByType[9] || *(_DWORD *)&AceByType[4 * AceByType[9] + 12] < 0x2000u )
              goto LABEL_20;
            break;
          }
        }
      }
    }
LABEL_19:
    *a3 = 0;
LABEL_20:
    if ( !v6 )
      return (unsigned int)v9;
    goto LABEL_21;
  }
  return 3221225485LL;
}
