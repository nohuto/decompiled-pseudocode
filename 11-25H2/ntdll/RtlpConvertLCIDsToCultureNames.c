/*
 * XREFs of RtlpConvertLCIDsToCultureNames @ 0x1801410C0
 * Callers:
 *     RtlpSetPreferredUILanguages @ 0x180141E40 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlLCIDToCultureName @ 0x18005B640 (RtlLCIDToCultureName.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlUnicodeStringToLcid @ 0x180089820 (RtlUnicodeStringToLcid.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     LdrpMultiSZCchLength @ 0x1800EC68C (LdrpMultiSZCchLength.c)
 *     wcsnlen @ 0x180129500 (wcsnlen.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpConvertLCIDsToCultureNames(WCHAR *SourceString, _QWORD *a2)
{
  PCWSTR v3; // rsi
  unsigned int v4; // r13d
  unsigned int v5; // edi
  unsigned int v6; // ebx
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  unsigned int v9; // ecx
  void *v10; // r14
  _DWORD *v11; // r15
  unsigned int i; // eax
  LCID v13; // ebx
  BOOLEAN v14; // al
  unsigned int v15; // ecx
  unsigned __int64 Length; // rbx
  unsigned int v18; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 v19; // [rsp+24h] [rbp-DCh]
  _UNICODE_STRING String; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v23[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v24; // [rsp+60h] [rbp-A0h] BYREF

  v18 = 0;
  v19 = 0;
  v3 = SourceString;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  v4 = 0;
  v5 = 0;
  DestinationString = 0LL;
  if ( !a2 || !SourceString || *a2 || (int)LdrpMultiSZCchLength(SourceString, (__int64)a2, &v18) < 0 )
    return 3221225485LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v18 *= 2;
  v6 = v18;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x2A8uLL);
  v9 = v18;
  v10 = Heap;
  v11 = Heap;
  for ( i = v6; ; i = v9 )
  {
    v18 = v9;
    if ( !v3 || !*v3 || !v6 )
    {
      *v11 = 0;
      goto LABEL_22;
    }
    if ( v4 >= 4 )
      break;
    v21 = 2 * (unsigned int)wcsnlen(v3, (unsigned __int64)i >> 1);
    RtlInitUnicodeString(&DestinationString, v3);
    if ( (int)RtlUnicodeStringToLcid(&DestinationString, &v23[v4]) < 0 )
      break;
    v13 = v23[v4];
    String.Buffer = (wchar_t *)&v24;
    *(_DWORD *)&String.Length = 11141120;
    v14 = RtlLCIDToCultureName(v13, &String);
    v15 = 0;
    if ( !v14 )
      break;
    while ( v15 < v4 )
    {
      if ( v13 == v23[v15] )
        goto LABEL_18;
      ++v15;
    }
    v19 += String.Length + 2;
    if ( v19 >= 0x2A7u )
    {
      v5 = -1073741595;
      goto LABEL_19;
    }
    Length = String.Length;
    memmove(v11, String.Buffer, String.Length + 2LL);
    ++v4;
    v3 = (PCWSTR)((char *)v3 + (unsigned int)v21 + 2);
    v11 = (_DWORD *)((char *)v11 + 2 * (Length >> 1) + 2);
    v9 = -2 - v21 + v18;
    v6 = v9;
  }
LABEL_18:
  v5 = -1073741811;
LABEL_19:
  if ( v10 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v10);
    return v5;
  }
LABEL_22:
  *a2 = v10;
  return v5;
}
