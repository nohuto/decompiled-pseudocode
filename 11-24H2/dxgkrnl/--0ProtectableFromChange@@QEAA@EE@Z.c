/*
 * XREFs of ??0ProtectableFromChange@@QEAA@EE@Z @ 0x140040F10
 * Callers:
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x140040E0C (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 * Callees:
 *     ??0?$Vector@_K@@QEAA@_K@Z @ 0x140041024 (--0-$Vector@_K@@QEAA@_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

ProtectableFromChange *__fastcall ProtectableFromChange::ProtectableFromChange(ProtectableFromChange *this)
{
  char *v1; // rdi
  void *Pool2; // rax
  unsigned __int8 (__fastcall **v4)(char *); // rax
  int v6; // eax

  v1 = (char *)this + 24;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &ProtectableFromChange::`vftable';
  *((_WORD *)this + 11) = 0;
  *((_BYTE *)this + 20) = 4;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = &Vector<unsigned __int64>::`vftable';
  *((_QWORD *)this + 5) = 4LL;
  *((_DWORD *)this + 14) = 1;
  Pool2 = (void *)ExAllocatePool2(256LL, 4LL, 1313891414LL);
  *((_QWORD *)v1 + 3) = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, *((_QWORD *)v1 + 2));
    *((_DWORD *)v1 + 8) = 2;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 43;
    *((_DWORD *)v1 + 2) = -1073741801;
  }
  Vector<unsigned __int64>::Vector<unsigned __int64>((char *)this + 64);
  v4 = *(unsigned __int8 (__fastcall ***)(char *))v1;
  *((_DWORD *)this + 4) = 1;
  if ( (*v4)(v1) && (**((unsigned __int8 (__fastcall ***)(char *))this + 8))((char *)this + 64) )
  {
    *((_DWORD *)this + 4) = 2;
  }
  else
  {
    v6 = *((_DWORD *)this + 8);
    if ( v6 >= 0 )
      v6 = *((_DWORD *)this + 18);
    *((_DWORD *)this + 2) = v6;
  }
  return this;
}
