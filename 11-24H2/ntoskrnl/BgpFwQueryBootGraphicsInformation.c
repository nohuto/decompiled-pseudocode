/*
 * XREFs of BgpFwQueryBootGraphicsInformation @ 0x1404BE988
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x140698E3C (BgQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14045EC7C (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14045ED38 (BgpFwAllocateMemory.c)
 *     BgpFwReleaseLock @ 0x1404A3D9C (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1404A3F74 (BgpFwAcquireLock.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

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
      *(_OWORD *)a2 = xmmword_140EF0350;
      *(_OWORD *)(a2 + 16) = xmmword_140EF0360;
      *(_OWORD *)(a2 + 32) = xmmword_140EF0370;
      *(_OWORD *)(a2 + 48) = xmmword_140EF0380;
      *(_OWORD *)(a2 + 64) = xmmword_140EF0390;
      *(_OWORD *)(a2 + 80) = xmmword_140EF03A0;
      *(_OWORD *)(a2 + 96) = xmmword_140EF03B0;
      *(_OWORD *)(a2 + 112) = xmmword_140EF03C0;
    }
    else if ( qword_140EF02B8 || qword_140EF02C0 )
    {
      v6 = qword_140EF02C0;
      v7 = (unsigned int)Size;
      if ( !qword_140EF02C0 )
      {
        Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
        v3 = (__int64)Memory;
        if ( !Memory )
          return (unsigned int)-1073741801;
        v6 = Memory;
        memmove(Memory, qword_140EF02B8, v7);
      }
      if ( (int)v7 + 8 < (unsigned int)v7 )
      {
        v2 = -1073741675;
      }
      else
      {
        BgpFwReleaseLock(a1, a2);
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, (unsigned int)(v7 + 8), 0x4B494742u);
        v14 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = (dword_140EF0270 & 0x800000) != 0;
          Pool2[1] = 8;
          memmove(Pool2 + 2, v6, v7);
          BgpFwAcquireLock(v16, v15, v17, v18);
          *(_QWORD *)a2 = v14;
        }
        else
        {
          BgpFwAcquireLock(v11, v10, v12, v13);
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
    *(_OWORD *)a2 = xmmword_140EF0250;
    *(_OWORD *)(a2 + 16) = xmmword_140EF0260;
    *(_DWORD *)(a2 + 20) = 0;
    if ( (dword_140EF0270 & 2) != 0 )
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
