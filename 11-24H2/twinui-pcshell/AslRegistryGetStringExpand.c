/*
 * XREFs of AslRegistryGetStringExpand @ 0x180138500
 * Callers:
 *     AslEnvBuildBasic @ 0x180136F3C (AslEnvBuildBasic.c)
 * Callees:
 *     AslRegistryGetString @ 0x180138F90 (AslRegistryGetString.c)
 *     AslFree @ 0x180139254 (AslFree.c)
 *     AslEnvExpandStrings2 @ 0x180139900 (AslEnvExpandStrings2.c)
 *     AslEnvGetProcessWowInfo @ 0x18013A1F8 (AslEnvGetProcessWowInfo.c)
 *     AslLogCallPrintf @ 0x1802CE2E0 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetStringExpand(wchar_t **a1, __int64 a2, __int64 a3, __int64 a4)
{
  wchar_t *v5; // rsi
  int String; // eax
  wchar_t *v8; // rdi
  int ProcessWowInfo; // ebx
  wchar_t *Heap; // rax
  int v11; // r8d
  __int64 v12; // rbx
  wchar_t *v13; // rax
  int v15; // [rsp+28h] [rbp-38h]
  int v16; // [rsp+30h] [rbp-30h]
  __int16 v17[2]; // [rsp+40h] [rbp-20h] BYREF
  __int16 v18; // [rsp+44h] [rbp-1Ch] BYREF
  wchar_t *Str; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-10h] BYREF

  v5 = 0LL;
  v17[0] = -1;
  Str = 0LL;
  v18 = -1;
  String = AslRegistryGetString(&Str, a2, a3);
  v8 = Str;
  ProcessWowInfo = String;
  if ( String < 0 )
    goto LABEL_16;
  if ( !wcschr(Str, 0x25u) )
  {
    *a1 = v8;
    return 0;
  }
  ProcessWowInfo = AslEnvGetProcessWowInfo(&v18, v17);
  if ( ProcessWowInfo >= 0 )
  {
    v20[0] = 260LL;
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    v5 = Heap;
    if ( !Heap )
    {
      v11 = 1400;
LABEL_8:
      AslLogCallPrintf(1, (unsigned int)"AslRegistryGetStringExpand", v11, (unsigned int)"Out of memory");
      v8 = Str;
      ProcessWowInfo = -1073741801;
      goto LABEL_16;
    }
    v8 = Str;
    ProcessWowInfo = AslEnvExpandStrings2(a4, Str, Heap, 260LL, v20, v18, v17[0]);
    if ( ProcessWowInfo == -1073741789 )
    {
      AslFree(NtCurrentPeb()->ProcessHeap, v5);
      v12 = v20[0];
      v13 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v20[0]);
      v5 = v13;
      if ( !v13 )
      {
        v11 = 1418;
        goto LABEL_8;
      }
      v8 = Str;
      LOWORD(v16) = v17[0];
      LOWORD(v15) = v18;
      ProcessWowInfo = AslEnvExpandStrings2(a4, Str, v13, v12, v20, v15, v16);
    }
    if ( ProcessWowInfo >= 0 )
    {
      *a1 = v5;
      v5 = 0LL;
      ProcessWowInfo = 0;
    }
    else
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"AslRegistryGetStringExpand",
        1433,
        (unsigned int)"AslEnvExpandStrings2 failed to expand strings for %ws [%x]");
    }
    goto LABEL_16;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"AslRegistryGetStringExpand",
    1388,
    (unsigned int)"AslEnvGetProcessWowInfo failed [%x]");
LABEL_16:
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Str);
  if ( v5 )
    AslFree(NtCurrentPeb()->ProcessHeap, v5);
  return (unsigned int)ProcessWowInfo;
}
