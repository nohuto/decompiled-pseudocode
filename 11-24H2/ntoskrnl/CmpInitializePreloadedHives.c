/*
 * XREFs of CmpInitializePreloadedHives @ 0x140C49B14
 * Callers:
 *     CmInitSystem1 @ 0x140C47010 (CmInitSystem1.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD764 (CmpHiveRootSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpInitializePreloadedHive @ 0x140C496B0 (CmpInitializePreloadedHive.c)
 *     CmpInitializeSystemHive @ 0x140C49DD8 (CmpInitializeSystemHive.c)
 */

__int64 __fastcall CmpInitializePreloadedHives(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  char v4; // r15
  _QWORD **v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r8
  ACL *v8; // r14
  __int64 i; // rsi
  int v10; // eax

  v2 = 0;
  v4 = 0;
  if ( a2 )
  {
    v8 = CmpHiveRootSecurityDescriptor();
    if ( v8 )
    {
      for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 312LL); i != *(_QWORD *)(a1 + 240) + 312LL; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 24) & 0x209) == 1 )
        {
          v10 = CmpInitializeSystemHive(a1, v8, v7, i);
          if ( v10 < 0 )
            KeBugCheckEx(0x67u, 1uLL, 0xCuLL, v10, 0LL);
          v4 = 1;
        }
        else
        {
          CmpInitializePreloadedHive(i, (__int64)v8);
        }
      }
      if ( !v4 )
        KeBugCheckEx(0x67u, 1uLL, 0xCuLL, 0xFFFFFFFFC0000225uLL, 1uLL);
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    qword_140EF7A38 = (__int64)&CmpPreloadedHivesList;
    CmpPreloadedHivesList = (__int64)&CmpPreloadedHivesList;
    v5 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 312LL);
    v6 = *v5;
    while ( v6 != v5 )
    {
      ++CmpPreloadedHivesCount;
      v6 = (_QWORD *)*v6;
      v5 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 312LL);
    }
  }
  return v2;
}
