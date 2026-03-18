/*
 * XREFs of NtGdiXLATEOBJ_cGetPalette @ 0x1400DD400
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x140060BD4 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D93B4 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1400DBF18 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400DC5D4 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     XLATEOBJ_cGetPalette @ 0x1400DD500 (XLATEOBJ_cGetPalette.c)
 *     PALLOCNOZ @ 0x140125A4C (PALLOCNOZ.c)
 */

__int64 __fastcall NtGdiXLATEOBJ_cGetPalette(__int64 a1, __int64 a2, ULONG a3, char *a4)
{
  ULONG v6; // r12d
  ULONG Palette; // ebx
  struct _GRETHREAD *CurrentThread; // rax
  XLATEOBJ *v10; // r15
  ULONG *v11; // rax
  ULONG *v12; // rdi
  struct W32_PUSH_LOCK *v14[4]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v15; // [rsp+40h] [rbp-68h]

  v6 = a2;
  Palette = 0;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v14, CurrentThread);
  if ( v15 )
  {
    v10 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(v15, a1);
    if ( v10 )
    {
      if ( a4 )
      {
        if ( a3 <= 0x9C4000 )
        {
          v11 = (ULONG *)PALLOCNOZ(4 * a3, 1886221639LL);
          v12 = v11;
          if ( v11 )
          {
            Palette = XLATEOBJ_cGetPalette(v10, v6, a3, v11);
            if ( Palette )
              Palette &= -((unsigned int)bSafeCopyBits(a4, v12, 4 * a3) != 0);
            Win32FreePool(v12);
          }
        }
      }
    }
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v14);
  return Palette;
}
