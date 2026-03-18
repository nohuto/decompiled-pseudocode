/*
 * XREFs of ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1401E0DF0
 * Callers:
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400B2D48 (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 *     ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x140160078 (-EnsureTls@UmfdTls@@SAPEAV1@XZ.c)
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x140196380 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     Feature_Servicing_MSRC101271__private_IsEnabledDeviceUsageNoInline @ 0x14033067C (Feature_Servicing_MSRC101271__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall UmfdEscPATHOBJ_bCommonTo(
        int (*a1)(struct _PATHOBJ *, struct _POINTFIX *, unsigned int),
        struct _PATHOBJ *a2,
        struct _POINTFIX *a3,
        unsigned int a4)
{
  unsigned __int64 v4; // r15
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct UmfdTls *v10; // rax
  __int64 v11; // r14
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // rcx
  void *v15; // rdi
  size_t v16; // r8
  unsigned int v17; // ebx
  size_t Size; // [rsp+58h] [rbp+10h] BYREF

  v4 = a4;
  Size = 0LL;
  v7 = 0;
  if ( !(unsigned int)((__int64 (*)(void))Feature_Servicing_MSRC101271__private_IsEnabledDeviceUsageNoInline)() )
  {
    if ( (int)ULongLongMult(v4, 8uLL, &Size) >= 0 )
      goto LABEL_5;
    return 0LL;
  }
  v7 = 8 * v4;
  if ( 8 * v4 > 0xFFFFFFFF )
    return 0LL;
LABEL_5:
  v10 = UmfdTls::EnsureTls(v9, v8);
  if ( !v10 )
    return 0LL;
  v11 = *((_QWORD *)v10 + 6);
  if ( !v11 )
    return 0LL;
  v12 = ((__int64 (*)(void))Feature_Servicing_MSRC101271__private_IsEnabledDeviceUsageNoInline)();
  v13 = v7;
  if ( !v12 )
    v13 = Size;
  v15 = (void *)PALLOCNOZ(v13, 1801733703LL);
  if ( !v15 )
    return 0LL;
  if ( (unsigned int)Feature_Servicing_MSRC101271__private_IsEnabledDeviceUsageNoInline(v14) )
  {
    if ( v7 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
    }
    v16 = v7;
  }
  else
  {
    if ( Size && ((unsigned __int8)a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = Size;
  }
  memmove(v15, a3, v16);
  v17 = ((__int64 (__fastcall *)(__int64, void *, _QWORD))a1)(v11, v15, (unsigned int)v4);
  Win32FreePool(v15);
  return v17;
}
