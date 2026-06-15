/*
 * XREFs of ?Append@CParseBuffer@CRegParser@ATL@@QEAAHPEBGH@Z @ 0x140089F7C
 * Callers:
 *     ?PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z @ 0x14008AAF0 (-PreProcessBuffer@CRegParser@ATL@@QEAAJPEAGPEAPEAG@Z.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x14000C484 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     memcpy_s_1 @ 0x140053A40 (memcpy_s_1.c)
 *     ??$AtlMultiply@K@ATL@@YAJPEAKKK@Z @ 0x1400742B0 (--$AtlMultiply@K@ATL@@YAJPEAKKK@Z.c)
 */

__int64 __fastcall ATL::CRegParser::CParseBuffer::Append(
        ATL::CRegParser::CParseBuffer *this,
        const unsigned __int16 *a2,
        int a3)
{
  int v6; // ecx
  signed int v7; // ebx
  LPVOID v8; // rax
  signed int v9; // edx
  errno_t v10; // eax
  SIZE_T cb; // [rsp+50h] [rbp+18h] BYREF

  v6 = *(_DWORD *)this + a3 + 1;
  if ( v6 > *(_DWORD *)this && v6 > a3 )
  {
    v7 = *((_DWORD *)this + 1);
    if ( v6 >= v7 )
    {
      while ( v6 >= v7 )
      {
        if ( v7 > 0x3FFFFFFF )
          return 0LL;
        v7 *= 2;
      }
      LODWORD(cb) = 0;
      if ( (int)ATL::AtlMultiply<unsigned long>(&cb, v7, 2u) < 0 )
        return 0LL;
      v8 = CoTaskMemRealloc(*((LPVOID *)this + 1), (unsigned int)cb);
      if ( !v8 )
        return 0LL;
      *((_QWORD *)this + 1) = v8;
      *((_DWORD *)this + 1) = v7;
    }
    if ( *(int *)this >= 0 && *(_DWORD *)this < v7 )
    {
      v9 = v7 - *(_DWORD *)this;
      if ( v9 <= v7 )
      {
        v10 = memcpy_s_1((void *const)(*((_QWORD *)this + 1) + 2LL * *(int *)this), 2LL * v9, a2, 2 * a3);
        ATL::AtlCrtErrorCheck(v10);
        *(_DWORD *)this += a3;
        *(_WORD *)(*((_QWORD *)this + 1) + 2LL * *(int *)this) = 0;
        return 1LL;
      }
    }
  }
  return 0LL;
}
