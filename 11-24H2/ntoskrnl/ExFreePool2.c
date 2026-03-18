/*
 * XREFs of ExFreePool2 @ 0x1406540E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpSecurePoolFromHandle @ 0x1404F5EFC (ExpSecurePoolFromHandle.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     VslSecurePoolFree @ 0x14058E508 (VslSecurePoolFree.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall ExFreePool2(ULONG_PTR BugCheckParameter2, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 v6; // r9
  unsigned int i; // eax
  _QWORD *v9; // r8
  __int64 v10; // rax
  __int64 v11; // r9
  unsigned int v12; // r10d

  BugCheckParameter4 = a4;
  v6 = 0LL;
  if ( (_DWORD)BugCheckParameter4 )
  {
    for ( i = 0; i < (unsigned int)BugCheckParameter4; ++i )
    {
      v9 = (_QWORD *)(a3 + 16LL * i);
      if ( (unsigned __int8)*v9 != 2LL )
        KeBugCheckEx(0xC2u, 0xA0uLL, BugCheckParameter2, a3, (unsigned __int8)*v9);
      v6 = v9[1];
      if ( *(_QWORD *)(v6 + 8) || *(_DWORD *)(v6 + 24) || (_DWORD)BugCheckParameter4 != 1 )
        KeBugCheckEx(0xC2u, 0xA1uLL, (ULONG_PTR)v9, *(_QWORD *)(v6 + 8), *(unsigned int *)(v6 + 24));
    }
    v10 = ExpSecurePoolFromHandle(*(_QWORD *)v6);
    if ( !v10 || (int)VslSecurePoolFree(*(_QWORD *)(v10 + 8), v12, BugCheckParameter2, *(_QWORD *)(v11 + 16)) < 0 )
      KeBugCheckEx(0xC2u, 0xA3uLL, BugCheckParameter2, a3, BugCheckParameter4);
  }
  else
  {
    ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
  }
}
