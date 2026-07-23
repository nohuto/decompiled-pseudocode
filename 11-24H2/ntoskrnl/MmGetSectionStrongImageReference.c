/*
 * XREFs of MmGetSectionStrongImageReference @ 0x1407FBB9C
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiGetSectionStrongImageReference @ 0x14093AE14 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MmGetSectionStrongImageReference(ULONG_PTR a1, __int64 a2, void *a3, _QWORD *a4)
{
  void *v5; // rsi
  __int64 result; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  int SectionStrongImageReference; // ebx
  void *v11; // [rsp+70h] [rbp+18h] BYREF

  v11 = a3;
  v5 = a3;
  if ( a1 )
  {
    result = ObpReferenceObjectByHandleWithTag(a1, 0x63536D4Du, (__int64)&v11, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    v5 = v11;
  }
  v8 = MiSectionControlArea((__int64)v5);
  if ( (*(_DWORD *)(v8 + 56) & 0x20) != 0 && (*(_DWORD *)(v8 + 92) & 0xC0000) != 0 )
  {
    v9 = *(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( *(_QWORD *)(v9 + 64)
      || (SectionStrongImageReference = MiGetSectionStrongImageReference(*(_QWORD *)(v8 + 96) & 0xFFFFFFFFFFFFFFF8uLL),
          SectionStrongImageReference >= 0) )
    {
      SectionStrongImageReference = 0;
      *a4 = *(_QWORD *)(v9 + 64);
    }
  }
  else
  {
    SectionStrongImageReference = -1073741811;
  }
  if ( a1 )
    ObfDereferenceObjectWithTag(v5, 0x63536D4Du);
  return (unsigned int)SectionStrongImageReference;
}
