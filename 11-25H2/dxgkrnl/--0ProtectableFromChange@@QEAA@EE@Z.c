/*
 * XREFs of ??0ProtectableFromChange@@QEAA@EE@Z @ 0x140041460
 * Callers:
 *     ??0DMMVIDPNTOPOLOGY@@QEAA@XZ @ 0x14004135C (--0DMMVIDPNTOPOLOGY@@QEAA@XZ.c)
 * Callees:
 *     ??0?$Vector@_K@@QEAA@_K@Z @ 0x140041574 (--0-$Vector@_K@@QEAA@_K@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 */

ProtectableFromChange *__fastcall ProtectableFromChange::ProtectableFromChange(
        ProtectableFromChange *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rdi
  void *Pool2; // rax
  unsigned __int8 (__fastcall **v7)(char *); // rax
  int v9; // eax

  v4 = (char *)this + 24;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &ProtectableFromChange::`vftable';
  *((_WORD *)this + 11) = 0;
  *((_BYTE *)this + 20) = 4;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = &Vector<unsigned __int64>::`vftable';
  *((_QWORD *)this + 5) = 4LL;
  *((_DWORD *)this + 14) = 1;
  Pool2 = (void *)ExAllocatePool2(256LL, 4LL, 1313891414LL, a4);
  *((_QWORD *)v4 + 3) = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, *((_QWORD *)v4 + 2));
    *((_DWORD *)v4 + 8) = 2;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 43;
    *((_DWORD *)v4 + 2) = -1073741801;
  }
  Vector<unsigned __int64>::Vector<unsigned __int64>((char *)this + 64);
  v7 = *(unsigned __int8 (__fastcall ***)(char *))v4;
  *((_DWORD *)this + 4) = 1;
  if ( (*v7)(v4) && (**((unsigned __int8 (__fastcall ***)(char *))this + 8))((char *)this + 64) )
  {
    *((_DWORD *)this + 4) = 2;
  }
  else
  {
    v9 = *((_DWORD *)this + 8);
    if ( v9 >= 0 )
      v9 = *((_DWORD *)this + 18);
    *((_DWORD *)this + 2) = v9;
  }
  return this;
}
