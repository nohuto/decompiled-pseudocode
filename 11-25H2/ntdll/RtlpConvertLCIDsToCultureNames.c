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

__int64 __fastcall RtlpConvertLCIDsToCultureNames(WCHAR *SourceString, __int64 *a2)
{
  PCWSTR v3; // rsi
  unsigned int v4; // r13d
  unsigned int v5; // edi
  unsigned int v6; // ebx
  char *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v9; // r9
  unsigned int v10; // ecx
  __int64 v11; // r14
  _DWORD *v12; // r15
  unsigned int i; // eax
  unsigned int v14; // ebx
  char v15; // al
  unsigned int v16; // ecx
  unsigned __int64 v17; // rbx
  unsigned int v19; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 v20; // [rsp+24h] [rbp-DCh]
  _DWORD v21[2]; // [rsp+28h] [rbp-D8h] BYREF
  void *Src; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  int v25[4]; // [rsp+50h] [rbp-B0h] BYREF
  char v26; // [rsp+60h] [rbp-A0h] BYREF

  v19 = 0;
  v20 = 0;
  v3 = SourceString;
  v21[1] = 0;
  v4 = 0;
  v5 = 0;
  DestinationString = 0LL;
  if ( !a2 || !SourceString || *a2 || (int)LdrpMultiSZCchLength(SourceString, (__int64)a2, &v19) < 0 )
    return 3221225485LL;
  ProcessHeap = (char *)NtCurrentPeb()->ProcessHeap;
  v19 *= 2;
  v6 = v19;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x2A8uLL);
  v10 = v19;
  v11 = Heap;
  v12 = (_DWORD *)Heap;
  for ( i = v6; ; i = v10 )
  {
    v19 = v10;
    if ( !v3 || !*v3 || !v6 )
    {
      *v12 = 0;
      goto LABEL_22;
    }
    if ( v4 >= 4 )
      break;
    v23 = 2 * (unsigned int)wcsnlen(v3, (unsigned __int64)i >> 1);
    RtlInitUnicodeString(&DestinationString, v3);
    if ( (int)RtlUnicodeStringToLcid(&DestinationString.Length, &v25[v4]) < 0 )
      break;
    v14 = v25[v4];
    Src = &v26;
    v21[0] = 11141120;
    v15 = RtlLCIDToCultureName(v14, (__int64)v21);
    v16 = 0;
    if ( !v15 )
      break;
    while ( v16 < v4 )
    {
      if ( v14 == v25[v16] )
        goto LABEL_18;
      ++v16;
    }
    v20 += LOWORD(v21[0]) + 2;
    if ( v20 >= 0x2A7u )
    {
      v5 = -1073741595;
      goto LABEL_19;
    }
    v17 = LOWORD(v21[0]);
    memmove(v12, Src, LOWORD(v21[0]) + 2LL);
    ++v4;
    v3 = (PCWSTR)((char *)v3 + (unsigned int)v23 + 2);
    v12 = (_DWORD *)((char *)v12 + 2 * (v17 >> 1) + 2);
    v10 = -2 - v23 + v19;
    v6 = v10;
  }
LABEL_18:
  v5 = -1073741811;
LABEL_19:
  if ( v11 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v11, v9);
    return v5;
  }
LABEL_22:
  *a2 = v11;
  return v5;
}
