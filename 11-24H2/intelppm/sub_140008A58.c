/*
 * XREFs of sub_140008A58 @ 0x140008A58
 * Callers:
 *     sub_140008634 @ 0x140008634 (sub_140008634.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 sub_140008A58()
{
  unsigned int *i; // rcx
  unsigned int *v2; // rbx
  __int64 (*v3)(void); // rax

  if ( &unk_140018E60 <= (_UNKNOWN *)qword_140018E70 )
  {
    for ( i = (unsigned int *)qword_140018E70; ; i = (unsigned int *)((char *)v2 + *v2) )
    {
      while ( i + 2 <= (unsigned int *)qword_140018E70 && !*(_QWORD *)i )
        i += 2;
      if ( i >= (unsigned int *)qword_140018E70 )
        break;
      if ( i + 10 > (unsigned int *)qword_140018E70 || *i != 40 || (v2 = i) == 0LL )
      {
        DbgPrintEx(0x4Du, 0, "FxGetNextObjectContextTypeInfo failed\n");
        return 3221225595LL;
      }
      v3 = (__int64 (*)(void))*((_QWORD *)i + 4);
      if ( v3 )
        *((_QWORD *)i + 3) = v3();
    }
    return 0LL;
  }
  else
  {
    DbgPrintEx(
      0x4Du,
      0,
      "FxStubInitTypes: invalid driver image, the address of symbol __KMDF_TYPE_INIT_START 0x%p is greater than the addre"
      "ss of symbol __KMDF_TYPE_INIT_END 0x%p, status 0x%x\n",
      &unk_140018E60,
      qword_140018E70,
      -1073741701);
    return 3221225595LL;
  }
}
