/*
 * XREFs of KeCreateEnclave @ 0x140739EC4
 * Callers:
 *     MiCreateHardwareEnclave @ 0x1407F7910 (MiCreateHardwareEnclave.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     KiEncls @ 0x1406ABEA0 (KiEncls.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KeCreateEnclave(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int16 a6,
        _DWORD *a7,
        _DWORD *a8)
{
  bool v9; // zf
  _BYTE v11[32]; // [rsp+60h] [rbp+0h] BYREF

  v9 = (KeFeatureBits & 0x10000000000LL) == 0;
  *a8 = 0;
  if ( v9 )
    return 3221225659LL;
  if ( !_bittest64(&KeFeatureBits, 0x2Bu) && (a6 & 0x100) != 0 || *(_QWORD *)a4 != a3 )
    return 3221225485LL;
  if ( (a6 & 1) != 0 )
  {
    if ( (*(_DWORD *)(a4 + 48) & 4) != 0 )
      goto LABEL_8;
    return 3221225485LL;
  }
  if ( (*(_DWORD *)(a4 + 48) & 4) != 0 )
    return 3221225485LL;
LABEL_8:
  *(_QWORD *)(a4 + 8) = a2;
  *a7 = 0;
  if ( (*(_BYTE *)(a4 + 48) & 2) != 0 )
    *a7 = 2;
  memset_0((void *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 64), 0, 0x40uLL);
  *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = ((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                      + 64;
  *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = a4;
  *(_QWORD *)(((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
  KiEncls(0);
  return 0LL;
}
