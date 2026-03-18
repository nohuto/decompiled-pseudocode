/*
 * XREFs of MiFreeKernelPadSections @ 0x140C5AC08
 * Callers:
 *     MiInitializeSystemImageRegion @ 0x140C5B698 (MiInitializeSystemImageRegion.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14041E7E0 (RtlImageNtHeaderEx.c)
 *     MiIsKernelHalPadSection @ 0x1404C1520 (MiIsKernelHalPadSection.c)
 *     VslReserveProtectedPages @ 0x140A7872C (VslReserveProtectedPages.c)
 *     MiFreeInitializationCode @ 0x140AE67EC (MiFreeInitializationCode.c)
 */

__int64 __fastcall MiFreeKernelPadSections(unsigned __int64 a1, int a2)
{
  __int64 result; // rax
  int v3; // esi
  int v5; // r14d
  __int64 v6; // r9
  int v7; // ebp
  unsigned int *v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // r15
  unsigned int v11; // ecx
  unsigned int v12; // r13d
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  result = (__int64)&retaddr;
  v3 = a2;
  if ( dword_140FC4258 != 2 )
  {
    v15 = 0LL;
    RtlImageNtHeaderEx(1, a1, 0LL, &v15);
    v5 = 0;
    v6 = 0x7FFFFFFFF8LL;
    result = *(unsigned __int16 *)(v15 + 20);
    v7 = *(unsigned __int16 *)(v15 + 6);
    v8 = (unsigned int *)(result + v15 + 24);
    if ( *(_WORD *)(v15 + 6) )
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
          if ( v5 != 1 || dword_140FC4258 != 1 )
          {
            if ( (MiFlags & 0x4000) != 0 )
            {
              VslReserveProtectedPages(0LL, a1 + v10, v11 >> 12, 2u);
              v6 = 0x7FFFFFFFF8LL;
            }
            result = MiFreeInitializationCode(
                       a1,
                       (v6 & ((a1 + v10) >> 9)) - 0x98000000000LL,
                       (v6 & ((a1 + (unsigned int)v10 + v12) >> 9)) - 0x98000000000LL,
                       1);
            v6 = 0x7FFFFFFFF8LL;
          }
        }
        v8 += 10;
        --v7;
      }
      while ( v7 );
      v3 = a2;
    }
    if ( (MiFlags & 4) != 0 && (*(_QWORD *)&v3 & 0x1FFFFFLL) != 0 )
      return MiFreeInitializationCode(
               a1,
               (v6 & ((a1 + (unsigned int)(v3 - a1)) >> 9)) - 0x98000000000LL,
               (v6 & ((a1 + ((v3 - (_DWORD)a1 + 0x1FFFFF) & 0xFFE00000) - 1) >> 9)) - 0x98000000000LL,
               1);
  }
  return result;
}
