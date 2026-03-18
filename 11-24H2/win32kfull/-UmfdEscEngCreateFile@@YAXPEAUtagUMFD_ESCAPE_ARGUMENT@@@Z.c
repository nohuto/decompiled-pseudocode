/*
 * XREFs of ?UmfdEscEngCreateFile@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x14033042C
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B2D48 (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x14026DDC0 (__report_rangecheckfailure.c)
 *     ?EngCreateFile@@YAPEAXPEBG@Z @ 0x14033029C (-EngCreateFile@@YAPEAXPEBG@Z.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

void __fastcall UmfdEscEngCreateFile(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  char *v1; // rbx
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdi
  wchar_t Str1[264]; // [rsp+30h] [rbp-228h] BYREF

  v1 = (char *)a1 + 8;
  v2 = *((_QWORD *)a1 + 1);
  if ( !v2 )
    goto LABEL_10;
  v3 = *((_QWORD *)v1 + 1);
  if ( v3 > 0x104 )
    goto LABEL_10;
  if ( 2 * v3 && (v2 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v4 = *((_QWORD *)v1 + 1);
  memmove(Str1, *(const void **)v1, v4 * 2);
  if ( v4 >= 261 )
    _report_rangecheckfailure();
  Str1[v4] = 0;
  if ( _wcsicmp(Str1, L"FAC.ATM") )
LABEL_10:
    *(_QWORD *)v1 = -1LL;
  else
    *(_QWORD *)v1 = EngCreateFile(Str1);
}
