/*
 * XREFs of BgpFwQueryBootGraphicsInformation @ 0x1404C4DB0
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x14068CA6C (BgQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140468C70 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x140468D2C (BgpFwAllocateMemory.c)
 *     BgpFwReleaseLock @ 0x1404A891C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A8BF0 (BgpFwAcquireLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall BgpFwQueryBootGraphicsInformation(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbp
  int v5; // ecx
  PVOID v6; // r15
  size_t v7; // r14
  void *Memory; // rax
  _DWORD *Pool2; // rax
  _DWORD *v10; // rbx

  v2 = 0;
  v3 = 0LL;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 2 )
    {
      *(_DWORD *)a2 = 8;
      *(_DWORD *)a2 = Size + 8;
    }
    else if ( (_DWORD)a1 == 3 )
    {
      *(_OWORD *)a2 = xmmword_140EEFE70;
      *(_OWORD *)(a2 + 16) = xmmword_140EEFE80;
      *(_OWORD *)(a2 + 32) = xmmword_140EEFE90;
      *(_OWORD *)(a2 + 48) = xmmword_140EEFEA0;
      *(_OWORD *)(a2 + 64) = xmmword_140EEFEB0;
      *(_OWORD *)(a2 + 80) = xmmword_140EEFEC0;
      *(_OWORD *)(a2 + 96) = xmmword_140EEFED0;
      *(_OWORD *)(a2 + 112) = xmmword_140EEFEE0;
    }
    else if ( qword_140EEFDD8 || qword_140EEFDE0 )
    {
      v6 = qword_140EEFDE0;
      v7 = (unsigned int)Size;
      if ( !qword_140EEFDE0 )
      {
        Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
        v3 = (__int64)Memory;
        if ( !Memory )
          return (unsigned int)-1073741801;
        v6 = Memory;
        memmove(Memory, qword_140EEFDD8, v7);
      }
      if ( (int)v7 + 8 < (unsigned int)v7 )
      {
        v2 = -1073741675;
      }
      else
      {
        BgpFwReleaseLock(a1, a2);
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
        v10 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = (dword_140EEFD90 & 0x800000) != 0;
          Pool2[1] = 8;
          memmove(Pool2 + 2, v6, v7);
          BgpFwAcquireLock();
          *(_QWORD *)a2 = v10;
        }
        else
        {
          BgpFwAcquireLock();
          v2 = -1073741801;
        }
      }
      if ( v3 )
        BgpFwFreeMemory(v3);
    }
    else
    {
      *(_QWORD *)a2 = 0LL;
    }
  }
  else
  {
    *(_OWORD *)a2 = xmmword_140EEFD70;
    *(_OWORD *)(a2 + 16) = xmmword_140EEFD80;
    *(_DWORD *)(a2 + 20) = 0;
    if ( (dword_140EEFD90 & 2) != 0 )
      *(_DWORD *)(a2 + 20) = 1;
    if ( ((BYTE2(BgInternal) - 1) & 0xFD) == 0 )
    {
      v5 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v5;
    }
    *(_DWORD *)(a2 + 28) = BYTE2(BgInternal);
  }
  return v2;
}
