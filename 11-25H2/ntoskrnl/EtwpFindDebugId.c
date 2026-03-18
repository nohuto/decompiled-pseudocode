/*
 * XREFs of EtwpFindDebugId @ 0x140898408
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x140898054 (EtwpLocateDbgIdForRegEntry.c)
 *     EtwpCovSampContextGetModule @ 0x14090D0F0 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040FE90 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     EtwpIsValidImageAddress @ 0x140898620 (EtwpIsValidImageAddress.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpFindDebugId(unsigned __int64 a1, size_t a2, __int64 *a3, _DWORD *a4)
{
  unsigned __int64 v6; // rax
  int v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  unsigned int i; // r15d
  size_t v13; // rcx
  size_t v14; // rdi
  void *v15; // rax
  void **v16; // rcx
  __int64 Pool2; // rax
  void *Src; // [rsp+30h] [rbp-78h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-70h]
  unsigned __int64 v21; // [rsp+40h] [rbp-68h]
  __int64 v22; // [rsp+48h] [rbp-60h]
  __int128 v23; // [rsp+50h] [rbp-58h]
  size_t Size; // [rsp+60h] [rbp-48h]
  int v25; // [rsp+68h] [rbp-40h]

  v6 = RtlImageNtHeader(a1);
  v7 = v6;
  v21 = v6;
  if ( !v6 )
    return 3221225595LL;
  LODWORD(Src) = 0;
  v8 = RtlImageDirectoryEntryToData(a1, 1, 6u, &Src);
  v9 = v8;
  v22 = v8;
  if ( !v8 || (unsigned int)Src < 0x1C )
    return 3221225485LL;
  v10 = (unsigned int)Src;
  if ( !(unsigned __int8)EtwpIsValidImageAddress(v7, a1, a2, v8, (unsigned int)Src) )
    return 3221225595LL;
  v11 = v10 / 0x1C;
  for ( i = 0; ; ++i )
  {
    v20 = i;
    if ( i >= (unsigned int)v11 )
      return 3221226021LL;
    v23 = *(_OWORD *)v9;
    Size = *(_QWORD *)(v9 + 16);
    v25 = *(_DWORD *)(v9 + 24);
    v13 = HIDWORD(Size);
    if ( HIDWORD(Size) > a2 )
      return 3221225485LL;
    v14 = (unsigned int)Size;
    if ( (unsigned int)Size > a2 || v13 > a2 - (unsigned int)Size )
      return 3221225485LL;
    if ( HIDWORD(v23) == 2 )
    {
      Src = (void *)(a1 + v13);
      if ( !(unsigned __int8)EtwpIsValidImageAddress(v21, a1, a2, (int)a1 + HIDWORD(Size), (unsigned int)Size) )
        return 3221225595LL;
      v15 = Src;
      if ( *(_DWORD *)Src == 1396986706 )
        break;
    }
    v9 += 28LL;
    v22 = v9;
  }
  if ( (unsigned int)v14 < 0x1C )
    return 3221225595LL;
  if ( *a4 >= (unsigned int)v14 )
  {
    v16 = (void **)a3;
LABEL_17:
    *a4 = v14;
    memmove(*v16, v15, v14);
    return 0LL;
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v16 = (void **)a3;
  *a3 = Pool2;
  if ( Pool2 )
  {
    v15 = Src;
    goto LABEL_17;
  }
  return 3221225495LL;
}
