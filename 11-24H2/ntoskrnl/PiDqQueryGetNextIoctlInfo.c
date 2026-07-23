/*
 * XREFs of PiDqQueryGetNextIoctlInfo @ 0x1409F26F0
 * Callers:
 *     PiDqQueryCompletePendedIrp @ 0x1408D1708 (PiDqQueryCompletePendedIrp.c)
 *     PiDqIrpQueryGetResult @ 0x1409F1D48 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x1409F2380 (PiDqIrpQueryCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDqQueryGetNextIoctlInfo(__int64 a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  int v4; // eax
  __int64 result; // rax

  if ( !*(_QWORD *)(a1 + 184) && *(_QWORD *)(a1 + 192) == a1 + 192 && (*(_DWORD *)(a1 + 216) & 0x20) != 0 )
  {
    result = *(_QWORD *)(a1 + 24);
    if ( (*(_DWORD *)(result + 40) & 1) != 0 )
    {
      *a4 = 4653064;
      a4[1] = 16;
    }
    else
    {
      *(_QWORD *)a4 = 0LL;
    }
  }
  else
  {
    *a4 = 4653063;
    if ( (*(_DWORD *)(a1 + 216) & 0x20) != 0 )
    {
      v4 = *(_DWORD *)(a1 + 208);
      if ( *(_QWORD *)(a1 + 184) )
        ++v4;
    }
    else
    {
      v4 = 4;
    }
    if ( a3 )
      result = a3 * v4 + 16;
    else
      result = (unsigned int)(v4 << 10);
    a4[1] = result;
    if ( (unsigned int)result > 0x10000 )
    {
      a4[1] = 0x10000;
      result = 0x10000LL;
    }
    if ( (unsigned int)result < a3 )
    {
      a4[1] = a3;
      result = a3;
    }
    if ( (unsigned int)result < a2 )
      a4[1] = a2;
  }
  return result;
}
