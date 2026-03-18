/*
 * XREFs of ?ValidUmpdHdev@@YAPEAUHDEV__@@PEAU1@@Z @ 0x14026B39C
 * Callers:
 *     NtGdiEngAssociateSurface @ 0x140210A60 (NtGdiEngAssociateSurface.c)
 *     NtGdiGetDhpdev @ 0x14033AA40 (NtGdiGetDhpdev.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400DCF10 (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

__int64 *__fastcall ValidUmpdHdev(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rbx
  __int64 *i; // rdi
  HSEMAPHORE v5; // rbx
  struct _GRETHREAD *v6; // rax
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF
  HSEMAPHORE v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !a1 )
    return 0LL;
  v3 = Gre::Base::Globals(a1);
  SEMOBJ<19>::SEMOBJ<19>(&v9, (HSEMAPHORE *)v3);
  for ( i = (__int64 *)*((_QWORD *)v3 + 481); i; i = (__int64 *)*i )
  {
    v8 = i;
    if ( (i[5] & 0x8000) != 0 && (Gre::Base *)i[2] == a1 )
    {
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v8);
      break;
    }
  }
  v5 = v9;
  if ( v9 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v9);
    v6 = GreGetCurrentThreadCrossSessionCheck();
    if ( v6 )
    {
      if ( (*((_BYTE *)v6 + 27))-- == 1 )
        *(_QWORD *)v6 &= ~0x80000uLL;
      if ( !*(_QWORD *)v6 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v5);
  }
  return i;
}
