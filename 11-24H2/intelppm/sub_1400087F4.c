/*
 * XREFs of sub_1400087F4 @ 0x1400087F4
 * Callers:
 *     sub_140008634 @ 0x140008634 (sub_140008634.c)
 * Callees:
 *     sub_140008A10 @ 0x140008A10 (sub_140008A10.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 sub_1400087F4()
{
  unsigned int v0; // edi
  char *i; // rbx
  unsigned __int64 v2; // rax
  unsigned int *v3; // rbx
  __int64 (__fastcall *v4)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, __int64, unsigned int *); // rax
  int v5; // eax

  v0 = 0;
  if ( &unk_140018E40 <= &unk_140018E50 )
  {
    for ( i = (char *)&unk_140018E50; ; i = (char *)v3 + *v3 )
    {
      v2 = sub_140008A10(i, &unk_140018E50);
      v3 = (unsigned int *)v2;
      if ( !v2 )
        break;
      if ( v2 >= (unsigned __int64)&unk_140018E50 )
        return v0;
      off_140018E58 = (_UNKNOWN *)v2;
      v4 = *(__int64 (__fastcall **)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, __int64, unsigned int *))(v2 + 56);
      if ( v4 )
      {
        v5 = v4(WdfVersionBindClass, &unk_140018C50, qword_140019128, v3);
        v0 = v5;
        if ( v5 < 0 )
        {
          DbgPrintEx(
            0x4Du,
            0,
            "FxStubBindClasses: ClientBindClass %p, WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
            *((const void **)v3 + 7),
            v3,
            *((const wchar_t **)v3 + 1),
            v5);
          return v0;
        }
      }
      else
      {
        v0 = WdfVersionBindClass(&unk_140018C50, qword_140019128, v3);
        if ( (v0 & 0x80000000) != 0 )
        {
          DbgPrintEx(
            0x4Du,
            0,
            "FxStubBindClasses: VersionBindClass WDF_CLASS_BIND_INFO 0x%p, class %S, returned status 0x%x\n",
            v3,
            *((const wchar_t **)v3 + 1),
            v0);
          return v0;
        }
      }
    }
    DbgPrintEx(0x4Du, 0, "FxGetNextClassBindInfo failed\n");
  }
  else
  {
    DbgPrintEx(
      0x4Du,
      0,
      "FxStubBindClasses: invalid driver image, the address of symbol __KMDF_CLASS_BIND_START 0x%p is greater than the ad"
      "dress of symbol __KMDF_CLASS_BIND_END 0x%p, status 0x%x\n",
      &unk_140018E40,
      &unk_140018E50,
      -1073741701);
  }
  return 3221225595LL;
}
