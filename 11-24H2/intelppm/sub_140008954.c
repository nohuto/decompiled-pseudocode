/*
 * XREFs of sub_140008954 @ 0x140008954
 * Callers:
 *     sub_1400085BC @ 0x1400085BC (sub_1400085BC.c)
 * Callees:
 *     sub_140008A10 @ 0x140008A10 (sub_140008A10.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

int sub_140008954()
{
  unsigned __int64 v0; // rax
  char *v1; // rbx
  char *v2; // rdi
  unsigned int *v3; // rbx
  void (__fastcall *v4)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, __int64, unsigned int *); // rax

  LODWORD(v0) = (_DWORD)off_140018E58;
  v1 = (char *)&unk_140018E50;
  if ( off_140018E58 != &unk_140018E40 )
  {
    v2 = (char *)off_140018E58 + 80;
    while ( 1 )
    {
      v0 = sub_140008A10(v1, v2);
      v3 = (unsigned int *)v0;
      if ( !v0 )
        break;
      if ( v0 >= (unsigned __int64)v2 )
        return v0;
      v4 = *(void (__fastcall **)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, __int64, unsigned int *))(v0 + 64);
      if ( v4 )
        v4(WdfVersionUnbindClass, &unk_140018C50, qword_140019128, v3);
      else
        WdfVersionUnbindClass(&unk_140018C50, qword_140019128, v3);
      v1 = (char *)v3 + *v3;
    }
    LODWORD(v0) = DbgPrintEx(0x4Du, 0, "FxGetNextClassBindInfo failed\n");
  }
  return v0;
}
