/*
 * XREFs of ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00D1554
 * Callers:
 *     UmfdDispatchEscape @ 0x1C00D0B30 (UmfdDispatchEscape.c)
 * Callees:
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1C00D160C (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     XFORMOBJ_iGetXform @ 0x1C00D1650 (XFORMOBJ_iGetXform.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

void __fastcall UmfdEscXFORMOBJ_iGetXform(volatile void **a1)
{
  ULONG *v2; // rbx
  struct UmfdTls *v3; // rax
  XFORMOBJ *v4; // rcx
  XFORML pxform; // [rsp+30h] [rbp-28h] BYREF

  v2 = (ULONG *)(a1 + 1);
  v3 = UmfdTls::EnsureTls();
  if ( v3 && (v4 = (XFORMOBJ *)*((_QWORD *)v3 + 5)) != 0LL )
  {
    memset(&pxform, 0, sizeof(pxform));
    *v2 = XFORMOBJ_iGetXform(v4 + 56, &pxform);
    ProbeForWrite(a1[2], 0x18uLL, 4u);
    *(XFORML *)a1[2] = pxform;
  }
  else
  {
    *v2 = -1;
  }
}
