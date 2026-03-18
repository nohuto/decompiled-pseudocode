/*
 * XREFs of ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x14015FF54
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B2D48 (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x140160078 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

void __fastcall UmfdEscXFORMOBJ_iGetXform(volatile void **a1)
{
  int *v2; // rdi
  struct UmfdTls *v3; // rax
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  struct _XFORML v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = (int *)(a1 + 1);
  v3 = UmfdTls::EnsureTls();
  v4 = 0;
  if ( v3 && (v5 = *((_QWORD *)v3 + 5)) != 0 )
  {
    memset(&v7, 0, sizeof(v7));
    v6 = v5 + 224;
    if ( v5 == -224 )
    {
      v4 = -1;
    }
    else
    {
      EXFORMOBJ::vGetCoefficient((EXFORMOBJ *)(v5 + 224), &v7);
      if ( (*(_DWORD *)(*(_QWORD *)v6 + 32LL) & 0x43) == 1 )
      {
        v4 = 2;
      }
      else if ( (*(_DWORD *)(*(_QWORD *)v6 + 32LL) & 0x43) == 3 )
      {
        v4 = 1;
      }
      else if ( (*(_DWORD *)(*(_QWORD *)v6 + 32LL) & 0x43) != 0x43 )
      {
        v4 = 3;
      }
    }
    *v2 = v4;
    ProbeForWrite(a1[2], 0x18uLL, 4u);
    *(struct _XFORML *)a1[2] = v7;
  }
  else
  {
    *v2 = -1;
  }
}
