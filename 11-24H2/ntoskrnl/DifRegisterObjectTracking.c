/*
 * XREFs of DifRegisterObjectTracking @ 0x140616910
 * Callers:
 *     <none>
 * Callees:
 *     DifGetAvailableSystemPages @ 0x140617CB4 (DifGetAvailableSystemPages.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DifRegisterObjectTracking(unsigned int a1, int a2, __int64 a3)
{
  __int64 v3; // r12
  int v4; // r13d
  unsigned int v5; // edi
  _QWORD *Pool2; // rsi
  char v7; // bl
  __int64 v8; // r14
  int v9; // eax
  unsigned __int64 AvailableSystemPages; // rbp
  _QWORD *v11; // r15
  volatile LONG *v12; // rax
  __int64 (__fastcall **v13)(__int64, unsigned int); // r12
  __int64 v14; // r13
  PEX_SPIN_LOCK v15; // rax
  unsigned __int64 v16; // rbp

  v3 = a3;
  v4 = a2;
  v5 = 0;
  Pool2 = 0LL;
  v7 = 0;
  if ( a1 >= 0x40 )
    return (unsigned int)-1073741790;
  v8 = a1;
  v9 = *((_DWORD *)&VfRuleClasses + ((unsigned __int64)a1 >> 5));
  if ( !_bittest(&v9, a1 & 0x1F) )
    return (unsigned int)-1073741790;
  AvailableSystemPages = DifGetAvailableSystemPages();
  if ( AvailableSystemPages < 0x64 )
    return (unsigned int)-1073741670;
  if ( !DifPluginSettings[v8] )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x20uLL, 0x744F6644u);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v7 = 1;
  }
  v11 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x10uLL, 0x744F6644u);
  if ( !v11 )
  {
    v5 = -1073741801;
LABEL_14:
    if ( Pool2 && v7 )
      ExFreePoolWithTag(Pool2, 0x4E666944u);
    return v5;
  }
  if ( !_InterlockedCompareExchange(&DifObjTrkInitialized, 1, 0) )
  {
    v12 = (volatile LONG *)ExAllocatePool2(0x40uLL, 0x380uLL, 0x744F6644u);
    DifObjTrkContext = v12;
    if ( !v12 )
    {
      _InterlockedCompareExchange(&DifObjTrkInitialized, 0, 1);
      v5 = -1073741801;
      ExFreePoolWithTag(v11, 0x4E666944u);
      goto LABEL_14;
    }
    v13 = (__int64 (__fastcall **)(__int64, unsigned int))(v12 + 36);
    v14 = 5LL;
    do
    {
      memset_0(v13 - 10, 0, 0x68uLL);
      *(v13 - 10) = (__int64 (__fastcall *)(__int64, unsigned int))(v13 - 10);
      *(v13 - 1) = (__int64 (__fastcall *)(__int64, unsigned int))DifObjTrkCompareNode;
      *v13 = DifObjTrkAllocNode;
      v13[1] = (__int64 (__fastcall *)(__int64, unsigned int))DifObjTrkFreeNode;
      v13 += 15;
      --v14;
    }
    while ( v14 );
    v5 = 0;
    v3 = a3;
    v4 = a2;
  }
  if ( Pool2 )
    DifPluginSettings[v8] = (__int64)Pool2;
  else
    Pool2 = (_QWORD *)DifPluginSettings[v8];
  v15 = DifObjTrkContext;
  v16 = (32 * AvailableSystemPages) & 0x1FFFFFFFFFFFFFFLL;
  *(_DWORD *)v11 = v4;
  v11[1] = v3;
  Pool2[3] = v11;
  *((_QWORD *)v15 + 104) = v16;
  if ( v16 > 0x3D09000 )
    *((_QWORD *)v15 + 104) = 64000000LL;
  _InterlockedOr((volatile signed __int32 *)&KeNumberProcessorsGroup0[9], 0x10u);
  return v5;
}
