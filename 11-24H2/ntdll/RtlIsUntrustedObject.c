/*
 * XREFs of RtlIsUntrustedObject @ 0x180139110
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlFindAceByType @ 0x1800EDD60 (RtlFindAceByType.c)
 *     NtQuerySecurityObject @ 0x180164980 (NtQuerySecurityObject.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlIsUntrustedObject(__int64 a1, __int64 a2, _BYTE *a3)
{
  _BYTE *Heap; // rbx
  char v6; // bp
  __int64 result; // rax
  int v8; // esi
  __int64 v9; // rdi
  unsigned __int8 *AceByType; // rax
  unsigned int v11; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int v12[3]; // [rsp+34h] [rbp-C4h] BYREF
  _BYTE v13[128]; // [rsp+40h] [rbp-B8h] BYREF

  *a3 = 1;
  v11 = 0;
  Heap = v13;
  if ( !a2 && a1 )
  {
    v6 = 0;
    result = NtQuerySecurityObject(a1, 16LL, v13, 124LL, &v11);
    v8 = result;
    if ( (int)result < 0 )
    {
      if ( (_DWORD)result != -1073741789 )
        return result;
      Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v11);
      if ( !Heap )
        return (unsigned int)(v8 - 12);
      v6 = 1;
      v8 = NtQuerySecurityObject(a1, 16LL, Heap, 124LL, &v11);
      if ( v8 < 0 )
      {
LABEL_21:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
        return (unsigned int)v8;
      }
    }
    if ( (Heap[2] & 0x10) != 0 )
    {
      if ( *((__int16 *)Heap + 1) >= 0 )
      {
        v9 = *((_QWORD *)Heap + 3);
      }
      else
      {
        if ( !*((_DWORD *)Heap + 3) )
          goto LABEL_19;
        v9 = (__int64)&Heap[*((unsigned int *)Heap + 3)];
      }
      if ( v9 )
      {
        v12[0] = 0;
        while ( 1 )
        {
          AceByType = RtlFindAceByType(v9, 17, v12);
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
      return (unsigned int)v8;
    goto LABEL_21;
  }
  return 3221225485LL;
}
