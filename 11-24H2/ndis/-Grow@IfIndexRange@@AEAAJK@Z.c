/*
 * XREFs of ?Grow@IfIndexRange@@AEAAJK@Z @ 0x1400CE9F8
 * Callers:
 *     ndisIfRegisterInterfaceEx @ 0x140087DB0 (ndisIfRegisterInterfaceEx.c)
 * Callees:
 *     memmove @ 0x1400E7200 (memmove.c)
 *     memset @ 0x1400E7500 (memset.c)
 */

__int64 __fastcall IfIndexRange::Grow(IfIndexRange *this, unsigned int a2)
{
  _RTL_BITMAP_EX *v2; // r14
  unsigned __int64 v3; // r8
  int v6; // eax
  unsigned __int64 v7; // rbp
  unsigned __int64 *Pool2; // rax
  unsigned __int64 *v9; // r15
  void *v10; // rsi
  ULONG64 v11; // rdi
  ULONG64 v12; // r8

  v2 = (_RTL_BITMAP_EX *)((char *)this + 8);
  v3 = *((_QWORD *)this + 1);
  if ( a2 <= v3 )
    return 0LL;
  if ( (unsigned int)(*((_DWORD *)this + 1) - *(_DWORD *)this) > v3 )
  {
    v6 = 8;
    if ( a2 >= 8 )
      v6 = a2;
    v7 = (((unsigned __int64)(unsigned int)(v6 + 7) >> 3) + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, v7, 1718174798LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      v10 = (void *)*((_QWORD *)this + 2);
      v11 = v2->SizeOfBitMap >> 3;
      if ( v10 )
      {
        memmove(Pool2, *((const void **)this + 2), v2->SizeOfBitMap >> 3);
        ExFreePoolWithTag(v10, 0x6669444Eu);
      }
      memset((char *)v9 + v11, 0, v7 - v11);
      v12 = 8 * v7;
      if ( 8 * v7 >= (unsigned int)(*((_DWORD *)this + 1) - *(_DWORD *)this) )
        v12 = (unsigned int)(*((_DWORD *)this + 1) - *(_DWORD *)this);
      RtlInitializeBitMapEx(v2, v9, v12);
      return 0LL;
    }
  }
  return 3221225626LL;
}
