/*
 * XREFs of CmpCreateEmptyHiveClone @ 0x1407DEA60
 * Callers:
 *     CmpReorganizeHive @ 0x1409331F0 (CmpReorganizeHive.c)
 * Callees:
 *     CmpAllocateForNonPagedHive @ 0x1404C8A10 (CmpAllocateForNonPagedHive.c)
 *     HvHiveStartEmptyClone @ 0x1407DF7D0 (HvHiveStartEmptyClone.c)
 *     ObDuplicateObject @ 0x14083C270 (ObDuplicateObject.c)
 *     CmpAllocate @ 0x140882F70 (CmpAllocate.c)
 *     CmpHiveInitialize @ 0x140933070 (CmpHiveInitialize.c)
 *     CmpDestroyHive @ 0x14096495C (CmpDestroyHive.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCreateEmptyHiveClone(__int64 *a1, __int64 a2)
{
  void *Pool2; // rbp
  int started; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rcx

  Pool2 = (void *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x35394D43u);
  if ( Pool2 )
  {
    if ( (*(_DWORD *)(a2 + 160) & 0x2000000) != 0 )
      v6 = CmpAllocateForNonPagedHive(0x12D8u, 0, 0x30314D43u);
    else
      v6 = CmpAllocate(4824LL, 0LL, 808537411LL);
    v7 = v6;
    if ( v6 )
    {
      CmpHiveInitialize(v6, Pool2);
      v8 = 0LL;
      *(_DWORD *)(v7 + 4112) = *(_DWORD *)(a2 + 4112) & 0xFFFEFFFF;
      v9 = 2LL;
      while ( (unsigned int)v8 < 6 )
      {
        v10 = *(_QWORD *)(a2 + 8 * v8 + 1544);
        if ( v10 )
        {
          started = ObDuplicateObject(
                      (_DWORD)PsInitialSystemProcess,
                      v10,
                      0,
                      (int)v7 + 8 * ((int)v8 + 193),
                      0,
                      512,
                      2,
                      0);
          if ( started < 0 )
            goto LABEL_21;
        }
        v8 = (unsigned int)(v8 + 1);
      }
      v11 = (_QWORD *)(v7 + 1808);
      *(_DWORD *)(v7 + 1792) = *(_DWORD *)(a2 + 1792);
      *(_QWORD *)(v7 + 1800) = *(_QWORD *)(a2 + 1800);
      do
      {
        *v11 = *(_QWORD *)((char *)v11 + a2 - v7);
        ++v11;
        --v9;
      }
      while ( v9 );
      *(_QWORD *)(v7 + 4136) = *(_QWORD *)(a2 + 4136);
      *(_QWORD *)(v7 + 4144) = *(_QWORD *)(a2 + 4144);
      *(_QWORD *)(v7 + 4184) = *(_QWORD *)(a2 + 4184);
      v12 = *(_QWORD *)(a2 + 4792);
      if ( v12 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 24)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(v7 + 4792) = *(_QWORD *)(a2 + 4792);
      }
      started = HvHiveStartEmptyClone(v7, a2);
      if ( started >= 0 )
      {
        *a1 = v7;
        return 0;
      }
LABEL_21:
      CmpDestroyHive(v7);
    }
    else
    {
      started = -1073741670;
      ExFreePoolWithTag(Pool2, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)started;
}
