/*
 * XREFs of ExFreePool2 @ 0x140652800
 * Callers:
 *     <none>
 * Callees:
 *     ExpSecurePoolFromHandle @ 0x1404F37FC (ExpSecurePoolFromHandle.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall ExFreePool2(ULONG_PTR BugCheckParameter2, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  __int64 v6; // rcx
  unsigned int i; // eax
  _QWORD *v8; // r8
  ULONG_PTR BugCheckParameter4; // r8
  ULONG_PTR v10; // r10
  ULONG_PTR v11; // r11

  v6 = 0LL;
  if ( a4 )
  {
    for ( i = 0; i < a4; ++i )
    {
      v8 = (_QWORD *)(a3 + 16LL * i);
      if ( (unsigned __int8)*v8 != 2LL )
        KeBugCheckEx(0xC2u, 0xA0uLL, BugCheckParameter2, a3, (unsigned __int8)*v8);
      v6 = v8[1];
      if ( *(_QWORD *)(v6 + 8) || *(_DWORD *)(v6 + 24) || a4 != 1 )
        KeBugCheckEx(0xC2u, 0xA1uLL, (ULONG_PTR)v8, *(_QWORD *)(v6 + 8), *(unsigned int *)(v6 + 24));
    }
    if ( !ExpSecurePoolFromHandle(*(_QWORD *)v6) )
      KeBugCheckEx(0xC2u, 0xA3uLL, v10, v11, BugCheckParameter4);
    KeBugCheckEx(0xC2u, 0xA3uLL, v10, v11, BugCheckParameter4);
  }
  ExFreePoolWithTag((PVOID)BugCheckParameter2, 0);
}
