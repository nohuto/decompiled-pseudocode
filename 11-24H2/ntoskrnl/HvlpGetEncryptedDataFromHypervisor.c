/*
 * XREFs of HvlpGetEncryptedDataFromHypervisor @ 0x1405879D4
 * Callers:
 *     HvlGetEncryptedData @ 0x140587720 (HvlGetEncryptedData.c)
 * Callees:
 *     HvlpGetPageList @ 0x140589728 (HvlpGetPageList.c)
 *     HvlpGetPageListIterator @ 0x1405897E0 (HvlpGetPageListIterator.c)
 *     HvlpStartPageListIteration @ 0x140589934 (HvlpStartPageListIteration.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall HvlpGetEncryptedDataFromHypervisor(__int64 a1, char *a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  __int64 PageListIterator; // rax
  __int64 v11; // rbp
  unsigned int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // r15
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+28h] [rbp-40h]
  unsigned __int64 v20; // [rsp+30h] [rbp-38h]
  unsigned int v21; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+74h] [rbp+Ch]

  v22 = HIDWORD(a1);
  v18 = 0LL;
  v21 = 0;
  *a5 = 0;
  if ( (HvlpRootFlags & 4) == 0 && !VslVsmEnabled )
    return 3221226021LL;
  if ( !(_BYTE)HvlpCrashdumpIterationState )
  {
    HvlpStartPageListIteration(1LL, HvlpAllPages == 0 ? 2 : 0);
    *((_QWORD *)&HvlpCrashdumpIterationState + 1) = -1LL;
    LODWORD(xmmword_140F8E1F0) = 0;
    LOBYTE(HvlpCrashdumpIterationState) = 1;
  }
  v9 = xmmword_140F8E1F0;
  if ( (_DWORD)xmmword_140F8E1F0 )
  {
    v11 = *((_QWORD *)&HvlpCrashdumpIterationState + 1);
    v18 = *((_QWORD *)&HvlpCrashdumpIterationState + 1);
    v21 = xmmword_140F8E1F0;
  }
  else
  {
    if ( !(unsigned int)HvlpGetPageList(1LL, &v18, &v21) )
    {
      PageListIterator = HvlpGetPageListIterator(1LL);
      *(_QWORD *)(PageListIterator + 8) = 0LL;
      *(_WORD *)PageListIterator = 0;
      *(_WORD *)(PageListIterator + 3) = 0;
      *(_BYTE *)(PageListIterator + 2) = 0;
      LOBYTE(HvlpCrashdumpIterationState) = 0;
      *((_QWORD *)&HvlpCrashdumpIterationState + 1) = -1LL;
      LODWORD(xmmword_140F8E1F0) = 0;
      return 3221226021LL;
    }
    v11 = v18;
    v9 = v21;
  }
  v12 = a3 >> 12;
  v13 = v9;
  if ( v12 < v9 )
    v13 = v12;
  if ( (_DWORD)v13 )
  {
    v19 = (unsigned int)v13;
    v14 = v11 << 12;
    v15 = v11;
    do
    {
      v20 = v14 & 0xFFFFFFFFFF000LL ^ 0x8000000000000001uLL;
      *(_QWORD *)(8 * (((unsigned __int64)qword_140F8E1D8 >> 12) & 0xFFFFFFFFFLL) - 0x98000000000LL) = v20;
      v16 = __readcr4();
      if ( (v16 & 0x20080) != 0 )
      {
        __writecr4(v16 ^ 0x80);
        __writecr4(v16);
      }
      else
      {
        v17 = __readcr3();
        __writecr3(v17);
      }
      memmove(a2, qword_140F8E1D8, 0x1000uLL);
      *a4 = v15;
      a2 += 4096;
      v14 += 4096LL;
      ++a4;
      ++v15;
      --v19;
    }
    while ( v19 );
  }
  *a5 = (_DWORD)v13 << 12;
  *((_QWORD *)&HvlpCrashdumpIterationState + 1) = v13 + v11;
  result = 0LL;
  LODWORD(xmmword_140F8E1F0) = v9 - v13;
  return result;
}
