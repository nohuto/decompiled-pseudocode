/*
 * XREFs of MiFreeKernelPadSections @ 0x140C4987C
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140C4A30C (MiInitializeSystemImageRegion.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     MiIsKernelHalPadSection @ 0x1404C2D30 (MiIsKernelHalPadSection.c)
 *     VslReserveProtectedPages @ 0x140A769CC (VslReserveProtectedPages.c)
 *     MiFreeInitializationCode @ 0x140AD58A0 (MiFreeInitializationCode.c)
 */

__int64 __fastcall MiFreeKernelPadSections(_QWORD *BaseOfImage, int a2)
{
  __int64 result; // rax
  int v3; // esi
  int v5; // r14d
  __int64 v6; // r9
  int NumberOfSections; // ebp
  unsigned int *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // r15
  unsigned int v11; // ecx
  unsigned int v12; // r13d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  PIMAGE_NT_HEADERS v15; // [rsp+60h] [rbp+18h] BYREF

  result = (__int64)&retaddr;
  v3 = a2;
  if ( dword_140FC4248 != 2 )
  {
    v15 = 0LL;
    RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &v15);
    v5 = 0;
    v6 = 0x7FFFFFFFF8LL;
    result = v15->FileHeader.SizeOfOptionalHeader;
    NumberOfSections = v15->FileHeader.NumberOfSections;
    v8 = (unsigned int *)((char *)&v15->OptionalHeader.Magic + result);
    if ( v15->FileHeader.NumberOfSections )
    {
      do
      {
        result = MiIsKernelHalPadSection((__int64)v8);
        if ( (_DWORD)result )
        {
          v9 = v8[4];
          result = v8[2];
          v10 = v8[3];
          if ( v9 < (unsigned int)result )
            v9 = v8[2];
          ++v5;
          v11 = (v9 + 4095) & 0xFFFFF000;
          v12 = v11 - 1;
          if ( v5 != 1 || dword_140FC4248 != 1 )
          {
            if ( (MiFlags & 0x4000) != 0 )
            {
              VslReserveProtectedPages(0LL, (__int64)BaseOfImage + v10, v11 >> 12, 2u);
              v6 = 0x7FFFFFFFF8LL;
            }
            result = MiFreeInitializationCode(
                       BaseOfImage,
                       (v6 & (((unsigned __int64)BaseOfImage + v10) >> 9)) - 0x98000000000LL,
                       (v6 & (((unsigned __int64)BaseOfImage + (unsigned int)v10 + v12) >> 9)) - 0x98000000000LL,
                       1);
            v6 = 0x7FFFFFFFF8LL;
          }
        }
        v8 += 10;
        --NumberOfSections;
      }
      while ( NumberOfSections );
      v3 = a2;
    }
    if ( (MiFlags & 4) != 0 && (*(_QWORD *)&v3 & 0x1FFFFFLL) != 0 )
      return MiFreeInitializationCode(
               BaseOfImage,
               (v6 & (((unsigned __int64)BaseOfImage + (unsigned int)(v3 - (_DWORD)BaseOfImage)) >> 9))
             - 0x98000000000LL,
               (v6 & (((unsigned __int64)BaseOfImage + ((v3 - (_DWORD)BaseOfImage + 0x1FFFFF) & 0xFFE00000) - 1) >> 9))
             - 0x98000000000LL,
               1);
  }
  return result;
}
