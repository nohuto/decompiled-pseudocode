/*
 * XREFs of _umatherr @ 0x180129270
 * Callers:
 *     _except1 @ 0x180128A50 (_except1.c)
 *     _handle_qnan1 @ 0x180128E90 (_handle_qnan1.c)
 * Callees:
 *     _errno @ 0x180108440 (_errno.c)
 *     _ctrlfp @ 0x1801295C0 (_ctrlfp.c)
 *     _matherr @ 0x18012A700 (_matherr.c)
 */

double __fastcall umatherr(int a1, int a2, double a3, double a4, double a5, __int64 a6)
{
  int v7; // ecx
  _DWORD *v8; // rax
  int v9; // ebx
  double result; // xmm0_8
  int v11; // ebx
  struct _exception Except; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&Except.type = 0LL;
  memset(&Except.arg1, 0, 20);
  v7 = 0;
  v8 = &unk_180173110;
  while ( *v8 != a2 )
  {
    ++v7;
    v8 += 4;
    if ( (__int64)v8 >= (__int64)NtDllUserStubs )
    {
      Except.name = 0LL;
LABEL_5:
      ctrlfp(a6, 65472LL);
      v9 = a1 - 1;
      if ( v9 )
      {
        if ( (unsigned int)(v9 - 1) <= 1 )
        {
          result = a5;
          *errno() = 34;
          return result;
        }
      }
      else
      {
        *errno() = 33;
      }
      return a5;
    }
  }
  Except.name = (char *)*((_QWORD *)&unk_180173110 + 2 * v7 + 1);
  if ( !Except.name )
    goto LABEL_5;
  Except.retval = a5;
  Except.arg1 = a3;
  Except.arg2 = a4;
  Except.type = a1;
  ctrlfp(a6, 65472LL);
  if ( !matherr(&Except) )
  {
    v11 = a1 - 1;
    if ( v11 )
    {
      if ( (unsigned int)(v11 - 1) <= 1 )
      {
        *errno() = 34;
        return Except.retval;
      }
    }
    else
    {
      *errno() = 33;
    }
  }
  return Except.retval;
}
