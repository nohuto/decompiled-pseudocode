/*
 * XREFs of RtlpConvertCultureNamesToLCIDs @ 0x18011E770
 * Callers:
 *     <none>
 * Callees:
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlInitUnicodeString @ 0x1800C7EE0 (RtlInitUnicodeString.c)
 *     LdrpMultiSZCchLength @ 0x1800E6C7C (LdrpMultiSZCchLength.c)
 *     wcsnlen @ 0x180125C50 (wcsnlen.c)
 *     RtlConvertLCIDToString @ 0x18013D150 (RtlConvertLCIDToString.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpConvertCultureNamesToLCIDs(wchar_t *SourceString, _QWORD *a2)
{
  unsigned int v2; // ebx
  const wchar_t *v4; // rdi
  void *v5; // r14
  unsigned int v6; // esi
  unsigned int i; // ebp
  unsigned int v8; // r15d
  unsigned int j; // edx
  unsigned int v10; // r15d
  PVOID Heap; // rax
  WCHAR *v12; // rdi
  unsigned int k; // ebp
  __int64 v14; // rcx
  __int64 v15; // rax
  int v17; // [rsp+30h] [rbp-68h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-60h] BYREF
  LCID LcidValue[4]; // [rsp+48h] [rbp-50h] BYREF

  v2 = 0;
  v17 = 0;
  v4 = SourceString;
  v5 = 0LL;
  v6 = 0;
  DestinationString = 0LL;
  if ( !a2 || !SourceString || *a2 || (int)LdrpMultiSZCchLength(SourceString, (__int64)a2, &v17) < 0 )
    return 3221225485LL;
  for ( i = 2 * v17; v4 && *v4 && i; i += -2 - v8 )
  {
    if ( v6 >= 4
      || (v8 = 2 * wcsnlen(v4, (unsigned __int64)i >> 1),
          RtlInitUnicodeString(&DestinationString, v4),
          !RtlCultureNameToLCID(&DestinationString, &LcidValue[v6])) )
    {
LABEL_16:
      v2 = -1073741811;
      goto LABEL_29;
    }
    for ( j = 0; j < v6; ++j )
    {
      if ( LcidValue[v6] == LcidValue[j] )
        goto LABEL_16;
    }
    v4 = (const wchar_t *)((char *)v4 + v8 + 2);
    ++v6;
  }
  v10 = (unsigned __int16)(((_WORD)v6 << 6) + 4);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned __int16)(((_WORD)v6 << 6) + 4));
  v5 = Heap;
  if ( Heap )
  {
    v12 = (WCHAR *)Heap;
    for ( k = 0; k < v6; ++k )
    {
      RtlConvertLCIDToString(LcidValue[k], 0x10u, 4u, v12, 0x20u);
      v14 = -1LL;
      do
        ++v14;
      while ( v12[v14] );
      v10 += -2 - v14;
      v15 = -1LL;
      do
        ++v15;
      while ( v12[v15] );
      v12 += v15 + 1;
      if ( v10 < 4 )
      {
        v2 = -1073741595;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
        return v2;
      }
    }
    *(_DWORD *)v12 = 0;
  }
  else
  {
    v2 = -1073741801;
  }
LABEL_29:
  *a2 = v5;
  return v2;
}
