/*
 * XREFs of MiCopyToUntrustedMemory @ 0x14067F52C
 * Callers:
 *     MiDbgCopyMemory @ 0x14067F6A8 (MiDbgCopyMemory.c)
 *     MiDbgCopyMemoryTarget @ 0x14067FB00 (MiDbgCopyMemoryTarget.c)
 * Callees:
 *     MiDbgCopyPrivilegedData @ 0x14067FE28 (MiDbgCopyPrivilegedData.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall MiCopyToUntrustedMemory(
        _BYTE *a1,
        int a2,
        int a3,
        _BYTE *a4,
        size_t Size,
        unsigned int a6,
        int a7,
        int a8)
{
  _BYTE *v8; // r15
  _BYTE *v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // esi
  __int64 result; // rax
  unsigned int v13; // edx
  unsigned int i; // r8d
  __int64 v15; // [rsp+48h] [rbp-40h]

  v8 = a4;
  v9 = a1;
  v10 = 0LL;
  v15 = 0LL;
  v11 = Size;
  if ( a8 != 2
    || (result = MiDbgCopyPrivilegedData(a2, a3, (unsigned __int16)a1 & 0xFFF, (_DWORD)a4, Size),
        (_DWORD)result == -1073741802) )
  {
    if ( a6 || (((unsigned __int8)v9 | (unsigned __int8)v8) & 7) != 0 || (Size & 7) != 0 )
    {
      while ( v11 )
      {
        if ( a6 )
        {
          v13 = a6;
          if ( a6 > v11 )
            v13 = 1;
        }
        else
        {
          v13 = v11 & 7;
          if ( (v11 & 7) != 0 )
          {
            if ( ((v13 - 1) & v13) != 0 )
              v13 = 1;
          }
          else
          {
            v13 = 8;
          }
        }
        if ( ((v13 - 1) & (unsigned int)v9) != 0 )
          v13 = 1;
        for ( i = 0; i < v13; ++i )
        {
          *((_BYTE *)&v15 + i) = *v8++;
          v10 = v15;
        }
        switch ( v13 )
        {
          case 1u:
            *v9 = v10;
            break;
          case 2u:
            *(_WORD *)v9 = v10;
            break;
          case 4u:
            *(_DWORD *)v9 = v10;
            break;
          case 8u:
            *(_QWORD *)v9 = v10;
            break;
        }
        v11 -= v13;
        v9 += v13;
      }
    }
    else
    {
      memmove(v9, v8, (unsigned int)Size);
    }
    return 0LL;
  }
  return result;
}
