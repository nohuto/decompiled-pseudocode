/*
 * XREFs of ?PffDuplicateFileHandle@@YAJPEAVPFF@@PEAU_EPROCESS@@1PEAPEAX@Z @ 0x1401A8908
 * Callers:
 *     ?GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z @ 0x1401F8694 (-GetProcessSessionFonts@@YAJPEAU_EPROCESS@@IIPEAI1PEAPEAXPEAG@Z.c)
 * Callees:
 *     ??0FileObj@Gre@@QEAA@PEBG_N@Z @ 0x1401A89DC (--0FileObj@Gre@@QEAA@PEBG_N@Z.c)
 */

__int64 __fastcall PffDuplicateFileHandle(struct PFF *a1, struct _EPROCESS *a2, struct _EPROCESS *a3, void **a4)
{
  __int64 v4; // rax
  void *v6; // rbx
  void *v9; // rdx
  void **v10; // rax
  unsigned int v11; // edi
  HANDLE Handle; // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 26);
  v6 = 0LL;
  v9 = *(void **)(*(_QWORD *)v4 + 48LL);
  if ( !v9 )
  {
    v10 = (void **)Gre::FileObj::FileObj(&Handle, *(const unsigned __int16 **)(*(_QWORD *)v4 + 80LL), 0);
    v6 = *v10;
    *v10 = 0LL;
    if ( Handle )
      ZwClose(Handle);
    Handle = 0LL;
    v9 = v6;
    if ( !v6 )
      return 3221225506LL;
  }
  v11 = ObDuplicateObject(a3, v9, a2, a4, 1179785, 0, 0, 0);
  if ( v6 )
    ZwClose(v6);
  return v11;
}
