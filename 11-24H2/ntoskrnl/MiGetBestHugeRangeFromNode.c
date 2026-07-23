/*
 * XREFs of MiGetBestHugeRangeFromNode @ 0x140671050
 * Callers:
 *     MiGetHugeRange @ 0x140671294 (MiGetHugeRange.c)
 * Callees:
 *     MiGetPerfectFreeOrZeroHugeRange @ 0x1406716BC (MiGetPerfectFreeOrZeroHugeRange.c)
 *     MiRemoveHugeRangeAnyColor @ 0x140672B48 (MiRemoveHugeRangeAnyColor.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall MiGetBestHugeRangeFromNode(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // r8
  const void *v10; // rdx
  __int64 i; // rcx
  _OWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF

  result = ((__int64 (*)(void))MiGetPerfectFreeOrZeroHugeRange)();
  if ( !result )
  {
    if ( (a3 & 0x10) != 0 )
    {
      v7 = a3 & 0xFFFFFFEF;
      v8 = (unsigned __int64 *)((a1 + 15040) & -(__int64)((a3 & 0x20) != 0));
    }
    else
    {
      v8 = (unsigned __int64 *)(a1 + 15056);
      v7 = a3 | 0x10;
    }
    if ( v8 )
    {
      v9 = *v8;
      v10 = (const void *)v8[1];
      memset(v12, 0, sizeof(v12));
      memmove(v12, v10, v9 >> 3);
      for ( i = 0LL; (unsigned int)i < 4; i = (unsigned int)(i + 1) )
      {
        if ( *((_QWORD *)v12 + i) )
        {
          result = MiRemoveHugeRangeAnyColor(*(_QWORD *)(a1 + 14984), a2, a3);
          if ( result )
            return result;
          break;
        }
      }
    }
    result = MiGetPerfectFreeOrZeroHugeRange(a1, a2, v7);
    if ( !result )
    {
      result = MiRemoveHugeRangeAnyColor(*(_QWORD *)(a1 + 14984), a2, a3);
      if ( !result )
        return MiRemoveHugeRangeAnyColor(*(_QWORD *)(a1 + 14984), a2, v7);
    }
  }
  return result;
}
