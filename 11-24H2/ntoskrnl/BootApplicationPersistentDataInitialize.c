/*
 * XREFs of BootApplicationPersistentDataInitialize @ 0x140C42424
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall BootApplicationPersistentDataInitialize(__int64 a1)
{
  _QWORD **v1; // rsi
  _QWORD *v2; // rdi
  _QWORD *v3; // rbp
  _QWORD *Pool2; // rbx
  void *v5; // rax
  _QWORD *v6; // rax

  qword_140E62458 = &qword_140E62450;
  qword_140E62450 = (__int64)&qword_140E62450;
  v1 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 232LL);
  v2 = *v1;
  while ( v2 != v1 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    if ( *((_DWORD *)v3 + 6) )
    {
      Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, 0x1CuLL, 0x64506142uLL);
      if ( !Pool2 )
        return;
      v5 = (void *)ExAllocatePool2(0x40uLL, *((unsigned int *)v3 + 6), 0x64506142uLL);
      if ( !v5 )
      {
        ExFreePoolWithTag(Pool2, 0);
        return;
      }
      *((_DWORD *)Pool2 + 6) = *((_DWORD *)v3 + 6);
      Pool2[2] = v5;
      memmove(v5, (const void *)v3[2], *((unsigned int *)v3 + 6));
      v6 = qword_140E62458;
      if ( *(__int64 **)qword_140E62458 != &qword_140E62450 )
        __fastfail(3u);
      *Pool2 = &qword_140E62450;
      Pool2[1] = v6;
      *v6 = Pool2;
      qword_140E62458 = Pool2;
    }
  }
}
