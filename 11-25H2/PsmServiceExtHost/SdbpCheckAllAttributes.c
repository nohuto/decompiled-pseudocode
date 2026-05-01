/*
 * XREFs of SdbpCheckAllAttributes @ 0x180096ABC
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1800996E0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009A530 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpCheckAttribute @ 0x180096D80 (SdbpCheckAttribute.c)
 *     SdbFindFirstTag @ 0x180097A8C (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180097D74 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x180098128 (SdbReadDWORDTag.c)
 *     SdbReadQWORDTag @ 0x1800981C4 (SdbReadQWORDTag.c)
 *     SdbReadWORDTag @ 0x180098264 (SdbReadWORDTag.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     AslFileAllocAndGetAttributes @ 0x18009F824 (AslFileAllocAndGetAttributes.c)
 *     AslFileFreeAttributes @ 0x18009FD5C (AslFileFreeAttributes.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SdbpCheckAllAttributes(unsigned int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned int Attributes; // ebx
  unsigned int v7; // r15d
  __int64 v8; // r14
  _BYTE *Heap; // r12
  unsigned int v10; // edi
  int *v11; // r13
  unsigned int FirstTag; // eax
  int v13; // ecx
  __int64 *p_WORDTag; // r14
  unsigned int v15; // r15d
  __int64 StringTagPtr; // rax
  __int64 v17; // rcx
  void (__fastcall *v18)(_QWORD, __int64 *, _QWORD, _QWORD); // rax
  __int16 WORDTag; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-24h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-20h]
  int DWORDTag; // [rsp+3Ch] [rbp-1Ch] BYREF
  __int64 QWORDTag; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int16 v29; // [rsp+C0h] [rbp+68h]

  Attributes = 0;
  DWORDTag = 0;
  v7 = a4;
  QWORDTag = 0LL;
  v8 = a3;
  *a1 = 0;
  v21 = 1;
  WORDTag = 0;
  if ( !a5 )
    return Attributes;
  if ( *(_DWORD *)(a5 + 72) )
  {
    if ( !*(_QWORD *)(a5 + 32) )
      return Attributes;
  }
  else if ( !*(_QWORD *)(a5 + 8) )
  {
    return Attributes;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x480uLL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  v10 = v21;
  v11 = (int *)&unk_1800E7764;
  v22 = 0;
  while ( 1 )
  {
    v29 = *((_WORD *)v11 - 2);
    FirstTag = SdbFindFirstTag(v8, v7, v29);
    if ( !FirstTag )
      goto LABEL_27;
    v13 = v29 & 0xF000;
    p_WORDTag = 0LL;
    v15 = 0;
    switch ( v13 )
    {
      case 12288:
        WORDTag = SdbReadWORDTag(a3, FirstTag);
        p_WORDTag = (__int64 *)&WORDTag;
        v15 = 2;
        break;
      case 16384:
        DWORDTag = SdbReadDWORDTag(a3, FirstTag, 0LL);
        p_WORDTag = (__int64 *)&DWORDTag;
        v15 = 4;
        break;
      case 20480:
        QWORDTag = SdbReadQWORDTag(a3, FirstTag, 0LL);
        p_WORDTag = &QWORDTag;
        v15 = 8;
        break;
      case 24576:
        StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
        p_WORDTag = (__int64 *)StringTagPtr;
        v17 = -1LL;
        do
          ++v17;
        while ( *(_WORD *)(StringTagPtr + 2 * v17) );
        v15 = 2 * v17 + 2;
        break;
    }
    Attributes = AslFileAllocAndGetAttributes(Heap, a5, 1LL << *v11);
    if ( (Attributes & 0x80000000) != 0 )
      break;
    if ( (Heap[32 * *v11 + 24] & 1) == 0 )
    {
      Attributes = 0;
      goto LABEL_29;
    }
    if ( !(unsigned int)SdbpCheckAttribute((unsigned int)&v21, v29, (_DWORD)p_WORDTag, v15, (__int64)&Heap[32 * *v11]) )
    {
      Attributes = -1073741595;
      AslLogCallPrintf(1LL);
      goto LABEL_29;
    }
    v10 = v21;
    v18 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD))(a2 + 1752);
    if ( v18 )
      v18(v29, p_WORDTag, v15, v21);
    if ( !v10 )
    {
LABEL_28:
      Attributes = 0;
      *a1 = v10;
      goto LABEL_29;
    }
    Attributes = v22;
    v8 = a3;
    v7 = a4;
LABEL_27:
    ++Attributes;
    v11 += 2;
    v22 = Attributes;
    if ( Attributes >= 0x29 )
      goto LABEL_28;
  }
  AslLogCallPrintf(1LL);
LABEL_29:
  AslFileFreeAttributes(Heap);
  AslFree(NtCurrentPeb()->ProcessHeap, Heap);
  return Attributes;
}
